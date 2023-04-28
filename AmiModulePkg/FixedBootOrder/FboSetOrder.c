//***********************************************************************
//*                                                                     *
//*                      Copyright (c) 1985-2022, AMI.                  *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file FBOSetOrder.c

    FixedBootOrder Boot Option control
*/

//----------------------------------------------------------------------
// Include Files
//----------------------------------------------------------------------
#include <Uefi.h>
#include <AmiDxeLib.h>
#include <Protocol/BlockIo.h>
#include <Library/DebugLib.h>
#include <IndustryStandard/Pci.h>
#include <Library/PrintLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DevicePathLib.h>
#include <BootOptions.h>
#include <Setup.h>
#include <setupdata.h>

#if CSM_SUPPORT
#include <Protocol/LegacyBios.h>
#include <Protocol/LegacyBiosExt.h>
#endif
#include <Library/MemoryAllocationLib.h>
#include <Protocol/FboSyncProtocol.h>
#include "FixedBootOrder.h"
#include <DefaultFixedBootOrder.h>
#if LOCK_SETVAR_AT_ENDOFDXE
#include "../AMISetupNVLock/AMISetupNVLock.h"
#endif
//---------------------------------------------------------------------------
// Global Variable declarations
//---------------------------------------------------------------------------
EFI_GUID gFixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;

//---------------------------------------------------------------------------
// External functions
//---------------------------------------------------------------------------
EFI_HANDLE GetPhysicalBlockIoHandle(EFI_HANDLE BlockIoHandle);
UINT32 GetUefiBootOptionTag(IN BOOT_OPTION *Option);
UINT16 GetDevicePortNumber(BBS_TABLE *BbsTable);
GET_BBS_ENTRY_DEVICE_TYPE BOOT_OPTION_GET_BBS_ENTRY_DEVICE_TYPE_FUNCTION;
UINT16 FboGetLegacyTagWithBbsIdx(UINT16 BbsIdx);
VOID UnmaskOrphanDevices();
VOID PreProcessBootOptions();
UINT32 FboGetUefiTagWithDp(EFI_DEVICE_PATH_PROTOCOL *Dp);
UINT16 GetBbsEntryDeviceTypeDefault(BBS_TABLE *BbsEntry);
#if CSM_SUPPORT
UINT32 FindPositionInTheGroupByBbsIndex(LEGACY_DEVICE_ORDER *Group, UINT16 BbsIndex);
#endif
extern UINT8 gBdsSkipFBOModule;
//---------------------------------------------------------------------------
// Function Definitions
//---------------------------------------------------------------------------
VOID FboSetupSizeCheck(VOID);
//---------------------------------------------------------------------------
// Type definitions
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Constant and Variables declarations
//---------------------------------------------------------------------------
// Following will be set to proper structure
// By default they are set in DefaultFixedBootOrder_Init()
FBODevMap *pFBODualDevMap = NULL;
FBODevMap *pFBOLegacyDevMap = NULL;
FBODevMap *pFBOUefiDevMap = NULL; // default: FBOUefiDevMapData

EFI_FIXED_BOOT_ORDER_BDS_PROTOCOL gFixedBootOrderBdsProtocol =
    {
        FboGetLegacyTagWithBbsIdx,
        FboGetUefiTagWithDp};

UINT16 GetDevMapDataCount(FBODevMap *pFBODevMap)
{
    UINT16 count = 0;

    if (!pFBODevMap)
        return 0; // end of data

    do
    {
        if (pFBODevMap[count].DevType == 0)
            break;
        count++;
    } while (1);

    return count;
}

/**
    Search DevMap data index by device type.


        IN FBODevMap *pFBODevMap
    @param DevType

    @retval
        OUT UINT16

    @note  None

**/
UINT16 SearchDevMapByType(FBODevMap *pFBODevMap, UINT32 DevType)
{
    UINT16 i = 0;

    do
    {
        if (pFBODevMap[i].DevType == 0)
            break; // end of data
        if (pFBODevMap[i].DevType == DevType)
            return i;
        i++;
    } while (1);

    return 0xffff;
}

/**
    Find the handle by compare HD device path.

    @param  HdDp    A pointer to the device path that include HD node.
    @param  Handle  A pointer to the Handle that has full device path with HdDp.

    @retval EFI_SUCCESS           The resulting handle was returned.
    @retval EFI_NOT_FOUND         No handles match the search.
    @retval EFI_INVALID_PARAMETER Dp doesn't have HD node.
 */
EFI_STATUS
FindPartitionHandle(
    IN EFI_DEVICE_PATH_PROTOCOL *HdDp,
    OUT EFI_HANDLE *Handle)
{
    EFI_STATUS Status;
    UINTN NumHandles = 0, Index = 0;
    EFI_HANDLE *HandleBuffer = NULL;

    for (; !IsDevicePathEnd(HdDp); HdDp = NextDevicePathNode(HdDp))
    {
        if ((DevicePathType(HdDp) == MEDIA_DEVICE_PATH) &&
            (DevicePathSubType(HdDp) == MEDIA_HARDDRIVE_DP))
        {
            break;
        }
    }
    if (IsDevicePathEnd(HdDp))
        return EFI_INVALID_PARAMETER;

    Status = pBS->LocateHandleBuffer(ByProtocol,
                                     &gEfiBlockIoProtocolGuid,
                                     NULL,
                                     &NumHandles,
                                     &HandleBuffer);
    if (EFI_ERROR(Status) || (HandleBuffer == NULL))
        return EFI_NOT_FOUND;

    for (Index = 0; Index < NumHandles; Index++)
    {
        EFI_DEVICE_PATH_PROTOCOL *HandleDp = NULL;

        Status = pBS->HandleProtocol(HandleBuffer[Index],
                                     &gEfiDevicePathProtocolGuid,
                                     (VOID **)&HandleDp);
        if (EFI_ERROR(Status))
            continue;

        for (; !IsDevicePathEnd(HandleDp); HandleDp = NextDevicePathNode(HandleDp))
        {
            if ((DevicePathType(HandleDp) == MEDIA_DEVICE_PATH) &&
                (DevicePathSubType(HandleDp) == MEDIA_HARDDRIVE_DP))
            {
                break;
            }
        }
        if (IsDevicePathEnd(HandleDp))
            continue;

        if (CompareMem(HandleDp, HdDp, DevicePathNodeLength(HdDp)) == 0)
        {
            *Handle = HandleBuffer[Index];
            if (HandleBuffer)
                pBS->FreePool(HandleBuffer);
            return EFI_SUCCESS;
        }
    }

    if (HandleBuffer)
        pBS->FreePool(HandleBuffer);
    return EFI_NOT_FOUND;
}

/**
    Get FixedBootOrder UEFI type with device path.

    @param  DP      The device path of boot option.
    @retval UINT32  The device type.
**/
UINT32
EFIAPI
FboGetUefiTagWithDp(
    EFI_DEVICE_PATH_PROTOCOL *Dp)
{
    EFI_STATUS Status;
    EFI_HANDLE Handle;
    BOOT_OPTION Temp;

    MemSet(&Temp, sizeof(BOOT_OPTION), 0);

    Status = FindPartitionHandle(Dp, &Handle);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_INFO, "[FboGetUefiTagWithDp] FindPartitionHandle Status %r\n", Status));

    Temp.DeviceHandle = EFI_ERROR(Status) ? INVALID_HANDLE : Handle;
    Temp.FilePathList = Dp;
    return GetUefiBootOptionTag(&Temp);
}

/**
    Get FixedBootOrder legacy type with bbs index.

    @param UINT16 BbsIdx

    @retval Legacy boot option tag
**/
UINT16
FboGetLegacyTagWithBbsIdx(
    UINT16 BbsIdx)
{
#if CSM_SUPPORT
    EFI_STATUS Status;
    EFI_LEGACY_BIOS_PROTOCOL *LegacyBios = NULL;
    UINT16 HddCount;
    UINT16 BbsCount;
    HDD_INFO *HddInfo;
    BBS_TABLE *BbsTable;

    Status = pBS->LocateProtocol(&gEfiLegacyBiosProtocolGuid, NULL, (VOID **)&LegacyBios);
    if (EFI_ERROR(Status))
        return INVALID_FBO_TAG;

    Status = LegacyBios->GetBbsInfo(LegacyBios, &HddCount, &HddInfo, &BbsCount, &BbsTable);
    if (EFI_ERROR(Status))
        return INVALID_FBO_TAG;

    return BOOT_OPTION_GET_BBS_ENTRY_DEVICE_TYPE_FUNCTION(&BbsTable[BbsIdx]);
#else
    return INVALID_FBO_TAG;
#endif
}

/**
    For the passed Tag entry, return the correct boot priority based on
    the BootOptionTagPriorities global variable that is filled out
    based on the SDL Token BOOT_OPTION_TAG_PRIORITIES.

    @param UINT16 Tag - one of the following items of the BOOT_OPTION_TAG enum:

    @retval The index of this item in the FBODevMapData structure, which
        also corresponds to the boot priority that should be assigned to this
        class of device
**/
UINT32 FBO_FindTagPriority(UINT32 Tag)
{
    UINT32 i = 0;
    UINT16 DeviceMapCount;

    DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;

    for (i = 0; i < DeviceMapCount; i++)
        if (Tag == pFBOLegacyDevMap[i].DevType)
            return i;

    return UNASSIGNED_HIGHEST_TAG;
}

/**
    determine the device type of the USBKey size.

    @param EFI_HANDLE Handle

    @retval BOOLEAN
**/
BOOLEAN IsUSBkeyByHandle(EFI_HANDLE Handle)
{
    EFI_BLOCK_IO_PROTOCOL *BlkIo;
    UINT64 SizeInMb;

    if (!EFI_ERROR(pBS->HandleProtocol(
            Handle,
            &gEfiBlockIoProtocolGuid,
            (VOID **)&BlkIo)))
    {
        SizeInMb = MultU64x32(BlkIo->Media->LastBlock + 1, BlkIo->Media->BlockSize);
        SizeInMb = DivU64x32(SizeInMb, 1000000);

        if (SizeInMb <= USBKEY_RANGE_SIZE)
            return TRUE;
    }

    return FALSE;
}

#if CSM_SUPPORT
/**
    Using the passed BBS_TABLE entry pointer, determine the device
    type of the USBKey

    @param BBS_TABLE *BbsEntry - pointer to a BBS_TABLE entry

    @retval BOOLEAN
**/
BOOLEAN CheckIsUSBkey(BBS_TABLE *BbsEntry)
{
    if (BbsEntry->DeviceType == BBS_HARDDISK)
        return IsUSBkeyByHandle(*(VOID **)(&BbsEntry->IBV1));
    else
        return FALSE;
}
#endif

/**
    Using the passed BBS_TABLE entry pointer, determine the device
    type of the associated device

    @param BBS_TABLE *BbsEntry - pointer to a BBS_TABLE entry

    @retval UINT16 device type

**/
UINT16 FBO_GetBbsEntryDeviceType(BBS_TABLE *BbsEntry)
{
#if CSM_SUPPORT
    CHAR8 *AsciiNameStr;
    UINT16 DeviceType;
    UINT16 DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;
    UINT16 FboLegacyType;
    BOOLEAN IsUSBDevice;
    UINT16 i;

    if (gBdsSkipFBOModule)
        return GetBbsEntryDeviceTypeDefault(BbsEntry);

    if (!BbsEntry || !DeviceMapCount)
        goto UNKNOWN_DEVICE;

    DeviceType = BbsEntry->DeviceType;
    IsUSBDevice = (BbsEntry->Class == 0x0C) && (BbsEntry->SubClass == 0x03);
#if USB_GROUP == 0
    IsUSBDevice = FALSE;
#endif

#if BBS_NETWORK_DEVICE_TYPE_SUPPORT
    if (BbsEntry->Class == PCI_CL_NETWORK && BbsEntry->DeviceType == BBS_BEV_DEVICE)
        DeviceType = BBS_EMBED_NETWORK;
#endif

    if (DeviceType == BBS_HARDDISK)
    {
        if ((BbsEntry->Class == PCI_CL_SYSTEM_PERIPHERALS) && (BbsEntry->SubClass == PCI_CL_SYSTEM_PERIPHERALS_SCL_SD))
        {
            FboLegacyType = BoTagLegacySd;
        }
        else if ((BbsEntry->Class == PCI_CLASS_MASS_STORAGE) && (BbsEntry->SubClass == PCI_CLASS_MASS_STORAGE_SOLID_STATE))
        {
#if NVME_GROUP_SUPPORT
            FboLegacyType = BoTagLegacyNvme;
#else
#if FBO_MULTI_HARD_DISK_GROUPS
            // When multi HDD groups is enabled, it should be other group if port number is not matched.
            goto UNKNOWN_DEVICE;
#else
            FboLegacyType = BoTagLegacyHardDisk;
#endif
#endif
        }
        else if (IsUSBDevice)
        {
            if (CheckIsUSBkey(BbsEntry))
            {
                FboLegacyType = BoTagLegacyUSBKey;
            }
            else
            {
                FboLegacyType = BoTagLegacyUSBHardDisk;
            }
        }
        else
        {
            for (i = 0; i < DeviceMapCount; i++)
            {
                if (!(pFBOLegacyDevMap[i].Attr & F_HDD))
                    continue;

                if (pFBOLegacyDevMap[i].BBSType != DeviceType)
                    continue;

                if (pFBOLegacyDevMap[i].Port == GetDevicePortNumber(BbsEntry))
                    return pFBOLegacyDevMap[i].DevType;
            }

#if FBO_MULTI_HARD_DISK_GROUPS
            // When multi HDD groups is enabled, it should be other group if port number is not matched.
            goto UNKNOWN_DEVICE;
#else
            FboLegacyType = BoTagLegacyHardDisk;
#endif
        }
    }
    else if (DeviceType == BBS_CDROM)
    {
        if (IsUSBDevice)
        {
            FboLegacyType = BoTagLegacyUSBCdrom;
        }
        else
        {
            FboLegacyType = BoTagLegacyCdrom;
        }
    }
    else if (DeviceType == BBS_EMBED_NETWORK)
    {
        if (IsUSBDevice)
        {
            FboLegacyType = BoTagLegacyUSBLan;
        }
        else
        {
            FboLegacyType = BoTagLegacyEmbedNetwork;
        }
    }
    else if (DeviceType == BBS_FLOPPY)
    {
        FboLegacyType = BoTagLegacyUSBFloppy;
    }
    else if (DeviceType == BBS_USB)
    {
        FboLegacyType = BoTagLegacyUsb;
    }
    else
    {
        goto UNKNOWN_DEVICE;
    }

#if USB_GROUP == 1
    //
    //  BoTagLegacyUSBFloppy(8) -- BoTagLegacyUSBLan(12)
    //
    if (FboLegacyType >= BoTagLegacyUSBFloppy && FboLegacyType <= BoTagLegacyUSBLan)
    {
        FboLegacyType = BoTagLegacyUsb;
    }
#endif

    //
    //  Verify if the type is valid.
    //
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (FboLegacyType == pFBOLegacyDevMap[i].DevType)
            return FboLegacyType;
    }

UNKNOWN_DEVICE:
    if (BbsEntry)
    {
        AsciiNameStr = (CHAR8 *)(UINTN)((BbsEntry->DescStringSegment << 4) + BbsEntry->DescStringOffset);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_WARN, "%a :: no matched group (UNKNOWN_DEVICE)\n", AsciiNameStr));
    }

#if OTHER_GROUP == 1
    return BoTagLegacyOther;
#else
    return BBS_UNKNOWN;
#endif

#else  // CSM_SUPPORT
    return 0;
#endif //#if CSM_SUPPORT
}

