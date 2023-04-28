//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2014, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************


/** @file CrbPei.c
    This file contains code for Chipset Reference Board
    Template initialization in the PEI stage

**/

//---------------------------------------------------------------------------
// Include(s)
//---------------------------------------------------------------------------
#include <PiPei.h>
#include <Ppi/CrbInfo.h>
#include <Ppi/SbPpi.h>
#include <Ppi/NbPpi.h>
#include <Library/PeiServicesLib.h>
#include <Library/PciLib.h>
#include <Library/BaseMemoryLib.h>

#include <Token.h>
#include <AmiPeiLib.h> // Optional. should use Mde Library instead.
#include <AmiCspLib.h>
#include <Setup.h>
#include <Sb.h>
#include <Ppi/ReadOnlyVariable2.h>      //G160-002(11)

//---------------------------------------------------------------------------
// Constant, Macro and Type Definition(s)
//---------------------------------------------------------------------------
// Constant Definition(s)

// Macro Definition(s)

// Type Definition(s)

// Function Prototype(s)
UINT8
CrbPeiGetChipsetVendorNo (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
);

UINT32
CrbPeiGetCpuId (
  IN  CONST AMI_PEI_CRBINFO_PPI  	*This
);

UINT32
CrbPeiGetNorthBridgePciId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
);

UINT32
CrbPeiGetSouthBridgePciId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
);

CHAR8*
CrbPeiGetProjectId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
);

UINT16
CrbPeiGetBiosRevision (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
);

//---------------------------------------------------------------------------
// Variable and External Declaration(s)
//---------------------------------------------------------------------------
// Variable Declaration(s)
CHAR8 CONST ProjectTag[5] = CONVERT_TO_STRING(CRB_PROJECT_TAG); //!< contains the string of project tag.


// GUID Definition(s)

// PPI Definition(s)

/// contains the AMI_PEI_CRBINFO_PPI of this CRB
AMI_PEI_CRBINFO_PPI	gAmiCrbInforPpi = {
	CrbPeiGetChipsetVendorNo,
	CrbPeiGetCpuId,
	CrbPeiGetNorthBridgePciId,
	CrbPeiGetSouthBridgePciId,
	CrbPeiGetProjectId,
	CrbPeiGetBiosRevision,
};

static EFI_PEI_PPI_DESCRIPTOR gCrbPpiList[] =  {
	{
		(EFI_PEI_PPI_DESCRIPTOR_PPI | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST),
		&gAmiPeiCrbInfoPpiGuid,
		&gAmiCrbInforPpi
	}
};

// External Declaration(s)

// Function Definition(s)

//---------------------------------------------------------------------------

/**
    Provide the chipset vendor number.

    @param This this Ppi.

    @retval 0 Unknown.
    @retval 1 Intel.
    @retval 2 AMD.

    @note  .
**/
UINT8
CrbPeiGetChipsetVendorNo (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
  )
{
	UINT32      Index;
	UINT32      RegisterEax;
	UINT32      RegisterEbx;
	UINT32      RegisterEcx;
	UINT32      RegisterEdx;
	// Intel
	// EBX 756E6547 "uneG"
	// ECX 6C65746E "letn"
	// EDX 49656e69 "Ieni"
	// AMD
	//EBX 68747541 "htuA"
	//ECX 444D4163 "DMAc"
	//EDX 69746E65 "itne"
	CHAR8 CONST Intel[5] = "letnI";
	CHAR8 CONST Amd[3] = "DMA";
	CHAR8 MyString[5];
	UINT8 ChipsetVendorNo = 0;

	Index = 0;
	Index = AsmCpuid(Index, &RegisterEax, &RegisterEbx, &RegisterEcx, &RegisterEdx);
	MyString[4] = ((CHAR8*)&RegisterEdx)[3];
	MyString[3] = ((CHAR8*)&RegisterEcx)[0];
	MyString[2] = ((CHAR8*)&RegisterEcx)[1];
	MyString[1] = ((CHAR8*)&RegisterEcx)[2];
	MyString[0] = ((CHAR8*)&RegisterEcx)[3];

	if (CompareMem(MyString, Intel, 5) == 0) {
		ChipsetVendorNo = 1;
	} else if (CompareMem(MyString, Amd, 3) == 0) {
		ChipsetVendorNo = 2;
	}

	return ChipsetVendorNo;
}

/**
    Provide the CPU ID.

        
    @param This this Ppi.

    @retval EAX : Version Information (Type, Family, Model, and Stepping ID)

    @note  .
**/
UINT32
CrbPeiGetCpuId (
  IN  CONST AMI_PEI_CRBINFO_PPI  	*This
  )
{
	UINT32	Index = 1;
	UINT32	RegisterEax = -1;
	// EAX : Version Information (Type, Family, Model, and Stepping ID)
	Index = AsmCpuid(Index, &RegisterEax, NULL, NULL, NULL);
	return RegisterEax;
}

