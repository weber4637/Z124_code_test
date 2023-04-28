//**********************************************************************
//**********************************************************************
//**                                                                  **
//**                                                                  **
//**        (C)Copyright 1985-2018, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file SmbiosBoard.c
    This file contains code for SMBIOS table updation

**/

//----------------------------------------------------------------------------
// Includes

#include <UpdateSmbiosTable.h>
#include <Protocol/PciRootBridgeIo.h>
#include <Protocol/PciIo.h>
#include <Protocol/PciHostBridgeResourceAllocation.h>
#include <Protocol/PciHotPlugInit.h>
#include <Protocol/PciPlatform.h>
#include <Protocol/IncompatiblePciDeviceSupport.h>
#include <Protocol/PciBusEx.h>
#include <IndustryStandard/SmBios.h>


// Global Variables
        
EFI_SMBIOS_PROTOCOL             *gEfiSmbiosProtocol;
BOOLEAN                         DeviceEnable = TRUE;
PCI_DEV_INFO                    *dev = NULL;

// Type 9: Slot Info  - obtained from BOARD_SLOT_INFO SDL Elink
SLOT_INFO gSlotInfo [] = {BOARD_SLOT_INFO};

// Defining Type 41 Designator:
// Types of Onboard Devices Supported on this platform
// 0 => Onboard LAN/Ethernet Device
// 1 => Onboard SATA Devices
// 3 => Onboard Video Device (Eg: AST VGA from the BMC)
CHAR8                          *onBoardDevicesDesignator[] = {"Onboard LAN","Onboard SATA","Onboard Video"};


/**

    Add one new SMBIOS type 41 structure for the newly detected device.

    @return EFI_STATUS - Based on ADD API of EFI SMBIOS protocol


**/
EFI_STATUS
AddNewType41TableStructure ()
{
    SMBIOS_TABLE_TYPE41      *Type41Table;
    EFI_STATUS               Status = EFI_SUCCESS;
    EFI_SMBIOS_HANDLE        SmbiosHandle;

    Type41Table = AllocateZeroPool( sizeof(SMBIOS_TABLE_TYPE41));

    Type41Table->Hdr.Type = EFI_SMBIOS_TYPE_ONBOARD_DEVICES_EXTENDED_INFORMATION;
    Type41Table->Hdr.Length = sizeof(SMBIOS_TABLE_TYPE41);
    Type41Table->ReferenceDesignation = 1;
    SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
    
    Status = gEfiSmbiosProtocol->Add( gEfiSmbiosProtocol, NULL, &SmbiosHandle, (EFI_SMBIOS_TABLE_HEADER*) &(Type41Table->Hdr));
    DEBUG(( DEBUG_INFO, __FUNCTION__ "Adding new Type 41 Table structure status  - %r \n",Status));
    
    FreePool(Type41Table);
    return Status;
}

/**

    Update the SMBIOS TYPE 41 table with proper values
    1. Scan through all the PCI device and identify the Type (of Onboard Device) based on BaseClassCode/SubClassCode
    2. Call the UpdateType41TableData() for the corresponding DeviceType  

    @param IN UINTN  DesignatorIndex  - Index of *onBoardDevicesDesignator[]
    @param IN UINT32 DeviceTyp        - Device Type
    @param IN UINT8  DeviceInstance   - Unique number for each Device Type

    @return Status


**/
EFI_STATUS
EFIAPI
UpdateType41TableData(UINTN DesignatorIndex, UINT32 DeviceTyp, UINT8 DeviceInstance)
{
    EFI_STATUS                      Status;
    UINT32                          DevFuncNums;
    UINT32                          DevNums;
    UINTN                           StringNumber;
    static SMBIOS_TABLE_TYPE41      *Type41Table;
    static EFI_SMBIOS_HANDLE        SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
    EFI_SMBIOS_TYPE                 SmbiosType = EFI_SMBIOS_TYPE_ONBOARD_DEVICES_EXTENDED_INFORMATION;
    static BOOLEAN                  FirstType41Structure = TRUE;
    
    if (FirstType41Structure != TRUE){
       // Create New Type41 Table Structure for this Onboard device.
       AddNewType41TableStructure ();
    }
    
    Status = gEfiSmbiosProtocol->GetNext( gEfiSmbiosProtocol, &SmbiosHandle, &SmbiosType, (EFI_SMBIOS_TABLE_HEADER **) &Type41Table, NULL);
    if (EFI_ERROR(Status)){
        DEBUG((-1,"Failed: Type41 GetNext\n"));
        return Status;
    }
                                               
    //Updating other data
    Type41Table->BusNum = dev->AmiSdlPciDevData->Bus;
    Type41Table->SegmentGroupNum = 0;
    Type41Table->DeviceTypeInstance = DeviceInstance;
    DevNums = dev->AmiSdlPciDevData->Device << 3;
    DevFuncNums = DevNums | dev->AmiSdlPciDevData->Function;
    Type41Table->DevFuncNum = DevFuncNums;
    Type41Table->DeviceType = DeviceTyp & 0x7F;
    Type41Table->DeviceType |= (DeviceEnable << 7);     //On-Board device enabled
    
    //Updating common data of all on-Board devices
    Type41Table->ReferenceDesignation = 1;
    
    // Updating Slot designator
    StringNumber = (UINTN) Type41Table->ReferenceDesignation;
    Status = gEfiSmbiosProtocol->UpdateString ( gEfiSmbiosProtocol, &SmbiosHandle, &StringNumber, onBoardDevicesDesignator[DesignatorIndex] );
    DeviceInstance++;
    
    FirstType41Structure = FALSE;   // Control came here implies that the first table is already updated.
    return Status;                   
}