/**
    Update UefiDevOrder variable according to BootOptionList.
    It's used for setup and we need to sync it with BootOptionList before setup.

    @param DLIST *BootOptionList - The BDS boot option list

    @retval UefiDevOrder variable updated

**/
VOID BuildUEFIDevOrder()
{
    EFI_STATUS Status;
    UINT16 i, j;
    UINT16 k;
    DLINK *Link;
    BOOT_OPTION *Option;
    UINTN OldDvOrderSize = 0;
    UEFI_DEVICE_ORDER *OldDevOrder = NULL, *OldDevOrder2 = NULL;
    UEFI_DEVICE_ORDER *DevOrder = NULL, *DevOrderStart = NULL;
    UINT16 DeviceMapCount;

    // BootOrderFlag is an array corresponding to each item in BootOptionList
    // Each item in BootOptionList has a flag.
    // -1 (!=0): device order has been set for this boot option.
    UINT16 *BootOrderFlag = NULL;
    UINT16 OptionIndex;

    // if no BootOption, clean UefiDevOrder and return this function.
    if (BootOptionList == NULL || !BootOptionList->Size)
    {
        pRS->SetVariable(L"UefiDevOrder", &gFixedBootOrderGuid, 0, 0, NULL);
        pRS->SetVariable(L"OriUefiDevOrder", &gFixedBootOrderGuid, 0, 0, NULL);
        goto FreeAndExit;
    }

    // An array corresponding to DevOrder[]
    // Contains the EFI_LOAD_OPTION.Attributes

    BootOrderFlag = MallocZ(BootOptionList->Size * sizeof(UINT16));
    if (BootOrderFlag == NULL)
        goto FreeAndExit; // allocation failed

    Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, NULL, &OldDvOrderSize, (VOID **)&OldDevOrder);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "FBOSetOrder.c BuildUEFIDevOrder :: GetEfiVariable UefiDevOrder (%r)\n", Status));
    if (EFI_ERROR(Status))
    {
        OldDvOrderSize = 0;
        OldDevOrder = NULL;
    }

    // allocates maximum possible size for UefiDevOrder,
    // i.e. One boot option for one group/tag (UEFI_DEVICE_ORDER)
    DevOrderStart = DevOrder = MallocZ((BootOptionList->Size + 1) * sizeof(UEFI_DEVICE_ORDER));

    if (DevOrder == NULL)
        goto FreeAndExit; // allocation failed

    DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
    for (i = 0; i < DeviceMapCount; i++) // scan throgh all types in pFBOUefiDevMap
    {
        UINT16 DevType;
        DevType = pFBOUefiDevMap[i].DevType;
        if (DevType == 0)
            break; // end of data
        DevOrder->Type = DevType;
        DevOrder->Length = sizeof(DevOrder->Length); // length includes itself

        j = 0; // index of this group/tag in UefiDevOrder

        //------------------------------------------------------------------------------
        // Use UefiDevOrder to determine the group's order and BootOptionList for numbers within the group
        // Assume BootOptionList has been sorted
        for (OldDevOrder2 = OldDevOrder; (UINT8 *)OldDevOrder2 < (UINT8 *)OldDevOrder + OldDvOrderSize; OldDevOrder2 = NEXT_DEVICE(UEFI_DEVICE_ORDER, OldDevOrder2))
        {
            if (DevType != OldDevOrder2->Type)
                continue;

            for (k = 0; k < DEVORDER_COUNT(OldDevOrder2); k++)
            {
                OptionIndex = 0xFFFF; // index to BootOptionList
                FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
                {
                    CHAR16 BootStr[9] = {0};
                    UINTN BootSize = 0;
                    VOID *BootVar = NULL;

                    OptionIndex++;
                    if (IsLegacyBootOption(Option) || Option->GroupHeader)
                        continue;
                    if (BootOrderFlag[OptionIndex])
                        continue; //(EIP129692+)
                    if (GetUefiBootOptionTag(Option) != DevType)
                        continue; //(EIP100223+)
                    if (!IsBootOptionWithDevice(Option) && (Wcscmp(Option->Description, L"USB Entry for Windows To Go") != 0))
                        continue;
                    // check device has BootXXXX variable
                    UnicodeSPrint(BootStr, sizeof(BootStr), L"Boot%04X", Option->BootOptionNumber);
                    Status = pRS->GetVariable(BootStr, &gEfiGlobalVariableGuid, NULL, &BootSize, BootVar);
                    if (Status != EFI_BUFFER_TOO_SMALL)
                        continue;

                    if (Option->BootOptionNumber == (OldDevOrder2->Device[k] & FBO_UEFI_ORDER_MASK)) // highest byte is for disabled flag
                    {
                        DevOrder->Length += sizeof(DevOrder->Device);
                        DevOrder->Device[j] = Option->BootOptionNumber;
                        BootOrderFlag[OptionIndex] = 0xFFFF; // boot order assigned
                        j++;
                    }
                }
            }
        }
        //------------------------------------------------------------------------------

        // adds new devices not in UefiDevOrder
        OptionIndex = 0xFFFF; // index to BootOptionList
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            OptionIndex++;

            if (IsLegacyBootOption(Option) || Option->GroupHeader)
                continue;
            if (BootOrderFlag[OptionIndex])
                continue; // already set?

            if (!IsBootOptionWithDevice(Option) && (Wcscmp(Option->Description, L"USB Entry for Windows To Go") != 0))
                continue;
            if (GetUefiBootOptionTag(Option) == DevType)
            {
                DevOrder->Length += sizeof(DevOrder->Device);
                DevOrder->Device[j] = Option->BootOptionNumber;
                BootOrderFlag[OptionIndex] = 0xFFFF; // boot order assigned
                j++;
            }
        }

        if (DevOrder->Length > sizeof(DevOrder->Length)) // any boot option in the type?
        {                                                //(EIP129692+)>
            UINT16 DeviceCount;
            DeviceCount = DEVORDER_COUNT(DevOrder);

            // Initialize DevOrder->Device[] [31:24] for disabled flag according to current BootOptionList
            FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
            {
                for (k = 0; k < DeviceCount; k++)
                {
                    if ((DevOrder->Device[k] & FBO_UEFI_ORDER_MASK) == Option->BootOptionNumber) // highest byte is for disabled flag
                    {
                        if (Option->Attributes & LOAD_OPTION_ACTIVE)
                            DevOrder->Device[k] &= FBO_UEFI_ORDER_MASK; // enabled, [31:24]=0
                        else
                            DevOrder->Device[k] |= FBO_UEFI_DISABLED_MASK; // disabled, [31:24]=0xff
                    }
                }
            }

            //
            // Set New DevOrder: enabled first, disabled later
            //
            {
                UEFI_DEVICE_ORDER *NewOrder = MallocZ(DevOrder->Length + sizeof(DevOrder->Type));
                if (NewOrder)
                {
                    UINT16 NewOrderCount = 0;
                    NewOrder->Type = DevOrder->Type;
                    NewOrder->Length = DevOrder->Length;

                    // set active boot order first
                    for (j = 0; j < DeviceCount; j++)
                    {
                        if (DevOrder->Device[j] & FBO_UEFI_DISABLED_MASK) // disabled?
                            continue;
                        NewOrder->Device[NewOrderCount] = DevOrder->Device[j];
                        NewOrderCount++;
                    }

                    // then set disabled boot order
                    for (j = 0; j < DeviceCount; j++)
                    {
                        if (!(DevOrder->Device[j] & FBO_UEFI_DISABLED_MASK)) // enabled?
                            continue;
                        NewOrder->Device[NewOrderCount] = DevOrder->Device[j];
                        NewOrderCount++;
                    }

                    pBS->CopyMem(DevOrder, NewOrder, DevOrder->Length + sizeof(DevOrder->Type));
                    pBS->FreePool(NewOrder);
                }
            } //<(EIP129692+)
            DevOrder = (UEFI_DEVICE_ORDER *)((UINT8 *)DevOrder + DevOrder->Length + sizeof(DevOrder->Type));
        }
    }

    //
    // Set UefiDevOrder variable
    //
    {
        UINTN DevOrderSize;
        DevOrderSize = (UINT8 *)DevOrder - (UINT8 *)DevOrderStart;

        if (DevOrderSize)
        {
            pRS->SetVariable(
                L"UefiDevOrder", &gFixedBootOrderGuid,
                VARIABLE_ATTRIBUTES, DevOrderSize, DevOrderStart);
            pRS->SetVariable(
                L"OriUefiDevOrder", &gFixedBootOrderGuid,
                VARIABLE_ATTRIBUTES, DevOrderSize, DevOrderStart);
        }
        else
        {
            pRS->SetVariable(
                L"UefiDevOrder", &gFixedBootOrderGuid,
                0, 0, NULL);
            pRS->SetVariable(
                L"OriUefiDevOrder", &gFixedBootOrderGuid,
                0, 0, NULL);
        }
    }

FreeAndExit:
    if (BootOrderFlag != NULL)
        pBS->FreePool(BootOrderFlag);
    if (DevOrderStart != NULL)
        pBS->FreePool(DevOrderStart);
    if (OldDevOrder != NULL)
        pBS->FreePool(OldDevOrder);
}

//
//
/**
    Build FboLegacyDevOrder variable from BootOptionList.
    This variable should be set before we disable the undesried boot
    options for selected boot mode.  So we can get the correct
    BootOptionList.Attributes reflecting the selection of setup.

    @param VOID

    @retval FboLegacyDevOrder variable updated

**/

VOID BuildFboLegacyDevOrder()
{
    // Due to BDS use different way to generate LegacyDevOrder between
    // GROUP_BOOT_OPTIONS_BY_TAG enabled and disabled.
    // Using different way to handle it, FboLegacyDevOrder always follow
    // GROUP_BOOT_OPTIONS_BY_TAG enabled style(same type device in one group).
#if CSM_SUPPORT
    UINTN DevOrderSize;
    LEGACY_DEVICE_ORDER *DevOrder, *DevOrderStart;
    LEGACY_DEVICE_ORDER *NewDevOrder, *NewDevOrderStart;
    UINT16 DeviceCount;
    UINT16 i, j;

    // return if no BootOption
    if (!BootOptionList->Size)
    {
        pRS->SetVariable(
            L"FboLegacyDevOrder", &gFixedBootOrderGuid,
            VARIABLE_ATTRIBUTES, 0, NULL);
        pRS->SetVariable(
            L"OriFboLegacyDevOrder", &gFixedBootOrderGuid,
            VARIABLE_ATTRIBUTES, 0, NULL);
        return;
    }

    SortList(BootOptionList, ComparePriorityThenBootOptionNumber);
    BuildLegacyDevOrderBuffer(&DevOrder, &DevOrderSize);

#if GROUP_BOOT_OPTIONS_BY_TAG == 0
    {
        LEGACY_DEVICE_ORDER *FboLegacyDevOrder, *Walker;
        LEGACY_DEVICE_ORDER *FirstLoop, *SecondLoop;
        UINTN Size = 0;

        Walker = FboLegacyDevOrder = MallocZ(DevOrderSize);

        for (FirstLoop = DevOrder; (UINT8 *)FirstLoop < (UINT8 *)DevOrder + DevOrderSize; FirstLoop = NEXT_DEVICE(LEGACY_DEVICE_ORDER, FirstLoop))
        {
            if (FirstLoop->Type == INVALID_FBO_TAG)
                continue;

            i = 0;
            Walker->Type = FirstLoop->Type;
            Walker->Length = sizeof(Walker->Length) + sizeof(Walker->Device);
            Walker->Device[i++] = FirstLoop->Device[0];
            FirstLoop->Type = INVALID_FBO_TAG; // mark to added

            for (SecondLoop = DevOrder; (UINT8 *)SecondLoop < (UINT8 *)DevOrder + DevOrderSize; SecondLoop = NEXT_DEVICE(LEGACY_DEVICE_ORDER, SecondLoop))
            {
                if (Walker->Type == SecondLoop->Type)
                {
                    Walker->Length += sizeof(Walker->Device);
                    Walker->Device[i++] = SecondLoop->Device[0];
                    SecondLoop->Type = INVALID_FBO_TAG; // mark to added
                }
            }
            Size += Walker->Length + sizeof(Walker->Type);
            Walker = NEXT_DEVICE(LEGACY_DEVICE_ORDER, Walker);
        }

        pBS->FreePool(DevOrder);
        DevOrder = FboLegacyDevOrder;
        DevOrderSize = Size;
    }
#endif
    DevOrderStart = DevOrder;
    //
    // Crerate the NewDevOrder from DevOrder for changing order
    //
    NewDevOrderStart = NewDevOrder = MallocZ(DevOrderSize);
    if (NewDevOrder == NULL)
    {
        pBS->FreePool(DevOrderStart);
        return;
    }
    pBS->CopyMem(NewDevOrder, DevOrder, DevOrderSize);

    //
    // We need to keep the disabled ones at last
    //
    for (; (UINT8 *)NewDevOrder < (UINT8 *)NewDevOrderStart + DevOrderSize;)
    {
        j = 0;
        DeviceCount = DEVORDER_COUNT(NewDevOrder);

        //
        // Save the enabled ones first
        //
        for (i = 0; i < DeviceCount; i++)
        {
            if (DevOrder->Device[i] & FBO_LEGACY_DISABLED_MASK)
            {
                continue;
            }
            NewDevOrder->Device[j++] = DevOrder->Device[i];
        }
        //
        // Save the disabled ones later
        //
        for (i = 0; i < DeviceCount; i++)
        {
            if (!(DevOrder->Device[i] & FBO_LEGACY_DISABLED_MASK))
            {
                continue;
            }
            NewDevOrder->Device[j++] = DevOrder->Device[i];
        }

        //
        // Next
        //
        NewDevOrder = (LEGACY_DEVICE_ORDER *)((UINT8 *)NewDevOrder + NewDevOrder->Length + sizeof(NewDevOrder->Type));
        DevOrder = (LEGACY_DEVICE_ORDER *)((UINT8 *)DevOrder + DevOrder->Length + sizeof(DevOrder->Type));
    }

    pRS->SetVariable(
        L"FboLegacyDevOrder", &gFixedBootOrderGuid,
        VARIABLE_ATTRIBUTES, DevOrderSize, NewDevOrderStart);
    pRS->SetVariable(
        L"OriFboLegacyDevOrder", &gFixedBootOrderGuid,
        VARIABLE_ATTRIBUTES, DevOrderSize, NewDevOrderStart);

    pBS->FreePool(DevOrderStart);
    pBS->FreePool(NewDevOrderStart);
#endif //#if CSM_SUPPORT
}

/**
    This function returns result of compairing two DLINK tags.

    @param
        Link1 - pointer to the first tag for compare
        Link1 - pointer to the second tag for compare

    @retval INT32 result of comparing.

**/
INT32 FBO_CompareTagThenBbsIndex(IN DLINK *Link1, IN DLINK *Link2)
{
    BOOT_OPTION *Option1 = (BOOT_OPTION *)Link1;
    BOOT_OPTION *Option2 = (BOOT_OPTION *)Link2;

    // Compare Tags first
    if (Option1->Tag < Option2->Tag)
        return -1;
    else if (Option1->Tag > Option2->Tag)
        return 1;

    // Compare by BBS index
    if (Option1->BbsIndex < Option2->BbsIndex)
        return -1;
    else if (Option1->BbsIndex > Option2->BbsIndex)
        return 1;

    return 0;
}

/**
    Go through the master boot option list and create
    memory representation of the default uefi order variable

    @param DLIST *BootOptionList - the master boot option list

    @retval VOID

**/
VOID FBO_SetDefaultUEFIDevOrder()
{
    UINT16 i, j;
    DLINK *Link;
    BOOT_OPTION *Option;
    UEFI_DEVICE_ORDER *DevOrder = NULL, *DevOrder2 = NULL;
    UINT16 DeviceMapCount;

    if (gBdsSkipFBOModule)
        return;
    // if no BootOption, clean DefaultUefiDevOrder and return this function.
    if (BootOptionList == NULL || !BootOptionList->Size)
    {
        pRS->SetVariable(L"DefaultUefiDevOrder", &gFixedBootOrderGuid, 0, 0, NULL);
        return;
    }

    DevOrder2 = DevOrder = MallocZ((BootOptionList->Size + 1) * sizeof(UEFI_DEVICE_ORDER)); // maximum order is number of boot options

    if (DevOrder == NULL)
        return;

    SortList(BootOptionList, FBO_CompareTagThenBbsIndex);

    DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
    for (i = 0; i < DeviceMapCount; i++)
    {
        UINT16 DevType;
        DevType = pFBOUefiDevMap[i].DevType;
        if (DevType == 0)
            break; // end of data
        DevOrder->Type = DevType;
        DevOrder->Length = sizeof(DevOrder->Length); // length includes itself

        j = 0;
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {

            if (IsLegacyBootOption(Option) || Option->GroupHeader)
                continue;

            if (GetUefiBootOptionTag(Option) == DevType)
            {
                DevOrder->Length += sizeof(DevOrder->Device);
                DevOrder->Device[j] = Option->BootOptionNumber;

                j++;
            }
        }

        if (DevOrder->Length > sizeof(DevOrder->Length)) // any boot option?
            DevOrder = (UEFI_DEVICE_ORDER *)((UINT8 *)DevOrder + DevOrder->Length + sizeof(DevOrder->Type));
    }

    {
        UINTN DevOrderSize;
        DevOrderSize = (UINT8 *)DevOrder - (UINT8 *)DevOrder2;

        if (DevOrderSize)
        {
            pRS->SetVariable(
                L"DefaultUefiDevOrder", &gFixedBootOrderGuid,
                VARIABLE_ATTRIBUTES, DevOrderSize, DevOrder2);
        }
        else
        {
            pRS->SetVariable(
                L"DefaultUefiDevOrder", &gFixedBootOrderGuid,
                0, 0, NULL);
        }
    }

    pBS->FreePool(DevOrder2);
}

