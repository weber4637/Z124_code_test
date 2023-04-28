//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2021, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file FboGroupForm.c

    This file resolve group form call back and event.
*/
#include <AmiDxeLib.h>
#include <Protocol/HiiUtilities.h>
#include "../FixedBootOrder.h"
#include "FixedBootOrderHii.h"
#include "Token.h"
#include <Setup.h>
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>
#include <Protocol/HiiConfigAccess.h>
#include <Protocol/HiiString.h>
#include <Protocol/HiiDatabase.h>
#include <Protocol/FormBrowser2.h>
#include <Protocol/HiiConfigRouting.h>
#include "FboGroupFormStrDefs.h"

#if CSM_SUPPORT
#include <Protocol/LegacyBios.h>
#endif

typedef struct
{
    UINT32 Type;
    UINT16 Length;
    UINT16 Device[1];
} LEGACY_DEVICE_ORDER;

EFI_STATUS FboGroupFormCallback(
    IN CONST EFI_HII_CONFIG_ACCESS_PROTOCOL *This,
    IN EFI_BROWSER_ACTION Action,
    IN EFI_QUESTION_ID KeyValue,
    IN UINT8 Type,
    IN EFI_IFR_TYPE_VALUE *Value,
    OUT EFI_BROWSER_ACTION_REQUEST *ActionRequest);

static EFI_GUID gFixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;
static EFI_GUID gFboGroupFormFormSetGuid = FBO_GROUP_FORM_FORM_SET_GUID;

EFI_HII_CONFIG_ACCESS_PROTOCOL CallBack = {NULL, NULL, FboGroupFormCallback};
CALLBACK_INFO SetupCallBack[] =
    {
        {&gFboGroupFormFormSetGuid, &CallBack, FBO_GROUP_FORM_FORM_SET_CLASS, 0, 0},
};

FBODevMap *gFboLegacyDevMap = NULL;
FBODevMap *gFboUefiDevMap = NULL;
FBOHiiMap *gFboHiiMap = NULL;

FIXED_BOOT_GROUP *gFixedBootGroup = NULL;
FIXED_BOOT_SETUP *gFixedBoot = NULL;

/**
    Search HiiMap data index by device type.

    @param DevType  Device Type want to Search

    @retval UINT16  Index of the Device Type
    @note  None
**/
UINT16 SearchHiiMapByType(UINT32 DevType)
{
    UINT16 i = 0;

    do
    {
        if (gFboHiiMap[i].DevType == 0)
            break; // end of data
        if (gFboHiiMap[i].DevType == DevType)
            return i;
        i++;
    } while (1);

    return 0xffff;
}

/**
    Search DevMap data index by device type.

    @param  FBODevMap   Device Map
    @param  DevType     Device Type want to search

    @retval UINT16      Index of Device Type in Device Map
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
    Avoid each group boot priorities from being duplicated to each
    other by using INTERACTIVE callback.

    @param NvRamBootDevice -
    @param OldBootDevice -
    @param DeviceIndex -
    @param DeviceCount -

    @retval EFI_STATUS -
**/
EFI_STATUS
GroupkeyProcess(
    IN OUT UINT8 *NewBootDevice,
    IN UINT8 *OldBootDevice,
    IN OUT UINT8 DeviceIndex,
    IN UINT8 DeviceCount)
{
    UINTN i, j;
    UINT8 NewVal = NewBootDevice[DeviceIndex];
    UINT8 OldVal = OldBootDevice[DeviceIndex];
    BOOLEAN UpdateBootDevice = FALSE;

    for (i = 0; i < DeviceCount; i++)
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "%d ", NewBootDevice[i]));
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "\n"));

    // Prepare For a correct value for Disabled Item
    if (OldVal == FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
    {
        if (NewVal == 0)
        {
            // assume + is pressed
            for (i = 0; i < (DeviceCount - 1); i++)
            {
                for (j = 0; j < DeviceCount; j++)
                {
                    if (j == DeviceIndex)
                        continue;
                    if (i == NewBootDevice[j])
                    {
                        UpdateBootDevice = TRUE;
                        break;
                    }
                }
                if (j == DeviceCount)
                    break;
            }
        }
        else if (NewVal == (DeviceCount - 1))
        {
            // assume - is pressed
            for (i = (DeviceCount - 1); i > 0; i--)
            {
                for (j = 0; j < DeviceCount; j++)
                {
                    if (j == DeviceIndex)
                        continue;
                    if (i == NewBootDevice[j])
                    {
                        UpdateBootDevice = TRUE;
                        break;
                    }
                }
                if (j == DeviceCount)
                    break;
            }
        }
        if (UpdateBootDevice)
        {
            NewBootDevice[DeviceIndex] = (UINT8)i;
            NewVal = (UINT8)i;
        }
    }

    if (OldVal == NewVal)
    {
        return EFI_SUCCESS;
    }
#if FIXED_BOOT_INCLUDE_DISABLED_OPTION
    else if (OldVal == FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
    {
        //
        //  Disabled to Enabled
        //
        for (i = 0; i < DeviceIndex; i++)
        {
            //
            //  Duplicated value
            //
            if (OldBootDevice[i] == NewVal)
            {
                NewBootDevice[DeviceIndex] = FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
                break;
            }

            //
            //  Find first disabled device then exchange
            //
            if (NewBootDevice[i] == FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
            {
                NewBootDevice[i] = NewVal;
                NewBootDevice[DeviceIndex] = FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
                break;
            }
        }
    }
    else if (NewVal == FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
    {
        //
        //  Enabled to Disabled
        //

        j = DeviceIndex;
        for (i = j + 1; i < DeviceCount; i++)
        {
            //
            //  Move disabled one to last step by step.
            //
            if (NewBootDevice[i] != FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
            {
                NewBootDevice[j] = NewBootDevice[i];
                NewBootDevice[i] = FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
                j = i;
            }
        }
    }
#endif
    else
    {
        //
        //  Both are not equal and disabled.
        //
        for (i = 0; i < DeviceCount; i++)
        {
            if (i == DeviceIndex)
                continue;
            if (NewVal == NewBootDevice[i])
                NewBootDevice[i] = OldVal;
        }
    }

    for (i = 0; i < DeviceCount; i++)
    {
        OldBootDevice[i] = NewBootDevice[i];
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "%d ", NewBootDevice[i]));
    }
    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "\n"));

    return EFI_SUCCESS;
}

