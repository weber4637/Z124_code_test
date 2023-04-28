//***********************************************************************
//*                                                                     *
//*                      Copyright (c) 1985-2021, AMI.                  *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file DefaultFixedBootOrder.c

    Default FixedBootOrder Boot type setting.
*/

//----------------------------------------------------------------------
// Include Files
//----------------------------------------------------------------------
#include <Token.h>
#include <Uefi.h>
#include <AmiDxeLib.h>
#include <BootOptions.h>
#if CSM_SUPPORT
#include <Protocol/LegacyBios.h>
#endif
#include <Protocol/DiskInfo.h>
#include <Setup.h>
#include "../FixedBootOrder.h"
#include "DefaultFixedBootOrder.h"
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>
#include <Library/DevicePathLib.h>
//
//  For backward compatibility.
//
#ifndef MSG_SD_DP
#define MSG_SD_DP                 0x1A
#endif

//
//  For Arm projects, if AmiUsb is not used.
//
#ifndef MAX_SIZE_FOR_USB_FLOPPY_EMULATION
#define MAX_SIZE_FOR_USB_FLOPPY_EMULATION   530
#endif

//========== DEVICE MAP DATA ENTRIES ==========
//
//  UEFI DEVICE
//
#define UEFI_DEVICE {BoTagUefi, 0, 0xff, 0},
//
//  HDD
//
#if !FBO_MULTI_HARD_DISK_GROUPS
#define UEFI_HDD    {BoTagUefiHardDisk,  0, FBO_USELESS_PORT_NUMBER, F_HDD},
#else
#define UEFI_HDD    {BoTagUefiHardDisk,  0, 0x00, F_HDD},
#endif
#define UEFI_HDD1   {BoTagUefiHardDisk1, 0, 0x01, F_HDD},
#define UEFI_HDD2   {BoTagUefiHardDisk2, 0, 0x02, F_HDD},
#define UEFI_HDD3   {BoTagUefiHardDisk3, 0, 0x03, F_HDD},
#define UEFI_HDD4   {BoTagUefiHardDisk4, 0, 0x04, F_HDD},
#define UEFI_HDD5   {BoTagUefiHardDisk5, 0, 0x05, F_HDD},
//
//  UEFI NVME
//
#define UEFI_NVME   {BoTagUefiNvme,        0, FBO_USELESS_PORT_NUMBER, 0},
//
//  UEFI  APPLICATION
//
#define UEFI_APPLICATION {BoTagUefiApplication, 0, FBO_USELESS_PORT_NUMBER, 0},
//
//  UEFI ODD
//
#define UEFI_ODD     {BoTagUefiCdrom,       0, FBO_USELESS_PORT_NUMBER, 0},
//
//  UEFI SD
//
#define UEFI_SD      {BoTagUefiSd,       0, FBO_USELESS_PORT_NUMBER, 0},
//
//  UEFI USB
//
#define UEFI_USB     {BoTagUefiUsb,         0, FBO_USELESS_PORT_NUMBER, 0},
#define UEFI_USBHDD  {BoTagUefiUsbHardDisk, 0, FBO_USELESS_PORT_NUMBER, 0},
#define UEFI_USBODD  {BoTagUefiUsbCdrom,    0, FBO_USELESS_PORT_NUMBER, 0},
#define UEFI_USBKEY  {BoTagUefiUsbKey,      0, FBO_USELESS_PORT_NUMBER, 0},
#define UEFI_USBFDD  {BoTagUefiUsbFloppy,   0, FBO_USELESS_PORT_NUMBER, 0},
#define UEFI_USBLAN  {BoTagUefiUsbLan,      0, FBO_USELESS_PORT_NUMBER, 0},
//
//  UEFI NETWORK
//
#define UEFI_NETWORK {BoTagUefiNetWork,     0, FBO_USELESS_PORT_NUMBER, 0},

//
//  UEFI Other Group
//
#if OTHER_GROUP
#define UEFI_OTHER   {BoTagUefiOther,     0, FBO_USELESS_PORT_NUMBER, 0},
#endif

