//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************


/** @file AmiPciAccessCspBaseLib.c
    Library Class for AMI CSP PCI Interface

	@note Requires Chipset Specific Porting for each project!
**/
//*************************************************************************

//-------------------------------------------------------------------------
// Include Files
//-------------------------------------------------------------------------
#include <Token.h>
#include <AmiLib.h>
#include <AcpiRes.h>
#include <PciBus.h>
#include <PciHostBridge.h>
#include <Protocol/PciIo.h>
#include <Protocol/PciRootBridgeIo.h>
#include <Protocol/AcpiTable.h>
#include <Library/PciLib.h>
#include <Library/PcdLib.h>
//Denverton AptioV Override Start- EIP#305575
#if CRB_OUT_OF_RESOURCE_SUPPORT
#include <SetupVariable.h>
#include <Guid/SetupVariable.h>
#endif
//Denverton AptioV Override End- EIP#305575
//Denverton AptioV Override start- EIP#487638
#include <AcpiOemElinks.h>
//Denverton AptioV Override End- EIP#487638
// Denverton Aptiov override start - EIP#218066 
#include <AmiCspLib.h>
#include "SocRegs.h"
#include "SaRegs.h"

#define RES_IO_BASE             0x2000
#define RES_IO_LIMIT            0xFFFF
#define RES_MEM64_39_LIMIT      0x08000000000 - 1           // 2^39

//Denverton AptioV Override Start- EIP#305575
#if CRB_OUT_OF_RESOURCE_SUPPORT
EFI_GUID  IntelSetupGuid            = SYSTEM_CONFIGURATION_GUID;
#endif
//Denverton AptioV Override End- EIP#305575


/**
    Converts C passed into Alignment format 

        
    @param g AlignFromGranularity Value to convert

    @retval UINTN
        Converted Alignment value.
**/
UINTN AlignFromGranularity(UINTN g){
    UINTN a=0;
//------------
    while(g&1){
        a++;
        g=g>>1;
    }
    return a;   
}
// Denverton Aptiov override end - EIP#218066 

//-------------------------------------------------------------------------
// Constants, Macros and Type Definitions
//-------------------------------------------------------------------------
#define PCIE_MAX_BUS ((PCIEX_LENGTH/0x100000)-1)

// GUID Definition(s)
extern EFI_GUID gAmiGlobalVariableGuid;

// Variable Declaration(s)
EFI_EVENT       			mAcpiEvent=NULL;
VOID            			*mAcpiReg=NULL;
CHAR16          			gMemoryCeilingVariable[] = L"MemCeil.";
//Keep MCFG table key and ACPI Table Protocol as global
//in case somebody will like to update MCFG table.
UINTN           			gMcfgTableKey=0;
EFI_ACPI_TABLE_PROTOCOL     *gAcpiTableProtocol=NULL;


/**
    This function will create the MCFG ACPI table when ACPI
    support protocol is available.

    @param Event Event of callback
    @param Context Context of callback.

    @retval VOID

    @note  Porting required.
**/

VOID CreateNbAcpiTables (
    IN EFI_EVENT        Event,
    IN VOID             *Context )
{
    EFI_STATUS                  Status = 0;
    MCFG_20                     *Mcfg;
    //Denverton AptioV Override Start- EIP#487638
    UINT8                       OemId[6] = ACPI_OEM_ID_MAK;
    UINT8                       OemTblId[8] = ACPI_OEM_TBL_ID_MAK;
    //Denverton AptioV Override End- EIP#487638
//---------------------------------------------
    // it must be only one instance of such protocol
    if (gAcpiTableProtocol==NULL){
    	Status = pBS->LocateProtocol( &gEfiAcpiTableProtocolGuid, NULL, &gAcpiTableProtocol );
    	PCI_TRACE((TRACE_PCI,"PciHbCsp: LocateProtocol(ACPITableProtocol)= %r\n", Status));
    	if(EFI_ERROR(Status))return;
    }

    Mcfg = MallocZ(sizeof(MCFG_20));
    ASSERT(Mcfg);
    if(!Mcfg) return;

    // Fill Table header;
    Mcfg->Header.Signature = MCFG_SIG;
    Mcfg->Header.Length = sizeof(MCFG_20);
    Mcfg->Header.Revision = 1;
    Mcfg->Header.Checksum = 0;
    MemCpy(&(Mcfg->Header.OemId[0]), OemId, 6);
    MemCpy(&(Mcfg->Header.OemTblId[0]), OemTblId, 8);
    Mcfg->Header.OemRev = ACPI_OEM_REV;
    Mcfg->Header.CreatorId = 0x5446534d;//"MSFT" 4D 53 46 54
    Mcfg->Header.CreatorRev = 0x97;

    // Fill MCFG Fields

    // Base address of 256/128/64MB extended config space
    Mcfg->BaseAddr = (UINTN)PcdGet64 (PcdPciExpressBaseAddress);
    // Segment # of PCI Bus
    Mcfg->PciSeg = 0;
    // Start bus number of PCI segment
    Mcfg->StartBus = 0;
    // End bus number of PCI segment
    Mcfg->EndBus = PCIE_MAX_BUS;

    // Add table
    Status = gAcpiTableProtocol->InstallAcpiTable( gAcpiTableProtocol, Mcfg, sizeof(MCFG_20), &gMcfgTableKey );
    PCI_TRACE((TRACE_PCI,"PciHbCsp: Installing AcpiTable (MCFG) = %r \n", Status));
    ASSERT_EFI_ERROR(Status);

    // Free memory used for table image
    pBS->FreePool(Mcfg);

    // Kill the Event
    pBS->CloseEvent(Event);

    return;
}

//----------------------------------------------------------------------------
// Following functions are HOST BRIDGE Infrastructure Overrides and Porting.
//----------------------------------------------------------------------------