/**
    New the string with all supported language .

    @param Handle
    @param StrId
    @param String

    @retval EFI_STATUS

    @note  None
**/
EFI_STATUS
NewStringWithLanguage(
    IN EFI_HANDLE Handle,
    IN EFI_STRING_ID *StrId,
    IN CHAR16 *String)
{
    EFI_STATUS Status;
    CHAR8 *Languages = NULL;
    CHAR8 *OriLanguages = NULL;
    UINTN LangSize = 0;
    EFI_HII_STRING_PROTOCOL *pHiiString;
    BOOLEAN LastLanguage = FALSE, FirstLanguage = TRUE;
    CHAR8 *CurrentLanguage = NULL;

    //
    // Get Hii String Protocol
    //
    Status = pBS->LocateProtocol(&gEfiHiiStringProtocolGuid, NULL, (VOID **)&pHiiString);
    if (EFI_ERROR(Status))
        return Status;

    //
    // Get Languages
    //
    Status = pHiiString->GetLanguages(pHiiString, Handle, Languages, &LangSize);
    if (Status != EFI_BUFFER_TOO_SMALL)
        return Status;

    Status = pBS->AllocatePool(EfiBootServicesData, LangSize, (VOID **)&Languages);
    if (EFI_ERROR(Status))
        return Status; // not enough resources to allocate string

    Status = pHiiString->GetLanguages(pHiiString, Handle, Languages, &LangSize);

    if (EFI_ERROR(Status))
        return Status;

    Status = pBS->AllocatePool(EfiBootServicesData, LangSize, (VOID **)&CurrentLanguage);
    if (EFI_ERROR(Status))
        return Status;

    OriLanguages = Languages;
    while (!LastLanguage)
    {
        UINTN lc = 0;

        // Copy language code to CurrentLanguage
        while (*Languages != ';' && *Languages != 0 && lc < LangSize)
        {
            CurrentLanguage[lc++] = *Languages;
            Languages++;
        }
        CurrentLanguage[lc] = 0;

        if (*Languages == 0) // last language in language list
            LastLanguage = TRUE;

        if (FirstLanguage)
        {
            Status = pHiiString->NewString(pHiiString, Handle, StrId, CurrentLanguage, NULL, String, NULL);
            FirstLanguage = FALSE;
        }
        else
        {
            Status = pHiiString->SetString(pHiiString, Handle, *StrId, CurrentLanguage, String, NULL);
        }
        Languages++;
    }
    pBS->FreePool(CurrentLanguage);
    pBS->FreePool(OriLanguages);

    return Status;
}
/**
    Get Supported Language from List

    @param Handle
    @param LanguageList Language List
    @retval Language    Language supported
**/
EFI_STATUS
GetSupportedLanguage(
    IN EFI_HII_HANDLE Handle,
    IN CHAR8 *LanguageList,
    OUT CHAR8 **SupportedLang)
{
    CHAR8 *TempLanguage = LanguageList, *pLanguage = LanguageList;
    UINTN Size = 0x100;
    CHAR16 BootOptionStr[0x100 + 1];
    EFI_STATUS Status;

    EFI_HII_STRING_PROTOCOL *pHiiString;

    Status = pBS->LocateProtocol(&gEfiHiiStringProtocolGuid, NULL, &pHiiString);
    if (EFI_ERROR(Status))
        return Status;

    while (*pLanguage != 0)
    {
        if ((*pLanguage == ';'))
        {
            CHAR8 TempChar = *pLanguage;

            *pLanguage = 0;
            Status = pHiiString->GetString(pHiiString,
                                           TempLanguage,
                                           Handle,
                                           STRING_TOKEN(STR_BOOT_OPTION),
                                           BootOptionStr, &Size, NULL);

            if (!EFI_ERROR(Status))
            {
                // Supported Language found, dont need pLanguage anymore
                Status = pBS->AllocatePool(EfiBootServicesData,
                                           Strlen(TempLanguage) + 1,
                                           SupportedLang);
                // If fail, return Orginal pointer
                if (EFI_ERROR(Status))
                {
                    *pLanguage = TempChar;
                    return Status;
                }

                pBS->CopyMem(*SupportedLang,
                             TempLanguage,
                             Strlen(TempLanguage) + 1);
                *pLanguage = TempChar;
                return EFI_SUCCESS;
            }
            *pLanguage = TempChar;
            TempLanguage = pLanguage + 1;
        }
        pLanguage++;
    }

    Status = pHiiString->GetString(
        pHiiString,
        TempLanguage,
        Handle,
        STRING_TOKEN(STR_BOOT_OPTION),
        BootOptionStr,
        &Size,
        NULL);
    if (EFI_ERROR(Status))
        return Status;

    Status = pBS->AllocatePool(EfiBootServicesData, Strlen(TempLanguage) + 1, SupportedLang);
    if (EFI_ERROR(Status))
        return Status;

    pBS->CopyMem(*SupportedLang, TempLanguage, Strlen(TempLanguage) + 1);
    // The Last Language, just return the status
    return EFI_SUCCESS;
}