/**
    Set legacy boot option priority for the DeviceType group.
    Set LOAD_OPTION_ACTIVE for group header because it is the
    boot#### option.

    @param DeviceType - Legacy Device type to check
        *Priority - Initial priority

    @retval *Priority updated to next one

**/
VOID SetLegacyBootOptionPriority(IN UINT16 DeviceType, IN OUT UINT32 *Priority)
{
    DLINK *Link;
    BOOT_OPTION *Option;
    BBS_BBS_DEVICE_PATH *BbsDp;

    // Set group header priority
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        BbsDp = (BBS_BBS_DEVICE_PATH *)Option->FilePathList;
        if (BbsDp->DeviceType != DeviceType)
            continue;
        if (!Option->GroupHeader)
            continue;

        Option->Priority = *Priority;
        *Priority = GetNextBootOptionPriority(*Priority);
        Option->Attributes |= LOAD_OPTION_ACTIVE; // enable the group header

        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]Legacy Option->Priority=%x Name=%S\n", Option->Priority, Option->Description));
        break;
    }

    //
    // non-group header boot options: assign enabled first then disabled priorities
    //

    // Set priorities for enabled legacy boot options
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (!IsLegacyBootOption(Option))
            continue; // not legacy, skip

        if (Option->GroupHeader                            // group header?
            || !(Option->Attributes & LOAD_OPTION_ACTIVE)) // disabled?
            continue;

        // ENABLED, not group and legacy boot option here

        BbsDp = (BBS_BBS_DEVICE_PATH *)Option->FilePathList;
        if (BbsDp->DeviceType != DeviceType)
            continue;
        Option->Priority = *Priority;
        *Priority = GetNextBootOptionPriority(*Priority);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c] ENABLED legacy Option->Priority==%x Name=%S\n", Option->Priority, Option->Description));
    }

    // Set priorities for disabled legacy boot options
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (!IsLegacyBootOption(Option)                                        // NOT legacy?
            || Option->GroupHeader || Option->Attributes & LOAD_OPTION_ACTIVE) // enabled?
            continue;

        // DISABLED, not group and legacy boot option here

        BbsDp = (BBS_BBS_DEVICE_PATH *)Option->FilePathList;
        if (BbsDp->DeviceType != DeviceType)
            continue;
        Option->Priority = *Priority;
        *Priority = GetNextBootOptionPriority(*Priority);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c] DISABLED legacy Option->Priority=%x Name=%S\n", Option->Priority, Option->Description));
    }
}

/**
    Set the BOOT_OPTION.Priority in BootOptionList according to
    DeviceType and UefiDevOrder variable.
    If the DeviceType is matched in UefiDevOrder then set all
    priorities within this group (DeviceType) from UefiDevOrder
    to BootOptionList.

    @param DeviceType - Uefi Device type
        Priority - pointer of Priority(UINT32).
        UefiDevOrder variable - contains priority within group

    @retval VOID

**/
VOID SetUefiBootOptionPriority(UINT16 DeviceType, UINT32 *Priority)
{
    UEFI_DEVICE_ORDER *DevOrder = NULL, *DevOrder2 = NULL;
    UINTN DevOrderSize = 0;
    DLINK *Link;
    BOOT_OPTION *Option;
    UINT16 j;
    EFI_STATUS Status;

    Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, NULL, &DevOrderSize, (VOID **)&DevOrder);
    if (EFI_ERROR(Status))
        return;

    DevOrder2 = DevOrder;

    for (DevOrder = DevOrder2; (UINT8 *)DevOrder < (UINT8 *)DevOrder2 + DevOrderSize; DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
    {
        if (DeviceType != DevOrder->Type)
            continue;

        for (j = 0; j < DEVORDER_COUNT(DevOrder); j++)
        {
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]DevOrder->Device[%d]=%x\n", j, DevOrder->Device[j]));

            FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
            {
                if (IsLegacyBootOption(Option))
                    continue;
                if (Option->BootOptionNumber != (DevOrder->Device[j] & FBO_UEFI_ORDER_MASK)) // [31:24] = disabled flag
                    continue;

                // only set priority for active boot option
                if (Option->Attributes & LOAD_OPTION_ACTIVE) // active?
                {
                    Option->Priority = *Priority;
                    *Priority = GetNextBootOptionPriority(*Priority);
                }

                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]UEFI BootOptionNumber=%x Priority=%x Name=%S\n", Option->BootOptionNumber, Option->Priority, Option->Description));
                break;
            }
        }
    }

    if (DevOrder2)
        pBS->FreePool(DevOrder2);
}

/**
    Check if boot option matches the boot mode.

    @param  Option    Boot option to check.
    @param  BootMode  Boot mode.

    @retval FALSE  Option is not matching the boot mode.
    @retval TRUE   Option is matching the boot mode.
**/
BOOLEAN IsBootOptionMatchingBootMode(BOOT_OPTION *Option, UINT8 BootMode)
{
    if (!Option)
        return FALSE;

    switch (BootMode)
    {
    case 0: // Legacy
        return IsLegacyBootOption(Option);
    case 1: // Uefi
        return !IsLegacyBootOption(Option);
    case 2: // Dual
        return TRUE;
    default:
        return FALSE;
    }
}

/**
    Some third-party utility will change BootOrder, so the function
    will follow the BootOrder sequence to adjust group priority.

    @param FixedBootPriorites - UefiPriorities/DualPriorities

    @retval VOID

**/
VOID AdjustGroupPriorityByBootOrder(
    FIXED_BOOT_PRIORITIES *FixedBootPriorites)
{
    UINT16 *BootOrder = NULL;
    UINTN Size = 0;
    UINT16 TypeTag[FIXED_BOOT_ORDER_GROUP_MAX_NUM], TagCount = 0;
    UINT16 DeviceMapCount = 0, i, j;
    DLINK *Link;
    BOOT_OPTION *Option;
    EFI_STATUS Status;

    UINT16 *Priorities;
    FBODevMap *DevMap;

    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, &Size, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        return;

    if (FixedBootPriorites->BootMode == 1) // UEFI mode
    {
        DevMap = pFBOUefiDevMap;
        DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
        Priorities = FixedBootPriorites->UefiPriorities;
    }
    else if (FixedBootPriorites->BootMode == 0) // Legacy mode
    {
        DevMap = pFBOLegacyDevMap;
        DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;
        Priorities = FixedBootPriorites->LegacyPriorities;
    }
    else
    {
        if (!pFBODualDevMap)
        {
            pBS->FreePool(BootOrder);
            return;
        }
        DevMap = pFBODualDevMap;
        DeviceMapCount = FBO_DUAL_DEVICE_TYPE_NUM;
#if FBO_DUAL_MODE
        Priorities = FixedBootPriorites->DualPriorities; // DualPriorities only exists when the define is on
#endif
    }

    for (i = 0; i < Size / sizeof(UINT16); i++)
    {
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            UINT32 Tag;
            if (Option->BootOptionNumber != BootOrder[i])
                continue;
            if (!IsBootOptionMatchingBootMode(Option, FixedBootPriorites->BootMode))
                continue;

            Tag = IsLegacyBootOption(Option) ? (0xff & Option->Tag) : GetUefiBootOptionTag(Option);
            for (j = 0; j < TagCount; j++)
                if (Tag == TypeTag[j])
                    break;
            if (j == TagCount)
            {
                TypeTag[TagCount++] = (UINT16)Tag;
            }
        }
    }

    // Disable priorities if it have device...
    for (i = 0; i < TagCount; i++)
    {
        for (j = 0; j < DeviceMapCount; j++)
        {
            UINT16 Idx = SearchDevMapByType(DevMap, TypeTag[i]);
            if (Idx != 0xffff && Priorities[j] == Idx)
            {
                Priorities[j] = INVALID_FBO_TAG;
                break;
            }
        }
        if (j == DeviceMapCount)
            TypeTag[i] = INVALID_FBO_TAG; // Invalid tag
    }

    // Reset priorities
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (Priorities[i] == INVALID_FBO_TAG)
            for (j = 0; j < TagCount; j++)
                if (TypeTag[j] != INVALID_FBO_TAG)
                {
                    UINT16 Idx = SearchDevMapByType(DevMap, TypeTag[j]);
                    if (Idx != 0xffff)
                        Priorities[i] = Idx;
                    TypeTag[j] = INVALID_FBO_TAG;
                    break;
                }
    }

    pBS->FreePool(BootOrder);
}

/**
    Get device option by BootOrder sequence
    Once matched between BootOrder and DevList, it will remove BootOrder[x].

    @param BootOrder
    @param OrderCount   - BootOrder count
    @param DevList
    @param ListCount    - DevList count

    @retval DevList[index]

**/
UINT32
GetDevByBootOrderSequence(
    UINT16 *BootOrder,
    UINTN OrderCount,
    UINT32 *DevList,
    UINTN ListCount)
{
    UINT16 i, j;

    for (i = 0; i < OrderCount; i++)
    {
        for (j = 0; j < ListCount; j++)
        {
            if (BootOrder[i] == INVALID_FBO_TAG || (DevList[j] & FBO_UEFI_DISABLED_MASK))
                continue;
            if (BootOrder[i] == (UINT16)(DevList[j] & FBO_UEFI_ORDER_MASK))
            {
                UINT32 Option = DevList[j];
                BootOrder[i] = INVALID_FBO_TAG;
                DevList[j] = FBO_UEFI_INVALID_ORDER;
                return Option;
            }
        }
    }
    return FBO_UEFI_INVALID_ORDER;
}

/**
    Some third-party utility will change BootOrder, so the function
    will follow the BootOrder sequence to adjust UEFI device priority.

    @param VOID

    @retval VOID

**/
VOID AdjustUefiDevPriorityByBootOrder()
{
    EFI_STATUS Status;
    UEFI_DEVICE_ORDER *OriDevOrder = NULL, *DevOrder = NULL;
    // BOOLEAN FailFlag = FALSE ;
    UINT16 *BootOrder = NULL;
    UINT32 DevList[FIXED_BOOT_ORDER_SUBMENU_MAX_NUM], VarAttr = 0;
    UINTN DevSize = 0, OrderSize = 0;
    UINTN i, j, ListCount, OrderCount;

    // Get necessary variable
    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, &OrderSize, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        return;

    Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, &VarAttr, &DevSize, (VOID **)&OriDevOrder);
    if (EFI_ERROR(Status))
    {
        pBS->FreePool(BootOrder);
        return;
    }

    OrderCount = OrderSize / sizeof(UINT16);

    // Resort UefiDevOrder
    for (DevOrder = OriDevOrder; ((UINT8 *)DevOrder < (UINT8 *)OriDevOrder + DevSize); DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
    {
        MemCpy(DevList, DevOrder->Device, DevOrder->Length - sizeof(DevOrder->Length));
        ListCount = DEVORDER_COUNT(DevOrder);

        // Resort DevOrder->Device[i]
        for (i = 0; i < ListCount; i++)
        {
            UINT32 Option = GetDevByBootOrderSequence(BootOrder, OrderCount, DevList, ListCount);

            // if Option == INVALID ORDER, means BootOrder doesn't match DevList totally.
            if (Option == FBO_UEFI_INVALID_ORDER)
                break;
            DevOrder->Device[i] = Option;
        }

        // When BootOptionList have a new UEFI device, the device(BootXXXX) doesn't restore in BootOrder in this moment.
        // So we need handle it and add into DevOrder->Device[i].
        for (j = 0; j < ListCount; j++)
        {
            if (!(DevList[j] & FBO_UEFI_DISABLED_MASK) && DevList[j] != FBO_UEFI_INVALID_ORDER)
            {
                DevOrder->Device[i++] = DevList[j];
                DevList[j] = FBO_UEFI_INVALID_ORDER;
            }
        }
        // Handle disable device
        for (j = 0; j < ListCount; j++)
        {
            if (DevList[j] != FBO_UEFI_INVALID_ORDER)
            {
                DevOrder->Device[i++] = DevList[j];
                DevList[j] = FBO_UEFI_INVALID_ORDER;
            }
        }
    }

    pRS->SetVariable(L"UefiDevOrder",
                     &gFixedBootOrderGuid,
                     VarAttr,
                     DevSize,
                     OriDevOrder);
    pRS->SetVariable(L"OriUefiDevOrder",
                     &gFixedBootOrderGuid,
                     VARIABLE_ATTRIBUTES,
                     DevSize,
                     OriDevOrder);

    pBS->FreePool(BootOrder);
    pBS->FreePool(OriDevOrder);
}
/**
    Check the BootOrder and OldBootOrder the determine whether to adjust the priority
    by bootorder.

    @param VOID

    @retval EFI_SUCCESS The BootOrder was change.
    @retval EFI_UNSUPPORTED The BootOrder was not change.

**/
EFI_STATUS FBO_CheckForBootOrederChange(VOID)
{
    EFI_STATUS Status;
    BOOLEAN DeviceChanged = FALSE;
    UINTN PreOrderSize = 0, OrderSize = 0;
    UINT16 *PreBootOrder = NULL, *BootOrder = NULL;
    UINT32 VarAttr = 0;

    Status = GetEfiVariable(L"OldBootOrder", &gFixedBootOrderGuid, NULL, &PreOrderSize, (VOID **)&PreBootOrder);
    if (!EFI_ERROR(Status))
    {
        Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, &VarAttr, &OrderSize, (VOID **)&BootOrder);
        if (!EFI_ERROR(Status))
        {
            if (MemCmp(BootOrder, PreBootOrder, OrderSize))
            {
                DeviceChanged = TRUE;
            }
            pBS->FreePool(BootOrder);
        }
        pBS->FreePool(PreBootOrder);
    }
    if (DeviceChanged == TRUE)
        return EFI_SUCCESS;
    else
        return EFI_UNSUPPORTED;
}

/**
 * Adjust a target device group to the first place in FBO setup priorities.
 *
 * @param   Option          The target device group.
 * @param   SetupPriorities The FBO setup priorities.
 * @param   FboDevMap       The FBO device map.
 */
VOID AdjustFboGroupToFirst(
    IN BOOT_OPTION *Option,
    IN UINT16 *SetupPriorities,
    IN FBODevMap *FboDevMap)
{
    UINT16 i = 0, DeviceMapCount = 0;

    if (FBO_NEW_UEFI_OS_OPTION_ORDER_POLICY == 2)
        return;

    DeviceMapCount = GetDevMapDataCount(FboDevMap);
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (SetupPriorities[i] == SearchDevMapByType(FboDevMap, GetUefiBootOptionTag(Option)))
        {
            UINT16 j;
            UINT16 TragetPriority = SetupPriorities[i];

            for (j = i; j > 0; j--)
            {
                SetupPriorities[j] = SetupPriorities[j - 1];
            }
            SetupPriorities[0] = TragetPriority;

            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO]AdjustFboGroupToFirst :: Move DeviceType:0x%X(%d) group to first.\n",
                   GetUefiBootOptionTag(Option), GetUefiBootOptionTag(Option)));
            break;
        }
    }
}

/**
 * Adjust a target device group to the last place in FBO setup priorities.
 *
 * @param   Option          The target device group.
 * @param   SetupPriorities The FBO setup priorities.
 * @param   FboDevMap       The FBO device map.
 */
VOID AdjustFboGroupToLast(
    IN BOOT_OPTION *Option,
    IN UINT16 *SetupPriorities,
    IN FBODevMap *FboDevMap)
{
    UINT16 i = 0, DeviceMapCount = 0;

    if (FBO_NEW_UEFI_OS_OPTION_ORDER_POLICY == 2)
        return;

    DeviceMapCount = GetDevMapDataCount(FboDevMap);
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (SetupPriorities[i] == SearchDevMapByType(FboDevMap, GetUefiBootOptionTag(Option)))
        {
            UINT16 j;
            UINT16 TragetPriority = SetupPriorities[i];

            for (j = i; j + 1 < DeviceMapCount; j++)
                SetupPriorities[j] = SetupPriorities[j + 1];
            SetupPriorities[j] = TragetPriority;

            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO]AdjustFboGroupToLast :: Move DeviceType:0x%X(%d) group to last.\n",
                   GetUefiBootOptionTag(Option), GetUefiBootOptionTag(Option)));
            break;
        }
    }
}

/**
 * Adjust a target device to the first place in FBO UefiDevOrder.
 *
 * @param  Option   The target device.
 */
VOID AdjustFboDeviceToFirst(
    IN BOOT_OPTION *Option)
{
    EFI_STATUS Status;
    EFI_GUID FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;
    UEFI_DEVICE_ORDER *UefiDevOrder = NULL, *DevOrder = NULL;
    UINTN UefiDevOrderSize = 0;
    BOOLEAN Update = FALSE;

    if (FBO_NEW_UEFI_OS_OPTION_ORDER_POLICY == 1)
        return;

    Status = GetEfiVariable(L"UefiDevOrder", &FixedBootOrderGuid, NULL, &UefiDevOrderSize, (VOID **)&UefiDevOrder);
    if (EFI_ERROR(Status))
        return;

    for (DevOrder = UefiDevOrder; (UINT8 *)DevOrder < (UINT8 *)UefiDevOrder + UefiDevOrderSize; DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
    {
        UINTN i = 0, j = 0;

        if (DevOrder->Type == GetUefiBootOptionTag(Option))
        {
            // Move the new device to first.
            for (i = 1; i < DEVORDER_COUNT(DevOrder); i++)
            {
                if ((DevOrder->Device[i] & FBO_UEFI_ORDER_MASK) == Option->BootOptionNumber)
                {
                    for (j = i; j > 0; j--)
                    {
                        DevOrder->Device[j] = DevOrder->Device[j - 1];
                    }

                    break;
                }
            }
            DevOrder->Device[0] = Option->BootOptionNumber;
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO]AdjustFboDeviceToFirst :: Move Boot%04X to first.\n", Option->BootOptionNumber));

            Update = TRUE;
            break;
        }
    }

    if (Update)
    {
        pRS->SetVariable(L"UefiDevOrder", &FixedBootOrderGuid, VARIABLE_ATTRIBUTES, UefiDevOrderSize, UefiDevOrder);
        pRS->SetVariable(L"OriUefiDevOrder", &FixedBootOrderGuid, VARIABLE_ATTRIBUTES, UefiDevOrderSize, UefiDevOrder);
    }
    pBS->FreePool(UefiDevOrder);
}