//
//  LEGACY HDD
//
#if !FBO_MULTI_HARD_DISK_GROUPS
#define HDD     {BoTagLegacyHardDisk,     BBS_HARDDISK,      FBO_USELESS_PORT_NUMBER, F_HDD},
#else
#define HDD     {BoTagLegacyHardDisk,     BBS_HARDDISK,      0x00, F_HDD},
#endif
#define HDD1    {BoTagLegacyHardDisk1,    BBS_HARDDISK,      0x01, F_HDD},
#define HDD2    {BoTagLegacyHardDisk2,    BBS_HARDDISK,      0x02, F_HDD},
#define HDD3    {BoTagLegacyHardDisk3,    BBS_HARDDISK,      0x03, F_HDD},
#define HDD4    {BoTagLegacyHardDisk4,    BBS_HARDDISK,      0x04, F_HDD},
#define HDD5    {BoTagLegacyHardDisk5,    BBS_HARDDISK,      0x05, F_HDD},
//
//  LEGACY NVME 
//
#define NVME         {BoTagLegacyNvme,        BBS_HARDDISK,      FBO_USELESS_PORT_NUMBER, 0},
//
//  LEGACY ODD
//
#define ODD       {BoTagLegacyCdrom,        BBS_CDROM,         FBO_USELESS_PORT_NUMBER, 0},
//
//  LEGACY SD
//
#define SD        {BoTagLegacySd,           BBS_HARDDISK,      FBO_USELESS_PORT_NUMBER, 0},
//
//  LEGACY USB
//
#define USB       {BoTagLegacyUsb,          BBS_USB,           FBO_USELESS_PORT_NUMBER, F_USB | F_USBKEY},
#define USBHDD    {BoTagLegacyUSBHardDisk,  BBS_HARDDISK,      FBO_USELESS_PORT_NUMBER, F_USB},
#define USBODD    {BoTagLegacyUSBCdrom,     BBS_CDROM,         FBO_USELESS_PORT_NUMBER, F_USB},
#define USBKEY    {BoTagLegacyUSBKey,       BBS_HARDDISK,      FBO_USELESS_PORT_NUMBER, F_USB | F_USBKEY},
#define USBFDD    {BoTagLegacyUSBFloppy,    BBS_FLOPPY,        FBO_USELESS_PORT_NUMBER, F_USB},
#define USBLAN    {BoTagLegacyUSBLan,       BBS_EMBED_NETWORK, FBO_USELESS_PORT_NUMBER, F_USB},
//
//  LEGACY NETWORK
//
#define NETWORK   {BoTagLegacyEmbedNetwork, BBS_EMBED_NETWORK, FBO_USELESS_PORT_NUMBER, 0},
//
//  LEGACY OTHER GROUP
//
#if OTHER_GROUP
#define OTHER   {BoTagLegacyOther,     BBS_UNKNOWN, FBO_USELESS_PORT_NUMBER, 0},
#endif

//---------------------------------------------------------------------------
// Global Variable declarations
//---------------------------------------------------------------------------
UINT8 gBdsSkipFBOModule = 0 ;
//---------------------------------------------------------------------------
// External functions
//---------------------------------------------------------------------------
EFI_HANDLE GetPhysicalBlockIoHandle(EFI_HANDLE BlockIoHandle);
BOOLEAN IsUSBkeyByHandle(EFI_HANDLE Handle);
#if BDS_VERSION >= 17
BOOLEAN IsShellDevicePath(EFI_DEVICE_PATH_PROTOCOL *Dp);
#else
BOOLEAN IsShellBootOption(BOOT_OPTION *Option);
#endif
UINT32 FBO_FindTagPriority(UINT32 Tag);
extern VOID SetBootOptionTags() ;
//---------------------------------------------------------------------------
// External Variables
//---------------------------------------------------------------------------
extern EFI_GUID gFixedBootOrderGuid;
//---------------------------------------------------------------------------
// Global Variable declarations
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Function Definitions
//---------------------------------------------------------------------------
UINT32 GetUefiBootOptionTag(IN BOOT_OPTION *Option) ;
EFI_STATUS SetDevNewDescription(EFI_DEVICE_PATH_PROTOCOL *DpHead, CHAR16 *Description) ;
BOOLEAN IsUsbDp(IN EFI_DEVICE_PATH_PROTOCOL *Dp, OUT UINT32 *AvailableNodes OPTIONAL);
//---------------------------------------------------------------------------
// Type definitions
//---------------------------------------------------------------------------
typedef VOID (FBO_CHANGE_DEVICE_NAME)(FBO_DEVICE_INFORM *Content);
extern FBO_CHANGE_DEVICE_NAME FBO_CHANGE_DEVICE_NAME_FUNCS EndOfFboChangeDeviceName ;
FBO_CHANGE_DEVICE_NAME *FboChangeDeviceNameFuncs[] = { FBO_CHANGE_DEVICE_NAME_FUNCS NULL } ;

FIXED_BOOT_OPTION_TAG FixedLegacyBootOptionTags[] = {
    0,
    BoTagLegacyFloppy,
    BoTagLegacyHardDisk,
    BoTagLegacyCdrom,
    BoTagLegacyPcmcia,
    BoTagLegacyUsb,
    BoTagLegacyEmbedNetwork,
    BoTagLegacyBevDevice,
    BoTagLegacyUSBFloppy,
    BoTagLegacyUSBHardDisk,
    BoTagLegacyUSBCdrom,
    BoTagLegacyUSBKey,
    BoTagLegacyUSBLan,
    BoTagLegacyHardDisk1,
    BoTagLegacyHardDisk2,
    BoTagLegacyHardDisk3,
    BoTagLegacyHardDisk4,
    BoTagLegacyHardDisk5,
    BoTagLegacySd,
    BoTagLegacyNvme,
    BoTagLegacyOther,
    UNASSIGNED_HIGHEST_TAG
};