/**
    Install multi-language for STR_BOOT_OPTION.

    @param Handle           Hii Handle
    @param BootOptionNumber BootOption Number

    @retval STRING_REF      String reference
**/
STRING_REF
HiiAddLanguageBootOptionString(
    IN EFI_HII_HANDLE Handle,
    IN UINT16 BootOptionNumber,
    IN UINT16 MappingStringID)
{
    EFI_STATUS Status;
    CHAR8 *Languages = NULL;
    CHAR8 *CurrentLanguage = NULL;
    CHAR8 *OrgLanguages = NULL;
    UINTN LangSize = 0;
    BOOLEAN LastLanguage = FALSE;
    EFI_STRING_ID StringId = 0;

    UINTN Size = 0;
    CHAR16 BootOptionStr[0x100 + 1];
    CHAR16 BootStr[0x100 + 1];
#if FBO_MAPPING_LANGUAGE_SUPPORT
    CHAR16 MappingStr[0x100 + 1];
    UINTN Count = MappingStringID + 400; // Fixed ID in UNI file is FBO336, add 400 here
#endif
    EFI_HII_STRING_PROTOCOL *pHiiString;

    //
    // Get Hii String Protocol
    //
    Status = pBS->LocateProtocol(&gEfiHiiStringProtocolGuid, NULL, (VOID **)&pHiiString);
    if (EFI_ERROR(Status))
        return 0;

    //
    // Get Languages
    //
    Status = pHiiString->GetLanguages(pHiiString, Handle, Languages, &LangSize);
    if (Status != EFI_BUFFER_TOO_SMALL)
        return 0;

    Status = pBS->AllocatePool(EfiBootServicesData, LangSize, (VOID **)&Languages);
    if (EFI_ERROR(Status))
        return 0; // not enough resources to allocate string

    Status = pHiiString->GetLanguages(pHiiString, Handle, Languages, &LangSize);
    if (EFI_ERROR(Status))
        return 0;

    // CurrentLanguage contains the individual language code inside Languages
    Status = pBS->AllocatePool(EfiBootServicesData, LangSize, (VOID **)&CurrentLanguage);
    if (EFI_ERROR(Status))
        return 0;

    OrgLanguages = Languages;
    while (!LastLanguage)
    {
        int lc = 0;

        // Copy language code to CurrentLanguage
        while (*Languages != ';' && *Languages != 0 && lc < LangSize)
        {
            CurrentLanguage[lc++] = *Languages;
            Languages++;
        }
        CurrentLanguage[lc] = 0;

        if (*Languages == 0) // last language in language list
            LastLanguage = TRUE;

        if (CurrentLanguage[0] == 'x' && CurrentLanguage[1] == '-')
        {
            Languages++;
            continue;
        }
        Size = 0x100;
        Status = pHiiString->GetString(pHiiString,
                                       CurrentLanguage,
                                       Handle,
                                       STRING_TOKEN(STR_BOOT_OPTION),
                                       BootOptionStr, &Size, NULL);
        if (EFI_ERROR(Status)) // Language not defined in .uni
        {
            CHAR8 *LangBuffer = NULL;
            // Get support in OrgLanguages
            Status = GetSupportedLanguage(Handle, OrgLanguages, &LangBuffer);
            if (!EFI_ERROR(Status))
            {
                Status = pHiiString->GetString(
                    pHiiString, LangBuffer, Handle,
                    STRING_TOKEN(STR_BOOT_OPTION),
                    BootOptionStr, &Size, NULL);
                pBS->FreePool(LangBuffer);
            }
            if (EFI_ERROR(Status))
            {
                Languages++; // skip ';'
                continue;
            }
        }

        UnicodeSPrint(BootStr, sizeof(BootStr), BootOptionStr, BootOptionNumber);

        if (StringId == 0)
            Status = pHiiString->NewString(
                pHiiString, Handle, &StringId,
                CurrentLanguage, NULL, BootStr, NULL);
        else
            Status = pHiiString->SetString(
                pHiiString, Handle, StringId,
                CurrentLanguage, BootStr, NULL);

        Languages++;
        if (EFI_ERROR(Status))
        {
            pBS->FreePool(OrgLanguages);
            return 0;
        }
    }
#if FBO_MAPPING_LANGUAGE_SUPPORT
    // Set Configuration Language
    UnicodeSPrint(MappingStr, sizeof(MappingStr), L"FBO%03d", Count++);
    Status = pHiiString->SetString(
        pHiiString, Handle, StringId,
        "x-AMI", MappingStr, NULL);
    //
    //  AMI tool converts the language from x-AMI to x-UEFI-AMI.
    //
    if (EFI_ERROR(Status))
        Status = pHiiString->SetString(
            pHiiString, Handle, StringId,
            "x-UEFI-AMI", MappingStr, NULL);
    if (EFI_ERROR(Status))
    {
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "HiiAddLanguageBootOptionString fails to set mapping language (%r).\n", Status));
    }
#endif
    if (OrgLanguages)
        pBS->FreePool(OrgLanguages);

    if (CurrentLanguage)
        pBS->FreePool(CurrentLanguage);

    return StringId;
}