#if (NEW_UEFI_OS_OPTION_ORDER_POLICY || NewUefiOsOptionOrderPolicySetupControl)
extern UINTN NewEfiOsOptionDpListCount; // Define in EfiOsBootOrder.c.
/**
 * Adjust new UEFI OS boot option priority for fixed boot order module.
 *
 * @param  NewOptionPolicy   The new UEFI OS boot option policy.
 */
VOID AdjustNewUefiOsOptionPriorityForFbo(
    IN UINT8 NewOptionPolicy)
{
    EFI_STATUS Status;
    DLINK *Link;
    BOOT_OPTION *Option;
    FIXED_BOOT_PRIORITIES *FixedBootPriorities = NULL;
    UINT32 VarAttr;
    UINTN VarSize = 0, NewOsOptionCount = 0;
    UINT16 DeviceMapCount = 0;
    FBODevMap *FboDevMap = NULL;
    UINT16 *SetupPriorities = NULL;

    if (NewOptionPolicy == 0)
        return;

    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &VarSize, (VOID **)&FixedBootPriorities);
    if (EFI_ERROR(Status))
        return;

    //
    //  Sort the BDS BootOptionList. New OS options are at the head or tail of the list.
    //
    SortList(BootOptionList, ComparePriorityThenBootOptionNumber);

    //
    //  Set FBO device map and FBO setup priorities.
    //
    if (FixedBootPriorities->BootMode == 0) // Legacy mode
    {
        pBS->FreePool(FixedBootPriorities);
        return;
    }
#if FBO_DUAL_MODE
    else if (FixedBootPriorities->BootMode == 2) // Dual mode
    {
        FboDevMap = pFBODualDevMap;
        DeviceMapCount = FBO_DUAL_DEVICE_TYPE_NUM;
        SetupPriorities = FixedBootPriorities->DualPriorities;
    }
#endif   // #if FBO_DUAL_MODE
    else // FixedBootPriorities->BootMode == 1 Uefi mode
    {
        FboDevMap = pFBOUefiDevMap;
        DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
        SetupPriorities = FixedBootPriorities->UefiPriorities;
    }

    //
    //  Adjust FBO according to NewOptionPolicy.
    //
    NewOsOptionCount = 0;
    if (NewOptionPolicy == 1) // place first
    {
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            if (NewOsOptionCount == NewEfiOsOptionDpListCount)
                break;
            if (IsLegacyBootOption(Option) || Option->GroupHeader)
                continue;

            AdjustFboGroupToFirst(Option, SetupPriorities, FboDevMap);
            AdjustFboDeviceToFirst(Option);

            NewOsOptionCount++;
        }
    }
    else if (NewOptionPolicy == 2)
    { // place last
        Link = BootOptionList->pTail;
        while (Link != NULL)
        {
            Option = OUTTER(Link, Link, BOOT_OPTION);

            if (NewOsOptionCount == NewEfiOsOptionDpListCount)
                break;
            if (IsLegacyBootOption(Option) || Option->GroupHeader)
                continue;

            AdjustFboGroupToLast(Option, SetupPriorities, FboDevMap);
            // AdjustFboDeviceToLast(Option);
            // By default, the new device is at the end of FBO UefiDevOrder.
            // Therefore, we don't need to adjust the UefiDevOrder.

            NewOsOptionCount++;
            Link = Link->pPrev;
        }
    }

    pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorities);

    pBS->FreePool(FixedBootPriorities);
}
#endif // #if (NEW_UEFI_OS_OPTION_ORDER_POLICY || NewUefiOsOptionOrderPolicySetupControl)

/**
    use LegacyPriorities/UefiPriorities/DualPriorities
    ,set legacy/uefi boot option list priority.

    @param VOID

    @retval VOID

**/
VOID FBO_UpdateBootListPriority()
{
    EFI_STATUS Status;
    FIXED_BOOT_PRIORITIES *FixedBootPriorites = NULL;
    UINT32 VarAttr;
    UINTN VarSize = 0;
    DLINK *Link;
    BOOT_OPTION *Option;
    UINT16 i; //,j;
    UINT16 DeviceMapCount = 0;
    UINT16 TypeIndex;
    UINT32 PreviousPriority = IndexToBootPriority(0);

    if (gBdsSkipFBOModule)
        return;
    //(EIP99368+)>>
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (IsLegacyBootOption(Option))
            continue;
        if (!Wcscmp(Option->Description, L"USB Entry for Windows To Go Logo Test"))
            return;
    }
    //<<(EIP99368+)

    // We call UnmaskOrphanDevices() to remove MaskedDp in boot option.
    UnmaskOrphanDevices();

    BuildUEFIDevOrder();
#if ADJUST_DEVICE_PRIORITY_BY_BOOTORDER
    Status = FBO_CheckForBootOrederChange();
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "FBO_CheckForBootOrederChange1 = %r\n", Status));
    if (!EFI_ERROR(Status))
        AdjustUefiDevPriorityByBootOrder();
#endif

    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &VarSize, (VOID **)&FixedBootPriorites);

    if (EFI_ERROR(Status))
        return;

#if ADJUST_GROUP_PRIORITY_BY_BOOTORDER
    Status = FBO_CheckForBootOrederChange();
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "FBO_CheckForBootOrederChange2 = %r\n", Status));
    if (!EFI_ERROR(Status))
    {
        AdjustGroupPriorityByBootOrder(FixedBootPriorites);
        pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorites);
    }
#endif

#if (NEW_UEFI_OS_OPTION_ORDER_POLICY || NewUefiOsOptionOrderPolicySetupControl)
    {
        UINT8 *NewOptionPolicy = 0;
        UINTN NewOptionPolicySize = 0;
        EFI_GUID EfiOsBootOptionNamesGuid = {0x69ECC1BE, 0xA981, 0x446D, {0x8E, 0xB6, 0xAF, 0x0E, 0x53, 0xD0, 0x6C, 0xE8}};
        Status = GetEfiVariable(L"NewOptionPolicy", &EfiOsBootOptionNamesGuid, NULL, &NewOptionPolicySize, (VOID **)&NewOptionPolicy);
        if (EFI_ERROR(Status))
        {
            *NewOptionPolicy = NEW_UEFI_OS_OPTION_ORDER_POLICY;
        }

        AdjustNewUefiOsOptionPriorityForFbo(*NewOptionPolicy);
        pBS->FreePool(NewOptionPolicy);
    }
#endif

#if FBO_DUAL_MODE
    if (FixedBootPriorites->BootMode == 2) // Is Dual boot mode?
    {
        //-----------------------------------------------------
        // Search Legacy Group Header and Set is disable
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            Option->Priority = LOWEST_BOOT_OPTION_PRIORITY;
            Option->Attributes &= ~LOAD_OPTION_HIDDEN;
            if (IsLegacyBootOption(Option)) //(EIP114186+)
            {
                // FboLegacyDevOrder does not have group header disabled flag
                // Disable first and enable it later in SetLegacyBootOptionPriority()
                if (Option->GroupHeader)
                    Option->Attributes &= ~LOAD_OPTION_ACTIVE;
            }
        }
        //-----------------------------------------------------
        DeviceMapCount = FBO_DUAL_DEVICE_TYPE_NUM;
        for (i = 0; i < DeviceMapCount; i++)
        {
            TypeIndex = FixedBootPriorites->DualPriorities[i];
            if (!pFBODualDevMap[TypeIndex].BBSType) // 0, Uefi device
            {
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]DualPriorities[%d] pFBODualDevMap[%d].DevType=%x\n", i, TypeIndex, pFBODualDevMap[TypeIndex].DevType));
                SetUefiBootOptionPriority(pFBODualDevMap[TypeIndex].DevType, &PreviousPriority);
            }
            else
            {
                if (pFBODualDevMap[TypeIndex].DevType == 0)
                    continue; // Disable?      //(EIP114186+)
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]DualPriorities[%d] pFBODualDevMap[%d].DevType=%x\n", i, TypeIndex, pFBODualDevMap[TypeIndex].DevType));
                SetLegacyBootOptionPriority(pFBODualDevMap[TypeIndex].DevType, &PreviousPriority);
            }
        }

        // Disabled all boot options for disabled group
        // Disabled group's pFBOUefiDevMap[TypeIndex].DevType=0
        // so that no priority was assigned in SetUefiBootOptionPriority
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            if (!IsLegacyBootOption(Option) // UEFI?
                && Option->Priority == LOWEST_BOOT_OPTION_PRIORITY && IsBootOptionWithDevice(Option))
            {                                        // AND priority is not set?
                if (!IsBootOptionWithDevice(Option)) // Skip orphan device.
                    continue;
                Option->Attributes &= ~LOAD_OPTION_ACTIVE; // disable undesired boot options
            }
        }
    }
    else
#endif
        if (FixedBootPriorites->BootMode == 1)
    {
        //
        // UEFI mode
        //

        //-----------------------------------------------------
        // Set all boot options to lowest priority first, arrange them later
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            Option->Priority = LOWEST_BOOT_OPTION_PRIORITY; // reset all priorities

            if (!IsLegacyBootOption(Option))
                Option->Attributes &= ~LOAD_OPTION_HIDDEN; // clear HIDDEN for all UEFI boot options
        }
        //-----------------------------------------------------
        // Set group and device priorities according to setup
        DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
        for (i = 0; i < DeviceMapCount; i++)
        {
            TypeIndex = FixedBootPriorites->UefiPriorities[i];

            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c]UefiPriorities[%d] pFBOUefiDevMap[%d].DevType=%x\n", i, TypeIndex, pFBOUefiDevMap[TypeIndex].DevType));
            SetUefiBootOptionPriority(pFBOUefiDevMap[TypeIndex].DevType, &PreviousPriority);
        }

        // Still Set Legacy priority in UEFI mode,
        // because GetLegacyDescriptionFromBootOption() is get description from boot option according to the boot order.
        DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;
        for (i = 0; i < DeviceMapCount; i++)
        {
            TypeIndex = FixedBootPriorites->LegacyPriorities[i];

            if (pFBOLegacyDevMap[TypeIndex].DevType == 0)
                continue;
            SetLegacyBootOptionPriority(pFBOLegacyDevMap[TypeIndex].DevType, &PreviousPriority);
        }

        // Disabled all boot options for disabled group
        // Disabled group's pFBOUefiDevMap[TypeIndex].DevType=0
        // so that no priority was assigned in SetUefiBootOptionPriority
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            if (!IsLegacyBootOption(Option) // UEFI?
                && Option->Priority == LOWEST_BOOT_OPTION_PRIORITY)
            {                                        // AND priority is not set?
                if (!IsBootOptionWithDevice(Option)) // Skip orphan device.
                    continue;
                Option->Attributes &= ~LOAD_OPTION_ACTIVE; // disable undesired boot options
            }
        }
        //-----------------------------------------------------
    }
    else if (FixedBootPriorites->BootMode == 0)
    {
        //
        // Legacy mode
        //

        //-----------------------------------------------------
        // Set all boot options to lowest priority first, arrange them later
        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            Option->Priority = LOWEST_BOOT_OPTION_PRIORITY; // reset all priorities
            if (IsLegacyBootOption(Option))
            {
                Option->Attributes &= ~LOAD_OPTION_HIDDEN; // clear HIDDEN for all legacy boot options

                // FboLegacyDevOrder does not have group header disabled flag
                // Disable first and enable it later in SetLegacyBootOptionPriority()
                if (Option->GroupHeader)
                    Option->Attributes &= ~LOAD_OPTION_ACTIVE;
            }
        }

        DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBOSetOrder.c] DeviceMapCount=%x\n", DeviceMapCount));
        for (i = 0; i < DeviceMapCount; i++)
        {
            TypeIndex = FixedBootPriorites->LegacyPriorities[i];
            if (pFBOLegacyDevMap[TypeIndex].DevType == 0)
                continue; // Disable?      //(EIP114186+)
            SetLegacyBootOptionPriority(pFBOLegacyDevMap[TypeIndex].DevType, &PreviousPriority);
        }
    }

    // Set Legacy priorities
    //
    // We need to set legacy priorities because of SetDefaultTseBootOrder function would sort
    // the boot options with CompareTagThenBbsIndex then legacy boot options were re-ordered
    // according to BbsIndex, if without priorities, we can't sort them into
    // ComparePriorityThenBootOptionNumber sequence in SaveBootOptions function and that casued
    // we set the wrong attributes to options by looking at OldLegacyDevOrder variable.
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (!IsLegacyBootOption(Option) || Option->Priority != LOWEST_BOOT_OPTION_PRIORITY)
            continue;

        Option->Priority = PreviousPriority | BIT00; // BIT00: Flag which indicates it should remove ACTIVE attribute later since it is enclosed by disabled group.
        PreviousPriority = GetNextBootOptionPriority(PreviousPriority);
    }

    BuildFboLegacyDevOrder();
#if !GROUP_BOOT_OPTIONS_BY_TAG
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (Option->Priority & BIT00)
            Option->Attributes &= ~LOAD_OPTION_ACTIVE;
    }
#endif
    //
    // Undesried boot options should be not able to boot (ACTIVE=0)
    // This code must not be executed before BuildFboLegacyDevOrder
    // in order to keep the FboLegacyDevOrder has the same disabled information as setup
    //
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        UINT16 LegacyFlag = IsLegacyBootOption(Option);

        if (FixedBootPriorites->BootMode == 2                     // Dual mode?
            || (FixedBootPriorites->BootMode == 0 && LegacyFlag)  // legacy mode and legacy option?
            || (FixedBootPriorites->BootMode == 1 && !LegacyFlag) // UEFI mode and UEFI option?
        )
        {
            // option should be ACTIVE to boot and NOT HIDDEN for TSE
            Option->Attributes &= ~LOAD_OPTION_HIDDEN; // clear HIDDEN for all legacy boot options
        }
        else
        {
            // undesried boot options for selected boot mode
            // HIDDEN for TSE not sees it
            // NOT ACTIVE for not booting from it
            Option->Attributes |= LOAD_OPTION_HIDDEN;  // HIDDEN
            Option->Attributes &= ~LOAD_OPTION_ACTIVE; // Disable undesired UEFI boot options
        }
    }

    PreProcessBootOptions();
    pBS->FreePool(FixedBootPriorites);

    DUMP_BOOT_OPTION_LIST(BootOptionList, "After UpdateBootListPriority");
}

/**
    Backup variable "BootOrder" to "OldBootOrder"
    OldBootOrder is used in CheckBootOrder() to check if any
    BootOrder changed between each boot

    @param VOID

    @retval VOID

**/
VOID CreateOldBootOrder(EFI_EVENT Event, VOID *Context)
{
    EFI_STATUS Status;
    UINT16 *BootOrder = NULL;
    UINTN BootOrderSize = 0;

    if (gBdsSkipFBOModule)
        return;

    Status = GetEfiVariable(
        L"BootOrder", &EfiVariableGuid, NULL, &BootOrderSize, (VOID **)&BootOrder);

    if (!EFI_ERROR(Status))
    {
        pRS->SetVariable(
            L"OldBootOrder", &gFixedBootOrderGuid,
            VARIABLE_ATTRIBUTES, BootOrderSize, BootOrder);
    }
    else
    {
        pRS->SetVariable(
            L"OldBootOrder", &gFixedBootOrderGuid,
            VARIABLE_ATTRIBUTES, 0, NULL);
    }

    return;
}