FBODevMap FBOUefiDevMapData[]={
    //
    // Refer to Build/DefaultFixedBootOrder.h
    // and Device Map Data Entries
    //
    FBO_UEFI_DEVICE
    {  0, 0 }	//end of data
};

#if CSM_SUPPORT
FBODevMap FBOLegacyDevMapData[]={
    //
    // Refer to Build/DefaultFixedBootOrder.h
    // and Device Map Data Entries
    //
    FBO_LEGACY_DEVICE
    {  0, 0 }	//end of data
};

FBODevMap FBODualDevMapData[]={
    //
    // Refer to Build/DefaultFixedBootOrder.h
    // and Device Map Data Entries
    //
    FBO_DUAL_DEVICE
    {  0, 0 }	//end of data
};
#endif



/**
    Set Bds Skip FBO Module Flag, 

    @param VOID

    @retval VOID

    @note  None

**/
VOID 
BdsSetSkipFBOModuleFlag()
{
    EFI_STATUS Status;
    UINTN  Size = 0;
    UINT32 Attr;
    UINT8 *Flag = NULL ;
    EFI_GUID FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;
    Status = GetEfiVariable(L"CurrentSkipFboModule", &FixedBootOrderGuid, &Attr, &Size, (VOID**)&Flag);
    if (!EFI_ERROR(Status))
    {
        if (*Flag) gBdsSkipFBOModule = 1 ;
        else gBdsSkipFBOModule = 0 ;
        pBS->FreePool(Flag) ;
    }
    else
        gBdsSkipFBOModule = 0 ;
}

/**
    Initialize the group map 

    @param VOID

    @retval VOID

    @retval EFI_STATUS Status of this Procedure

**/
    
EFI_STATUS DefaultFixedBootOrder_Init(IN void)
{
    EFI_STATUS Status;
    EFI_FIXED_BOOT_ORDER_PROTOCOL *pFBO=NULL;

    BdsSetSkipFBOModuleFlag() ;
    if (gBdsSkipFBOModule) return EFI_SUCCESS ;
    
    Status = pBS->LocateProtocol( &gFixedBootOrderGuid, NULL, (VOID**)&pFBO );
    if ( !EFI_ERROR(Status) )
    {
        pFBO->SetUefiDevMap( FBOUefiDevMapData );
#if CSM_SUPPORT
        pFBO->SetLegacyDevMap( FBOLegacyDevMapData );
        pFBO->SetDualDevMap( FBODualDevMapData );
#endif
    }
    return Status;
}

//reference CRB SbSetup.c

UINT16 gSATA[3][2] = {
    { 0, 1 },
    { 2, 3 },
    { 4, 5 }
};

//*************************************************************************
/**
    Use handle and EFI_DISK_INFO_PROTOCOL to find sata port.

    @param 
        IN EFI_HANDLE

    @retval 
        None.

**/
//*************************************************************************
UINT16 GetHddPort(IN EFI_HANDLE Handle)
{
    EFI_STATUS Status;
    EFI_DISK_INFO_PROTOCOL *DiskInfo;
    EFI_DEVICE_PATH_PROTOCOL *DevicePath;
    UINT32 IdeChannel;
    UINT32 IdeDevice;

    Status = pBS->HandleProtocol(
                 Handle,
                 &gEfiDevicePathProtocolGuid,
                 (VOID**)&DevicePath);

    if (!EFI_ERROR(Status))
    {
        EFI_DEVICE_PATH_PROTOCOL    *DevicePathNode = DevicePath;
        EFI_DEVICE_PATH_PROTOCOL    *MessagingDevicePath = NULL;
        PCI_DEVICE_PATH             *PciDevicePath = NULL;
        
        while (!IsDevicePathEndType(DevicePathNode))
        {
            if ((DevicePathNode->Type == HARDWARE_DEVICE_PATH)
                    && (DevicePathNode->SubType == HW_PCI_DP))
            {
                PciDevicePath = (PCI_DEVICE_PATH *) DevicePathNode;
            }
            else if (DevicePathNode->Type == MESSAGING_DEVICE_PATH)
            {
                MessagingDevicePath = DevicePathNode;
            }

            DevicePathNode = NextDevicePathNode(DevicePathNode);
        }

        Status = pBS->HandleProtocol(Handle, &gEfiDiskInfoProtocolGuid, (VOID**)&DiskInfo);
        if (!EFI_ERROR(Status))
        {
            Status = DiskInfo->WhichIde(DiskInfo, &IdeChannel, &IdeDevice);
            if (!EFI_ERROR(Status))
            {
                if (MessagingDevicePath && MessagingDevicePath->SubType == MSG_ATAPI_DP) //IDE mode?
                {
                    if (PciDevicePath && PciDevicePath->Function == 5)
                    {
                        return gSATA[IdeDevice+2][IdeChannel];
                    }
                    else
                    {
                        return gSATA[IdeDevice][IdeChannel];
                    }
                }
                else
                {
                    return (UINT16)IdeChannel;	//AHCI Port Number
                }
            }
        }
    }
    return FBO_USELESS_PORT_NUMBER;
}