/**
    Copy Hii String to new Handle

    @param  OrgHandle       Source Handle
    @param  Org             Source
    @param  NewHandle       Destination Handle
    @param  New             Destination
    @param  HiiTokenSize    Source String Token Count

    @retval New HII string with new Handle
**/
VOID CopyHiiStringToNewHandle(
    IN EFI_HANDLE OrgHandle,
    IN HII_DEVICE_INFO *Org,
    IN OUT EFI_HANDLE NewHandle,
    IN OUT HII_DEVICE_INFO *New,
    IN UINTN HiiTokenSize)
{
    HII_DEVICE_INFO *OrgPtr, *NewPtr;
    EFI_STATUS Status;
    UINT16 i;

    for (OrgPtr = Org, NewPtr = New;
         (UINT8 *)OrgPtr < (UINT8 *)Org + HiiTokenSize;
         OrgPtr = NEXT_HII_DEVICE_INFO(OrgPtr), NewPtr = NEXT_HII_DEVICE_INFO(NewPtr))
    {
        for (i = 0; i < HII_TOKEN_COUNT(OrgPtr); i++)
        {
            STRING_REF Strid = 0;
            UINTN Size = 0;
            CHAR16 *StrBuffer = NULL;

            Status = HiiLibGetString(OrgHandle, OrgPtr->StrToken[i], &Size, StrBuffer);
            if (Status == EFI_BUFFER_TOO_SMALL)
            {
                Status = pBS->AllocatePool(EfiBootServicesData, Size, (VOID **)&StrBuffer);
                if (EFI_ERROR(Status))
                    continue;
                Status = HiiLibGetString(OrgHandle, OrgPtr->StrToken[i], &Size, StrBuffer);
                if (EFI_ERROR(Status))
                    continue;
            }
            if (EFI_ERROR(Status))
                continue;

            Status = NewStringWithLanguage(NewHandle, &Strid, StrBuffer);
            if (EFI_ERROR(Status))
                continue;

            NewPtr->StrToken[i] = Strid;
            if (StrBuffer != NULL)
                pBS->FreePool(StrBuffer);
        }
    }
}

/**
    Initial Legacy Group Form page

    @param  SetupHandle     Setup Hii Handle
    @param  GroupFormHandle GroupForm Hii Handle

    @retval NONE
**/
#if CSM_SUPPORT
EFI_STATUS
InitialLegacyHiiGroupForm(
    EFI_HANDLE SetupHandle,
    EFI_HANDLE GroupFormHandle)
{
    // Gf = Group Form
    EFI_STATUS Status = EFI_SUCCESS;
    UINT16 i, j;
    UINT16 VarFixedBootID = 0xffff;
    UINTN OrgHiiTokenSize = 0;
    UINTN DevOrderSize = 0;

    LEGACY_DEVICE_ORDER *DevOrder = NULL, *DevOrderBuffer = NULL;
    HII_DEVICE_INFO *OrgHiiToken = NULL;
    HII_DEVICE_INFO *GfHiiToken = NULL, *GfHiiTokenPtr = NULL;
    UINT8 *IfrTemp = NULL, *IfrTempPtr = NULL;
    EFI_HII_UPDATE_DATA Update;

    // Find Variable ID.
    InitHiiData(GroupFormHandle);
    VarFixedBootID = FIndVariableID("FixedBoot");
    if (VarFixedBootID == 0xffff)
        return EFI_NOT_FOUND;
    FreeHiiData();

    // Check HiiMap and LegacyDevMap
    if (!gFboHiiMap || !gFboLegacyDevMap)
        return EFI_NOT_FOUND;

    // Check variable status
    Status = GetEfiVariable(L"FixedHiiLegacyDevData",
                            &gFixedBootOrderGuid,
                            NULL,
                            &OrgHiiTokenSize,
                            &OrgHiiToken);
    if (EFI_ERROR(Status))
        goto Exit;

    Status = GetEfiVariable(L"FboLegacyDevOrder",
                            &gFixedBootOrderGuid,
                            NULL,
                            &DevOrderSize,
                            &DevOrderBuffer);
    if (EFI_ERROR(Status) || DevOrderSize <= EFI_FIELD_OFFSET(LEGACY_DEVICE_ORDER, Device))
        goto Exit;

    // Allocate necessary memory.
    GfHiiTokenPtr = GfHiiToken = MallocZ(OrgHiiTokenSize);
    IfrTemp = IfrTempPtr = MallocZ(
        (sizeof(EFI_IFR_ONE_OF) + sizeof(EFI_IFR_ONE_OF_OPTION) * (FIXED_BOOT_ORDER_SUBMENU_MAX_NUM + 1) // include one disable option
         + sizeof(EFI_IFR_END)) *
        FIXED_BOOT_ORDER_SUBMENU_MAX_NUM);
    if (!IfrTempPtr || !GfHiiToken)
        goto Exit;

    MemCpy(GfHiiToken, OrgHiiToken, OrgHiiTokenSize);

    // Copy HII device string into new handle.
    CopyHiiStringToNewHandle(SetupHandle, OrgHiiToken, GroupFormHandle, GfHiiTokenPtr, OrgHiiTokenSize);

    for (DevOrder = DevOrderBuffer;
         (UINT8 *)DevOrder < (UINT8 *)DevOrderBuffer + DevOrderSize;
         DevOrder = (LEGACY_DEVICE_ORDER *)((UINT8 *)DevOrder + DevOrder->Length + sizeof(DevOrder->Type)))
    {
        UINT16 SubmenuIndex;
        UINT16 DevDataIndex;

        if (DevOrder->Type == BBS_UNKNOWN)
            continue;

        SubmenuIndex = SearchHiiMapByType((UINT16)DevOrder->Type);
        if (SubmenuIndex == 0xFFFF)
            continue;
        if (gFboHiiMap[SubmenuIndex].FormID == 0)
            continue; // this type no Submenu

        // Use DevOrder->Type to find GfHiiToken->Type
        for (GfHiiTokenPtr = GfHiiToken;
             (UINT8 *)GfHiiTokenPtr < (UINT8 *)GfHiiToken + OrgHiiTokenSize;
             GfHiiTokenPtr = NEXT_HII_DEVICE_INFO(GfHiiTokenPtr))
        {
            if (GfHiiTokenPtr->Type == DevOrder->Type)
                break;
        }
        if ((UINT8 *)GfHiiTokenPtr >= (UINT8 *)(GfHiiToken + OrgHiiTokenSize))
            continue;

        DevDataIndex = SearchDevMapByType(gFboLegacyDevMap, GfHiiTokenPtr->Type);
        // Skip if get invalid Index
        if (DevDataIndex == 0xFFFF)
            continue;

        Update.Data = IfrTempPtr = IfrTemp; // reset IFR data memory.
        for (i = 0; i < DEVORDER_COUNT(DevOrder); i++)
        {
            UINT16 VarOffset;
            UINT16 CallBackKey;
            UINT16 Strid;

            if (i >= FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
                break;

            VarOffset = (DevDataIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM) + i; // offset to FIXED_BOOT_SETUP.LegacyDevice[]
            CallBackKey = (DevDataIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM) + i + LegacyForms_StartKey;

#if FBO_USE_BOOT_OPTION_NUMBER_UNI
            Strid = STRING_TOKEN(STR_LEGACY_BOOT_ORDER_1) + i;
#else
            Strid = HiiAddLanguageBootOptionString(GroupFormHandle, i + 1, CallBackKey - LegacyForms_StartKey);
#endif

            CreateHiiOneOfItem(&IfrTempPtr, VarFixedBootID, VarOffset, CallBackKey, Strid, STR_BOOT_OPTION_HELP, 0x10);

            for (j = 0; j < HII_TOKEN_COUNT(GfHiiTokenPtr); j++)
            {
                if (j >= FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
                    break;
                CreateHiiOneOfOptionItem(&IfrTempPtr, 0, j, GfHiiTokenPtr->StrToken[j]); // UINT8
            }

#if FIXED_BOOT_INCLUDE_DISABLED_OPTION
            CreateHiiOneOfOptionItem(&IfrTempPtr, 0, FIXED_BOOT_ORDER_SUBMENU_MAX_NUM, STR_DISABLED);
#endif
            CreateHiiIfrEndItem(&IfrTempPtr);
        }

        Update.Offset = (UINT32)((UINT8 *)IfrTempPtr - (UINT8 *)Update.Data); // Calc Hii data length.
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Update.Data...............\n"));

        Status = IfrLibUpdateForm(
            GroupFormHandle,
            NULL,
            gFboHiiMap[SubmenuIndex].FormID,
            gFboHiiMap[SubmenuIndex].Label,
            FALSE,
            &Update);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "IfrLibUpdateForm (%r)\n", Status));

        pRS->SetVariable(L"FixedGfHiiLegacyDevData",
                         &gFixedBootOrderGuid,
                         EFI_VARIABLE_BOOTSERVICE_ACCESS,
                         OrgHiiTokenSize,
                         GfHiiToken);
    }

Exit:
    pBS->FreePool(IfrTemp);
    pBS->FreePool(DevOrderBuffer);
    pBS->FreePool(OrgHiiToken);
    pBS->FreePool(GfHiiToken);
    return Status;
}
#endif