/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeBeginEnumeration.

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbNotifyCspBeforeEnumeration (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}


/**
    This function will be invoked in PCI Host Bridge Driver
    before converting all Non Existant MMIO into PCI MMIO.
    In order to allow CSP code do aome none standard conversion.

    @param ImageHandle - this image Handle
    @param ControllerHandle - Controller(RB) Handle (Optional).

    @retval EFI_STATUS
            EFI_UNSUPPORTED - means use default MMIO convertion.
            EFI_SUCCESS - CSP code has been converted MMIO itself.
            ANYTHING else - ERROR.
            
    @note  Porting required if needed.
**/
EFI_STATUS HbCspConvertMemoryMapIo (
            IN EFI_HANDLE      ImageHandle,
            IN EFI_HANDLE      ControllerHandle)
{
    EFI_STATUS  Status = EFI_UNSUPPORTED;

    // Any Additional Variables goes here
 //---------------------------------------   
    

    return Status;
}

EFI_STATUS HbCspConvertMemoryMapMmio (
            IN EFI_HANDLE      ImageHandle,
            IN EFI_HANDLE      ControllerHandle)
{
    EFI_STATUS  Status = EFI_UNSUPPORTED;

    // Any Additional Variables goes here
 //---------------------------------------   
    

    return Status;
}


/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeBeginBusAllocation.

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbNotifyCspBeginBusAllocation (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                   **RbIoProtocolBuffer,
    IN UINTN                                             RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}