#if CSM_SUPPORT
/**
    Get the device port number according to bbs table

    @param BBS_TABLE *BbsTable - bbs table

    @retval UINT16 Port number

**/
UINT16 GetDevicePortNumber(BBS_TABLE *BbsTable)
{
    EFI_HANDLE Handle = *(VOID**)(&BbsTable->IBV1);

    if ( BbsTable->DeviceType == BBS_HARDDISK )
        return GetHddPort(Handle);

    return FBO_USELESS_PORT_NUMBER;
}
#endif	//#if CSM_SUPPORT

/**
    Change Boot Option Group Name, OEM have two way to modify Group Name in run time, such as USB Key - > OEM USB Key
    1.Provide StrToken(Define in .uni), New Group Name.
    FboChangeGroupName( STR_BOOT_HDD, NULL, NewGroupName) ;
    2.Provide Original Group Name(ex:Hard Disk), New Group Name.
    FboChangeGroupName( 0, OrgGroupName, NewGroupName) ;  
          
    @note  EIP 143657

**/
EFI_STATUS
FboChangeGroupName(
    IN OPTIONAL UINT16 StrToken,
    IN OPTIONAL CHAR16* OrgGroupName, 
    IN CHAR16* NewGroupName )
{
    EFI_STATUS Status ;
    UINT32 Attr ;
    UINTN Size = 0 ,*GroupPtrAddr = NULL ;
    FBO_GROUP_OPTION *Group = NULL ;
    EFI_GUID FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID ;
    
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE,"DefaultFixedBootOrder.c FboChangeGroupName\n")) ;
    if (StrToken == 0 && OrgGroupName == NULL )
        return EFI_INVALID_PARAMETER ;
    
    Status = GetEfiVariable(L"FboGroupNameData", &FixedBootOrderGuid, &Attr, &Size, (VOID**)&GroupPtrAddr);
    if(EFI_ERROR(Status))
    {
        Group = MallocZ(sizeof(FBO_GROUP_OPTION)) ;
        // Firsrt time, Restore the group pointer address to variable.
        Status = pRS->SetVariable ( L"FboGroupNameData",
                                    &FixedBootOrderGuid,
                                    EFI_VARIABLE_BOOTSERVICE_ACCESS,
                                    sizeof(UINTN),
                                    &Group );
    }
    else
    {
        // Go To the last node.
        Group = (FBO_GROUP_OPTION*)*GroupPtrAddr ;
        pBS->FreePool(GroupPtrAddr) ; // Avoid memory leak

        while (Group->Next)
            Group = Group->Next ;
        // Create the new node.
        Group->Next = MallocZ(sizeof(FBO_GROUP_OPTION)) ;
        Group = Group->Next ;
    }

    Group->NewGroupName = MallocZ( StrLen(NewGroupName) * sizeof(CHAR16) + 1) ;
    StrCpyS( Group->NewGroupName, StrLen(NewGroupName) * sizeof(CHAR16) + 1, NewGroupName) ;
    if (StrToken) Group->StrToken = StrToken ;
    else
    {
        Group->OrgGroupName = MallocZ( StrLen(OrgGroupName) * sizeof(CHAR16) + 1) ;
        StrCpyS( Group->OrgGroupName, StrLen(OrgGroupName) * sizeof(CHAR16) + 1, OrgGroupName) ;
    }
    return EFI_SUCCESS ;
}