/**
    Initial UEFI Group Form page

    @param  SetupHandle     Setup Hii Handle
    @param  GroupFormHandle GroupForm Hii Handle

    @retval NONE
**/
EFI_STATUS
InitialUefiHiiGroupForm(
    EFI_HANDLE SetupHandle,
    EFI_HANDLE GroupFormHandle)
{
    // Gf = Group Form
    EFI_STATUS Status = EFI_SUCCESS;
    UINT16 i, j;
    UINT16 VarFixedBootID = 0xffff;
    UINTN OrgHiiTokenSize = 0;
    UINTN DevOrderSize = 0;

    UEFI_DEVICE_ORDER *DevOrder = NULL, *DevOrderBuffer = NULL;
    HII_DEVICE_INFO *OrgHiiToken = NULL;
    HII_DEVICE_INFO *GfHiiToken = NULL, *GfHiiTokenPtr = NULL;
    UINT8 *IfrTemp = NULL, *IfrTempPtr = NULL;
    EFI_HII_UPDATE_DATA Update;

    // Find Variable ID.
    InitHiiData(GroupFormHandle);
    VarFixedBootID = FIndVariableID("FixedBoot");
    if (VarFixedBootID == 0xffff)
        return EFI_NOT_FOUND;
    FreeHiiData();

    // Check HiiMap and LegacyDevMap
    if (!gFboHiiMap || !gFboUefiDevMap)
        return EFI_NOT_FOUND;

    // Check variable status
    Status = GetEfiVariable(L"FixedHiiUefiDevData",
                            &gFixedBootOrderGuid,
                            NULL,
                            &OrgHiiTokenSize,
                            &OrgHiiToken);
    if (EFI_ERROR(Status))
        goto Exit;

    Status = GetEfiVariable(L"UefiDevOrder",
                            &gFixedBootOrderGuid,
                            NULL,
                            &DevOrderSize,
                            &DevOrderBuffer);
    if (EFI_ERROR(Status) || DevOrderSize <= EFI_FIELD_OFFSET(UEFI_DEVICE_ORDER, Device))
        goto Exit;

    // Allocate necessary memory.
    GfHiiTokenPtr = GfHiiToken = MallocZ(OrgHiiTokenSize);
    IfrTemp = IfrTempPtr = MallocZ(
        (sizeof(EFI_IFR_ONE_OF) + sizeof(EFI_IFR_ONE_OF_OPTION) * (FIXED_BOOT_ORDER_SUBMENU_MAX_NUM + 1) // include one disable option
         + sizeof(EFI_IFR_END)) *
        FIXED_BOOT_ORDER_SUBMENU_MAX_NUM);
    if (!IfrTempPtr || !GfHiiToken)
        goto Exit;

    MemCpy(GfHiiToken, OrgHiiToken, OrgHiiTokenSize);

    // Copy HII device string into new handle.
    CopyHiiStringToNewHandle(SetupHandle, OrgHiiToken, GroupFormHandle, GfHiiTokenPtr, OrgHiiTokenSize);

    for (DevOrder = DevOrderBuffer;
         (UINT8 *)DevOrder < (UINT8 *)DevOrderBuffer + DevOrderSize;
         DevOrder = (UEFI_DEVICE_ORDER *)((UINT8 *)DevOrder + DevOrder->Length + sizeof(DevOrder->Type)))
    {
        UINT16 SubmenuIndex;
        UINT16 DevDataIndex;

        SubmenuIndex = SearchHiiMapByType(DevOrder->Type);
        if (SubmenuIndex == 0xFFFF)
            continue;
        if (gFboHiiMap[SubmenuIndex].FormID == 0)
            continue; // this type no Submenu

        // Use DevOrder->Type to find GfHiiToken->Type
        for (GfHiiTokenPtr = GfHiiToken;
             (UINT8 *)GfHiiTokenPtr < (UINT8 *)GfHiiToken + OrgHiiTokenSize;
             GfHiiTokenPtr = NEXT_HII_DEVICE_INFO(GfHiiTokenPtr))
        {
            if (GfHiiTokenPtr->Type == DevOrder->Type)
                break;
        }
        if ((UINT8 *)GfHiiTokenPtr >= (UINT8 *)GfHiiToken + OrgHiiTokenSize)
            continue;

        DevDataIndex = SearchDevMapByType(gFboUefiDevMap, GfHiiTokenPtr->Type);
        // Skip if get invalid Index
        if (DevDataIndex == 0xFFFF)
            continue;

        Update.Data = IfrTempPtr = IfrTemp; // reset IFR data memory.
        for (i = 0; i < DEVORDER_COUNT(DevOrder); i++)
        {
            UINT16 VarOffset;
            UINT16 CallBackKey;
            UINT16 Strid;

            if (i >= FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
                break;
            VarOffset = (DevDataIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM) + EFI_FIELD_OFFSET(FIXED_BOOT_SETUP, UefiDevice) + i;
            CallBackKey = (DevDataIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM) + i + UefiForms_StartKey;

#if FBO_USE_BOOT_OPTION_NUMBER_UNI
            Strid = STRING_TOKEN(STR_UEFI_BOOT_ORDER_1) + i;
#else
            Strid = HiiAddLanguageBootOptionString(GroupFormHandle, i + 1, CallBackKey - LegacyForms_StartKey);
#endif

            CreateHiiOneOfItem(&IfrTempPtr, VarFixedBootID, VarOffset, CallBackKey, Strid, STR_BOOT_OPTION_HELP, 0x10);

            for (j = 0; j < HII_TOKEN_COUNT(GfHiiTokenPtr); j++)
            {
                if (j >= FIXED_BOOT_ORDER_SUBMENU_MAX_NUM)
                    break;
                CreateHiiOneOfOptionItem(&IfrTempPtr, 0, j, GfHiiTokenPtr->StrToken[j]); // UINT8
            }

#if FIXED_BOOT_INCLUDE_DISABLED_OPTION
            CreateHiiOneOfOptionItem(&IfrTempPtr, 0, FIXED_BOOT_ORDER_SUBMENU_MAX_NUM, STR_DISABLED);
#endif
            CreateHiiIfrEndItem(&IfrTempPtr);
        }

        Update.Offset = (UINT32)((UINT8 *)IfrTempPtr - (UINT8 *)Update.Data); // Calc Hii data length.
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "Update.Data...............\n"));

        Status = IfrLibUpdateForm(
            GroupFormHandle,
            NULL,
            gFboHiiMap[SubmenuIndex].FormID,
            gFboHiiMap[SubmenuIndex].Label,
            FALSE,
            &Update);
        DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "IfrLibUpdateForm (%r)\n", Status));

        pRS->SetVariable(L"FixedGfHiiUefiDevData",
                         &gFixedBootOrderGuid,
                         EFI_VARIABLE_BOOTSERVICE_ACCESS,
                         OrgHiiTokenSize,
                         GfHiiToken);
    }