/**
    Set Windows To Go Boot Option to Frist Priority


    @param VOID

    @retval VOID

**/
void FBO_AdjustWtgPriority()
{
    EFI_STATUS Status;
    UINT16 *BootOrder = NULL;
    UINTN BootOrderSize = 0;
    UINT32 VarAttr;
    UINTN VarSize = 0;
    FIXED_BOOT_PRIORITIES *FixedBootPriorites = NULL;
    DLINK *Link;
    BOOT_OPTION *Option;
    UINT16 i, TypeIndex;
    UINT16 DeviceMapCount = 0;
    BOOLEAN UpdateSetup = FALSE, WindowsToGoFound = FALSE;

    if (gBdsSkipFBOModule)
        return;
    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &VarSize, (VOID **)&FixedBootPriorites);
    if (EFI_ERROR(Status))
        return;

    // Search for Windwos To Go Boot Option
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (IsLegacyBootOption(Option))
            continue;

        // Found !!
        if (!Wcscmp(Option->Description, L"USB Entry for Windows To Go")) // if WTG?
        {
            Status = GetEfiVariable(
                L"BootOrder",
                &EfiVariableGuid,
                NULL,
                &BootOrderSize,
                (VOID **)&BootOrder);

            if (EFI_ERROR(Status))
            {
                pBS->FreePool(FixedBootPriorites);
                return;
            }

            // There are 2 Options in "Windows To Go Startup Options"
            // Choose Yes, Windows will set Windows to Go BootOption to Frist Priority in BootOrder.
            // Choose No,  User Need to change PC's Firmware Setting.
            // So, We Only handle the "Yes" Option

            if (BootOrder[0] != Option->BootOptionNumber)
            {
                pBS->FreePool(FixedBootPriorites);
                pBS->FreePool(BootOrder);
                return;
            }
            else
            {
                WindowsToGoFound = TRUE;
                break;
            }
        }
    }
    if (!WindowsToGoFound)
    {
        UINT16 *FboUefiPriority = NULL;
        UINTN UefiSize = 0;
#if FBO_DUAL_MODE
        UINT16 *FboDualPriority = NULL;
        UINTN DualSize = 0;
#endif
        Status = GetEfiVariable(L"WtgUefiPriority", &gFixedBootOrderGuid, NULL, &UefiSize, (VOID **)&FboUefiPriority);
        if (!EFI_ERROR(Status))
        {
            pBS->CopyMem(FixedBootPriorites->UefiPriorities, FboUefiPriority, UefiSize);
            pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorites);
            pRS->SetVariable(L"WtgUefiPriority", &gFixedBootOrderGuid, VarAttr, 0, NULL);
            pBS->FreePool(FboUefiPriority);
        }
#if FBO_DUAL_MODE
        Status = GetEfiVariable(L"WtgDualPriority", &gFixedBootOrderGuid, NULL, &DualSize, (VOID **)&FboDualPriority);
        if (!EFI_ERROR(Status))
        {
            pBS->CopyMem(FixedBootPriorites->DualPriorities, FboDualPriority, DualSize);
            pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorites);
            pRS->SetVariable(L"WtgDualPriority", &gFixedBootOrderGuid, VarAttr, 0, NULL);
            pBS->FreePool(FboDualPriority);
        }
#endif
        pBS->FreePool(FixedBootPriorites);
        return;
    }

#if FBO_DUAL_MODE
    TypeIndex = SearchDevMapByType(pFBODualDevMap, GetUefiBootOptionTag(Option));
    DeviceMapCount = FBO_DUAL_DEVICE_TYPE_NUM;
    {
        UINT16 *FboDualPriority = NULL;
        UINTN Size = 0;
        Status = GetEfiVariable(L"WtgDualPriority", &gFixedBootOrderGuid, NULL, &Size, (VOID **)&FboDualPriority);
        if (EFI_ERROR(Status))
        {
            pRS->SetVariable(L"WtgDualPriority",
                             &gFixedBootOrderGuid,
                             VarAttr,
                             sizeof(UINT16) * DeviceMapCount,
                             &FixedBootPriorites->DualPriorities[0]);
        }
        pBS->FreePool(FboDualPriority);
    }
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (TypeIndex == FixedBootPriorites->DualPriorities[i])
        {
            UINT16 j;
            UINT16 FirstPriority = FixedBootPriorites->DualPriorities[i];

            for (j = i; j > 0; j--)
                FixedBootPriorites->DualPriorities[j] = FixedBootPriorites->DualPriorities[j - 1];

            FixedBootPriorites->DualPriorities[0] = FirstPriority;
            UpdateSetup = TRUE;
            break;
        }
    }
#endif
    TypeIndex = SearchDevMapByType(pFBOUefiDevMap, GetUefiBootOptionTag(Option));
    DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
    {
        UINT16 *FboUefiPriority = NULL;
        UINTN Size = 0;
        Status = GetEfiVariable(L"WtgUefiPriority", &gFixedBootOrderGuid, NULL, &Size, (VOID **)&FboUefiPriority);
        if (EFI_ERROR(Status))
        {
            pRS->SetVariable(L"WtgUefiPriority",
                             &gFixedBootOrderGuid,
                             VarAttr,
                             sizeof(UINT16) * DeviceMapCount,
                             &FixedBootPriorites->UefiPriorities[0]);
        }
        pBS->FreePool(FboUefiPriority);
    }
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (TypeIndex == FixedBootPriorites->UefiPriorities[i])
        {
            UINT16 j;
            UINT16 FirstPriority = FixedBootPriorites->UefiPriorities[i];

            for (j = i; j > 0; j--)
                FixedBootPriorites->UefiPriorities[j] = FixedBootPriorites->UefiPriorities[j - 1];

            FixedBootPriorites->UefiPriorities[0] = FirstPriority;
            UpdateSetup = TRUE;
            break;
        }
    }

    if (UpdateSetup)
        pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorites);

    pBS->FreePool(FixedBootPriorites);
    pBS->FreePool(BootOrder);

    return;
}

/**
    Sync FixedBootPriorities and UefiDevOrder with BootOrder and BootOption.
    Only support UEFI Mode.

    @param VOID

    @retval EFI_OUT_OF_RESOURCES    Failed to allocate memory.

**/
EFI_STATUS SyncFBOwithBootOrderAndOption(VOID)
{
    EFI_STATUS Status;
    UINT16 *BootOrder = NULL, *TmpBootOrder = NULL;
    UINTN BootOrderSize = 0;
    UINT16 TypeTag[FIXED_BOOT_ORDER_GROUP_MAX_NUM], TagCount = 0;
    UINT16 DeviceMapCount = 0, i, j;
    EFI_LOAD_OPTION *BootOption = NULL;
    UINTN PrioritiesSize = 0, UefiDevOrderSize = 0, DeviceIndex = 0, OrderCount = 0, OptionSize = 0;
    FIXED_BOOT_PRIORITIES *FixedBootPriorities = NULL;
    UINT32 VarAttr;
    UINT16 *Priorities;
    FBODevMap *DevMap;
    UEFI_DEVICE_ORDER *UefiDevOrder = NULL;
    UEFI_DEVICE_ORDER *DevOrder = NULL;
    CHAR16 BootOptionName[9];
    UINT32 DevList[FIXED_BOOT_ORDER_SUBMENU_MAX_NUM];
    UINTN ListCount;
    BOOLEAN Match = FALSE;

    if (gBdsSkipFBOModule)
        return EFI_SUCCESS;

    // Get necessary variable
    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &PrioritiesSize, (VOID **)&FixedBootPriorities);
    if (EFI_ERROR(Status))
        goto Exit;

    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, &BootOrderSize, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        goto Exit;

    TmpBootOrder = AllocateZeroPool(BootOrderSize);
    if (TmpBootOrder == NULL)
    {
        if (FixedBootPriorities != NULL)
        {
            pBS->FreePool(FixedBootPriorities);
        }
        if (BootOrder != NULL)
        {
            pBS->FreePool(BootOrder);
        }
        return EFI_OUT_OF_RESOURCES;
    }
    pBS->CopyMem(TmpBootOrder, BootOrder, BootOrderSize);
    OrderCount = BootOrderSize / sizeof(UINT16);
    //------------------Sync BootXXXX Attributes to UefiDevOrder
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We are going to sync BootXXXX Attributes now...\n"));
    //
    // UEFI devices
    //
    if (FixedBootPriorities->BootMode == 1)
    { //  // UEFI mode
        Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, NULL, &UefiDevOrderSize, (VOID **)&UefiDevOrder);
        if (!EFI_ERROR(Status))
        {
            UEFI_DEVICE_ORDER *UefiDevOrderTemp = UefiDevOrder;
            //
            // Adjust FBO enable/disable for each boot option in BootOrder.
            //
            for (i = 0; i < OrderCount; i++)
            {
                UnicodeSPrint(BootOptionName, sizeof(BootOptionName), gBootName, BootOrder[i]); // L"BOOT####"
                OptionSize = 0;
                BootOption = NULL;
                Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &OptionSize, (VOID **)&BootOption);
                if (EFI_ERROR(Status))
                    continue;
                for (UefiDevOrderTemp = UefiDevOrder;
                     (UINT8 *)UefiDevOrderTemp < (UINT8 *)UefiDevOrder + UefiDevOrderSize;
                     UefiDevOrderTemp = NEXT_DEVICE(UEFI_DEVICE_ORDER, UefiDevOrderTemp))
                {
                    for (DeviceIndex = 0; DeviceIndex < DEVORDER_COUNT(UefiDevOrderTemp); DeviceIndex++)
                    {
                        // Device has the same boot option number as boot####.
                        if ((UefiDevOrderTemp->Device[DeviceIndex] & FBO_UEFI_ORDER_MASK) == BootOrder[i])
                        {
                            if (BootOption->Attributes & LOAD_OPTION_ACTIVE)
                            {
                                UefiDevOrderTemp->Device[DeviceIndex] &= FBO_UEFI_ORDER_MASK;
                                break;
                            }
                            else
                            {
                                UefiDevOrderTemp->Device[DeviceIndex] |= FBO_UEFI_DISABLED_MASK;
                                break;
                            }
                        }
                    }
                }
                if (BootOption)
                    pBS->FreePool(BootOption);
            }
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We are had finish syncing BootXXXX Attributes to UefiDevOrder...\n"));
            //------------------Sync BootOrder to UefiDevOrder
            {
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We going to sync BootOrder to UefiDevOrder...\n"));
                // Resort UefiDevOrder
                for (DevOrder = UefiDevOrder; ((UINT8 *)DevOrder < (UINT8 *)UefiDevOrder + UefiDevOrderSize); DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
                {
                    MemCpy(DevList, DevOrder->Device, DevOrder->Length - sizeof(DevOrder->Length));
                    ListCount = DEVORDER_COUNT(DevOrder);
                    // Resort DevOrder->Device[i]
                    for (i = 0; i < ListCount; i++)
                    {
                        UINT32 Option = GetDevByBootOrderSequence(TmpBootOrder, OrderCount, DevList, ListCount);
                        if (Option == FBO_UEFI_INVALID_ORDER)
                            break;
                        DevOrder->Device[i] = Option;
                    }
                    // When BootOptionList have a new UEFI device, the device(BootXXXX) doesn't restore in BootOrder in this moment.
                    // So we need handle it and add into DevOrder->Device[i].
                    for (j = 0; j < ListCount; j++)
                    {
                        if (!(DevList[j] & FBO_UEFI_DISABLED_MASK) && DevList[j] != FBO_UEFI_INVALID_ORDER)
                        {
                            DevOrder->Device[i++] = DevList[j];
                            DevList[j] = FBO_UEFI_INVALID_ORDER;
                        }
                    }
                    // Handle disable device
                    for (j = 0; j < ListCount; j++)
                    {
                        if (DevList[j] != FBO_UEFI_INVALID_ORDER)
                        {
                            DevOrder->Device[i++] = DevList[j];
                            DevList[j] = FBO_UEFI_INVALID_ORDER;
                        }
                    }
                }
                pRS->SetVariable(L"UefiDevOrder",
                                 &gFixedBootOrderGuid,
                                 VARIABLE_ATTRIBUTES,
                                 UefiDevOrderSize,
                                 UefiDevOrder);
                pRS->SetVariable(L"OriUefiDevOrder",
                                 &gFixedBootOrderGuid,
                                 VARIABLE_ATTRIBUTES,
                                 UefiDevOrderSize,
                                 UefiDevOrder);
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We are had finish syncing BootOrder to UefiDevOrder...\n"));
            }
        }
    }
    else
        goto Exit;
    //------------------Sync BootOrder to FixedBootPriorities
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We are starting sync BootOrder to FixedBootPriorities...\n"));
    if (FixedBootPriorities->BootMode == 1) // UEFI mode
    {
        DevMap = pFBOUefiDevMap;
        DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
        Priorities = FixedBootPriorities->UefiPriorities;
    }
    else
        goto Exit;

    for (i = 0; i < OrderCount; i++)
    {
        UINT32 Type;
        Match = FALSE;
        for (DevOrder = UefiDevOrder; ((UINT8 *)DevOrder < (UINT8 *)UefiDevOrder + UefiDevOrderSize); DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
        {
            if (Match)
                break;
            for (DeviceIndex = 0; DeviceIndex < DEVORDER_COUNT(DevOrder); DeviceIndex++)
            {
                // Device has the same boot option number as boot####.
                if (Match)
                    break;
                if ((DevOrder->Device[DeviceIndex] & FBO_UEFI_ORDER_MASK) == BootOrder[i])
                {
                    Type = DevOrder->Type;
                    Match = TRUE;
                }
            }
        }

        for (j = 0; j < TagCount; j++)
            if (Type == TypeTag[j])
                break;

        if (j == TagCount)
        {
            TypeTag[TagCount++] = (UINT16)Type;
        }
    }

    // Disable priorities if it have device...
    for (i = 0; i < TagCount; i++)
    {
        for (j = 0; j < DeviceMapCount; j++)
        {
            UINT16 Idx = SearchDevMapByType(DevMap, TypeTag[i]);
            if (Idx != 0xffff && Priorities[j] == Idx)
            {
                Priorities[j] = INVALID_FBO_TAG;
                break;
            }
        }
        if (j == DeviceMapCount)
            TypeTag[i] = INVALID_FBO_TAG; // Invalid tag
    }

    // Reset priorities
    for (i = 0; i < DeviceMapCount; i++)
    {
        if (Priorities[i] == INVALID_FBO_TAG)
            for (j = 0; j < TagCount; j++)
                if (TypeTag[j] != INVALID_FBO_TAG)
                {
                    UINT16 Idx = SearchDevMapByType(DevMap, TypeTag[j]);
                    if (Idx != 0xffff)
                        Priorities[i] = Idx;
                    TypeTag[j] = INVALID_FBO_TAG;
                    break;
                }
    }
    pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, PrioritiesSize, FixedBootPriorities);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We had done syncing BootOrder to FixedBootPriorities...\n"));
    //------------------Reorder BootOrder with FixedBootPriorities
    if (FixedBootPriorities->BootMode == 1)
    { // In Uefi mode
        UINT16 *NewOrder = NULL, *DisableOrder = NULL, x = 0;
        UINT16 NewOrderCount = 0;
        j = 0;
        Status = pBS->AllocatePool(EfiBootServicesData, BootOrderSize, &NewOrder);
        if (!EFI_ERROR(Status))
        {
            for (i = 0; i < FBO_UEFI_DEVICE_TYPE_NUM; i++)
            { // parsing UefiPriorities
                for (DevOrder = UefiDevOrder;
                     (UINT8 *)DevOrder < (UINT8 *)UefiDevOrder + UefiDevOrderSize; // Run though Dev order to see if
                     DevOrder = NEXT_DEVICE(UEFI_DEVICE_ORDER, DevOrder))
                { // it match the UefiPriorities
                    UINT16 Idx = SearchDevMapByType(pFBOUefiDevMap, DevOrder->Type);
                    if (Idx != 0xffff && FixedBootPriorities->UefiPriorities[i] == Idx)
                    { // Find the match UefiPriorities
                        for (DeviceIndex = 0; DeviceIndex < DEVORDER_COUNT(DevOrder); DeviceIndex++)
                        {
                            // Run though the order to collect the boot number.
                            if (DevOrder->Device[DeviceIndex] & FBO_UEFI_DISABLED_MASK)
                            {
                                DisableOrder[x] = (UINT16)DevOrder->Device[DeviceIndex];
                                x++;
                                NewOrderCount++;
                                continue;
                            }
                            else
                            {
                                DevOrder->Device[DeviceIndex] &= FBO_UEFI_ORDER_MASK;
                                NewOrder[j] = (UINT16)DevOrder->Device[DeviceIndex];
                                j++;
                                NewOrderCount++;
                            }
                        }
                    }
                }
            }
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Disable device Num %d\n", x));
            for (i = 0; i < x; i++)
            { // Put disable boot variable to last.
                NewOrder[j + i] = DisableOrder[i];
            }
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "NewOrderCount %d\n", NewOrderCount));
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "OrderCount %d\n", OrderCount));
            if (NewOrderCount != OrderCount)
            {
                for (i = 0; i < OrderCount; i++)
                { // Check with BootOrder see if we miss any thing.
                    Match = FALSE;
                    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Scan for : "));
                    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "BootOrder[%d] = %d \n", i, BootOrder[i]));
                    for (j = 0; j < OrderCount; j++)
                    {
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "NewOrder[%d] = %d \n", j, NewOrder[j]));
                        if (BootOrder[i] == NewOrder[j])
                        {
                            Match = TRUE;
                            break;
                        }
                    }
                    if (!Match)
                    {
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Find missing order : "));
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "BootOrder[%d] = %x \n", i, BootOrder[i]));
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Going to added to : "));
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "NewOrder[%d]\n", NewOrderCount));
                        NewOrder[NewOrderCount] = BootOrder[i];
                        NewOrderCount++;
                    }
                }
            }
            pRS->SetVariable(L"BootOrder", &gEfiGlobalVariableGuid, VARIABLE_ATTRIBUTES, BootOrderSize, NewOrder);
        }
        else
            goto Exit;
        if (NewOrder != NULL)
        {
            pBS->FreePool(NewOrder);
        }
    }

