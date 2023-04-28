//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file OemFixedBootOrderIpmi.c

    Adjust Boot Sequence form IPMI.
    
    Update Boot Priority or BootNext form IPMI setting.


*/


#include <AmiDxeLib.h>
#include <BootOptions.h>
#include <Setup.h>
#include <../FixedBootOrder.h>
#include <DefaultFixedBootOrder.h>

#if IPMI2_SUPPORT
#define IPMI_HEADER(name)           <Ami##name>
#define IPMI_BOOT_DEVICE_TYPE(name) AMI_##name##_SELECTOR
#define IPMI_ENUM(name)             AmiIpmi##name
#else
#define IPMI_HEADER(name)           <name>
#define IPMI_BOOT_DEVICE_TYPE(name) name
#define IPMI_ENUM(name)             name
#endif
#include IPMI_HEADER(IpmiNetFnChassisDefinitions.h)

#define FBO_HIGHEST_BOOT_OPTION_PRIORITY  0x00

extern UINT16 GetBbsEntryDeviceTypeDefault(BBS_TABLE *BbsEntry);

/**
   Keep the information of group order and restore them after non-persistent boot.
*/
typedef struct _FBO_IPMI_GROUP_ORDER {
    BOOLEAN   ModeFlag;         ///< TRUE for the same mode before IPMI changes and otherwise FALSE.
    UINT16    InterchangeIndex; ///< Index used to know which group interchanged with the first group.
} FBO_IPMI_GROUP_ORDER;

//
// extern from IpmiBoot.c
//
extern  BOOLEAN                                 gPersistentBoot;
extern  BOOLEAN                                 gUefiBoot;
extern  UINT8                                   gDeviceInstanceSelector;
extern  IPMI_BOOT_DEVICE_TYPE(IPMI_BOOT_DEVICE) gIpmiForceBootDevice;

//
// extern from FboSetOrder.c
//
extern  FBODevMap           *pFBOLegacyDevMap;
extern  FBODevMap           *pFBOUefiDevMap;
extern  UINT32  GetUefiBootOptionTag(IN BOOT_OPTION *Option);
extern  UINT16  SearchDevMapByType(FBODevMap *pFBODevMap, UINT32 DevType );




/**
    Search the boot option which set by IPMI.
	
	@retval BOOT_OPTION* Boot option set by IPMI
**/
BOOT_OPTION* SearchBootOptionSetByIpmi() 
{
    DLINK       *Link;
    BOOT_OPTION *Option;

    FOR_EACH_BOOT_OPTION(BootOptionList,Link,Option){
        //
        //  IPMI raises the tag/priority of target option to highest.
        //
        if (Option->Priority == FBO_HIGHEST_BOOT_OPTION_PRIORITY
                && Option->GroupHeader == FALSE) {
            return Option;
        }
    }

    return NULL;
}

/**
    Save current group order before changing it with IPMI request,
    but only works on non-persistent boot.

    @param  OriginalBootMode  Mode current used.
    @param  AlteredBootMode   Mode ready to change.
    @param  InterchangeIndex  Indicates which group interchanged with group one.

**/
VOID SaveGroupOrder(BOOLEAN ModeFlag, UINT16 InterchangeIndex) 
{
    EFI_STATUS Status;
    FBO_IPMI_GROUP_ORDER GroupOrder;
    EFI_GUID FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;

    GroupOrder.ModeFlag = ModeFlag;
    GroupOrder.InterchangeIndex = InterchangeIndex;

    Status = pRS->SetVariable(
                L"FboGroupOrder",
                &FixedBootOrderGuid,
                EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                sizeof(FBO_IPMI_GROUP_ORDER),
                &GroupOrder);
    ASSERT_EFI_ERROR(Status);
}