/**

    Update the SMBIOS TYPE 41 table with proper values
    1. Scan through all the PCI device and identify the Type (of Onboard Device) based on BaseClassCode/SubClassCode
    2. Call the UpdateType41TableData() for the corresponding DeviceType  

    @param IN  EFI_EVENT Event    - Event created for the callback
	@param VOID  *Context         - Any arguments passed

    @return Status


**/

EFI_STATUS
EFIAPI
UpdateSmbiosType41Table (
    IN  EFI_EVENT Event,
    IN  VOID      *Context
)
{
    EFI_STATUS Status = EFI_SUCCESS;    
    UINT8                    Index;
    UINTN                    HandleCount;
    EFI_PCI_IO_PROTOCOL      *PciIo = NULL;
    EFI_HANDLE               *HandleBuffer;
    UINT8                    LanDevInstance = 0;
    UINT8                    SataDevInstance = 0;
    UINT8                    VideoDevInstance = 0;
        
    DEBUG(( DEBUG_INFO, __FUNCTION__ " Updating Type 41\n"));
    
    Status = gBS->LocateHandleBuffer(ByProtocol, &gEfiPciIoProtocolGuid, NULL,&HandleCount,&HandleBuffer); // Locate all PciIo devices

    if (EFI_ERROR (Status)){
        DEBUG(( DEBUG_INFO, __FUNCTION__ ": Failed \n"));
        return Status;
    }
     
    for (Index = 0; Index < HandleCount; Index ++){
        
         // Get Pciio Handle
         Status = gBS->HandleProtocol (HandleBuffer[Index], &gEfiPciIoProtocolGuid,&PciIo);  
                        
         // Associate Pciio with the PCI_DEV_INFO structure
         dev=(PCI_DEV_INFO*)PciIo;
         
         // Check if it is  an onboard PCI device.
         if(dev->AmiSdlPciDevData->PciDevFlags.Bits.OnBoard ==1){
           
            // Check if: Onboard LAN/Ethernet Device
            if(dev->Class.BaseClassCode == CC_ETHERNET && dev->Class.SubClassCode == SCC_ETHERNET){  
               LanDevInstance++;
               UpdateType41TableData(0, OnBoardDeviceExtendedTypeEthernet, LanDevInstance);
            }
            
            // Check if: Onboard SATA Devices
            if(dev->Class.BaseClassCode == CC_SATA && dev->Class.SubClassCode == SCC_SATA){             
               SataDevInstance++;
               UpdateType41TableData(1, OnBoardDeviceExtendedTypeSATAController, SataDevInstance);
            }
            
            // Check if: Onboard Video Device
            if(dev->Class.BaseClassCode == CC_VIDEO && dev->Class.SubClassCode == SCC_VIDEO){           
               VideoDevInstance++;
               UpdateType41TableData(2, OnBoardDeviceExtendedTypeVideo, VideoDevInstance); 
            }
            
         }// End of if(dev->AmiSdlPciDevData->PciDevFlags.Bits.OnBoard ==1){
    } //  End of for (Index = 0; Index < HandleCount; Index ++){
        return Status;
}