Exit:
    pBS->FreePool(IfrTemp);
    pBS->FreePool(DevOrderBuffer);
    pBS->FreePool(OrgHiiToken);
    pBS->FreePool(GfHiiToken);
    return Status;
}

/**
    Initial necessary HII data and global parameter
    with Group Form Handle

    @param  SetupHandle     - Setup Hii Handle
    @param  GroupFormHandle - GroupForm Hii Handle

    @retval NONE
**/
VOID InitGroupFormData(
    EFI_HII_HANDLE GroupFormHandle,
    CALLBACK_INFO *pCallBackFound)
{
    UINT16 Class;
    EFI_HII_HANDLE SetupHandle;
    UINTN VarSize = sizeof(EFI_HII_HANDLE);
    EFI_STATUS Status;
    EFI_FIXED_BOOT_ORDER_PROTOCOL *FboProtocol;

    UINTN GroupSize = 0, FixedBootSize = 0;

    if (!pCallBackFound || !pCallBackFound->HiiHandle)
        return;

    Class = pCallBackFound->Class;
    if (Class != FBO_GROUP_FORM_FORM_SET_CLASS)
        return;

    Status = pRS->GetVariable(L"FixedBootOrderHii", &gFixedBootOrderGuid, NULL, &VarSize, &SetupHandle);
    if (EFI_ERROR(Status))
        return;

    // Initial FixedBootOrder map.
    Status = pBS->LocateProtocol(&gFixedBootOrderGuid, NULL, &FboProtocol);
    if (!EFI_ERROR(Status))
    {
        gFboLegacyDevMap = FboProtocol->GetLegacyDevMap();
        gFboUefiDevMap = FboProtocol->GetUefiDevMap();
        gFboHiiMap = FboProtocol->GetHiiMap();
    }

    Status = GetEfiVariable(L"FixedBootGroup",
                            &gFixedBootOrderGuid,
                            NULL,
                            &GroupSize,
                            &gFixedBootGroup);
    if (EFI_ERROR(Status))
        return;

    Status = GetEfiVariable(L"FixedBoot",
                            &gFboGroupFormFormSetGuid,
                            NULL,
                            &FixedBootSize,
                            &gFixedBoot);
    if (EFI_ERROR(Status))
        return;

#if CSM_SUPPORT
    InitialLegacyHiiGroupForm(SetupHandle, GroupFormHandle);
#endif
    InitialUefiHiiGroupForm(SetupHandle, GroupFormHandle);

    pRS->SetVariable(L"FboGfHiiHandle",
                     &gFixedBootOrderGuid,
                     EFI_VARIABLE_BOOTSERVICE_ACCESS,
                     sizeof(EFI_HII_HANDLE),
                     &GroupFormHandle);
    return;
}