Exit:
    if (FixedBootPriorities != NULL)
    {
        pBS->FreePool(FixedBootPriorities);
    }
    if (UefiDevOrder != NULL)
    {
        pBS->FreePool(UefiDevOrder);
    }
    if (BootOrder != NULL)
    {
        pBS->FreePool(BootOrder);
    }
    if (TmpBootOrder != NULL)
    {
        pBS->FreePool(TmpBootOrder);
    }

    return Status;
}

/**
    Set the input date to corresponding variable.

    @param  FboConfigOptionData     OptionData need to be modify.
    @param  OptionSize              Total OptionData size.
    @param  FboConfigOrderData      Order need to be modify.
    @param  OrderSize  Boot mode.   Total OptionData size.

    @retval EFI_INVALID_PARAMETER   Input buffer is NULL or Size is zero.
    @retval EFI_UNSUPPORTED         Get/Set variable fail.
    @retval EFI_OUT_OF_RESOURCES    Failed to allocate memory.

**/
EFI_STATUS FBO_RedfishSetData(
    IN UINT8 *FboConfigOptionData,
    IN UINTN OptionSize,
    IN UINT16 *FboConfigOrderData,
    IN UINTN OrderSize)
{
    EFI_STATUS Status = EFI_UNSUPPORTED;
    UINT16 *BootOrder = NULL;
    UINTN BootOrderSize = 0, BootOptionSize = 0, i;
    EFI_LOAD_OPTION *BootOption = NULL;

    CHAR16 BootOptionName[9];
    BOOLEAN UpdateOption = FALSE, UpdateOrder = FALSE;
    UINT8 *ptr = NULL;
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] FBO_RedfishSetData....\n"));

    if (FboConfigOrderData != NULL)
    {
        if (OrderSize == 0)
            return EFI_INVALID_PARAMETER;
        UpdateOrder = TRUE;
    }

    if (FboConfigOptionData != NULL)
    {
        if (OptionSize == 0)
            return EFI_INVALID_PARAMETER;
        UpdateOption = TRUE;
    }

    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, &BootOrderSize, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        return EFI_UNSUPPORTED;
    pBS->FreePool(BootOrder);

    if (UpdateOrder)
    { // Sync BootOrder
        Status = pRS->SetVariable(L"BootOrder", &gEfiGlobalVariableGuid, VARIABLE_ATTRIBUTES, OrderSize, FboConfigOrderData);
    }

    if (UpdateOption)
    { // Update Attributes to BOOT####
        // EFI_GUID    FixedBootOrderSyncGuid = FIXED_BOOT_ORDER_SYNC_GUID;
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] We are going to sync BootXXXX Attributes now...\n"));
        //
        // Update BootOption attributes for later sync function usage.
        //
        ptr = AllocateZeroPool(OptionSize);
        if (ptr == NULL)
        {
            return EFI_OUT_OF_RESOURCES;
        }
        pBS->CopyMem(ptr, FboConfigOptionData, OptionSize);

        for (i = 0; i != OptionSize;)
        {
            UINT32 Attributes = 0xFF;
            FBO_CONFIG_OPTION_DATA *Buffer;
            UINT16 Num = 0;
            UINTN Size = 0;
            BootOption = NULL;
            Buffer = (FBO_CONFIG_OPTION_DATA *)(ptr + i);
            Num = Buffer->BootOptionNumber;
            Size = Buffer->LoadOptionSize;
            BootOptionSize = 0;
            i += sizeof(UINT16) + sizeof(UINTN);

            Attributes = ((EFI_LOAD_OPTION *)(ptr + i))->Attributes;
            i += (UINT16)Size;

            UnicodeSPrint(BootOptionName, sizeof(BootOptionName), gBootName, Num); // L"BOOT####"
            Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &BootOptionSize, (VOID **)&BootOption);
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Get %s %r !\n", BootOptionName, Status));
            if (EFI_ERROR(Status)){
                if (BootOption != NULL)
                    pBS->FreePool(BootOption);
                return EFI_UNSUPPORTED;
            }
                
            if (BootOption != NULL){
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Update %s Attributes from %x to %x", BootOptionName, BootOption->Attributes, Attributes));
                BootOption->Attributes = Attributes;
                pRS->SetVariable(BootOptionName,
                                 &gEfiGlobalVariableGuid,
                                 VARIABLE_ATTRIBUTES,
                                 BootOptionSize,
                                 BootOption);
                pBS->FreePool(BootOption);
            }
        }
    }

    Status = EFI_UNSUPPORTED;
    if (UpdateOrder || UpdateOption)
        Status = SyncFBOwithBootOrderAndOption();

    if (ptr != NULL)
    {
        pBS->FreePool(ptr);
    }

    return Status;
}

/**
    Get the Boot option and Bootorder date.

    @param  FboConfigOptionData     Buffer to store the Bootoption data.
    @param  OptionSize              Total Bootoption size.
    @param  FboConfigOrderData      Buffer to store the Bootorder data.
    @param  OrderSize  Boot mode.   Total Bootorder size.

    @retval EFI_INVALID_PARAMETER   Input buffer is NULL.
    @retval EFI_UNSUPPORTED         Getvariable fail.
    @retval EFI_OUT_OF_RESOURCES    Failed to allocate memory.

**/
EFI_STATUS FBO_RedfishGetData(
    OUT UINT8 **FboConfigOptionData,
    OUT UINTN *OptionSize,
    OUT UINT16 **FboConfigOrderData,
    OUT UINTN *OrderSize)
{
    EFI_STATUS Status = EFI_UNSUPPORTED;
    UINT8 *ptr = NULL;
    UINT16 *BootOrder = NULL, i;
    CHAR16 BootOptionName[9];
    UINTN OrderCount = 0, BootOptionSize = 0;
    UINTN GetOptionSize = 0;
    EFI_LOAD_OPTION *BootOption = NULL;

    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] FBO_RedfishGetData...\n"));
    if ((FboConfigOptionData == NULL) || (OptionSize == NULL) || (FboConfigOrderData == NULL) || (OrderSize == NULL))
    {
        return EFI_INVALID_PARAMETER;
    }

    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, OrderSize, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        return EFI_UNSUPPORTED;

    *FboConfigOrderData = AllocateZeroPool(*OrderSize);
    if (*FboConfigOrderData == NULL)
    {
        if (BootOrder != NULL)
            pBS->FreePool(BootOrder);
        return EFI_OUT_OF_RESOURCES;
    }
    pBS->CopyMem(*FboConfigOrderData, BootOrder, *OrderSize);
    OrderCount = *OrderSize / sizeof(UINT16);

    // Get all BootOption size
    for (i = 0; i < OrderCount; i++)
    {
        BootOption = NULL;
        UnicodeSPrint(BootOptionName, sizeof(BootOptionName), L"Boot%04X", BootOrder[i]); // L"BOOT####"
        Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &BootOptionSize, (VOID **)&BootOption);
        if (EFI_ERROR(Status))
        {
            if (*FboConfigOrderData != NULL)
                pBS->FreePool(FboConfigOrderData);
            if (BootOption != NULL)
                pBS->FreePool(BootOption);
            return EFI_UNSUPPORTED;
        }
        GetOptionSize += BootOptionSize;
        if (BootOption != NULL)
            pBS->FreePool(BootOption);
    }

    *OptionSize = (((sizeof(UINT16) + sizeof(UINTN)) * OrderCount) + GetOptionSize);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "*OptionSize %x..\n", *OptionSize));
    *FboConfigOptionData = AllocateZeroPool(*OptionSize);
    if (*FboConfigOrderData == NULL)
    {
        pBS->FreePool(FboConfigOrderData);
        return EFI_OUT_OF_RESOURCES;
    }

    ptr = (UINT8 *)*FboConfigOptionData;

    for (i = 0; i < OrderCount; i++)
    {
        BootOptionSize = 0;
        BootOption = NULL;
        UnicodeSPrint(BootOptionName, sizeof(BootOptionName), L"Boot%04X", BootOrder[i]); // L"BOOT####"
        Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &BootOptionSize, (VOID **)&BootOption);
        if (EFI_ERROR(Status))
        {
            if (BootOption != NULL)
                pBS->FreePool(BootOption);
            return EFI_UNSUPPORTED;
        }
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Get %s %r !\n", BootOptionName, Status));

        // Copy data
        pBS->CopyMem(&((FBO_CONFIG_OPTION_DATA *)ptr)->BootOptionNumber, &BootOrder[i], sizeof(UINT16));
        pBS->CopyMem(&((FBO_CONFIG_OPTION_DATA *)ptr)->LoadOptionSize, &BootOptionSize, sizeof(UINTN));
        ptr += sizeof(UINTN) + sizeof(UINT16);
        pBS->CopyMem(ptr, BootOption, BootOptionSize);
        ptr += BootOptionSize;

        if (BootOption != NULL)
            pBS->FreePool(BootOption);
    }
    if (BootOrder != NULL)
        pBS->FreePool(BootOrder);
    return Status;
}

/**
    Initialize the module memory, and device map data.

    @param VOID

    @retval VOID

**/
VOID FBO_Sync_Protocol_Install(IN void)
{
    EFI_STATUS Status;
    EFI_GUID FixedBootOrderSyncGuid = FIXED_BOOT_ORDER_SYNC_GUID;
    EFI_FIXED_BOOT_ORDER_SYNC_PROTOCOL *SyncProtocol = NULL;
    EFI_HANDLE Handle = NULL;

    // install FixedBootOrderSyncProtocol
    Status = pBS->AllocatePool(EfiBootServicesData, sizeof(EFI_FIXED_BOOT_ORDER_SYNC_PROTOCOL), (VOID **)&SyncProtocol);
    if (EFI_ERROR(Status))
    {
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "%a AllocatePool Status = %r\n", __FUNCTION__, Status));
        return;
    }
    SyncProtocol->Version = FBO_sync_ver;
    SyncProtocol->SetData = FBO_RedfishSetData;
    SyncProtocol->GetData = FBO_RedfishGetData;
    SyncProtocol->SyncFBOwithBootOrderAndOption = SyncFBOwithBootOrderAndOption;

    Status = pBS->InstallProtocolInterface(
        &Handle,
        &FixedBootOrderSyncGuid,
        EFI_NATIVE_INTERFACE,
        SyncProtocol);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Install FBO_Sync_Protocol %r\n", Status));
    return;
}
/**
    Initialize the module memory, and device map data.

    @param VOID

    @retval VOID

**/
EFI_STATUS FBO_Init(IN void)
{
    EFI_STATUS Status;
    EFI_HANDLE Handle = NULL;
    EFI_FIXED_BOOT_ORDER_PROTOCOL *pFBO = NULL;
    EFI_GUID FboBdsGuid = FIXED_BOOT_ORDER_BDS_GUID;
    EFI_GUID FboGuid = FIXED_BOOT_ORDER_GUID;
    UINTN Size = 0;
    UINT8 *Buffer = NULL;

    if (gBdsSkipFBOModule)
        return EFI_SUCCESS;
    Status = pBS->LocateProtocol(&gFixedBootOrderGuid, NULL, (VOID **)&pFBO);

    if (!EFI_ERROR(Status))
    {
        pFBOLegacyDevMap = pFBO->GetLegacyDevMap();
        pFBOUefiDevMap = pFBO->GetUefiDevMap();
#if FBO_DUAL_MODE
        pFBODualDevMap = pFBO->GetDualDevMap();
#endif
    }
    {
        EFI_EVENT ActivateEvent = NULL;
        VOID *ActivateRegistration = NULL;
        EFI_GUID AmiTseBeforeTimeOutGuid = AMITSE_BEFORE_TIMEOUT_GUID;

        Status = pBS->CreateEvent(
            EVT_NOTIFY_SIGNAL,
            TPL_CALLBACK,
            CreateOldBootOrder,
            NULL,
            &ActivateEvent);
        if (!EFI_ERROR(Status))
        {
            Status = pBS->RegisterProtocolNotify(
                &AmiTseBeforeTimeOutGuid,
                ActivateEvent,
                &ActivateRegistration);
            if (EFI_ERROR(Status))
            {
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] Fail to create ActivateEvent(%r)\n", Status));
            }
        }
    }

    Status = GetEfiVariable(L"PreserveUefiDevOrder", &FboGuid, NULL, &Size, &Buffer);
    if (!EFI_ERROR(Status))
    {
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Set PreserveUefiDevOrder to UefiDevOrder:\r\n"));
        if (Size > sizeof(UINT8))
        {
            Status = pRS->SetVariable(L"UefiDevOrder", &FboGuid, VARIABLE_ATTRIBUTES, Size, Buffer);
        }
        else
        {
            Status = pRS->SetVariable(L"UefiDevOrder", &FboGuid, 0, 0, NULL);
        }
        ASSERT_EFI_ERROR(Status);

        pRS->SetVariable(L"PreserveUefiDevOrder", &FboGuid, 0, 0, NULL);
        pBS->FreePool(Buffer);
    }

    // install FixedBootOrderBdsProtocol
    Status = pBS->InstallProtocolInterface(
        &Handle,
        &FboBdsGuid,
        EFI_NATIVE_INTERFACE,
        &gFixedBootOrderBdsProtocol);

    FboSetupSizeCheck();

    return Status;
}

/**
    Go through the legacy device order structure and find the legacy dev order
    group type that we want then return this group.

    @param LEGACY_DEVICE_ORDER *DevOrder - pointer to the legacy device order
        UINTN DevOrderSize - size of the legacy dev order structure
        UINT32 Type - Group type to match

    @retval LEGACY_DEVICE_ORDER *

**/
#if CSM_SUPPORT
LEGACY_DEVICE_ORDER *FindLegacyDeviceGroupByType(
    LEGACY_DEVICE_ORDER *DevOrder, UINTN DevOrderSize, UINT32 Type)
{
    LEGACY_DEVICE_ORDER *LegacyGroup = DevOrder;

    for (; (UINT8 *)LegacyGroup < (UINT8 *)DevOrder + DevOrderSize; LegacyGroup = NEXT_DEVICE(LEGACY_DEVICE_ORDER, LegacyGroup))
    {
        if (LegacyGroup->Type == Type)
        {
            return LegacyGroup;
        }
    }

    return NULL;
}
#endif

/**
 * Get the FBO device type by device path.
 *
 * @param   Dp          The device path from boot option.
 *
 * @retval  BBS_UNKNOWN Device type is not found.
 * @return  others      Device type is found.
 */
UINT16
GetDeviceTypeByDevicePath(
    IN EFI_DEVICE_PATH *Dp)
{
    EFI_GUID FboBoTagDpGuid = FBO_BO_TAG_DEVICE_PATH_GUID;

    if (Dp == NULL)
    {
        return BBS_UNKNOWN;
    }

    while (!IsDevicePathEndType(Dp))
    {
        if (Dp->Type == HARDWARE_DEVICE_PATH && Dp->SubType == HW_VENDOR_DP)
        {
            FBO_BO_TAG_DEVICE_PATH *FboTagDp = (FBO_BO_TAG_DEVICE_PATH *)Dp;
            if (!MemCmp(&FboTagDp->Header.Guid, &FboBoTagDpGuid, sizeof(EFI_GUID)))
            {
                return FboTagDp->BoTag;
            }
        }

        Dp = NextDevicePathNode(Dp);
    }

    return BBS_UNKNOWN;
}

/**
 * Adjust UEFI devices active by boot option.
 *
 * @param   BootOrder           The pointer to the boot order.
 * @param   BootOrderSize       Size of the boot order.
 * @param   UefiDevOrder        The pointer to the UEFI device order.
 * @param   UefiDevOrderSize    Size of the UEFI device order.
 *
 * @retval  VOID
 */
