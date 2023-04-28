//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2013, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
//**********************************************************************
//<AMI_FHDR_START>
//
// Name:  <NCT6776PeiInit.c>
//
// Description:	
//
//<AMI_FHDR_END>
//**********************************************************************
#include <Pei.h>
#include <AmiLib.h>
#include <AmiPeiLib.h>
#include <Protocol\AmiSio.h>
#include <Library\AmiSioPeiLib.h>

#include <NCT6776PeiIoTable.h>
//-------------------------------------------------------------------------
// internal funtion declare; these funtions are only used by this file.
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// global funtion declare ; these funtions are used for other files.
//-------------------------------------------------------------------------

//*************************************************************************
// belows are functions defined
//*************************************************************************
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_PeiClearDevResource
//
// Description:
//  This function will Clear SIO resource
//
// Input:
//   SIO_DEV2* dev
// Output: 
//  NONE
//
//------------------------------------------------------------------------- 
// <AMI_PHDR_END>
VOID NCT6776_PeiClearDevResource(
    IN  UINT8    Ldn
)
{
    // Seclect device LDN
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_LDN_SEL_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA, Ldn);
    // Deactivate Device
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_ACTIVATE_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA,  NCT6776_DEACTIVATE_VALUE);
    // Clear Base Address
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_BASE1_HI_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA,  0);
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_BASE1_LO_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA,  0);
    // Clear Interrupt
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_IRQ1_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA,  0);
    return;
}

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: SioPeiInitEntryPoint
//
// Description:
//  This function provide PEI phase SIO initialization
//
// Input:
//  IN  EFI_FFS_FILE_HEADER    *FfsHeader - Logical Device's information
//  IN  EFI_PEI_SERVICES       **PeiServices  - Read/Write PCI config space
//
// Output:    None
//
// Modified:  Nothing
//
// Referrals: None
//
// Note:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
EFI_STATUS NCT6776PeiInitEntryPoint(
        IN       EFI_PEI_FILE_HANDLE  FileHandle,
        IN CONST EFI_PEI_SERVICES     **PeiServices
)
{
    UINT8 index;

    for(index=0; index<sizeof(NCT6776PeiDecodeTable)/sizeof(IO_DECODE_DATA); index++)
//G160-002(4)        AmiSioLibSetLpcDeviceDecoding(NULL, NCT6776PeiDecodeTable[index].BaseAdd, NCT6776PeiDecodeTable[index].UID, NCT6776PeiDecodeTable[index].Type);
                AmiSioLibSetLpcGenericDecoding(NULL, NCT6776PeiDecodeTable[index].BaseAdd, NCT6776PeiDecodeTable[index].UID, NCT6776PeiDecodeTable[index].Type);         //G160-002(4)

    ProgramRtRegisterTable(0, NCT6776PeiInitTable, sizeof(NCT6776PeiInitTable)/sizeof(SIO_DEVICE_INIT_DATA));

    // Enter Configuration Mode
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE);
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE);
    // Disable Non-Used Device in Pei Phase,if its default value is actived.
    NCT6776_PeiClearDevResource(NCT6776_LDN_CIR);
    // Exit Configuration Mode
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_EXIT_VALUE);

    return EFI_SUCCESS;
}

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2013, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