/**
    FixedBootOrder Group Form page callback

    @param  This            Protocol pointer
    @param  Action          Browser action
    @param  KeyValue        Callback key
    @param  Type            Value type
    @param  Value           Changed Value
    @param  ActionRequest   Action feeback

    @retval Status
**/
EFI_STATUS FboGroupFormCallback(
    IN CONST EFI_HII_CONFIG_ACCESS_PROTOCOL *This,
    IN EFI_BROWSER_ACTION Action,
    IN EFI_QUESTION_ID KeyValue,
    IN UINT8 Type,
    IN EFI_IFR_TYPE_VALUE *Value,
    OUT EFI_BROWSER_ACTION_REQUEST *ActionRequest)
{
    UINTN BufferSize = sizeof(FIXED_BOOT_SETUP);
    UINT16 DevTypeIndex = 0;
    UINT16 DevType = 0;
    FIXED_BOOT_SETUP *IfrNvDataSubMenu = NULL;
    EFI_STATUS Status;

    UINT8 *Group = (UINT8 *)gFixedBootGroup;
    UINT16 HiiDevIndex = 0xffff;
#if FIXED_BOOT_DISPLAY_DEVICE_NAME_IN_SETUP
    EFI_FIXED_BOOT_ORDER_SETUP_PROTOCOL *FboSetup;
    EFI_GUID FboSetupGuid = FIXED_BOOT_ORDER_SETUP_GUID;
#endif
    if (ActionRequest)
        *ActionRequest = EFI_BROWSER_ACTION_REQUEST_NONE;

    if (Action == EFI_BROWSER_ACTION_CHANGING)
        return EFI_SUCCESS;
    else if (Action == EFI_BROWSER_ACTION_DEFAULT_STANDARD)
    {
#if !DONOT_LOAD_DEFAULT_IN_SETUP
        Value->u8 = (KeyValue - LegacyForms_StartKey) % FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
        if (KeyValue >= UefiForms_StartKey)
        {
            gFixedBoot->UefiDevice[(KeyValue - UefiForms_StartKey)] = Value->u8;
        }
        else if (KeyValue >= LegacyForms_StartKey)
        {
            gFixedBoot->LegacyDevice[(KeyValue - LegacyForms_StartKey)] = Value->u8;
        }

#endif
        return EFI_SUCCESS;
    }
    else if (Action == EFI_BROWSER_ACTION_RETRIEVE)
    {
        Status = HiiLibGetBrowserData(&BufferSize, gFixedBoot, &gFboGroupFormFormSetGuid, L"FixedBoot");
        return EFI_SUCCESS;
    }
    else if (Action != EFI_BROWSER_ACTION_CHANGED)
        return EFI_INVALID_PARAMETER;

    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "FboGroupFormCallback : Callback key:%X\n", KeyValue));
    if (KeyValue < FixedBootOrderStratKey || KeyValue >= (UefiForms_StartKey + FIXED_BOOT_ORDER_TOTAL_DEVICES_MAX_NUM))
        return EFI_UNSUPPORTED;

    if (KeyValue >= UefiForms_StartKey)
    {
        //--------------------------------------
        // SubMenu UEFI Boot device change process
        //--------------------------------------
        //
        // Retrive uncommitted data from Browser
        //
        pBS->AllocatePool(EfiBootServicesData, BufferSize, &IfrNvDataSubMenu);
        ASSERT(IfrNvDataSubMenu != NULL);

        Status = HiiLibGetBrowserData(&BufferSize, IfrNvDataSubMenu, &gFboGroupFormFormSetGuid, L"FixedBoot");
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "[FixedBootOrder.c] HiiLibGetBrowserData(%r) BufferSize=%x\n", Status, BufferSize));
        if (EFI_ERROR(Status))
        {
            pBS->FreePool(IfrNvDataSubMenu);
            return Status;
        }

        DevTypeIndex = (KeyValue - UefiForms_StartKey) / FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
        HiiDevIndex = SearchHiiMapByType(gFboUefiDevMap[DevTypeIndex].DevType);

        if (HiiDevIndex != 0xffff)
        {
            GroupkeyProcess(&IfrNvDataSubMenu->UefiDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM],
                            &(gFixedBoot->UefiDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM]),
                            (KeyValue - UefiForms_StartKey) % FIXED_BOOT_ORDER_SUBMENU_MAX_NUM,
                            Group[gFboHiiMap[HiiDevIndex].DeviceCountOffset]);
        }