/**
    Get Device Information(Description, Type, Path) by BootOptionList

    @param FBO_DEVICE_INFORM **DevHead

    @retval FBO_DEVICE_INFORM **DevHead
 
    @note  EIP 143657

**/
VOID
GetDevInformByBootOptionList(
    FBO_DEVICE_INFORM **DevHead)
{
    FBO_DEVICE_INFORM *DevInform = NULL;
    EFI_DEVICE_PATH_PROTOCOL *Dp = NULL ;
    DLINK *Link;
    BOOT_OPTION *Option;
    
    FOR_EACH_BOOT_OPTION(BootOptionList, Link, Option)
    {
        BOOLEAN UsbPortFlag = FALSE ;
        if (Option->GroupHeader) continue ;
        if (!DevInform)
            *DevHead = DevInform = MallocZ(sizeof(FBO_DEVICE_INFORM)) ;
        else
        {
            DevInform->Next = MallocZ(sizeof(FBO_DEVICE_INFORM)) ;
            DevInform = DevInform->Next ;
        }
        
        DevInform->DevName = Option->Description ;
        // Set Default value.
        DevInform->DevPortNum = 0xff ;
        DevInform->DevBDF = 0xffffffff ; 
        
#if CSM_SUPPORT
        if (IsLegacyBootOption(Option))
        {
            EFI_STATUS Status;
            // Legacy Option need use Handle Protocol to get correct Device Path.
            Status = pBS->HandleProtocol(*(VOID**)(&Option->BbsEntry->IBV1), &gEfiDevicePathProtocolGuid, (VOID**)&Dp);
            if (EFI_ERROR(Status)) continue ;
            DevInform->DevPath = Dp ;
            DevInform->DevType = (UINT16)(0xff&Option->Tag) ;
            DevInform->DevBDF = (UINT32) (Option->BbsEntry->Bus << 16)|
                                                                  (Option->BbsEntry->Device << 11) |
                                                                  (Option->BbsEntry->Function << 8);
        }
        else 
#endif
        {
            UINT32 Bus = 0 ;   
            // Uefi Option just need get device path by Option->FilePathList.
            DevInform->DevPath = Option->FilePathList ;
            DevInform->DevType = (UINT16)GetUefiBootOptionTag(Option) ;
            
            // Get Uefi Option BDF
            Dp = DevInform->DevPath ;
            while(!(IsDevicePathEndType(Dp)))
            {
                if ( Dp->Type == ACPI_DEVICE_PATH && Dp->SubType == ACPI_DP )
                {
                    Bus = ((ACPI_HID_DEVICE_PATH*)Dp)->UID ;
                }
                else if ( Dp->Type == HARDWARE_DEVICE_PATH && Dp->SubType == HW_PCI_DP )
                {
                    DevInform->DevBDF = (UINT32) (Bus << 16) |
                                                                          (((PCI_DEVICE_PATH*)Dp)->Device << 11) |
                                                                          (((PCI_DEVICE_PATH*)Dp)->Function << 8);        
                    break ;
                }
                Dp=NextDevicePathNode(Dp) ;
            }
        }
        
        // Get USB and SATA Port Number
        Dp = DevInform->DevPath ;
        while (!(IsDevicePathEndType(Dp)))
        {
            if ( Dp->Type == MESSAGING_DEVICE_PATH && Dp->SubType == MSG_SATA_DP )
            {
                DevInform->DevPortNum = ((SATA_DEVICE_PATH*)Dp)->HBAPortNumber ;
                break ;
            }
            else if ( Dp->Type == MESSAGING_DEVICE_PATH && Dp->SubType == MSG_USB_DP )
            {
                if (!UsbPortFlag) UsbPortFlag = TRUE ;
                else
                {
                    DevInform->DevPortNum = (UINT16)((USB_DEVICE_PATH*)Dp)->ParentPortNumber ;
                    break ;
                }
            }
            Dp=NextDevicePathNode(Dp) ;
        }
    }
}

/**
    Set Device New Description

    @param EFI_DEVICE_PATH_PROTOCOL *DpHead
        CHAR16 *Description
    @retval 

    @note  OEM can use this function to update new device description.
            example: SetDevNewDescription(Dp, L"OEM USB Key")
**/
EFI_STATUS
SetDevNewDescription(
    EFI_DEVICE_PATH_PROTOCOL *DpHead, 
    CHAR16 *Description)
{
    EFI_STATUS Status = EFI_SUCCESS;
    EFI_FIXED_BOOT_ORDER_PROTOCOL*FBOProtocol ;
    EFI_GUID FixedBootOrderGuid=FIXED_BOOT_ORDER_GUID;
    Status = pBS->LocateProtocol (&FixedBootOrderGuid, NULL, (VOID**)&FBOProtocol);
    if (!EFI_ERROR(Status))
    {
        // Prepare FBO_DEVICE_INFORM data
        FBO_DEVICE_INFORM *SetData = MallocZ(sizeof(FBO_DEVICE_INFORM));
        EFI_DEVICE_PATH_PROTOCOL *Dp = NULL ;
        UINTN DpSize = 0 ;
        Dp = DpHead ;
        for ( ; !(IsDevicePathEndType(Dp)) ; Dp=NextDevicePathNode(Dp))
            DpSize+=DevicePathNodeLength(Dp) ;
        DpSize += sizeof(EFI_DEVICE_PATH_PROTOCOL) ; //End Node Size
        
        SetData->DevName = MallocZ(StrLen(Description)*sizeof(CHAR16)+1) ;
        SetData->DevPath = MallocZ(DpSize) ;
        StrCpyS( SetData->DevName, StrLen(Description)*sizeof(CHAR16)+1, Description);
        MemCpy( SetData->DevPath, DpHead, DpSize);
        // Set to new description.
        Status = FBOProtocol->SetNewDescription( SetData ) ;
    }
    return Status ;
}