VOID AdjustUefiDeviceActive(
    IN UINT16 *BootOrder,
    IN UINTN BootOrderSize,
    IN UEFI_DEVICE_ORDER *UefiDevOrder,
    IN UINTN UefiDevOrderSize)
{
    EFI_STATUS Status;
    EFI_LOAD_OPTION *BootOption = NULL;
    UEFI_DEVICE_ORDER *UefiDevOrderTemp = UefiDevOrder;
    UINTN Index = 0, OptionSize = 0, DeviceIndex = 0;
    CHAR16 BootOptionName[9];
    DLINK *Link = NULL;
    BOOT_OPTION *Option = NULL;

    //
    // Adjust FBO enable/disable for each boot option in BootOrder.
    //
    for (Index = 0; Index < BootOrderSize / sizeof(UINT16); Index++)
    {

        UnicodeSPrint(BootOptionName, sizeof(BootOptionName), gBootName, BootOrder[Index]); // L"BOOT####"

        OptionSize = 0;
        BootOption = NULL;
        Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &OptionSize, (VOID **)&BootOption);
        if (EFI_ERROR(Status))
            continue; // BootOrder for loop

        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            if (Option->BootOptionNumber == BootOrder[Index])
            {

                for (UefiDevOrderTemp = UefiDevOrder;
                     (UINT8 *)UefiDevOrderTemp < (UINT8 *)UefiDevOrder + UefiDevOrderSize;
                     UefiDevOrderTemp = NEXT_DEVICE(UEFI_DEVICE_ORDER, UefiDevOrderTemp))
                {

                    for (DeviceIndex = 0; DeviceIndex < DEVORDER_COUNT(UefiDevOrderTemp); DeviceIndex++)
                    {
                        // Device has the same boot option number as boot####.
                        if ((UefiDevOrderTemp->Device[DeviceIndex] & FBO_UEFI_ORDER_MASK) == BootOrder[Index])
                        {
                            if (BootOption->Attributes & LOAD_OPTION_ACTIVE)
                            {
                                UefiDevOrderTemp->Device[DeviceIndex] &= FBO_UEFI_ORDER_MASK;
                            }
                            else
                            {
                                UefiDevOrderTemp->Device[DeviceIndex] |= FBO_UEFI_DISABLED_MASK;
                            }
                        }
                    }
                }
            }
        }
        if (BootOption)
            pBS->FreePool(BootOption);
    }
}

/**
 * Adjust Legacy devices active by boot option.
 *
 * @param   BootOrder           The pointer to the boot order.
 * @param   BootOrderSize       Size of the boot order.
 * @param   LegacyDevOrder      The pointer to the Legacy device order.
 * @param   LegacyDevOrderSize  Size of the Legacy device order.
 * @param   FixedBootPriorities The pointer to the FixedBootPriorities.
 *
 * @retval  VOID
 */
VOID AdjustLegacyDeviceActive(
    IN UINT16 *BootOrder,
    IN UINTN BootOrderSize,
    IN LEGACY_DEVICE_ORDER *LegacyDevOrder,
    IN UINTN LegacyDevOrderSize,
    IN FIXED_BOOT_PRIORITIES *FixedBootPriorities)
{
#if CSM_SUPPORT
    EFI_STATUS Status;
    EFI_LOAD_OPTION *BootOption = NULL;
    UINTN OptionSize = 0, Index = 0;
    CHAR16 BootOptionName[9];
    DLINK *Link = NULL;
    BOOT_OPTION *Option = NULL;
    UINT16 DevType = 0;
#if !GROUP_BOOT_OPTIONS_BY_TAG
    LEGACY_DEVICE_ORDER *LegacyDevOrderTemp = LegacyDevOrder;
    UINTN DeviceIndex = 0;
    UINTN DeviceCount[FBO_GROUP_TYPE_MAX_NUM] = {0};
#endif
    //
    // Adjust FBO enable/disable for each boot option in BootOrder.
    //
    for (Index = 0; Index < BootOrderSize / sizeof(UINT16); Index++)
    {

        UnicodeSPrint(BootOptionName, sizeof(BootOptionName), gBootName, BootOrder[Index]); // L"BOOT####"

        OptionSize = 0;
        BootOption = NULL;
        Status = GetEfiVariable(BootOptionName, &gEfiGlobalVariableGuid, NULL, &OptionSize, (VOID **)&BootOption);
        if (EFI_ERROR(Status))
            continue; // BootOrder for loop

        FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
        {
            if (Option->BootOptionNumber == BootOrder[Index])
            {
#if GROUP_BOOT_OPTIONS_BY_TAG
                FBODevMap *DevMap = NULL;
                UINT16 *SetupPriorities = NULL;
                UINT16 TypeIndex = 0, DeviceGroupTypeIndex = 0xFFFF, DisableGroupTypeIndex = 0xFFFF, NumOfGroupType = 0;
#endif
                if (Option->BbsEntry == NULL)
                {
                    DevType = GetDeviceTypeByDevicePath(Option->FilePathList);
                }
                else
                {
                    DevType = BOOT_OPTION_GET_BBS_ENTRY_DEVICE_TYPE_FUNCTION(Option->BbsEntry);
                }

#if GROUP_BOOT_OPTIONS_BY_TAG
                //
                // GROUP_BOOT_OPTIONS_BY_TAG is enabled. Legacy boot option in boot order is legacy group.
                // So we adjust the device group if GROUP_BOOT_OPTIONS_BY_TAG is enabled.
                //
                if (!Option->GroupHeader)
                    continue; // FOR_EACH_BOOT_OPTION

                DevMap = pFBOLegacyDevMap;
                NumOfGroupType = FBO_LEGACY_DEVICE_TYPE_NUM;
                SetupPriorities = FixedBootPriorities->LegacyPriorities;

#if FBO_DUAL_MODE
                if (FixedBootPriorities->BootMode == 2)
                { // Dual mode
                    DevMap = pFBODualDevMap;
                    NumOfGroupType = FBO_DUAL_DEVICE_TYPE_NUM;
                    SetupPriorities = FixedBootPriorities->DualPriorities;
                }
#endif // #if FBO_DUAL_MODE

                for (TypeIndex = 0; TypeIndex < NumOfGroupType; TypeIndex++)
                {
                    if (SetupPriorities[TypeIndex] == NumOfGroupType)
                    {
                        DisableGroupTypeIndex = TypeIndex;
                    }
                    else if (SetupPriorities[TypeIndex] == SearchDevMapByType(DevMap, DevType))
                    {
                        DeviceGroupTypeIndex = TypeIndex;
                    }
                }

                if (BootOption->Attributes & LOAD_OPTION_ACTIVE)
                {
                    if (DeviceGroupTypeIndex == 0xFFFF)
                    { // Group is disabled, so enable it.
                        SetupPriorities[DisableGroupTypeIndex] = SearchDevMapByType(DevMap, DevType);
                    } // else { Group is already enabled. }
                }
                else
                {
                    if (DeviceGroupTypeIndex != 0xFFFF)
                    { // Group is enabled, so disable it.
                        SetupPriorities[DeviceGroupTypeIndex] = NumOfGroupType;
                    } // else { Group is already disabled. }
                }
#else  // !GROUP_BOOT_OPTIONS_BY_TAG
       //
       // GROUP_BOOT_OPTIONS_BY_TAG is disabled. Legacy boot option in boot order is legacy device.
       // So we adjust the device if GROUP_BOOT_OPTIONS_BY_TAG is disabled.
       //
                LegacyDevOrderTemp = FindLegacyDeviceGroupByType(LegacyDevOrder, LegacyDevOrderSize, DevType);
                if (LegacyDevOrderTemp == NULL)
                    continue; // FOR_EACH_BOOT_OPTION

                DeviceIndex = DeviceCount[DevType];
                if (BootOption->Attributes & LOAD_OPTION_ACTIVE)
                {
                    LegacyDevOrderTemp->Device[DeviceIndex] &= FBO_LEGACY_ORDER_MASK;
                }
                else
                {
                    LegacyDevOrderTemp->Device[DeviceIndex] |= FBO_LEGACY_DISABLED_MASK;
                }
                DeviceCount[DevType]++;
#endif // #if GROUP_BOOT_OPTIONS_BY_TAG
            }
        }
        if (BootOption)
            pBS->FreePool(BootOption);
    }
#endif
}

/**
 * Some third-party utility will enable/disable BootOption,
 * so the function will follow the LOAD_OPTION_ACTIVE of BootOption to adjust devices mask or device groups.
 *
 * @param VOID
 *
 * @retval VOID
 */
VOID FBO_UpdateBootListActive(
    VOID)
{
    EFI_STATUS Status = EFI_UNSUPPORTED;
    UINT16 *BootOrder = NULL;
    UINTN BootOrderSize = 0, VarSize = 0, UefiDevOrderSize = 0;
#if CSM_SUPPORT
    UINTN LegacyDevOrderSize = 0;
#endif
    FIXED_BOOT_PRIORITIES *FixedBootPriorities = NULL;
    UINT32 VarAttr;
    UEFI_DEVICE_ORDER *UefiDevOrder = NULL;
    LEGACY_DEVICE_ORDER *LegacyDevOrder = NULL;

    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] Entring FBO_UpdateBootListActive \n"));

    if (gBdsSkipFBOModule)
        return;

    Status = GetEfiVariable(L"BootOrder", &gEfiGlobalVariableGuid, NULL, &BootOrderSize, (VOID **)&BootOrder);
    if (EFI_ERROR(Status))
        goto Exit;

    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &VarSize, (VOID **)&FixedBootPriorities);
    if (EFI_ERROR(Status))
        goto Exit;

    //
    // UEFI devices
    //
    if (FixedBootPriorities->BootMode != 0)
    { // Not in Legacy mode
        Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, NULL, &UefiDevOrderSize, (VOID **)&UefiDevOrder);
        if (!EFI_ERROR(Status))
        {
            AdjustUefiDeviceActive(BootOrder, BootOrderSize, UefiDevOrder, UefiDevOrderSize);

            Status = pRS->SetVariable(L"UefiDevOrder", &gFixedBootOrderGuid, BOOT_VARIABLE_ATTRIBUTES, UefiDevOrderSize, UefiDevOrder);
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] FBO_UpdateBootListActive set UefiDevOrder Status:%r\n", Status));
        }
    }

    //
    // Legacy devices
    //
#if CSM_SUPPORT
    if (FixedBootPriorities->BootMode != 1)
    { // Not in UEFI mode
        Status = GetEfiVariable(L"FboLegacyDevOrder", &gFixedBootOrderGuid, NULL, &LegacyDevOrderSize, (VOID **)&LegacyDevOrder);
        if (!EFI_ERROR(Status))
        {
            AdjustLegacyDeviceActive(BootOrder, BootOrderSize, LegacyDevOrder, LegacyDevOrderSize, FixedBootPriorities);

#if GROUP_BOOT_OPTIONS_BY_TAG
            // The setup variable may be locked by AMISetupNVLock when LOCK_SETVAR_AT_ENDOFDXE is enabled.
            Status = pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorities);
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] FBO_UpdateBootListActive set FixedBootPriorities Status:%r\n", Status));
#else  // !GROUP_BOOT_OPTIONS_BY_TAG
            Status = pRS->SetVariable(L"FboLegacyDevOrder", &gFixedBootOrderGuid, BOOT_VARIABLE_ATTRIBUTES, LegacyDevOrderSize, LegacyDevOrder);
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] FBO_UpdateBootListActive set FboLegacyDevOrder Status:%r\n", Status));
#endif // #if GROUP_BOOT_OPTIONS_BY_TAG
        }
    }
#endif // #if CSM_SUPPORT

Exit:
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[FBO] Exiting FBO_UpdateBootListActive Status:%r\n", Status));

    if (BootOrder != NULL)
    {
        pBS->FreePool(BootOrder);
    }
    if (FixedBootPriorities != NULL)
    {
        pBS->FreePool(FixedBootPriorities);
    }
    if (UefiDevOrder != NULL)
    {
        pBS->FreePool(UefiDevOrder);
    }
    if (LegacyDevOrder != NULL)
    {
        pBS->FreePool(LegacyDevOrder);
    }
}

/**
    UefiDevOrder and FboLegacyDevOrder variables contain the
    disabled flags saved by setup.  Need to update the disabled
    flag to BootOptionList right before any other functions
    that will process the BootOptionList.
    BootOptionList will be set to NOT ACTIVE for disabled
    DevOrder, ACTIVE for enabled one.

    @param VOID

    @retval VOID

**/
VOID FboSyncBootOptionsFromDevOrder()
{
    UEFI_DEVICE_ORDER *UefiOrder = NULL, *UefiGroup = NULL;
#if CSM_SUPPORT
    LEGACY_DEVICE_ORDER *LegacyOrder = NULL, *LegacyGroup = NULL;
#endif
    UINTN DevOrderSize = 0;
    DLINK *Link;
    BOOT_OPTION *Option;
    INT32 j;
    EFI_STATUS Status;
    UINT16 DeviceCount;

    if (gBdsSkipFBOModule)
        return;
    //
    // Set ACTIVE information according to UefiDevOrder
    //
    Status = GetEfiVariable(L"UefiDevOrder", &gFixedBootOrderGuid, NULL, &DevOrderSize, (VOID **)&UefiOrder);
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[fbo] Get UefiDevOrder: %r\n", Status));
    if (!EFI_ERROR(Status))
    {
        for (UefiGroup = UefiOrder; (UINT8 *)UefiGroup < (UINT8 *)UefiOrder + DevOrderSize; UefiGroup = NEXT_DEVICE(UEFI_DEVICE_ORDER, UefiGroup))
        {
            DeviceCount = DEVORDER_COUNT(UefiGroup);

            // loop through boot option numbers within this group
            for (j = 0; j < DeviceCount; j++)
            {
                // set up Option->Attributes.LOAD_OPTION_ACTIVE
                FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
                {
                    if (IsLegacyBootOption(Option))
                        continue;

                    if ((UefiGroup->Device[j] & FBO_UEFI_ORDER_MASK) == Option->BootOptionNumber) // [31:24] = disabled flag
                    {
                        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[fbo] %S.Device[%d] = %x\n", Option->Description, j, UefiGroup->Device[j]));
                        if (UefiGroup->Device[j] & FBO_UEFI_DISABLED_MASK) // disabled?
                            Option->Attributes &= ~LOAD_OPTION_ACTIVE;
                        else
                            Option->Attributes |= LOAD_OPTION_ACTIVE;
                    }
                }
            }
        }
    }

    if (UefiOrder != NULL)
        pBS->FreePool(UefiOrder);

#if CSM_SUPPORT
    {
        //
        // Set ACTIVE information according to FboLegacyDevOrder
        //

        // The flow of this FboLegacyDevOrder variable:
        // 1. Updated the BootOptionList.Attributes from FboLegacyDevOrder right after boot options are
        //    read from NVRAM in FboSyncBootOptionsFromDevOrder() to reflect the setup controls.
        // 2. Attributes will be changed to HIDDEN and NOT ACTIVE according to boot mode in FBO_UpdateBootListPriority().
        // 3. Save the disabled information here for setup to use before we modifying the Attributes later
        //    in FBO_UpdateBootListPriority().
        // 4. OldLegacyDevOrder variable indicates the sequence of legacy boot options by group in BootOptionList
        //    after reading from NVRAM, we need it to compare with FboLegacyDevOrder variable to find out options
        //    should set ACTIVE attribute or INACTIVE attribute.

        LEGACY_DEVICE_ORDER *OldLegacyOrder = NULL, *OldLegacyGroup = NULL;
        UINTN OldDevOrderSize = 0;

        Status = GetEfiVariable(L"FboLegacyDevOrder", &gFixedBootOrderGuid, NULL, &DevOrderSize, (VOID **)&LegacyOrder);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[fbo] Get FboLegacyDevOrder: %r\n", Status));

        if (!EFI_ERROR(Status))
        {
            Status = GetEfiVariable(L"OriFboLegacyDevOrder", &gFixedBootOrderGuid, NULL, &OldDevOrderSize, (VOID **)&OldLegacyOrder);
            DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "[fbo] Get OldLegacyDevOrder: %r\n", Status));

            if (!EFI_ERROR(Status))
            {
                INT32 DevCount[FBO_GROUP_TYPE_MAX_NUM] = {0};
                UINT32 PreviousType = 0;

                FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
                {
                    UINT32 DevType;
                    INT32 DevIndex;

                    if (!IsLegacyBootOption(Option) || Option->GroupHeader)
                        continue;

                    if (!Option->BbsEntry)
                    {
                        //
                        //  orphan option
                        //
                        EFI_DEVICE_PATH *Dp;
                        EFI_GUID FboBoTagDpGuid = FBO_BO_TAG_DEVICE_PATH_GUID;

                        DevType = BoTagLegacyOther;
                        Dp = Option->FilePathList;
                        do
                        {
                            if (Dp->Type == HARDWARE_DEVICE_PATH && Dp->SubType == HW_VENDOR_DP)
                            {
                                FBO_BO_TAG_DEVICE_PATH *FboTagDp = (FBO_BO_TAG_DEVICE_PATH *)Dp;
                                if (!MemCmp(&FboTagDp->Header.Guid, &FboBoTagDpGuid, sizeof(EFI_GUID)))
                                {
                                    DevType = FboTagDp->BoTag;
                                    break;
                                }
                            }
                            Dp = NextDevicePathNode(Dp);
                        } while (!IsDevicePathEndType(Dp));
                    }
                    else
                    {
                        DevType = BOOT_OPTION_GET_BBS_ENTRY_DEVICE_TYPE_FUNCTION(Option->BbsEntry);
                    }

                    if (PreviousType != DevType)
                    {
                        PreviousType = DevType;
                        LegacyGroup = FindLegacyDeviceGroupByType(LegacyOrder, DevOrderSize, DevType);
                        OldLegacyGroup = FindLegacyDeviceGroupByType(OldLegacyOrder, OldDevOrderSize, DevType);
                    }

                    if (LegacyGroup == NULL || OldLegacyGroup == NULL)
                        continue;

                    j = DevCount[DevType]++;
#if GROUP_BOOT_OPTIONS_BY_TAG
                    DevIndex = FindPositionInTheGroupByBbsIndex(LegacyGroup, OldLegacyGroup->Device[j]);
#else
                    DevIndex = j;
#endif
                    // FixedBootOrderSaveChange function doesn't save FboLegacyDevOrder variable as
                    // group sequence we change in Setup, and that cause AdjustLegacyBootOptionPriorities
                    // function update the wrong Priority to Option, hence, we disable
                    // AdjustLegacyBootOptionPriorities function by SDL and update correct priority here.
                    Option->Priority += (DevIndex - j) * DEFAULT_PRIORITY_INCREMENT;
                    j++;

                    if (LegacyGroup->Device[DevIndex] & FBO_LEGACY_DISABLED_MASK)
                    {
                        Option->Attributes &= ~LOAD_OPTION_ACTIVE;
                    }
                    else
                    {
                        Option->Attributes |= LOAD_OPTION_ACTIVE;
                    }
                }
            }
        }

        if (OldLegacyOrder != NULL)
            pBS->FreePool(OldLegacyOrder);
        if (LegacyOrder != NULL)
            pBS->FreePool(LegacyOrder);
    }