/**
    Provide the PCI DID/VID of the north bridge.

    @param This this Ppi.

    @retval -1 Undefined.
    @retval others PCI DID/VID.

    @note  .
**/
UINT32
CrbPeiGetNorthBridgePciId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
  )
{
	UINT32 PciId = -1;

	if (This->GetChipsetVendorNo(This) == 1) {
		PciId = PciRead32(PCI_LIB_ADDRESS(0, 0, 0, 0));
	} else if (This->GetChipsetVendorNo(This) == 2){
		PciId = PciRead32(PCI_LIB_ADDRESS(0, 0, 0, 0));
	}

	return PciId;
}

/**
    Provide the PCI DID/VID of the south bridge.

    @param This this Ppi.

    @retval -1 Undefined.
    @retval others PCI DID/VID.

    @note  .
**/
UINT32
CrbPeiGetSouthBridgePciId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
  )
{
	UINT32 PciId = -1;

	if (This->GetChipsetVendorNo(This) == 1) {
		PciId = PciRead32(PCI_LIB_ADDRESS(0, 31, 0, 0));
	} else if (This->GetChipsetVendorNo(This) == 2){
		PciId = PciRead32(PCI_LIB_ADDRESS(0, 20, 0, 0));
	}

	return PciId;
}

/**
    Provide the project ID.

    @param This this Ppi.

    @retval NULL Undefined / error.
    @retval others Project ID.

    @note  .
**/
CHAR8*
CrbPeiGetProjectId (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
  )
{
	return ProjectTag;
}

/**
    Provide the BIOS revision.

    @param This this Ppi.

    @retval -1 Undefined / error.
    @retval others BIOS revision.

    @note  .
**/
UINT16
CrbPeiGetBiosRevision (
  IN  CONST AMI_PEI_CRBINFO_PPI  *This
  )
{
	return (CRB_PROJECT_MAJOR_VERSION << 8) | CRB_PROJECT_MINOR_VERSION;
}

/**
    This function is the entry point for CRB PEIM.
    It initializes the chipset CRB in PEI phase.

    @param FileHandle Pointer to the FFS file header.
    @param PeiServices Pointer to the PEI services table.

    @retval EFI_SUCCESS CRB PEIM be loaded successfully.

    @note  This routine is called very early, prior to SBPEI and NBPEI.
**/

EFI_STATUS
EFIAPI
CrbPeiInit (
  IN EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES    **PeiServices
  )
{
    EFI_STATUS                  Status = EFI_SUCCESS;
//G160-002(11) - start
    SETUP_DATA	SetupData;
    EFI_PEI_READ_ONLY_VARIABLE2_PPI               *VariableServices;
    UINTN       Size = sizeof(SETUP_DATA);
    EFI_GUID	gSetupGuid = SETUP_GUID;
    UINT32      u32temp = 0;
//G160-002(11) - end

    Status = PeiServicesInstallPpi(gCrbPpiList);

//G160-002(11) - start
        DEBUG((DEBUG_INFO, "NEXCOM PCH GPIO function init.\n"));

        Status = PeiServicesLocatePpi (
                   &gEfiPeiReadOnlyVariable2PpiGuid,
                   0,
                   NULL,
                   (VOID **) &VariableServices
                   );
                   
        if(EFI_ERROR(Status)) return Status;

	Status = VariableServices->GetVariable( 
	                VariableServices,
			L"Setup",
			&gSetupGuid,
			NULL,
			&Size,
			&SetupData);
			
	if(EFI_ERROR(Status)) return Status;
        
                if(SetupData.NEXCOM_MINI_PCIE1 == 1){
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x578);          //Read PCH GPIO_6
                        u32temp |= BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x578,u32temp);           //Set PCH GPIO_6 is high
                }else{
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x578);          //Read PCH GPIO_6
                        u32temp &= ~BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x578,u32temp);           //Set PCH GPIO_6 is low
                }
                
                if(SetupData.NEXCOM_MINI_PCIE2 == 1){
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x570);          //Read PCH GPIO_5
                        u32temp |= BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x570,u32temp);           //Set PCH GPIO_5 is high
                }else{
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x570);          //Read PCH GPIO_5
                        u32temp &= ~BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x570,u32temp);           //Set PCH GPIO_5 is low
                }

//Z123-001(4) - start
                if(SetupData.NEXCOM_4G_LTE == 1){
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x568);          //Read PCH GPIO_4
                        u32temp |= BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x568,u32temp);           //Set PCH GPIO_4 is high
                }else{
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x568);          //Read PCH GPIO_4
                        u32temp &= ~BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x568,u32temp);           //Set PCH GPIO_4 is low
                }
//Z123-001(4) - end

/*//Z121-001(1)                
                if(SetupData.NEXCOM_4G_LTE == 1){
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x750);          //Read PCH GPIO_128
                        u32temp |= BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x750,u32temp);           //Set PCH GPIO_128 is high
                }else{
                        u32temp = MmioRead32(PCH_BASE_ADDRESS+0xC50000+0x750);          //Read PCH GPIO_128
                        u32temp &= ~BIT0;
                        MmioWrite32(PCH_BASE_ADDRESS+0xC50000+0x750,u32temp);           //Set PCH GPIO_128 is low
                }
*///Z121-001(1)
//G160-002(11) - end

    return Status;
}

//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2014, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************