/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeEndBusAllocation

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbNotifyCspEndBusAllocation (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeBeginResourceAllocation.

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/

EFI_STATUS HbNotifyCspBeginResourceAllocation (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}


/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeAllocateResources.

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/

EFI_STATUS HbNotifyCspAllocateResources (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeSetResources.

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbNotifyCspSetResources (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}


/**
    This procedure will be invoked in PCI Host Bridge Protocol
    when NotifyPhase function is called with phase
    EfiPciHostBridgeEndResourceAllocation

    @param ResAllocProtocol Pointer to Host Bridge Resource
        Allocation Protocol.
    @param RbIoProtocolBuffer Pointer to Root Bridge I/O Protocol.
    @param RbCount Root Bridge counter.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbNotifyCspEndResourceAllocation (
    IN EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL *ResAllocProtocol,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL                  **RbIoProtocolBuffer,
    IN UINTN                                            RbCount )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}


/**
    This procedure will be invoked in PCI Host Bridge Protocol
    StartBusEnumeration function, it must prepare initial Bus
    ACPI Resource

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgIndex Root Bridge index (0 Based).

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspStartBusEnumeration (
							IN PCI_HOST_BRG_DATA    *HostBrgData,
							IN PCI_ROOT_BRG_DATA    *RootBrgData,
							IN UINTN                RootBrgIndex )
{
    EFI_STATUS  Status = EFI_SUCCESS;
    // Any Additional Variables goes here


    return Status;
}

/**
    This procedure will be invoked in PCI Host Bridge Protocol
    SubmitBusNumbers function.

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgIndex Root Bridge index (0 Based).

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspSetBusNnumbers (
							IN PCI_HOST_BRG_DATA    *HostBrgData,
							IN PCI_ROOT_BRG_DATA    *RootBrgData,
							IN UINTN                RootBrgIndex )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    This procedure will be invoked in PCI Host Bridge Protocol
    SubmitResources function.

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgIndex Root Bridge index (0 Based).

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspSubmitResources (
								IN PCI_HOST_BRG_DATA    *HostBrgData,
								IN PCI_ROOT_BRG_DATA    *RootBrgData,
								IN UINTN                RootBrgIndex )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/** 
 * @internal
 * Attempts to set a variable. If attempt fails because the variable already exists with different attributes,
 * tries to delete the variable and to create it with the new attributes specified by Attributes. 
 *
 * @retval EFI_SUCCESS The variable has been successfully created.
 */
static EFI_STATUS AmiPciAccessCspBaseLibSetVariableWithNewAttributes(
    IN CHAR16 *Name, IN EFI_GUID *Guid, IN UINT32 Attributes,
    IN UINTN DataSize, IN VOID *Data    
)
{
    EFI_STATUS Status;
    
    Status = pRS->SetVariable(Name, Guid, Attributes, DataSize, Data);
    if (!EFI_ERROR(Status) || Status != EFI_INVALID_PARAMETER) return Status;

    Status = pRS->SetVariable(Name, Guid, 0, 0, NULL); // Delete the variable
    if (EFI_ERROR(Status)) return Status;

    return pRS->SetVariable(Name, Guid, Attributes, DataSize, Data);
}

/**
    This procedure will be invoked during PCI bus enumeration,
    it determines the PCI memory base address below 4GB whether
    it is overlapping the main memory, if it is overlapped, then
    updates MemoryCeiling variable and reboot.

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgIndex Root Bridge index (0 Based).

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspAdjustMemoryMmioOverlap (
									IN PCI_HOST_BRG_DATA    *HostBrgData,
									IN PCI_ROOT_BRG_DATA    *RootBrgData,
									IN UINTN                RootBrgIndex )
{
    EFI_STATUS  Status;

    EFI_GCD_MEMORY_SPACE_DESCRIPTOR *MemorySpaceMap;
    UINTN                           NumberOfDescriptors;
    ASLR_QWORD_ASD                  *Res;
    UINTN                           i;
    EFI_PHYSICAL_ADDRESS            Highest4GMem    = 0;
    EFI_PHYSICAL_ADDRESS            LowestMMIO      = 0xffffffff;
    EFI_PHYSICAL_ADDRESS            LowestAllocMMIO = 0xffffffff;
    UINTN                           MemoryCeiling = 0; // Init to 0
    UINTN                           NewMemoryCeiling = 0xffffffff;
    UINTN                           DataSize = sizeof(UINT32);
    DXE_SERVICES                    *DxeSvc;

//------------------------------------
    Status = LibGetDxeSvcTbl( &DxeSvc );
    ASSERT_EFI_ERROR(Status);
    if(EFI_ERROR(Status)) return Status;

    pRS->GetVariable ( gMemoryCeilingVariable,
                       &gAmiGlobalVariableGuid,
                       NULL,
                       &DataSize,
                       &MemoryCeiling );
    TRACE((-1, "\nMemoryCeiling : %8X \n", MemoryCeiling));

    // Memory sizing uses memory ceiling to set top of memory.


    Status = DxeSvc->GetMemorySpaceMap( &NumberOfDescriptors,
                                        &MemorySpaceMap );
    ASSERT_EFI_ERROR(Status);

    // Find the lowest MMIO and lowest allocated MMIO in GCD.
    for (i = 0; i < NumberOfDescriptors; ++i)
    {
        EFI_GCD_MEMORY_SPACE_DESCRIPTOR *Descr = &MemorySpaceMap[i];
        EFI_PHYSICAL_ADDRESS Base = Descr->BaseAddress;

        // Find highest system below 4GB memory.
        // Treat any non MMIO as system memory. Not all system memory is
        // reported as system memory, such as SMM.

        if ((Descr->GcdMemoryType != EfiGcdMemoryTypeMemoryMappedIo) && (Base < LowestMMIO))
        {
            EFI_PHYSICAL_ADDRESS EndMem = Base + Descr->Length - 1;
            if ((EndMem > Highest4GMem) && (EndMem <= 0xffffffff))
                Highest4GMem = EndMem;

        // Find Lowest mmio above system memory.
        }
        else if (Descr->GcdMemoryType == EfiGcdMemoryTypeMemoryMappedIo)
        {
            if (Base >= 0x100000)
            {
                if (Base < LowestMMIO)
                    LowestMMIO = Base;

                // If ImageHandle, then MMIO is allocated.
                if ((Base < LowestAllocMMIO) && Descr->ImageHandle)
                    LowestAllocMMIO = Base;
            }
        }
    }

    pBS->FreePool(MemorySpaceMap);

    TRACE((-1, "\nLowestMMIO : %8X \n", LowestMMIO));
    TRACE((-1, "\nLowestAllocMMIO : %8X \n", LowestAllocMMIO));

    if (Highest4GMem + 1 != LowestMMIO) {
        TRACE( (-1, "PciHostCSHooks: ") );
        TRACE( (-1, "System Memory and MMIO are not consequitive.\n") );
        TRACE( (-1, "Top of Below 4G Memory: %lX", Highest4GMem) );
        TRACE( (-1, "Bottom of MMIO: %X\n", LowestMMIO) );
    }


    // Find any MMIO that could not be allocated due to small of MMIO region.
    for (i = 0; i < RootBrgData->ResCount; ++i)
    {
        EFI_PHYSICAL_ADDRESS NeededBottomMmio;

        Res = RootBrgData->RbRes[i];

        // Any unallocated MMIO will have Res->_MIN set to zero for the MMIO
        // type.
        if (Res->Type != ASLRV_SPC_TYPE_MEM || Res->_GRA != 32 || Res->_MIN)
            continue;

        // Determine new memory ceiling variable needed to allocate this
        // memory.
        NeededBottomMmio = LowestAllocMMIO - Res->_LEN;

        // Round down. If resource is not allocated, _MAX contains
        // granularity.
        NeededBottomMmio &= ~Res->_MAX;
        if (NeededBottomMmio < NewMemoryCeiling)
            NewMemoryCeiling = (UINTN) NeededBottomMmio;
    }

    // Check if a NewMemory Ceiling is needed.
    if (NewMemoryCeiling < 0xffffffff)
    {
        if (!MemoryCeiling || (MemoryCeiling != NewMemoryCeiling))
        {

            // Set memory ceiling variable.
            AmiPciAccessCspBaseLibSetVariableWithNewAttributes(
                gMemoryCeilingVariable,
                &gAmiGlobalVariableGuid,
                EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                sizeof (UINT32),
                &NewMemoryCeiling
            );

            TRACE((-1, "\nResetting System for NewMemoryCeiling : %8X\n", NewMemoryCeiling));

        // Reset only needed of type of physical memory overlaps with MMIO.
// Denverton AptioV override Start - EIP#235471
// Reset is failing in simics environment
#if (NV_SIMULATION != 1) && (Simics_WA_Enable != 1) && (WARMRESET_WA_Enable != 1)
            // Don't reset system in case of NVRAM simulation
            pRS->ResetSystem (EfiResetCold, EFI_SUCCESS, 0, NULL);
#endif
        // Control should not come here if NV_SIMULATION = 0.
            return EFI_SUCCESS;
        }
    }

    // Check to see if Ceiling needs to be increased. If too low,
    // then part of the memory be not be usuable.
    if (MemoryCeiling != LowestAllocMMIO)
    {
        // Set memory ceiling variable.
        AmiPciAccessCspBaseLibSetVariableWithNewAttributes(
            gMemoryCeilingVariable, 
            &gAmiGlobalVariableGuid, 
            EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
            sizeof (UINT32), 
            &LowestAllocMMIO
        );

        TRACE((-1, "\nResetting System for LowestAllocMMIO : %8X\n", LowestAllocMMIO));

#if (NV_SIMULATION != 1) && (Simics_WA_Enable != 1) && (WARMRESET_WA_Enable != 1)
        // Don't reset system in case of NVRAM simulation
        pRS->ResetSystem (EfiResetCold, EFI_SUCCESS, 0, NULL);
#endif
// Denverton AptioV override End - EIP#235471
        // Control should not come here if NV_SIMULATION = 0.
    }

    return EFI_SUCCESS;
}

/**
    This function will be invoked after Initialization of generic
    part of the Host and Root Bridges.
    All Handles for PCIHostBrg and PciRootBrg has been created
    and Protocol Intergaces installed.

    @param HostBrgData Pointer to Host Bridge private structure data.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspBasicChipsetInit (
    IN PCI_HOST_BRG_DATA    *HostBrg0, UINTN	HbCount)
{
    EFI_STATUS              Status;

    // Now for Chipset which has PCI Express support we have to build
    // MCFG Table to inform OS about PCIE Ext cfg space mapping
    Status = RegisterProtocolCallback( &gEfiAcpiTableProtocolGuid,\
                                       CreateNbAcpiTables, \
                                       NULL, \
                                       &mAcpiEvent,\
                                       &mAcpiReg );
   	ASSERT_EFI_ERROR(Status);				

    // If this protocol has been installed we can use it rigth on the way
    pBS->SignalEvent( mAcpiEvent );
//-------------------------------------------------------
//Here add some more code for basic HB init IF NEEDED!
//-------------------------------------------------------




//-------------------------------------------------------
    return EFI_SUCCESS;
}

/**
    This function will be invoked when Pci Host Bridge driver runs  
    out of resources.

    @param HostBrgData Pointer to Host Bridge private structure data.

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspGetProposedResources (
    IN PCI_HOST_BRG_DATA                            *HostBrgData,
    IN PCI_ROOT_BRG_DATA                            *RootBrgData,
    IN UINTN                                        RootBrgNumber )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    This function is called for all the PCI controllers that
    the PCI bus driver finds.
    It can be used to Preprogram the controller.

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgNumber Root Bridge number (0 Based).
    @param PciAddress Address of the controller on the PCI bus.
    @param Phase The phase during enumeration

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
EFI_STATUS HbCspPreprocessController (
    IN PCI_HOST_BRG_DATA                            *HostBrgData,
    IN PCI_ROOT_BRG_DATA                            *RootBrgData,
    IN UINTN                                        RootBrgNumber,
    IN EFI_PCI_CONFIGURATION_ADDRESS                PciAddress,
    IN EFI_PCI_CONTROLLER_RESOURCE_ALLOCATION_PHASE Phase )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    This function is invoked in PCI Host Bridge Driver when time
    to ask GCD for resources. You can overwrite a default
    algorithm used to allocate resources for the Root Bridge.

    @param HostBrgData Pointer to Host Bridge private structure data.
    @param RootBrgData Pointer to Root Bridge private structure data.
    @param RootBrgIndex Root Bridge index (0 Based).

    @retval EFI_STATUS

    @note  Porting required if needed.
**/
// Denverton Aptiov override start - EIP#218066 
EFI_STATUS HbCspAllocateResources (
							IN PCI_HOST_BRG_DATA    *HostBrgData,
							IN PCI_ROOT_BRG_DATA    *RootBrgData,
							IN UINTN                RootBrgIndex )
{
    EFI_STATUS                  Status = EFI_UNSUPPORTED;
    UINTN                       i;
    ASLR_QWORD_ASD              *res;
    UINT64                      a=0;
    UINT64                      AddressLimit=0;
    DXE_SERVICES                *dxe;
    UINT16                      PciResourceIoBase;
    UINT16                      PciResourceIoLimit;
    UINT32                      PciResourceMem32Base; 
    UINT32                      PciResourceMem32Limit;
    UINT64                      PciResourceMem64Base; 
    UINT64                      PciResourceMem64Limit;
    UINT32                      MemConfigurationBase;
//Denverton AptioV Override Start- EIP#305575
#if CRB_OUT_OF_RESOURCE_SUPPORT
    SYSTEM_CONFIGURATION        IntelSetupData;
    UINTN                       IntelVariableSize  = sizeof (SYSTEM_CONFIGURATION);
    UINT32                      IntelAttributes;
#endif
//Denverton AptioV Override End- EIP#305575

 #if BoardPciRes_SUPPORT
     AMI_OUT_OF_RES_VAR  OutOfResVar;
 //--------------------------------------

     //Check if OUT_OF_RES_VAR was already created.
     Status=AmiPciOutOfRes(&OutOfResVar, TRUE);
     if(EFI_ERROR(Status)) pBS->SetMem(&OutOfResVar,sizeof(AMI_OUT_OF_RES_VAR),0);
     else OutOfResVar.Count++;
 #endif

    Status=LibGetDxeSvcTbl(&dxe);
    if(EFI_ERROR(Status)) return Status;

    //Fill out needed structures.
    if(RootBrgData->AcpiRbRes[raIo].Min==0){ //do it only once
        PciResourceIoBase = (UINT16) RES_IO_BASE;
        PciResourceIoLimit = (UINT16) RES_IO_LIMIT;
        
        MemConfigurationBase    = MmioRead32(CSP_PCIE_CFG_ADDRESS(PCI_BUS_NUMBER_SA, PCI_DEVICE_NUMBER_SA, PCI_FUNCTION_NUMBER_SA, R_SA_PCIEXBAR)) & B_SA_PCIEXBAR_PCIEXBAR_MASK;
        PciResourceMem32Base    = MmioRead32(CSP_PCIE_CFG_ADDRESS(PCI_BUS_NUMBER_SA, PCI_DEVICE_NUMBER_SA, PCI_FUNCTION_NUMBER_SA, R_SA_TOLUD)) & B_SA_TOLUD_TOLUD_MASK;
        PciResourceMem32Limit   = MemConfigurationBase - 1;
        PciResourceMem64Base    = MmioRead32(CSP_PCIE_CFG_ADDRESS(PCI_BUS_NUMBER_SA, PCI_DEVICE_NUMBER_SA, PCI_FUNCTION_NUMBER_SA, R_SA_TOUUD_HI)) & B_SA_TOUUD_HI_TOUUD_MASK;
        PciResourceMem64Base    = (MmioRead32(CSP_PCIE_CFG_ADDRESS(PCI_BUS_NUMBER_SA, PCI_DEVICE_NUMBER_SA, PCI_FUNCTION_NUMBER_SA, R_SA_TOUUD_LO)) & B_SA_TOUUD_LO_TOUUD_MASK) + LShiftU64(PciResourceMem64Base, 32);
        PciResourceMem64Limit   = RES_MEM64_39_LIMIT - PciResourceMem64Base;
         
        RootBrgData->AcpiRbRes[raIo].Min=PciResourceIoBase;
        RootBrgData->AcpiRbRes[raIo].Max=PciResourceIoLimit;
        RootBrgData->AcpiRbRes[raIo].Len=RootBrgData->AcpiRbRes[raIo].Max-RootBrgData->AcpiRbRes[raIo].Min+1;
        RootBrgData->AcpiRbRes[raIo].AddrUsed=PciResourceIoLimit+1;
        RootBrgData->AcpiRbRes[raIo].AllocType=EfiGcdAllocateMaxAddressSearchTopDown;

        RootBrgData->AcpiRbRes[raMmio32].Min=PciResourceMem32Base;
        RootBrgData->AcpiRbRes[raMmio32].Max=PciResourceMem32Limit;
        RootBrgData->AcpiRbRes[raMmio32].Len=RootBrgData->AcpiRbRes[raMmio32].Max-RootBrgData->AcpiRbRes[raMmio32].Min+1;
        RootBrgData->AcpiRbRes[raMmio32].AddrUsed=PciResourceMem32Limit+1;
        RootBrgData->AcpiRbRes[raMmio32].AllocType=EfiGcdAllocateMaxAddressSearchTopDown;

        RootBrgData->AcpiRbRes[raMmio64].Min=PciResourceMem64Base;
        RootBrgData->AcpiRbRes[raMmio64].Max=PciResourceMem64Limit;
        RootBrgData->AcpiRbRes[raMmio64].Len=RootBrgData->AcpiRbRes[raMmio64].Max-RootBrgData->AcpiRbRes[raMmio64].Min+1;
        RootBrgData->AcpiRbRes[raMmio64].AddrUsed=PciResourceMem64Limit+1;
        RootBrgData->AcpiRbRes[raMmio64].AllocType=EfiGcdAllocateMaxAddressSearchTopDown;
    }

    for(i=0; i<RootBrgData->ResCount; i++){
        res=RootBrgData->RbRes[i];
        if(res->Type==ASLRV_SPC_TYPE_BUS) {
            TRACE((-1, "PciRB: #%X BUS _MIN=0x%lX; _MAX=0x%lX; _LEN=0x%lX\n", RootBrgIndex,res->_MIN,res->_MAX,res->_LEN, res->_GRA));
            continue;
        }
        // update io and memory values from qpi rc output.
        //Allocate IO
        if(res->Type==ASLRV_SPC_TYPE_IO){

            TRACE((-1, "PciRB: #%X BUS _MIN=0x%lX; _MAX=0x%lX; _LEN=0x%lX\n", RootBrgIndex,res->_MIN,res->_MAX,res->_LEN, res->_GRA));
            //
            //Set Resource starting address for IO based on which RB it is.
            // Update Root Bridge with UDS resource information
            //
            RootBrgData->AcpiRbRes[raIo].Gra=res->_MAX;
			//Denverton AptioV Override Start- EIP#348922
            a = RootBrgData->AcpiRbRes[raIo].Min;
            AddressLimit = RootBrgData->AcpiRbRes[raIo].Max;
			//Denverton AptioV Override End- EIP#348922
            AddressLimit = AddressLimit + 1; // make power of 2
            TRACE((-1,"PciRB: #%X Resources Type=%X; routed by QPI: Address base = %lX; AddressLimit=%lX; \n", RootBrgIndex, res->Type, a, AddressLimit));

            TRACE((-1, "PciRB: #%X IO ",RootBrgIndex));
            //Use prefered method to allocate resources for
            Status=dxe->AllocateIoSpace(EfiGcdAllocateMaxAddressSearchTopDown,
                                EfiGcdIoTypeIo,
                                AlignFromGranularity((UINTN)res->_MAX),
                                res->_LEN,
                                &AddressLimit,
                                RootBrgData->ImageHandle,
                                RootBrgData->RbHandle);

            if(EFI_ERROR(Status))
            {
                TRACE((-1,"PciRB: IO Allocation Failed: _LEN=%lX; _GRA=l%X.\n",res->_LEN, res->_MAX));
 #if BoardPciRes_SUPPORT
                OutOfResVar.Resource=*res;
                AmiPciOutOfRes(&OutOfResVar, FALSE);
 #endif
                return Status;
            }
           // If IO Space was allocated to space not reserved for current Root Bridge, free space and return error
           if((Status == EFI_SUCCESS) && (AddressLimit < PciResourceIoBase))
            {
                TRACE((-1,"PciRB: IO Allocation Failed! Could not fit in Root Bridge Allotted IO Resources: AllocatedIoBase=%x, RequiredIoBase=%x, _LEN=%lX; _GRA=l%X.\n",\
                        AddressLimit, PciResourceIoBase, res->_LEN, res->_MAX));
                dxe->FreeIoSpace(AddressLimit, res->_LEN);
                Status = EFI_NOT_FOUND;
 #if BoardPciRes_SUPPORT
                OutOfResVar.Resource=*res;
                AmiPciOutOfRes(&OutOfResVar, FALSE);
 #endif
                return Status;
            }

        }
        //Allocate MMIO
        else if( res->Type==ASLRV_SPC_TYPE_MEM){
            //First root or Second one????
            if(res->_GRA==32){
                //Denverton AptioV Override Start- EIP#348922
				a = RootBrgData->AcpiRbRes[raMmio32].Min;
                AddressLimit = RootBrgData->AcpiRbRes[raMmio32].Max;
				//Denverton AptioV Override End- EIP#348922
                AddressLimit = AddressLimit + 1; // make power of 2
                TRACE((-1, "PciRB: #%X MMIO32",RootBrgIndex));
                RootBrgData->AcpiRbRes[raMmio32].Gra=res->_MAX;
            } else {
                //Denverton AptioV Override Start- EIP#348922
				a = RootBrgData->AcpiRbRes[raMmio64].Min;
                AddressLimit =RootBrgData->AcpiRbRes[raMmio64].Max;
				//Denverton AptioV Override End- EIP#348922
                AddressLimit = AddressLimit + 1; // make power of 2
                TRACE((-1, "PciRB: #%X MMIO64",RootBrgIndex));
                RootBrgData->AcpiRbRes[raMmio64].Gra=res->_MAX;
            }

            TRACE((-1,"PciRB: #%X Resources Type=%X; routed by QPI: _GRA=%lX; Address base = %lX; AddressLimit=%lX; \n",
            RootBrgIndex, res->Type, res->_GRA, a, AddressLimit));

            Status=dxe->AllocateMemorySpace(EfiGcdAllocateMaxAddressSearchTopDown,
                            EfiGcdMemoryTypeMemoryMappedIo,
                            AlignFromGranularity((UINTN)res->_MAX),
                            res->_LEN,
                            &AddressLimit,
                            RootBrgData->ImageHandle,
                            RootBrgData->RbHandle);

            if(EFI_ERROR(Status))
            {
                TRACE((-1,"PciRootBrg: Memory Allocation Failed: Length: %lX\n",res->_LEN));

//Denverton AptioV Override Start- EIP#305575
#if CRB_OUT_OF_RESOURCE_SUPPORT

                // Handle the OOR condition by adjusting the MMIO Size
                Status = pRS->GetVariable (L"IntelSetup",
                                           &IntelSetupGuid,
                                           &IntelAttributes,
                                           &IntelVariableSize,
                                           &IntelSetupData);

                if (EFI_ERROR(Status) || IntelSetupData.MmioSize == 2){
//Denverton AptioV Override Start- EIP#348922
#if BoardPciRes_SUPPORT
                   OutOfResVar.Resource=*res;
                   AmiPciOutOfRes(&OutOfResVar, FALSE);
#endif
//Denverton AptioV Override End- EIP#348922
                    // Returning OOR, as it cannot be handled
                    return EFI_OUT_OF_RESOURCES;
                }

                IntelSetupData.MmioSize = 2; // 3072MB

                Status = pRS->SetVariable( L"IntelSetup", 
                                           &IntelSetupGuid, 
                                           IntelAttributes, 
                                           IntelVariableSize,
                                           &IntelSetupData );  
                if (EFI_ERROR(Status)){
//Denverton AptioV Override Start- EIP#348922
#if BoardPciRes_SUPPORT
                   OutOfResVar.Resource=*res;
                   AmiPciOutOfRes(&OutOfResVar, FALSE);
#endif
//Denverton AptioV Override End- EIP#348922
                   // Returning OOR, as SetVariable fails unable to handle OOR
                   return EFI_OUT_OF_RESOURCES;
                }

                TRACE((-1,"PciRootBrg: Handled the OOR condition by adjusting the MMIO Size\n"));

                TRACE((-1,"PciRootBrg: Initiating System Reset to take effect....\n"));
                pRS->ResetSystem(EfiResetCold, Status, 0, NULL);
                CpuDeadLoop();

#else
                return Status;
#endif
//Denverton AptioV Override End- EIP#305575
              }


            if((Status == EFI_SUCCESS )&& (AddressLimit < a))
            {
                TRACE((-1,"PciRB: MMIO Allocation Failed! Could not fit in Root Bridge Allotted MMIO Resources: AllocatedMmioBase=%x, RequiredMmioBase=%x, _LEN=%lX; _GRA=l%X.\n",\
                                AddressLimit, a, res->_LEN, res->_MAX));
                dxe->FreeMemorySpace(AddressLimit, res->_LEN);
                Status = EFI_NOT_FOUND;
 #if BoardPciRes_SUPPORT
                OutOfResVar.Resource=*res;
                AmiPciOutOfRes(&OutOfResVar, FALSE);
 #endif
                return Status;
            }
            if (Status == EFI_SUCCESS)
            {
                // Denverton AptioV Override Start - EIP#375110 
                //Set this region as WT cache if it is PREFETCHABLE
                /*if(res->TFlags.MEM_FLAGS._MEM!=ASLRV_MEM_UC)
                {
                    TRACE((-1,"P"));
                    Status=dxe->SetMemorySpaceAttributes(AddressLimit,res->_LEN,EFI_MEMORY_WT);
                    //if attempt to set WT attributes has filed, let's try UC
                    if(EFI_ERROR(Status))
                    {
                        TRACE((-1,"PciHostBridge: Setting of WT attributes for prefetchable memory has failed(%r). UC is used.\n",Status));
                        Status=dxe->SetMemorySpaceAttributes(AddressLimit,res->_LEN,EFI_MEMORY_UC);
                    }
                 }
                 else */
                // Denverton AptioV Override End - EIP#375110 
                Status=dxe->SetMemorySpaceAttributes(AddressLimit,res->_LEN,EFI_MEMORY_UC);
                ASSERT_EFI_ERROR(Status);
                if(EFI_ERROR(Status)) return Status;
            }
        }
        if (Status == EFI_SUCCESS)
            res->_MIN = AddressLimit;
        TRACE((-1, ": _MIN=0x%lX; _MAX=0x%lX; _LEN=0x%lX; _GRA=0x%lX\n",
        res->_MIN,res->_MAX,res->_LEN, res->_GRA ));
    }
    return Status;
}
// Denverton Aptiov override end - EIP#218066 

//----------------------------------------------------------------------------
// Following functions are ROOT BRIDGE Infrastructure Overrides and Porting.
//----------------------------------------------------------------------------

/**
    Chipset Specific function to Map Internal Device address
    residing ABOVE 4G to the BELOW 4G address space for DMA.
    MUST BE IMPLEMENTED if CHIPSET supports address space
    decoding ABOVE 4G.

    @param RbData Root Bridge private structure data
    @param Operation Operation to provide Mapping for
    @param HostAddress HostAddress of the Device
    @param NumberOfBytes Number of Byte in Mapped Buffer.
    @param DeviceAddress Mapped Device Address.
    @param Mapping Mapping Info Structure this function must
        allocate and fill.

        EFI_STATUS
    @retval EFI_SUCCESS Successful.
    @retval EFI_UNSUPPORTED The Map function is not supported.
    @retval EFI_INVALID_PARAMETER One of the parameters has an
        invalid value.

    @note  Porting is required for chipsets that supports Decoding
              of the PCI Address Space ABOVE 4G.
**/
EFI_STATUS RbCspIoPciMap (
    IN PCI_ROOT_BRG_DATA                            *RbData,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_OPERATION    Operation,
    IN EFI_PHYSICAL_ADDRESS                         HostAddress,
    IN OUT UINTN                                    *NumberOfBytes,
    OUT EFI_PHYSICAL_ADDRESS                        *DeviceAddress,
    OUT VOID                                        **Mapping )
{

    EFI_STATUS  Status = EFI_UNSUPPORTED;

    // Any Additional Variables goes here

    *Mapping = NULL;

    // For Chipsets which DOES support decoding of the PCI resources ABOVE 4G.
	// But CPU architecture DOES NOT not (like 32bit mode)
    // here must be something like that.

//###DEBUG
//###     PCI_ROOT_BRIDGE_MAPPING *mapping;
//###     //------------------------------
//###         // Common buffer operations can not be remapped because in such
//###         // operations the same buffer will be accessed by CPU and PCI hardware
//###         if ( (Operation == EfiPciOperationBusMasterCommonBuffer) || 
//###              (Operation == EfiPciOperationBusMasterCommonBuffer64) )
//###             return EFI_UNSUPPORTED;
//###
//###         mapping = Malloc(sizeof(PCI_ROOT_BRIDGE_MAPPING));
//###         if (mapping == NULL) return EFI_OUT_OF_RESOURCES;
//###
//###         mapping->Signature  = EFI_PCI_RB_MAPPING_SIGNATURE;
//###         mapping->Resrved    = 0;
//###         mapping->Operation  = Operation;
//###         mapping->NumPages   = EFI_SIZE_TO_PAGES(*NumberOfBytes);
//###         mapping->HostAddr   = HostAddress;
//###         mapping->DeviceAddr = 0x00000000ffffffff;
//###
//###         Status = pBS->AllocatePages( AllocateMaxAddress, 
//###                                      EfiBootServicesData, 
//###                                      mapping->NumPages, 
//###                                      &mapping->DeviceAddr );
//###         if (EFI_ERROR(Status)) {
//###             pBS->FreePool(mapping);
//###             return Status;
//###         }
//###
//###         *Mapping = (VOID*)mapping;
//###
//###         // Here must be a way to copy context of HostDevice buffer to the
//###         // Mapped one.
//###         // This code given as example only you might need to do some chipset
//###         // programming to access PCI Address Space Above 4G
//###
//###         if ( (Operation == EfiPciOperationBusMasterRead) || 
//###              (Operation == EfiPciOperationBusMasterRead64) )
//###             pBS->CopyMem( (VOID*)(UINTN)mapping->DeviceAddr, 
//###                           (VOID*)(UINTN)mapping->HostAddr, 
//###                           mapping->NumBytes );
//###
//###         *DeviceAddress = mapping->DeviceAddr;
//### DEBUG END

    return Status;
}


/**
    Chipset Specific function to Unmap previousely Mapped
    buffer for DMA.
    MUST BE IMPLEMENTED if CHIPSET supports address space
    decoding ABOVE 4G.

    @param RbData Root Bridge private structure data
    @param Mapping Mapping Info Structure this function must free.

        EFI_STATUS
    @retval EFI_SUCCESS Successful.
    @retval EFI_UNSUPPORTED The Unmap function is not supported.
    @retval EFI_INVALID_PARAMETER One of the parameters has an
        invalid value.

    @note  Porting required if needed.
**/
EFI_STATUS RbCspIoPciUnmap (
    IN PCI_ROOT_BRG_DATA                            *RbData,
    OUT PCI_ROOT_BRIDGE_MAPPING                     *Mapping )
{
    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here


    if (Mapping != NULL) return EFI_INVALID_PARAMETER;
    // for all other conditions we would return EFI_UNSUPPORTED.
    Status = EFI_UNSUPPORTED;

    // for Chipsets which DOES support decoding of the PCI resources ABOVE 4G.
	// But CPU architecture DOES NOT not (like 32bit mode)
    // And provides corresponded mapping for the host address
    // here must be something like that.
//####  DEBUG
//####      if (Mapping->Signature != EFI_PCI_RB_MAPPING_SIGNATURE)
//####          Status = EFI_INVALID_PARAMERTER;
//####
//####      if (!EFI_ERROR(Status)) {
//####
//####          if ( (Mapping->Operation == EfiPciOperationBusMasterWrite) || 
//####               (Mapping->Operation == EfiPciOperationBusMasterWrite64) )
//####
//####          // Here must be a way to copy context of the Unmapped buffer to
//####          // HostDevice.
//####          // This code given as example only you might need to do some
//####          // chipset programming to access PCI Address Space Above 4G
//####          pBS->CopyMem( (VOID*)(UINTN)Mapping->HostAddr, 
//####                        (VOID*)(UINTN)Mapping->DeviceAddr, 
//####                        Mapping->NumBytes );
//####
//####          pBS->FreePages(Mapping->DeviceAddr, Mapping->NumPages);
//####          pBS->FreePool(Mapping);
//####      }
//####  DEBUG

    return Status;
}

/**
    Chipset Specific function to do PCI RB Attributes releated
    programming.

    @param RbData Pointer to Root Bridge private structure.
    @param Attributes The Root Bridge attributes to be programming.
    @param ResourceBase Pointer to the resource base. (OPTIONAL)
    @param ResourceLength Pointer to the resource Length. (OPTIONAL)

        EFI_STATUS
    @retval EFI_SUCCESS Successful.
    @retval EFI_INVALID_PARAMETER One of the parameters has an
        invalid value.
**/
EFI_STATUS RbCspIoPciAttributes (
    IN PCI_ROOT_BRG_DATA                            *RbData,
    IN UINT64                                       Attributes,
    IN OUT UINT64                                   *ResourceBase OPTIONAL,
    IN OUT UINT64                                   *ResourceLength OPTIONAL )
{


    EFI_STATUS  Status = EFI_SUCCESS;

    // Any Additional Variables goes here

    return Status;
}

/**
    Read Pci Registers into buffer.
    Csp Function which actualy access PCI Config Space.
    Chipsets that capable of having PCI EXPRESS Ext Cfg Space
    transactions.
    Must Implement this access routine here.

    @param RbData Root Bridge private structure.
    @param Width PCI Width.
    @param Address PCI Address.
    @param Count Number of width reads/writes.
    @param Buffer Buffer where read/written.
    @param Write Set if write.

        EFI_STATUS
    @retval EFI_SUCCESS Successful read.
    @retval EFI_INVALID_PARAMETER One of the parameters has an
**/
EFI_STATUS RootBridgeIoPciRW (
    IN VOID                                     *RbData,
    IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_WIDTH    Width,
    IN UINT64                                   Address,
    IN UINTN                                    Count,
    IN OUT VOID                                 *Buffer,
    IN BOOLEAN                                  Write )
{
    BOOLEAN ValidCfg = TRUE;
    UINT8   IncrementValue = 1 << (Width & 3); // 1st 2 bits currently define
                                               // width.
                                               // Other bits define type.
    //PCI Express Base Address will be added inside the library call.
    //PciEBase address uses only lower 28 bit of the PciAddress. 
    //We will use UPPER 32 bits as a segment # for the call.
    UINT64  PciAddress = (((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->Bus << 20 ) + \
        (((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->Device << 15 ) + \
        (((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->Function << 12) + \
        LShiftU64(((EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL*)RbData)->SegmentNumber,32);
//-------------------------------------------

    PciAddress += \
        ((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->ExtendedRegister ? \
            ((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->ExtendedRegister : \
            ((EFI_PCI_CONFIGURATION_ADDRESS*) &Address)->Register;

    // To read 64bit values, reduce Increment Value (by half) and
    // double the count value (by twice)
    if (IncrementValue > 4) {
        IncrementValue >>= 1;
        Count <<= 1;
    }

    if (Width >= EfiPciWidthMaximum || IncrementValue > 4)
        return EFI_INVALID_PARAMETER;

    while (Count--) {
		//Check if Access address falls into PCIExpress Config Address range
        //Range check and and Number of Buses checked on PCI Bus Driver level.
        if (PciAddress & 0xF0000000) ValidCfg = FALSE;
        if (Write) {
            switch(IncrementValue) {
                case 1:
                    if (ValidCfg) //*(UINT8*)PciAddress = *(UINT8*)Buffer;
                    	PciWrite8(PciAddress, *(UINT8*)Buffer);
                    break;
                case 2:
                    if (ValidCfg) //*(UINT16*)PciAddress = *(UINT16*)Buffer;
                    	PciWrite16(PciAddress, *(UINT16*)Buffer);
                    break;
                default:
                    if (ValidCfg) //*(UINT32*)PciAddress = *(UINT32*)Buffer;
                    	PciWrite32(PciAddress, *(UINT32*)Buffer);
                    break;
            }
        } else {
            switch(IncrementValue) {
                case 1:
                    //*(UINT8*)Buffer = (ValidCfg) ? *(UINT8*)PciAddress : -1;
                	*(UINT8*)Buffer = (ValidCfg) ? PciRead8(PciAddress) : -1;
                    break;
                case 2:
                    //*(UINT16*)Buffer = (ValidCfg) ? *(UINT16*)PciAddress : -1;
                	*(UINT16*)Buffer = (ValidCfg) ? PciRead16(PciAddress) : -1;
                    break;
                default:
                    //*(UINT32*)Buffer = (ValidCfg) ? *(UINT32*)PciAddress : -1;
                	*(UINT32*)Buffer = (ValidCfg) ? PciRead32(PciAddress) : -1;
                    break;
            }
        }

        if (Width <= EfiPciWidthFifoUint64) {
             Buffer = ((UINT8 *)Buffer + IncrementValue);
            // Buffer is increased for only EfiPciWidthUintxx and
            // EfiPciWidthFifoUintxx
        }

        // Only increment the PCI address if Width is not a FIFO.
        if ((Width & 4) == 0) {
            PciAddress += IncrementValue;
        }
    }

    return EFI_SUCCESS;
}