/**
    Change FBO Device Name

    @param 

    @retval 

    @note  EIP 143657

**/
VOID
FBO_AdjustDeviceName()
{
    FBO_DEVICE_INFORM *Node = NULL, *PreNode = NULL ;
    UINT16 x ;
    GetDevInformByBootOptionList(&Node) ;
    for ( x=0 ; FboChangeDeviceNameFuncs[x] ; x++)
        FboChangeDeviceNameFuncs[x](Node) ;
    
    // Free Linked list data ;
    while (Node)
    {
        PreNode = Node;
        Node = Node->Next;
        pBS->FreePool(PreNode);
    }
}

/**
    Go through the entire boot option list and Apply priorities for
    each entry in the list.

    @param DLIST *BootOptionList - the entire Boot Option List

    @retval VOID

    @note  To change boot order priorities

**/
VOID FBO_SetBootOptionTags() {
    DLINK *Link;
    BOOT_OPTION *Option;
    UINT32 UefiBootOptionsInc = DEFAULT_PRIORITY_INCREMENT;

    if (gBdsSkipFBOModule) 
    {
        SetBootOptionTags() ;
        return ;
    }
    
    FOR_EACH_BOOT_OPTION(BootOptionList,Link,Option) {
        UINT32 TagPriority;
        UINT32 BaseTag = UNASSIGNED_HIGHEST_TAG;
#if CSM_SUPPORT
        if (IsLegacyBootOption(Option)) {
            UINT16 DeviceType;
            DeviceType = ((BBS_BBS_DEVICE_PATH*)Option->FilePathList)->DeviceType;
            if ( DeviceType == BoTagLegacyBevDevice )
                BaseTag = DeviceType;
            else if ( DeviceType != BBS_UNKNOWN )
                BaseTag = FixedLegacyBootOptionTags[DeviceType];
            if (BaseTag == UNASSIGNED_HIGHEST_TAG) continue;
        } else
#endif
#if BDS_VERSION >= 17
            if (IsShellDevicePath(Option->FilePathList)) BaseTag = BoTagEmbeddedShell;
#else
            if (IsShellBootOption(Option)) BaseTag = BoTagEmbeddedShell;
#endif
            else BaseTag = BoTagUefi;
        
        TagPriority = FBO_FindTagPriority(BaseTag);
        //UEFI boot options must have unique tags, otherwise then will be groupped when
        //GROUP_BOOT_OPTIONS_BY_TAG tokens is enabled
        if (BaseTag == BoTagUefi) BaseTag += UefiBootOptionsInc++;
        Option->Tag = BootOptionTag(BaseTag, TagPriority);
    }
}

/**
    Get the Hard Disk's tag (type) according to its port number

    @param BOOT_OPTION *Option - Boot option to find the port number

    @retval UINT32 device tag (type)

**/
UINT32 GetUefiHardDiskTagByPort(
    IN BOOT_OPTION *Option
)
{
    EFI_FIXED_BOOT_ORDER_PROTOCOL *FixedBootOrderProtocol;
    EFI_STATUS Status;

    Status = pBS->LocateProtocol(
                &gFixedBootOrderGuid,
                NULL,
                (VOID**)&FixedBootOrderProtocol
            );

    //
    // Get Uefi Map and compare Port with it.
    //
    if(!EFI_ERROR(Status))
    {
        FBODevMap *UefiDevMap = FixedBootOrderProtocol->GetUefiDevMap();
        if(NULL != UefiDevMap)
        {
            UINT16 DevMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
            UINT16 DevMapIdx;

            for(DevMapIdx = 0; DevMapIdx < DevMapCount; DevMapIdx++)
            {
                //
                // Only Compare with HDD
                //
                if(UefiDevMap[DevMapIdx].Attr != F_HDD) continue;

                if(UefiDevMap[DevMapIdx].Port != FBO_USELESS_PORT_NUMBER)
                {
                    //
                    // Get Port and Compare it with table's
                    //
                    EFI_HANDLE Handle = GetPhysicalBlockIoHandle(Option->DeviceHandle);
                    UINT32 Port = GetHddPort(Handle);

                    if(UefiDevMap[DevMapIdx].Port == Port)
                        return UefiDevMap[DevMapIdx].DevType;
                }
                else
                {
                    return UefiDevMap[DevMapIdx].DevType;
                }
            }
        }
        else
        {
            DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "Get UefiDevMap fail\n"));
        }
    }
    else
    {
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "Get Fixed Boot Order Protocol fail\n"));
    }

    return BoTagUefi;
}

