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
// Name:  <NCT6683DPeiInit.c>
//
// Description: 
//
//<AMI_FHDR_END>
//**********************************************************************
#include <Library/AmiSioPeiLib.h>
#include <NCT6683DPeiIoTable.h>
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
EFI_STATUS NCT6683DPeiInitEntryPoint(
        IN       EFI_PEI_FILE_HANDLE  FileHandle,
        IN CONST EFI_PEI_SERVICES     **PeiServices
)
{
    UINT8 index;

    for(index=0; index<sizeof(NCT6683DPeiDecodeTable)/sizeof(IO_DECODE_DATA); index++)
//G160-004(12)        AmiSioLibSetLpcDeviceDecoding(NULL, NCT6683DPeiDecodeTable[index].BaseAdd, NCT6683DPeiDecodeTable[index].UID, NCT6683DPeiDecodeTable[index].Type);
        AmiSioLibSetLpcGenericDecoding(NULL, NCT6683DPeiDecodeTable[index].BaseAdd, NCT6683DPeiDecodeTable[index].UID, NCT6683DPeiDecodeTable[index].Type);        //G160-004(12)

    ProgramRtRegisterTable(0, NCT6683DPeiInitTable, sizeof(NCT6683DPeiInitTable)/sizeof(SIO_DEVICE_INIT_DATA));

//G160-029(2) - start
    #if defined(NEXCOM_SMBUS_WORKAROUND) && (NEXCOM_SMBUS_WORKAROUND == 1)
        {
                UINT8   u8temp;
                
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_CONFIG_MODE_ENTER_VALUE);       //Enter SIO
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_CONFIG_MODE_ENTER_VALUE);
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_LDN_SEL_REGISTER);
                IoWrite8(NCT6683D_CONFIG_DATA ,NCT6683D_LDN_EC);                        //Select LDN B
                
                IoWrite8(NCT6683D_CONFIG_INDEX,0x60);
                IoWrite8(NCT6683D_CONFIG_DATA ,0x0A);                                   //Set EC base address
                
                IoWrite8(NCT6683D_CONFIG_INDEX,0x61);
                IoWrite8(NCT6683D_CONFIG_DATA ,0x20);                                   //Set EC base address
                
                IoWrite8(NCT6683D_CONFIG_INDEX,0x30);
                IoWrite8(NCT6683D_CONFIG_DATA ,0x01);                                   //Enable EC device 
        
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0xff);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0x01);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0xA1);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x00);                             //Set page1 offset 0xA1 is 0, disable sensor.

                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0xff);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0x01);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0xA2);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x00);                             //Set page1 offset 0xA2 is 0, disable sensor.

                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0xff);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0x01);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0xA3);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x00);                             //Set page1 offset 0xA3 is 0, disable sensor.

                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0xff);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0x01);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0xA4);
                IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x00);                             //Set page1 offset 0xA4 is 0, disable sensor.

                IoWrite8(NCT6683D_HWM_BASE_ADDRESS  ,0xff);

                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_LDN_SEL_REGISTER);
                IoWrite8(NCT6683D_CONFIG_DATA ,NCT6683D_LDN_GPIO1);                     //Select LDN 7
        
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_VAL25);
                u8temp = IoRead8(NCT6683D_CONFIG_DATA);
                u8temp |= 0x40;
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_VAL25);
                IoWrite8(NCT6683D_CONFIG_DATA ,u8temp);                                 //Set GPIO 6 not power down.

                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_ACTIVATE_REGISTER);
                u8temp = IoRead8(NCT6683D_CONFIG_DATA);
                u8temp |= 0x40;
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_ACTIVATE_REGISTER);
                IoWrite8(NCT6683D_CONFIG_DATA ,u8temp);                                 //Set LPC can access GPIO6 .
        
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_VAL29);
                u8temp = IoRead8(NCT6683D_CONFIG_DATA);
                u8temp &= 0xF7;
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_VAL29);
                IoWrite8(NCT6683D_CONFIG_DATA ,u8temp);                                 //Set Pin 74,75 is GPIO 62,63.

                IoWrite8(NCT6683D_CONFIG_INDEX,0xF0);
                IoWrite8(NCT6683D_CONFIG_DATA ,0x06);                                   //Select GPIO6
        
                IoWrite8(NCT6683D_CONFIG_INDEX,0xE3);
                u8temp = IoRead8(NCT6683D_CONFIG_DATA);
                u8temp |= 0x0C;
                IoWrite8(NCT6683D_CONFIG_INDEX,0xE3);
                IoWrite8(NCT6683D_CONFIG_DATA ,u8temp);                                 //Set GPIO 62,63 is input
                
                IoWrite8(NCT6683D_CONFIG_INDEX,NCT6683D_CONFIG_MODE_EXIT_VALUE);        //Exit SIO
        }
#endif  //defined(NEXCOM_SMBUS_WORKAROUND) && (NEXCOM_SMBUS_WORKAROUND == 1)
//G160-029(2) - end

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