/**
    Alter group order by IPMI request.

    @param  Option   The boot option set by IPMI.
    @param  Save     Save the info of group order or not.

    @retval  EFI_INVALID_PARAMETER  Option is invalid or BbsEntry is invalid when legacy boot.
	@retval  EFI_NOT_FOUND          No group matched.
    @retval  EFI_SUCCESS            Change done.
    @retval  Status                 Return from GetVariable call.

**/
EFI_STATUS AlterGroupOrder(BOOT_OPTION *Option, BOOLEAN Save)
{
    EFI_STATUS Status;
    BOOLEAN    UpdateVariable = TRUE;
    UINT16     i;
    UINT16     Temp;
    UINTN      DeviceMapCount;
    UINTN      VarSize = sizeof(FIXED_BOOT_PRIORITIES);
    UINT32     VarAttr;
    EFI_GUID   FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;
    FIXED_BOOT_PRIORITIES FixedBootPriorities;
    UINT32     Type;
    UINT32     EmaIndications = FBO_EMA_INDICATION_VALUE;
    UINTN      EMAIndicationSize = sizeof(UINT32);
    EFI_GUID   gEMAIndicationsGuid = EMA_INDICATION_GUID;
    
    if (!Option) return EFI_INVALID_PARAMETER;

    Status = pRS->GetVariable( L"FixedBootPriorities", &FixedBootOrderGuid, &VarAttr, &VarSize, &FixedBootPriorities);
    if(EFI_ERROR(Status)) Status;

    if(!gUefiBoot){     // Legacy Boot?

        //
        // Update FixedBootPriorities.LegacyPriorities
        //
        // Below is sample, please implement how to match options and change proper priority order.  >>>>
        //
        if (!Option->BbsEntry) return EFI_INVALID_PARAMETER;
        DeviceMapCount = FBO_LEGACY_DEVICE_TYPE_NUM;
        Type = GetBbsEntryDeviceType(Option->BbsEntry);
        for(i=0 ;i<DeviceMapCount;i++){

            if(FixedBootPriorities.LegacyPriorities[i] == SearchDevMapByType(pFBOLegacyDevMap,Type)
                    && FixedBootPriorities.LegacyPriorities[i] != DeviceMapCount){
               
                Temp = FixedBootPriorities.LegacyPriorities[0];
                FixedBootPriorities.LegacyPriorities[0] = FixedBootPriorities.LegacyPriorities[i];
                FixedBootPriorities.LegacyPriorities[i] = Temp;

                UpdateVariable = TRUE;
                break;
            }
        }
        //
        // Above is sample, please implement how to match options and change boot priority order.  <<<<
        //
    
    }
    else{               // Uefi boot
        // Update FixedBootPriorities.UefiPriorities
        //
        // Below is sample, please implement how to match options and change boot priority order.  >>>>
        //
        DeviceMapCount = FBO_UEFI_DEVICE_TYPE_NUM;
        Type = GetUefiBootOptionTag(Option);
        for(i=0 ;i<DeviceMapCount;i++){
            if(FixedBootPriorities.UefiPriorities[i] == SearchDevMapByType(pFBOUefiDevMap,Type)
                    && FixedBootPriorities.UefiPriorities[i] != DeviceMapCount){
               
                Temp = FixedBootPriorities.UefiPriorities[0];
                FixedBootPriorities.UefiPriorities[0] = FixedBootPriorities.UefiPriorities[i];
                FixedBootPriorities.UefiPriorities[i] = Temp;
                
                UpdateVariable = TRUE;
                break;
            }
        }
        //
        // Above is sample, please implement how to match options and change proper priority order.  <<<<
        //
    }

    if (i == DeviceMapCount) return EFI_NOT_FOUND;

    if(UpdateVariable) {
        if(Save){
            SaveGroupOrder(FixedBootPriorities.BootMode != gUefiBoot, i);
        }
        FixedBootPriorities.BootMode = gUefiBoot;
        Status = pRS->SetVariable(L"FixedBootPriorities", &FixedBootOrderGuid, VarAttr, VarSize, &FixedBootPriorities);
        ASSERT_EFI_ERROR(Status);
        Status = pRS->SetVariable(
                     L"AmiEmaIndications",
                     &gEMAIndicationsGuid,
                     EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS | EFI_VARIABLE_RUNTIME_ACCESS,
                     EMAIndicationSize,
                     &EmaIndications);
        ASSERT_EFI_ERROR(Status);
    }

    return EFI_SUCCESS;
}

/**
    Restore group changed by IPMI request, 
    but only works on non-persistent boot.
**/
VOID RestoreGroupOrder (VOID)
{
    EFI_STATUS             Status;
    UINT16                 Temp;
    FBO_IPMI_GROUP_ORDER   GroupOrder;
    UINTN                  GroupOrderSize = sizeof(FBO_IPMI_GROUP_ORDER);
    EFI_GUID               FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;

    UINTN                  VarSize = sizeof(FIXED_BOOT_PRIORITIES);
    UINT32                 VarAttr;
    FIXED_BOOT_PRIORITIES  FixedBootPriorities;

    Status = pRS->GetVariable( L"FboGroupOrder", &FixedBootOrderGuid, NULL, &GroupOrderSize, &GroupOrder);
    if(EFI_ERROR(Status)) return;

    Status = pRS->GetVariable( L"FixedBootPriorities", &FixedBootOrderGuid, &VarAttr, &VarSize, &FixedBootPriorities);
    if(EFI_ERROR(Status)) return;

    if(FixedBootPriorities.BootMode){
        Temp = FixedBootPriorities.UefiPriorities[0];
        FixedBootPriorities.UefiPriorities[0] = FixedBootPriorities.UefiPriorities[GroupOrder.InterchangeIndex];
        FixedBootPriorities.UefiPriorities[GroupOrder.InterchangeIndex] = Temp;
    } 
    else{
        Temp = FixedBootPriorities.LegacyPriorities[0];
        FixedBootPriorities.LegacyPriorities[0] = FixedBootPriorities.LegacyPriorities[GroupOrder.InterchangeIndex];
        FixedBootPriorities.LegacyPriorities[GroupOrder.InterchangeIndex] = Temp;
    }
    FixedBootPriorities.BootMode = FixedBootPriorities.BootMode ^ GroupOrder.ModeFlag;

    Status = pRS->SetVariable(L"FixedBootPriorities", &FixedBootOrderGuid, VarAttr, VarSize, &FixedBootPriorities);
    ASSERT_EFI_ERROR(Status);

    Status = pRS->SetVariable(L"FboGroupOrder", &FixedBootOrderGuid, 0, 0, NULL);
    ASSERT_EFI_ERROR(Status);
}