/*
    Get Tag according drive type.

    @param Option Used to get device path

    @retval UINT32 device tag (type)

*/
UINT32 GetTagByDriveType(BOOT_OPTION *Option)
{
#if NVME_GROUP_SUPPORT    
    EFI_STATUS Status;
    EFI_DEVICE_PATH_PROTOCOL *Dp;

    Status = pBS->HandleProtocol(
                Option->DeviceHandle,
                &gEfiDevicePathProtocolGuid,
                (VOID**)&Dp);

    if (!EFI_ERROR(Status)) 
    {
        EFI_DEVICE_PATH_PROTOCOL *DpPtr = Dp;
        for ( ; !(IsDevicePathEndType(DpPtr)); DpPtr = NextDevicePathNode(DpPtr))
        {
            if (DpPtr->Type == MESSAGING_DEVICE_PATH
                    && DpPtr->SubType == MSG_NVME_NAMESPACE_DP)
                return BoTagUefiNvme;
        }
    }
#endif
    return GetUefiHardDiskTagByPort(Option);
}

/**
    Check whether Uefi Hdd with sata to usb adapter

    @param BOOT_OPTION *Option - boot option

    @retval TRUE   Is Uefi Hdd with sata to usb adapter
	@retval FALSE  Isn't Uefi Hdd With sata to usb adapter

**/
BOOLEAN IsSataToUsbHdd(BOOT_OPTION *Option)
{
    EFI_STATUS Status;
    EFI_DEVICE_PATH_PROTOCOL *Dp;
    EFI_BLOCK_IO_PROTOCOL *BlkIo;

    if(Option && Option->DeviceHandle)
    {
        EFI_GUID EfiBlockIoProtocolGuid = EFI_BLOCK_IO_PROTOCOL_GUID;

        Status = pBS->HandleProtocol(
                    Option->DeviceHandle,
                    &EfiBlockIoProtocolGuid,
                    (VOID**)&BlkIo);

        if(!EFI_ERROR(Status))
        {
            if(!BlkIo->Media->RemovableMedia)
            {
                Status = pBS->HandleProtocol(
                            Option->DeviceHandle,
                            &gEfiDevicePathProtocolGuid,
                            (VOID**)&Dp);

                if(!EFI_ERROR(Status))
                {
                    return IsUsbDp(Dp, NULL);
                }
            }
        }
    }

    return FALSE;
}