#if FIXED_BOOT_DISPLAY_DEVICE_NAME_IN_SETUP
        Status = pBS->LocateProtocol(&FboSetupGuid, NULL, &FboSetup);
        if (!EFI_ERROR(Status))
        {
            DevType = gFboUefiDevMap[DevTypeIndex].DevType;
            FboSetup->UpdateUefiHiiDevString(DevType, gFixedBoot->UefiDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM]);
        }
#endif

        Status = HiiLibSetBrowserData(BufferSize, IfrNvDataSubMenu, &gFboGroupFormFormSetGuid, L"FixedBoot");
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "[FixedBootOrder.c] HiiLibSetBrowserData(%r) BufferSize=%x\n", Status, BufferSize));

        pBS->FreePool(IfrNvDataSubMenu);

        return Status;
    }
    else if (KeyValue >= LegacyForms_StartKey)
    {
        //--------------------------------------
        // SubMenu Legacy Boot device change process
        //--------------------------------------
        //
        // Retrive uncommitted data from Browser
        //
        pBS->AllocatePool(EfiBootServicesData, BufferSize, &IfrNvDataSubMenu);
        ASSERT(IfrNvDataSubMenu != NULL);
        Status = HiiLibGetBrowserData(&BufferSize, IfrNvDataSubMenu, &gFboGroupFormFormSetGuid, L"FixedBoot");
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "[FixedBootOrder.c] HiiLibGetBrowserData(%r) BufferSize=%x\n", Status, BufferSize));
        if (EFI_ERROR(Status))
        {
            pBS->FreePool(IfrNvDataSubMenu);
            return Status;
        }

        DevTypeIndex = (KeyValue - LegacyForms_StartKey) / FIXED_BOOT_ORDER_SUBMENU_MAX_NUM;
        HiiDevIndex = SearchHiiMapByType(gFboLegacyDevMap[DevTypeIndex].DevType);
        if (HiiDevIndex != 0xffff)
        {
            GroupkeyProcess(&IfrNvDataSubMenu->LegacyDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM],
                            &(gFixedBoot->LegacyDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM]),
                            (KeyValue - LegacyForms_StartKey) % FIXED_BOOT_ORDER_SUBMENU_MAX_NUM,
                            Group[gFboHiiMap[HiiDevIndex].DeviceCountOffset]);
        }
#if FIXED_BOOT_DISPLAY_DEVICE_NAME_IN_SETUP
        Status = pBS->LocateProtocol(&FboSetupGuid, NULL, &FboSetup);
        if (!EFI_ERROR(Status))
        {
            DevType = gFboLegacyDevMap[DevTypeIndex].DevType;
            FboSetup->UpdateLegacyHiiDevString(DevType, gFixedBoot->LegacyDevice[DevTypeIndex * FIXED_BOOT_ORDER_SUBMENU_MAX_NUM]);
        }
#endif

        Status = HiiLibSetBrowserData(BufferSize, IfrNvDataSubMenu, &gFboGroupFormFormSetGuid, L"FixedBoot");
        DEBUG((FBO_TRACE_LEVEL | DEBUG_ERROR, "[FixedBootOrder.c] HiiLibSetBrowserData(%r) BufferSize=%x\n", Status, BufferSize));

        pBS->FreePool(IfrNvDataSubMenu);

        return Status;
    }
    return EFI_SUCCESS;
}

/**
    Group form notify function, install group form handle.

    @param  Event
    @param  Context

    @retval None
**/
VOID FboGroupFormNotify(
    IN EFI_EVENT Event,
    IN VOID *Context)
{
    static BOOLEAN Loaded = FALSE;

    if (Loaded == TRUE)
    {
        // Do not load resource again, just refresh HII group form.
        InitGroupFormData(SetupCallBack->HiiHandle, &SetupCallBack[0]);
        return;
    }

    LoadResources(Context,
                  sizeof(SetupCallBack) / sizeof(CALLBACK_INFO),
                  SetupCallBack,
                  InitGroupFormData);
    Loaded = TRUE;
}

/**
    Group Form driver entry point

    @param  ImageHandle
    @param  SystemTable

    @retval Status
**/
EFI_STATUS FboGroupFormEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable)
{
    EFI_STATUS Status = EFI_SUCCESS;
    EFI_EVENT Event;
    VOID *Registration;
    VOID *Context;
    EFI_GUID FixedBootOrderSetupGuid = FIXED_BOOT_ORDER_SETUP_GUID;

    InitAmiLib(ImageHandle, SystemTable);

    Context = ImageHandle;
    Status = RegisterProtocolCallback(&FixedBootOrderSetupGuid,
                                      FboGroupFormNotify,
                                      Context,
                                      &Event,
                                      &Registration);
    return Status;
}