/**
    Restore device type to make IPMI works normally.
**/
VOID FboRestoreBbsDpDeviceTypeForIpmi(){

    DLINK           *Link;
    BOOT_OPTION     *Option;
    
    FOR_EACH_BOOT_OPTION(BootOptionList,Link,Option){
        BBS_BBS_DEVICE_PATH *BbsDp;

        if (!IsLegacyBootOption(Option) || Option->GroupHeader) 
            continue;

        BbsDp = (BBS_BBS_DEVICE_PATH*)Option->FilePathList;
        if (BbsDp
                && BbsDp->Header.Type == BBS_DEVICE_PATH
                && BbsDp->Header.SubType == BBS_BBS_DP)
        {
            BbsDp->DeviceType = GetBbsEntryDeviceTypeDefault(Option->BbsEntry);
        }
    }

}

/** 
    Set device type according to FBO's settings.
**/
VOID FboSetBbsDpDeviceType(){
    DLINK           *Link;
    BOOT_OPTION     *Option;
    
    FOR_EACH_BOOT_OPTION(BootOptionList,Link,Option){
        BBS_BBS_DEVICE_PATH *BbsDp;

        if (!IsLegacyBootOption(Option) || Option->GroupHeader) 
            continue;

        BbsDp = (BBS_BBS_DEVICE_PATH*)Option->FilePathList;
        if (BbsDp
                && BbsDp->Header.Type == BBS_DEVICE_PATH
                && BbsDp->Header.SubType == BBS_BBS_DP)
        {
            BbsDp->DeviceType = GetBbsEntryDeviceType(Option->BbsEntry);
        }
    }
}

/**
    Apply IPMI boot request on FBO.
**/
VOID ApplyIpmiBootRequest(){
    
    //
    // Below sample doesn't consider about FBO DualMode.
    //
    BOOT_OPTION     *Option = NULL;

    RestoreGroupOrder();

    switch(gIpmiForceBootDevice){
        case IPMI_ENUM(ForcePxe):
        case IPMI_ENUM(ForceBootHardDrive):
        case IPMI_ENUM(ForceBootCdDvd):
        case IPMI_ENUM(ForceBootFloppy):
            break;

        case IPMI_ENUM(NoOverride):
        default:
            return;
    }

    if((Option = SearchBootOptionSetByIpmi()) == NULL){
        return;
    }

    if(gPersistentBoot){
        AlterGroupOrder(Option, FALSE); // Do not save the info of group order.
    }
    else{

        //
        // Use BootNext solution for Next boot only request.
        //

        EFI_STATUS      Status;
        Status = pRS->SetVariable (
                     L"BootNext", 
                     &gEfiGlobalVariableGuid,
                     EFI_VARIABLE_NON_VOLATILE| EFI_VARIABLE_BOOTSERVICE_ACCESS | EFI_VARIABLE_RUNTIME_ACCESS,
                     sizeof(Option->BootOptionNumber), 
                     &Option->BootOptionNumber);
        ASSERT_EFI_ERROR(Status);

#if FBO_NON_PERSISTENT_BOOT_ON_GROUP
        AlterGroupOrder(Option, TRUE); // Save the info of group order.
#endif
    } 
}


/**
    Sync BootOptionTag for Group
    IpmiBoot Set Priority and Tag of the desired bootoption to 0.
    BDS will delete the Group Header because TAG is different.
    Then BootNext doesn't work property

    @param VOID

    @retval VOID

**/
VOID
FboIpmiBootTag
(
        VOID
)
{
    DLINK           *Link = NULL, *Link1 = NULL;
    BOOT_OPTION     *Option = NULL, *Option1 = NULL;
    
    if(gUefiBoot)
        return;
    
    SortList(BootOptionList, CompareTagThenPriority);
    FOR_EACH_BOOT_OPTION(BootOptionList,Link,Option)
    {
        // Skip Uefi Boot Option
        if(!IsLegacyBootOption(Option))
            continue;
        
        if(Option->GroupHeader)
        {
            FOR_EACH_BOOT_OPTION(BootOptionList,Link1,Option1)
            {
                // Skip Uefi BootOption and GroupHeader
                if(Option1->GroupHeader || (!IsLegacyBootOption(Option1)) )
                    continue;
                
                if(Option->BootOptionNumber == Option1->BootOptionNumber)
                    Option1->Tag = Option->Tag;
            }
        } 
    }
}