/**
    Function returns device type for given handle

    @param BOOT_OPTION *Option - boot option

    @retval UINT32 device type

**/
UINT32 GetUefiBootOptionTag(
    IN BOOT_OPTION *Option
)
{
#if !EFI_DEVICE_IN_ONE_GROUP
    EFI_STATUS Status;
    EFI_HANDLE Handle, BlockHandle;
    EFI_DEVICE_PATH_PROTOCOL *Dp = NULL;
    EFI_DEVICE_PATH_PROTOCOL *DpPtr = NULL;
    BOOLEAN IsUSB = FALSE;

    Status = pBS->HandleProtocol(Option->DeviceHandle, &gEfiDevicePathProtocolGuid, (VOID**)&Dp);
    if (EFI_ERROR(Status)) Dp = Option->FilePathList;
    if (Dp == NULL) return UNASSIGNED_HIGHEST_TAG;
    DpPtr = Dp;
    
#if SHELL_GROUP_SUPPORT                             //(EIP115686+)>
#if BDS_VERSION >= 17
    if (IsShellDevicePath(Option->FilePathList))
#else
    if (IsShellBootOption(Option))
#endif
        return BoTagUefiApplication;
#endif                                              //<(EIP115686+)

    for ( ; !(IsDevicePathEndType(DpPtr)); DpPtr = NextDevicePathNode(DpPtr))
    {
        if (DpPtr->Type == MESSAGING_DEVICE_PATH)
        {
            if (DpPtr->SubType == MSG_USB_DP)
            {
#if USB_GROUP == 1
                return BoTagUefiUsb;
#elif USB_GROUP == 2
                IsUSB = TRUE;
#endif
            }
            //Check Windows To Go USB Hard Disk boot option. (EIP101213+)>
            if (DpPtr->SubType == MSG_USB_CLASS_DP)
#if USB_GROUP == 1
                return BoTagUefiUsb;
#elif USB_GROUP == 0
                return BoTagUefiHardDisk;
#else
                return BoTagUefiUsbHardDisk;
#endif
            else					     //<(EIP101213+)
                if (DpPtr->SubType == MSG_MAC_ADDR_DP)
                {
                    if ( IsUSB ) return BoTagUefiUsbLan ;
                    return BoTagUefiNetWork;
                }
                else if ( (DpPtr->SubType == MSG_IPv4_DP) || (DpPtr->SubType == MSG_IPv6_DP) )
                {   
                    if ( IsUSB ) return BoTagUefiUsbLan ;
                    else  return BoTagUefiNetWork;
                }
                else if (DpPtr->SubType == MSG_SD_DP)
                    return BoTagUefiSd;

            continue;
        }

        if (DpPtr->Type == MEDIA_DEVICE_PATH)
        {
#if PUT_SATA_TO_USB_HDD_INTO_UEFI_USB_HDD_GROUP
            //
            //  Uefi Hdd with sata to usb adapter may be treated as fixed device so 
            //  EfiOsBootOptionNames creates boot option for it without usb dp 
            //  in device path.
            //
            if(!IsUSB && IsSataToUsbHdd(Option))
#if USB_GROUP == 1
                return BoTagUefiUsb;
#elif USB_GROUP == 0
                return BoTagUefiHardDisk;
#else
                return BoTagUefiUsbHardDisk;
#endif
#endif //PUT_SATA_TO_USB_HDD_INTO_UEFI_USB_HDD_GROUP

            if (!IsUSB && DpPtr->SubType == MEDIA_HARDDRIVE_DP)
            {
                UINT32  BoTag = GetTagByDriveType(Option);
                if(BoTag != BoTagUefi)
                    return BoTag;
            }
            else if (!IsUSB && DpPtr->SubType == MEDIA_CDROM_DP)
                return BoTagUefiCdrom;
            else if (IsUSB && DpPtr->SubType == MEDIA_HARDDRIVE_DP)
            {
                Status=pBS->LocateDevicePath(&gEfiSimpleFileSystemProtocolGuid, &Dp, &Handle);
                if (!EFI_ERROR(Status))
                {
                    BlockHandle = GetPhysicalBlockIoHandle(Handle);
                    if ( IsUSBkeyByHandle( BlockHandle ) )
                        return BoTagUefiUsbKey;
                    else
                        return BoTagUefiUsbHardDisk;
                }
            }
            else if (IsUSB && DpPtr->SubType == MEDIA_CDROM_DP)
                return BoTagUefiUsbCdrom;
        }
    }
    //(EIP96232+)>

    if ( IsUSB )
    {
        Status=pBS->LocateDevicePath(&gEfiSimpleFileSystemProtocolGuid, &Dp, &Handle);
        if (!EFI_ERROR(Status))
        {
            EFI_BLOCK_IO_PROTOCOL *BlkIo;

            BlockHandle = GetPhysicalBlockIoHandle(Handle);

            if ( !EFI_ERROR( pBS->HandleProtocol(
                                 BlockHandle,
                                 &gEfiBlockIoProtocolGuid,
                                 (VOID**)&BlkIo)))
            {
//(EIP133551+)>
                UINT64 SizeInMb;
        	
                SizeInMb = MultU64x32(BlkIo->Media->LastBlock + 1, BlkIo->Media->BlockSize);
                SizeInMb = DivU64x32(SizeInMb, 1000000);

                if( SizeInMb > USBKEY_RANGE_SIZE )  //size > 32G? (Token default).
                    return BoTagUefiUsbHardDisk;
                else
                if( SizeInMb > MAX_SIZE_FOR_USB_FLOPPY_EMULATION )  //size > 530M? (Token default).
                    return BoTagUefiUsbKey;
//<(EIP133551+)
                return BoTagUefiUsbFloppy;
            }
        }
    }
    //<(EIP96232+)
#endif  //#if !EFI_DEVICE_IN_ONE_GROUP
#if OTHER_GROUP
    return BoTagUefiOther;
#endif
    return BoTagUefi;
}
/**
    Since FixedBootOrder may creates the legacy types that are not
    in starandard specification, the group name will be constructed
    as "Unknown Device" by default, we need to add the new
    construction rule to change the name by inserting this eLink.     

    @param BOOT_OPTION *Option - boot option
        CHAR16 *Name - buffer to save the name
        UINTN NameSize - maximum of name size

    @retval VOID
**/
UINTN ConstructGroupNameByFBO(
    BOOT_OPTION *Option, CHAR16 *Name, UINTN NameSize
)
{
    FBO_GROUP_NAME      DevTypeToName[] = {FBO_LEGACY_TYPE_TO_NAME,{0,NULL}};
    BBS_BBS_DEVICE_PATH *Dp = (BBS_BBS_DEVICE_PATH*)(Option->FilePathList);
    UINTN               i;
    
    if (gBdsSkipFBOModule) return 0 ;
    if(!Option->GroupHeader) return 0;

    if (!IsLegacyBootOption(Option)) return 0;
    
    // Find Match Device Type and Update Name
    for(i = 0 ; DevTypeToName[i].LegacyDevType != 0 ; i++)
        if(DevTypeToName[i].LegacyDevType == Dp->DeviceType)
            return UnicodeSPrint(Name, NameSize, L"%s",DevTypeToName[i].DeviceName);

    return 0;  
}