#endif //#if CSM_SUPPORT
}

/**
    Adjust Ethernet default priority (IPV4 and IPV6)
    Token ETHERNET_DEFAULT_PRIORITY will control ipv4 and ipv6 in network group.
    ETHERNET_DEFAULT_PRIORITY is 0, ipv4 at the front.
    ETHERNET_DEFAULT_PRIORITY is 1, ipv6 at the front.

    @param VOID

    @retval VOID

**/
VOID FboAdjustEthernetDefaultPriority()
{
    EFI_HANDLE *EthernetHandle;
    UINTN HandleCount = 0, x;
    EFI_STATUS Status;
    BOOT_DEVICE *Device;
    DLINK *Link;

    UINT8 FirstPrioritySubType = MSG_IPv4_DP;
    UINT8 SecondPrioritySubType = MSG_IPv6_DP;

#if FBO_ETHERNET_DEFAULT_PRIORITY_POLICY
    FirstPrioritySubType = MSG_IPv6_DP;
    SecondPrioritySubType = MSG_IPv4_DP;
#endif

    if (!BootDeviceList->Size)
        return;
    EthernetHandle = MallocZ(BootDeviceList->Size * sizeof(EFI_HANDLE));

    FOR_EACH_BOOT_DEVICE(BootDeviceList, Link, Device)
    {
        EFI_DEVICE_PATH_PROTOCOL *Dp = NULL;

        // Skip legacy boot device.
        if (Device->BbsIndex != INVALID_BBS_INDEX || Device->BbsEntry)
            continue;
        // Get device path
        Status = pBS->HandleProtocol(Device->DeviceHandle,
                                     &gEfiDevicePathProtocolGuid,
                                     (VOID **)&Dp);
        if (EFI_ERROR(Status))
            continue;

        // Skip not Ethernet device .
        for (; !(IsDevicePathEndType(Dp)); Dp = NextDevicePathNode(Dp))
        {
            if (Dp->Type == MESSAGING_DEVICE_PATH && Dp->SubType == FirstPrioritySubType)
            {
                EthernetHandle[HandleCount] = Device->DeviceHandle;
                DeleteBootDevice(BootDeviceList, Device);
                HandleCount++;
            }
        }
    }

    for (x = 0; x < HandleCount; x++)
        CreateBootDevice(BootDeviceList, EthernetHandle[x], INVALID_BBS_INDEX, NULL);
    HandleCount = 0;

    FOR_EACH_BOOT_DEVICE(BootDeviceList, Link, Device)
    {
        EFI_DEVICE_PATH_PROTOCOL *Dp = NULL;

        // Skip legacy boot device.
        if (Device->BbsIndex != INVALID_BBS_INDEX || Device->BbsEntry)
            continue;
        // Get device path
        Status = pBS->HandleProtocol(Device->DeviceHandle,
                                     &gEfiDevicePathProtocolGuid,
                                     (VOID **)&Dp);
        if (EFI_ERROR(Status))
            continue;

        // Skip not Ethernet device .
        for (; !(IsDevicePathEndType(Dp)); Dp = NextDevicePathNode(Dp))
        {
            if (Dp->Type == MESSAGING_DEVICE_PATH && Dp->SubType == SecondPrioritySubType)
            {
                EthernetHandle[HandleCount] = Device->DeviceHandle;
                DeleteBootDevice(BootDeviceList, Device);
                HandleCount++;
            }
        }
    }

    for (x = 0; x < HandleCount; x++)
        CreateBootDevice(BootDeviceList, EthernetHandle[x], INVALID_BBS_INDEX, NULL);
    pBS->FreePool(EthernetHandle);
}

/**
    Build a Device Path Contains BoTag

    @param VOID

    @retval VOID

**/
VOID FboBuildTagPath(
    IN BOOT_OPTION *Option,
    IN UINT16 BoTag)
{
    static FBO_BO_TAG_DEVICE_PATH FboBoTagDpTemplate = {
        {{HARDWARE_DEVICE_PATH,
          HW_VENDOR_DP,
          {(UINT8)(sizeof(FBO_BO_TAG_DEVICE_PATH)),
           (UINT8)((sizeof(FBO_BO_TAG_DEVICE_PATH)) >> 8)}},
         FBO_BO_TAG_DEVICE_PATH_GUID},
        0};

    EFI_DEVICE_PATH_PROTOCOL *Dp, *NewDp;
    EFI_GUID gFboBoTagDevicePath = FBO_BO_TAG_DEVICE_PATH_GUID;

    // Try To Find BoTag Device Path
    Dp = Option->FilePathList;
    do
    {

        if (Dp->Type == HARDWARE_DEVICE_PATH &&
            Dp->SubType == HW_VENDOR_DP &&
            !MemCmp((Dp + 1), &gFboBoTagDevicePath, sizeof(EFI_GUID)))
        {
            // Found !!
            return;
        }
        Dp = NextDevicePathNode(Dp);
    } while (!IsDevicePathEndType(Dp));

    // Update BoTag Device path
    FboBoTagDpTemplate.BoTag = BoTag;
    NewDp = Dp = Malloc(sizeof(FboBoTagDpTemplate) + Option->FilePathListLength);
    MemCpy(Dp, Option->FilePathList, DevicePathNodeLength(Option->FilePathList));
    *(UINT8 **)&Dp += DevicePathNodeLength(Option->FilePathList);
    MemCpy(Dp, &FboBoTagDpTemplate, sizeof(FBO_BO_TAG_DEVICE_PATH));
    *(UINT8 **)&Dp += sizeof(FBO_BO_TAG_DEVICE_PATH);
    MemCpy(Dp, ((UINT8 *)Option->FilePathList + DevicePathNodeLength(Option->FilePathList)), Option->FilePathListLength - DevicePathNodeLength(Option->FilePathList));
    pBS->FreePool(Option->FilePathList);
    Option->FilePathList = NewDp;
    Option->FilePathListLength += sizeof(FBO_BO_TAG_DEVICE_PATH);
    return;
}
/**
    Set Legacy Boot Option Device Type to Native Type

    @param VOID

    @retval VOID

**/
VOID FboSetLegacyDeviceType()
{
    DLINK *Link;
    BOOT_OPTION *Option;

    // FBO will restore Device type to BoTag for Fixed Boot Order
    // save OldLegacyDevOrder with BoTag
    // FboSyncBootOptionsFromDevOrder() will check OldLegacyDevOrder and FboLegacyDevOrder
#if defined(CSM_SUPPORT) && CSM_SUPPORT
    UINTN DevOrderSize;
    LEGACY_DEVICE_ORDER *DevOrder;

    SortList(BootOptionList, ComparePriorityThenBootOptionNumber);

    BuildLegacyDevOrderBuffer(&DevOrder, &DevOrderSize);
    pRS->SetVariable(
        L"OldLegacyDevOrder", &LegacyDevOrderGuid,
        BOOT_VARIABLE_ATTRIBUTES, DevOrderSize, DevOrder);
    pBS->FreePool(DevOrder);
#endif
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (!IsLegacyBootOption(Option))
            continue;

        // Save FboBoTag into Device path
        FboBuildTagPath(Option, ((BBS_BBS_DEVICE_PATH *)Option->FilePathList)->DeviceType);

        // Update GroupHeader Device type from child boot option
        if (Option->GroupHeader)
        {
            BOOT_OPTION *Option1;
            DLINK *Link1;
            FOR_EACH_BOOT_OPTION(BootOptionList, Link1, Option1)
            {
                if (!Option1->GroupHeader &&
                    (Option1->BootOptionNumber == Option->BootOptionNumber))
                {
                    ((BBS_BBS_DEVICE_PATH *)Option->FilePathList)->DeviceType =
                        GetBbsEntryDeviceTypeDefault(Option1->BbsEntry);
                    break;
                }
            }
        }
        else
        {

            ((BBS_BBS_DEVICE_PATH *)Option->FilePathList)->DeviceType =
                GetBbsEntryDeviceTypeDefault(Option->BbsEntry);
        }
    }
#if defined(CSM_SUPPORT) && CSM_SUPPORT
    SortList(BootOptionList, ComparePriorityThenBootOptionNumber);

    BuildLegacyDevOrderBuffer(&DevOrder, &DevOrderSize);
    pRS->SetVariable(
        L"LegacyDevOrder", &LegacyDevOrderGuid,
        BOOT_VARIABLE_ATTRIBUTES, DevOrderSize, DevOrder);
    pBS->FreePool(DevOrder);
#endif
}
/**
    Set BoTag to Legacy Boot Option Device Type.
    Fbo Need BoTag to orgnize Legacy Options

    @param VOID

    @retval VOID

**/
VOID FboUpdateBoTagDeviceType()
{
    DLINK *Link;
    BOOT_OPTION *Option;
    EFI_GUID gFboBoTagDevicePath = FBO_BO_TAG_DEVICE_PATH_GUID;

    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        FBO_BO_TAG_DEVICE_PATH *Dp;
        if (!IsLegacyBootOption(Option))
            continue;

        // Get BoTag
        Dp = (FBO_BO_TAG_DEVICE_PATH *)Option->FilePathList;
        do
        {

            if (Dp->Header.Header.Type == HARDWARE_DEVICE_PATH &&
                Dp->Header.Header.SubType == HW_VENDOR_DP &&
                !MemCmp(&Dp->Header.Guid, &gFboBoTagDevicePath, sizeof(EFI_GUID)))
            {
                // Update Device type
                ((BBS_BBS_DEVICE_PATH *)Option->FilePathList)->DeviceType = Dp->BoTag;
                break;
            }
            Dp = (FBO_BO_TAG_DEVICE_PATH *)NextDevicePathNode((EFI_DEVICE_PATH_PROTOCOL *)Dp);
        } while (!IsDevicePathEndType((EFI_DEVICE_PATH_PROTOCOL *)Dp));
    }
}
/**
    Check For new Device, set "AmiEmaIndications"

    @param VOID

    @retval VOID

**/
VOID Fbo_CheckForNewDevice(
    VOID)
{
    DLINK *Link;
    BOOT_OPTION *Option;
    UINT32 EmaIndications = FBO_EMA_INDICATION_VALUE;
    UINTN EMAIndicationSize = sizeof(UINT32);
    BOOLEAN DeviceChanged = FALSE;
    EFI_GUID gEMAIndicationsGuid = EMA_INDICATION_GUID;

    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        if (Option->GroupHeader)
            continue;

        // Orphan Boot Option, Device is removed
        if (!IsBootOptionWithDevice(Option))
            DeviceChanged = TRUE;

        // New Device
        if (Option->BootOptionNumber == INVALID_BOOT_OPTION_NUMBER)
            DeviceChanged = TRUE;
    }

    if (DeviceChanged)
    {
        pRS->SetVariable(
            L"AmiEmaIndications",
            &gEMAIndicationsGuid,
            EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS | EFI_VARIABLE_RUNTIME_ACCESS,
            EMAIndicationSize,
            &EmaIndications);
    }
}

#if !TseDefaultBootOrder_SUPPORT
VOID FboSetDefaultTseBootOrder(VOID)
{
#if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
    UINTN DevOrderSize;
    LEGACY_DEVICE_ORDER *DevOrder;
    EFI_GUID DefaultLegacyDevOrderGuid = DEFAULT_LEGACY_DEV_ORDER_VARIABLE_GUID;
    LEGACY_DEVICE_ORDER *Order;
    UINTN i;
#endif // #if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
    UINTN BootOrderSize;

    // PRECONDITION: All Boot Option Numbers are set
    BootOrderSize = BootOptionList->Size * sizeof(UINT16);
    if (BootOrderSize == 0)
    {
#if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
        // if the boot order is empty, delete the Default boot order variables
        pRS->SetVariable(
            L"DefaultLegacyDevOrder",
            &DefaultLegacyDevOrderGuid,
            BOOT_VARIABLE_ATTRIBUTES,
            0,
            NULL);
#endif // #if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
        return;
    }

    // SortList(BootOptionList, CompareTagThenBbsIndex);

#if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
    // Build DefaultLegacyDevOrder variable
    BuildLegacyDevOrderBuffer(&DevOrder, &DevOrderSize);

    // Remove disable mask from buffer DevOrder
    for (Order = DevOrder;
         (UINT8 *)Order < (UINT8 *)DevOrder + DevOrderSize;
         Order = (LEGACY_DEVICE_ORDER *)((UINT8 *)Order + Order->Length + sizeof(Order->Type)))
        for (i = 0; i < (Order->Length / sizeof(UINT16) - 1); i++)
        {
            Order->Device[i] &= 0x00FF;
            DEBUG((FBO_TRACE_LEVEL, "Order->Device[%x]= %x \n", i, Order->Device[i]));
        }

    // Store "DefaultLegacyDevOrder" EFI variable
    pRS->SetVariable(
        L"DefaultLegacyDevOrder",
        &DefaultLegacyDevOrderGuid,
        BOOT_VARIABLE_ATTRIBUTES,
        DevOrderSize,
        DevOrder);
    pBS->FreePool(DevOrder);
#endif // #if defined(CSM_SUPPORT) && CSM_SUPPORT == 1
}
#endif

/**
    Adjust Setup Priorities Buffer.

    @param SetupBuffer       Buffer of group priorities
    @param CurrentGroupSize  Number of the groups
    @param BufferSize        Size of the buffer

    @retval EFI_SUCCESS        The number of the group doesn't change
    @retval EFI_MEDIA_CHANGED  The number of the group changed

**/
EFI_STATUS
AdjustSetupData(
    UINT16 *SetupBuffer,
    UINT16 CurrentGroupSize,
    UINT16 BufferSize)
{
    UINT16 i, j;
    EFI_STATUS Status = EFI_SUCCESS;
    BOOLEAN LoadDefault = FALSE;

    if (SetupBuffer == NULL || CurrentGroupSize == 0 || BufferSize == 0)
    {
        return Status;
    }

    for (i = 0; i < BufferSize && *(SetupBuffer + i) != 0xFF; i++)
        ;

    if (i != CurrentGroupSize)
        LoadDefault = TRUE;
    if (LoadDefault)
    {
        // Load default when Group size is changed.
        // We don't try to sort old settings and save them into new BIOS setup.
        // Because 0 can be every group
        // EX : 0 is HDD in old BIOS and it can be NVME in this BIOS
        for (j = 0; j < CurrentGroupSize; j++)
            *(SetupBuffer + j) = j;
        if (j < BufferSize)
            *(SetupBuffer + j) = 0xFF;
        Status = EFI_MEDIA_CHANGED;
    }
    return Status;
}

/**
    FBO group size might be changed after BIOS updated.
    Handle different size here

    @param VOID

    @retval VOID

**/
VOID FboSetupSizeCheck(
    VOID)
{
    EFI_STATUS Status;
    FIXED_BOOT_PRIORITIES *FixedBootPriorites = NULL;
    UINT32 VarAttr;
    UINTN VarSize = 0;

    Status = GetEfiVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, &VarAttr, &VarSize, (VOID **)&FixedBootPriorites);
    if (EFI_ERROR(Status))
        return;
    Status = AdjustSetupData((UINT16 *)&FixedBootPriorites->LegacyPriorities[0], FBO_LEGACY_DEVICE_TYPE_NUM, FBO_LEGACY_DEVICE_TYPE_NUM);
    Status |= AdjustSetupData((UINT16 *)&FixedBootPriorites->UefiPriorities[0], FBO_UEFI_DEVICE_TYPE_NUM, FBO_UEFI_DEVICE_TYPE_NUM);
#if FBO_DUAL_MODE
    Status |= AdjustSetupData((UINT16 *)&FixedBootPriorites->DualPriorities[0], FBO_DUAL_DEVICE_TYPE_NUM, FBO_DUAL_DEVICE_TYPE_NUM);
#endif
    if (Status == EFI_MEDIA_CHANGED)
    {
        pRS->SetVariable(L"FixedBootPriorities", &gFixedBootOrderGuid, VarAttr, VarSize, FixedBootPriorites);
    }
}