/**

    Update the SMBIOS TYPE 9 table with proper values

    @param IN  EFI_EVENT Event    - Event created for the callback
    @param VOID  *Context         - Any arguments passed

    @return Status


**/
EFI_STATUS
EFIAPI
UpdateSmbiosType9Table (
    IN  EFI_EVENT Event,
    IN  VOID      *Context
)
{
    EFI_STATUS               Status;
    UINT8                    Index;
    UINTN                    StringNumber;
    SMBIOS_TABLE_TYPE9       *Type9Table;
    UINT8                    SecBus;
    UINT32                   VendorIDDeviceID;
    EFI_SMBIOS_HANDLE        SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
    EFI_SMBIOS_TYPE          SmbiosType = EFI_SMBIOS_TYPE_SYSTEM_SLOTS;
    
    DEBUG(( DEBUG_INFO, __FUNCTION__ " Updating Type 9\n"));


    for (Index = 0; Index < (sizeof(gSlotInfo)/ sizeof(SLOT_INFO)); Index++) {
        
        // Read Type 9 structure
        Status = gEfiSmbiosProtocol->GetNext( gEfiSmbiosProtocol, &SmbiosHandle, &SmbiosType, (EFI_SMBIOS_TABLE_HEADER **) &Type9Table, NULL);
        if (EFI_ERROR(Status)){
            DEBUG(( DEBUG_INFO, __FUNCTION__ ": Failed \n", Status));
            return Status;
        }

        if (SmbiosHandle == SMBIOS_HANDLE_PI_RESERVED) {
            break;
        }
        
        // If NO SLOT PRESENT
        if(gSlotInfo[Index].SlotType == 0xFF){
            
            // Update will FF's
            Type9Table->SegmentGroupNum = 0xFF;
            Type9Table->SlotCharacteristics1.Provides33Volts = 0xFF;
            Type9Table->SlotCharacteristics1.SharedSlot = 0xFF;
            Type9Table->SlotCharacteristics2.PmeSignalSupported = 0xFF;
        }
        else{
            
            // Update the table data which are common across all slots
            Type9Table->SegmentGroupNum = 0;
            Type9Table->SlotCharacteristics1.Provides33Volts = 0x1;
            Type9Table->SlotCharacteristics1.SharedSlot = 0x0;
            Type9Table->SlotCharacteristics2.PmeSignalSupported = 0x1;
        }
        
        
        // Updating other Slot data with information from the gSlotInfo structure
        // INFO: SlotID, SlotDesignation, SlotType, SlotDataBusWidth, SlotLength, BusNum, DevFuncNum 
        
        Type9Table->BusNum = gSlotInfo[Index].BusNum;
        Type9Table->SlotID = gSlotInfo[Index].SlotID;
        Type9Table->SlotType = gSlotInfo[Index].SlotType;
        Type9Table->SlotDataBusWidth = gSlotInfo[Index].SlotDataBusWidth;
        Type9Table->SlotLength = gSlotInfo[Index].SlotLength;
        Type9Table->BusNum = gSlotInfo[Index].BusNum;
        Type9Table->DevFuncNum = gSlotInfo[Index].DevFuncNum;

        // Updating Slot designator
               
        Type9Table->SlotDesignation = 1;
        StringNumber = (UINTN) Type9Table->SlotDesignation;
        Status = gEfiSmbiosProtocol->UpdateString ( gEfiSmbiosProtocol, &SmbiosHandle, &StringNumber, gSlotInfo[Index].SlotDesignator);
               
        //Checking for Slot device availability     
               
        SecBus = PciRead8 (PCI_EXPRESS_LIB_ADDRESS( Type9Table->BusNum, Type9Table->DevFuncNum >> 3, Type9Table->DevFuncNum & 0x7 ,PCI_BRIDGE_SECONDARY_BUS_REGISTER_OFFSET));
        if (SecBus == 0xFF){
            Type9Table->CurrentUsage = SlotUsageUnknown;
        } 
        else{
             VendorIDDeviceID = PciRead32 (PCI_EXPRESS_LIB_ADDRESS(SecBus,0,0,0));
             if (VendorIDDeviceID == 0xFFFFFFFF) {
                 Type9Table->CurrentUsage  = SlotUsageAvailable;
             } 
             else{
                  Type9Table->CurrentUsage = SlotUsageInUse;
             }
        }      
    } // End of for (Index = 0; Index < (sizeof(gSlotInfo)/ sizeof(SLOT_INFO)); Index++)
   
    DEBUG(( DEBUG_INFO, __FUNCTION__ "Updating Type 9 Status %r \n", Status));
    return Status;
}

/**

    EFI call back for EFI SMBIOS protocol. Update SMBIOS Structures

    @param IN  EFI_EVENT Event    - Event created for the callback
	@param VOID  *Context         - Any arguments passed

    @return None


**/

VOID
EFIAPI
UpdateSmbiosTables (
    IN  EFI_EVENT Event,
    IN  VOID      *Context
)
{
#if CRB_UPDATE_SMBIOS_SUPPORT
    
    EFI_STATUS       Status;

    DEBUG(( DEBUG_INFO, __FUNCTION__ "Updating SMBIOS structures \n" ));

    Status = gBS->LocateProtocol( &gEfiSmbiosProtocolGuid, NULL, &gEfiSmbiosProtocol);
    if (EFI_ERROR(Status))
        return;

    gBS->CloseEvent(Event);

    //Update SMBIOS Type 9 Structures
	#if defined TYPE9_STRUCTURE && UPDATE_SLOT_TYPE9 &&  NUMBER_OF_SYSTEM_SLOTS > 0 
    	Status = UpdateSmbiosType9Table(NULL, NULL);
	#endif
    //Update SMBIOS Type 41 Structures
    #if defined TYPE41_STRUCTURE && UPDATE_DEVICE_EXT_TYPE41 && ONBOARD_DEVICE_EXT_COUNT > 0
    	Status = UpdateSmbiosType41Table(NULL, NULL);
    #endif
    return;

#else  // Else of CRB_UPDATE_SMBIOS_SUPPORT
    return;
#endif
}

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2018, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
