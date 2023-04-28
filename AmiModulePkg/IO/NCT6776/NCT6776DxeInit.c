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
// Name:  <NCT6776DxeInit.c>
//
// Description:	
//
//<AMI_FHDR_END>
//**********************************************************************
#include <AmiDxeLib.h>
#include <Token.h>
#include <AmiGenericSio.h>
#include <Setup.h>
#include <Protocol\AmiSio.h>
#include <Protocol\PciIo.h>
#include <Protocol\AmiBoardInitPolicy.h>
#include <Library\AmiSioDxeLib.h>

#include "NCT6776DxeIoTable.h"
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_ClearDevResource
//
// Description:
//  This function will Clear SIO resource
//
// Input:
//  SIO_DEV2* dev
// Output: 
//  NONE
//
//------------------------------------------------------------------------- 
// <AMI_PHDR_END>
VOID NCT6776_ClearDevResource(
    IN  SIO_DEV2    *dev
)
{
    // Enter Configuration Mode
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE);
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE);
    // Seclect device
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_LDN_SEL_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA, dev->DeviceInfo->Ldn);
    // Clear Base Address
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_BASE1_HI_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA, 0);
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_BASE1_LO_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA, 0);
    // Clear Interrupt
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_IRQ1_REGISTER);
    IoWrite8(NCT6776_CONFIG_DATA, 0);
    // Exit Configuration Mode
    IoWrite8(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_EXIT_VALUE);

    return;
}
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_GpioCallbackReadyToBoot
//
// Description:
//  This function will call back in ready to boot phase to save registers
//  into bootscript table
// Input:
//  IN  EFI_EVENT Event  
//  IN VOID	*Context
//
// Output: 
//  NONE
//
//------------------------------------------------------------------------- 
// <AMI_PHDR_END>
static VOID NCT6776_GpioCallbackReadyToBoot(IN EFI_EVENT Event,	IN VOID	*Context)
{
    EFI_STATUS         Status=EFI_SUCCESS;
    UINT8              value=0;
    UINT8              i=0;

    EFI_S3_SAVE_STATE_PROTOCOL * BootScriptProtocol = NULL;
    EFI_GUID gSioEfiS3SaveStateProtocolGuid= EFI_S3_SAVE_STATE_PROTOCOL_GUID;

    Status = pBS->LocateProtocol(&gSioEfiS3SaveStateProtocolGuid,NULL,&BootScriptProtocol);
    if (EFI_ERROR(Status)) {
        TRACE((-1,"GenericSIO: SIODXE fail to locate EfiBootScriptSaveProtocol %r",Status));
        return;
    }
    //1,AMI_TODO:enter cfgmode
    SioLib_BootScriptIO(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);
    SioLib_BootScriptIO(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);

    //2,AMI_TODO:select gpio device
    SioLib_BootscriptLdnSel(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_DATA, \
            NCT6776_LDN_SEL_REGISTER, NCT6776_LDN_GPIO1, BootScriptProtocol);

    //3,save table value
    SioLib_BootScriptSioS3SaveTable(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_DATA, \
            NCT6776_DXE_GPIO_Init_Table_After_Active,sizeof(NCT6776_DXE_GPIO_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)), BootScriptProtocol);
    //4,AMI_TODO:exit cfg mode
    SioLib_BootScriptIO(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_MODE_EXIT_VALUE, BootScriptProtocol);

    //
    //Kill the Event
    //
    pBS->CloseEvent(Event);
}
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_FDC_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//  EFI_SUCCESS - Initial step sucessfully
//  EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:    Nothing
//
// Referrals:   None
//
// Notes:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_FLOPPY_PORT_PRESENT
EFI_STATUS NCT6776_FDC_Init(
//    IN    AMI_SIO_PROTOCOL        *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL     *PciIo,
//    IN    SIO_INIT_STEP           InitStep
//)
AMI_BOARD_INIT_PROTOCOL             *This,
IN UINTN                            *Function,
IN OUT VOID                         *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    EFI_STATUS                      Status=EFI_SUCCESS;
    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;
    UINT8                           rv; //FdcMode Register
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep)
    {
        case isGetSetupData:
            // Disable IODecode?
            if((!dev->DeviceInfo->Implemented) || (!dev->NvData.DevEnable)){
                NCT6776_ClearDevResource(dev);
            }
        break;

        case isPrsSelect:
        break;

        case isBeforeActivate:
            //Decode?
            if(dev->DeviceInfo->Implemented && dev->NvData.DevEnable){
                AmiSioLibSetLpcDeviceDecoding(PciIo,dev->VlData.DevBase1, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }else{
                AmiSioLibSetLpcDeviceDecoding(PciIo,0, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }
            //AMI_TODO: please check the register define and program FDC mode
            //Read FDC Mode register
            Status=AmiSio->Access(AmiSio,FALSE,FALSE,0xF1,&rv);
            ASSERT_EFI_ERROR(Status);
            if(EFI_ERROR(Status))return Status;
            if(dev->NvData.DevMode)rv |= 0x01; //Bit00 set = FDD is Write Protect
            else rv &= (UINT8)(~0x01);
            Status=AmiSio->Access(AmiSio,TRUE,FALSE,0xF1,&rv);
            ASSERT_EFI_ERROR(Status);
        break;

        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        {
            //FDC Has 2 possible modes
            //Make sure Device Mode Strings are Static VAR!
            //Otherwise The string will gone after control flow leave this function
            static CHAR16 FdcModeStr1[] = L"Read Write";
            static CHAR16 FdcModeStr2[] = L"Write Protect";
            static CHAR16 FdcModeHelp[] = L"Change mode of Floppy Disk Controller. Select 'Read Write' for normal operation. Select 'Write Protect' mode for read only operation.";
            //---------------------------------------------------	
            dev->DevModeCnt=2;
            //Make room for 2 floppy modes + Help String...
            dev->DevModeStr=MallocZ(sizeof(CHAR16*)*(dev->DevModeCnt+1));
            if(dev->DevModeStr==NULL) {
                Status=EFI_OUT_OF_RESOURCES;
                ASSERT_EFI_ERROR(Status);
                return Status;
            }
            dev->DevModeStr[0]=&FdcModeStr1[0];
            dev->DevModeStr[1]=&FdcModeStr2[0];
            dev->DevModeStr[2]=&FdcModeHelp[0];
        }
        break;
        #endif
 
        case isAfterActivate:
        break;

        case isAfterBootScript:
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_COM_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//  EFI_SUCCESS - Initial step sucessfully
//  EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Notes:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_SERIAL_PORT1_PRESENT | NCT6776_SERIAL_PORT2_PRESENT
EFI_STATUS NCT6776_COM_Init(
//    IN    AMI_SIO_PROTOCOL        *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL     *PciIo,
//    IN    SIO_INIT_STEP           InitStep
        AMI_BOARD_INIT_PROTOCOL     *This,
        IN UINTN                    *Function,
        IN OUT VOID                 *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    EFI_STATUS                      Status=EFI_SUCCESS;
    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;
    UINT8                           rv; //ComMode Register
    ACPI_HDR                        *dsdt;
    EFI_PHYSICAL_ADDRESS            a;
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep)
    {
        case isGetSetupData:
            // Disable IODecode?
            if((!dev->DeviceInfo->Implemented) || (!dev->NvData.DevEnable)){
                NCT6776_ClearDevResource(dev);
            }
        break;

        case isPrsSelect:
        break;

        case isBeforeActivate:
            //Only decode UART1/UART2. More others UART port is decode in PEI
            //Attention! Remove the more com ports to PEI decode.
            if(dev->DeviceInfo->Uid < 0x02){
                //Decode?
                if(dev->DeviceInfo->Implemented && dev->NvData.DevEnable){
                    AmiSioLibSetLpcDeviceDecoding(PciIo,dev->VlData.DevBase1, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
                }else{
                    AmiSioLibSetLpcDeviceDecoding(PciIo,0, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
                }
            }
            // Program COM RS485/RS232 Mode Registers.
            if(NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].AndData8 == 0xFF) {
                rv=NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].OrData8;
            } else {
                Status=AmiSio->Access(AmiSio, FALSE, FALSE, NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].Reg8,&rv);
                ASSERT_EFI_ERROR(Status);
                rv &= NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].AndData8;
                rv |= NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].OrData8;
            }
            Status=AmiSio->Access(AmiSio,TRUE,FALSE,NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].Reg8,&rv);
            ASSERT_EFI_ERROR(Status);
            // Program COM Clock Source Registers.
            if(NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].AndData8 == 0xFF) {
                rv=NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].OrData8;
            } else {
                Status=AmiSio->Access(AmiSio, FALSE, FALSE, NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].Reg8,&rv);
                ASSERT_EFI_ERROR(Status);
                rv &= NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].AndData8;
                rv |= NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].OrData8;
            }
            Status=AmiSio->Access(AmiSio,TRUE,FALSE,NCT6776_DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid+2].Reg8,&rv);
            ASSERT_EFI_ERROR(Status);
            //Programm Device Mode register here(if NEEDED)use AmiSioProtocol
            //AMI_TODO: You can program device mode as follow:
            if(dev->DeviceInfo->Uid == 0x01)    {
                Status=AmiSio->Access(AmiSio,FALSE,FALSE,0xF1,&rv);
                ASSERT_EFI_ERROR(Status);
                if(EFI_ERROR(Status))return Status;
                //clear Bit5~3 where COM Port mode is:
                rv &= 0xC7;
                switch (dev->NvData.DevMode) {
                    case 0:
                        rv |= 0x00;    //Bit5~3 = 000, Standard Serial Port Mode
                    break;
                    case 1:
                        rv |= 0x10;    //Bit5~3 = 010, IrDA, active pulse is 1.6uS
                    break;
                    case 2:
                        rv |= 0x18;    //Bit5~3 = 011, IrDA, active pulse is 3/16 bit time
                    break;
                    case 3:
                        rv |= 0x38;    //Bit5~3 = 111, ASK-IR 
                    break;
                    default: return EFI_INVALID_PARAMETER;
                }
                Status=AmiSio->Access(AmiSio,TRUE,FALSE,0xF1,&rv);
                ASSERT_EFI_ERROR(Status);

                if (dev->NvData.DevMode > 0){
                    //Get DSDT.. we have to update it.
                    Status=LibGetDsdt(&a,EFI_ACPI_TABLE_VERSION_ALL);
                    if(EFI_ERROR(Status)){
                        SIO_TRACE((TRACE_SIO,"NCT6776_COM_Init: Fail to Get DSDT - returned %r\n", Status));
                        ASSERT_EFI_ERROR(Status);
                    } else dsdt=(ACPI_HDR*)a;
                    Status=UpdateAslNameOfDevice(dsdt, dev->DeviceInfo->AslName, "_HID", 0x1005D041);
                    ASSERT_EFI_ERROR(Status);
                    //Checksum
                    dsdt->Checksum = 0;
                    dsdt->Checksum = ChsumTbl((UINT8*)dsdt, dsdt->Length);
                }
            }
        break;

        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        if(dev->DeviceInfo->Uid == 0x01)
        {
            //IRDA Has 4 possible modes
            //Make sure Device Mode Strings are Static VAR!
            //Otherwise The string will gone after control flow leave this function
            static CHAR16 IrdaModeStr1[] = L"Standard Serial Port Mode";
            static CHAR16 IrdaModeStr2[] = L"IrDA Active pulse 1.6 uS";
            static CHAR16 IrdaModeStr3[] = L"IrDA Active pulse 3/16 bit time";
            static CHAR16 IrdaModeStr4[] = L"ASKIR Mode";
            static CHAR16 IrdaModeHelp[] = L"Change the Serial Port mode. Select <High Speed> or <Normal mode> mode";
            //---------------------------------------------------	
            dev->DevModeCnt=4;
            //Make room for 2 floppy modes + Help String...
            dev->DevModeStr=MallocZ(sizeof(CHAR16*)*(dev->DevModeCnt+1));
            if(dev->DevModeStr==NULL) {
                Status=EFI_OUT_OF_RESOURCES;
                ASSERT_EFI_ERROR(Status);
                return Status;
            }
            dev->DevModeStr[0]=&IrdaModeStr1[0];
            dev->DevModeStr[1]=&IrdaModeStr2[0];
            dev->DevModeStr[2]=&IrdaModeStr3[0];
            dev->DevModeStr[3]=&IrdaModeStr4[0];
            dev->DevModeStr[4]=&IrdaModeHelp[0];
        }
        break;
        #endif

        case isAfterActivate:
        break;

        case isAfterBootScript:
        break;

        default: Status=EFI_INVALID_PARAMETER;
    }//switch
    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_LPT_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//  EFI_SUCCESS - Initial step sucessfully
//  EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Notes:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_PARALLEL_PORT_PRESENT
EFI_STATUS NCT6776_LPT_Init(
//    IN    AMI_SIO_PROTOCOL        *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL     *PciIo,
//    IN    SIO_INIT_STEP           InitStep
    AMI_BOARD_INIT_PROTOCOL         *This,
    IN UINTN                        *Function,
    IN OUT VOID                     *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    EFI_STATUS                      Status=EFI_SUCCESS;
    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;
    UINT8                           rv; //LptMode Register
    ACPI_HDR                        *dsdt;
    EFI_PHYSICAL_ADDRESS            a;
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
            // Disable IODecode?
            if((!dev->DeviceInfo->Implemented) || (!dev->NvData.DevEnable)){
                NCT6776_ClearDevResource(dev);
            }
        break;

        case isPrsSelect:
            //depend on LPT Mode it may or may not use a DMA channel
            //Strcpy(&dev->DeviceInfo->AslName[0],"LPTE");
            //EFI_DEADLOOP();
            if(dev->NvData.DevMode >3 ) {  // 7 mode
            //if(dev->NvData.DevMode&0x02) { //4 mode
                if(ACPI_SUPPORT){
                    //if ACPI is Supported get _PRS for Extended Parallel Port from DSDT
                    //last parameter is 0-based index in NCT6776_DevLst[] table.
                    Status=SioDxeLibGetPrsFromAml(dev,"EPPR", 1);
                } else {
                    //if ACPI is not supported use corresponded Function seting
                    //"UseDma" parameter to TRUE for Extended Parallel Port
                    Status=SioDxeLibSetLptPrs(dev, TRUE);
                }
                //Get DSDT.. we have to update it.
                Status=LibGetDsdt(&a,EFI_ACPI_TABLE_VERSION_ALL);
                if(EFI_ERROR(Status)){
                    SIO_TRACE((TRACE_SIO,"NCT6776_LPT_Init: Fail to Get DSDT - returned %r\n", Status));
                    ASSERT_EFI_ERROR(Status);
                } else dsdt=(ACPI_HDR*)a;
                Status=UpdateAslNameOfDevice(dsdt, dev->DeviceInfo->AslName, "_HID", 0x0104D041);
                //Checksum
                dsdt->Checksum = 0;
                dsdt->Checksum = ChsumTbl((UINT8*)dsdt, dsdt->Length);
            } else {
                if(ACPI_SUPPORT){
                    //if ACPI is Supported get _PRS for Standard Parallel Port from DSDT
                    //last parameter is 0-based index in WPCD376I_DevLst[] table.
                    Status=SioDxeLibGetPrsFromAml(dev,"LPPR", 1);
                }else{
                    //if ACPI is not supported use corresponded Function seting
                    //"UseDma" parameter to FALSE for Standard Parallel Port
                    Status=SioDxeLibSetLptPrs(dev, FALSE);
                }
            }
            ASSERT_EFI_ERROR(Status);
        break;

        case isBeforeActivate:
            //Decode?
            if(dev->DeviceInfo->Implemented && dev->NvData.DevEnable){
                AmiSioLibSetLpcDeviceDecoding(PciIo,dev->VlData.DevBase1, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }else{
                AmiSioLibSetLpcDeviceDecoding(PciIo,0, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }
            //Programm Device Mode register here(if NEEDED)use AmiSioProtocol
            //AMI_TODO: You can program device mode as follow:
            Status=AmiSio->Access(AmiSio,FALSE,FALSE,0xF0,&rv);    //LPT Configuration Reg, Read the reg value
            ASSERT_EFI_ERROR(Status);
            if(EFI_ERROR(Status))return Status;
            //Program Lpt Mode register following SIO Specification instructions.
            //Set mode:Bit2-0 set = LPT mode
            //clear lowest 3 bits where LPT mode is:
            rv&=0xF8;
            switch (dev->NvData.DevMode) {
                    case 0:    rv|=4; //STD Printer Mode
                        break;
                    case 1:    rv|=0; //SPP Mode
                        break;
                    case 2:    rv|=1; //EPP-1.9 and SPP Mode
                        break;
                    case 3:    rv|=5; //EPP-1.7 and SPP Mode
                        break;
                    case 4:    rv|=2; //ECP Mode
                        break;
                    case 5:    rv|=3; //ECP and EPP-1.9 Mode
                        break;
                    case 6:    rv|=7; //ECP and EPP-1.7 Mode
                        break;
                default: return EFI_INVALID_PARAMETER;
            }
            //Program back Device Mode register
            Status=AmiSio->Access(AmiSio,TRUE,FALSE,0xF0,&rv);
            ASSERT_EFI_ERROR(Status);
        break;

        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        {
            //LPT Has 7 possible modes
            //Make sure Device Mode Strings are Static VAR!
            //Otherwise The string will gone after control flow leave this function
            static CHAR16 LptModeStr1[] = L"STD Printer Mode";
            static CHAR16 LptModeStr2[] = L"SPP Mode";
            static CHAR16 LptModeStr3[] = L"EPP-1.9 and SPP Mode";
            static CHAR16 LptModeStr4[] = L"EPP-1.7 and SPP Mode";
            static CHAR16 LptModeStr5[] = L"ECP Mode";
            static CHAR16 LptModeStr6[] = L"ECP and EPP 1.9 Mode";
            static CHAR16 LptModeStr7[] = L"ECP and EPP 1.7 Mode";
            static CHAR16 LptModeHelp[] = L"Change Parallel Port mode. Some of the Modes required a DMA resource. After Mode changing, Reset the System to reflect actual device settings.";
            //---------------------------------------------------	
            dev->DevModeCnt=7;
            //Make room for 2 floppy modes + Help String...
            dev->DevModeStr=MallocZ(sizeof(CHAR16*)*(dev->DevModeCnt+1));
            if(dev->DevModeStr==NULL) {
                Status=EFI_OUT_OF_RESOURCES;
                ASSERT_EFI_ERROR(Status);
                return Status;
            }
            dev->DevModeStr[0]=&LptModeStr1[0];
            dev->DevModeStr[1]=&LptModeStr2[0];
            dev->DevModeStr[2]=&LptModeStr3[0];
            dev->DevModeStr[3]=&LptModeStr4[0];
            dev->DevModeStr[4]=&LptModeStr5[0];
            dev->DevModeStr[5]=&LptModeStr6[0];
            dev->DevModeStr[6]=&LptModeStr7[0];
            dev->DevModeStr[7]=&LptModeHelp[0];
        }

        break;
        #endif

        case isAfterActivate:
        break;

        case isAfterBootScript:
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_KBC_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//  EFI_SUCCESS - Initial step sucessfully
//  EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Notes:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_KEYBOARD_PRESENT
EFI_STATUS NCT6776_KBC_Init(
//    IN    AMI_SIO_PROTOCOL        *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL     *PciIo,
//    IN    SIO_INIT_STEP           InitStep
    AMI_BOARD_INIT_PROTOCOL         *This,
    IN UINTN                        *Function,
    IN OUT VOID                     *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;
    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;

    EFI_STATUS                      Status=EFI_SUCCESS;
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
        case isPrsSelect:
        case isAfterActivate:
        case isAfterBootScript:
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        #endif
        break;

        case isBeforeActivate:
            //Decode?
            if(dev->DeviceInfo->Implemented && dev->NvData.DevEnable){
                AmiSioLibSetLpcDeviceDecoding(PciIo,dev->VlData.DevBase1, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }else{
                AmiSioLibSetLpcDeviceDecoding(PciIo,0, dev->DeviceInfo->Uid, dev->DeviceInfo->Type);
            }
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_HWM_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//  EFI_SUCCESS - Initial step sucessfully
//  EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Notes:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_HWM_PRESENT
EFI_STATUS NCT6776_HWM_Init(
    AMI_BOARD_INIT_PROTOCOL         *This,
    IN UINTN                        *Function,
    IN OUT VOID                     *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    EFI_STATUS                      Status=EFI_SUCCESS;
    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;
    EFI_S3_SAVE_STATE_PROTOCOL      *BootScriptProtocol = dev->Owner->SaveState;
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
        break;

        case isPrsSelect:
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        #endif
        break;

        case isBeforeActivate:
            // HWM registers initial if needed.
            // OEM_TODO: You need to fill NCT6776_DXE_ENV_Init_Table_Before_Active[] first.
            ProgramIsaRegisterTable(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_DATA,\
                    NCT6776_DXE_ENV_Init_Table_Before_Active,sizeof(NCT6776_DXE_ENV_Init_Table_Before_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));
        break;

        case isAfterActivate:
            // HWM registers initial if needed.
            // OEM_TODO: You need to fill NCT6776_DXE_HWM_Init_Table_After_Active[] first.
            ProgramIsaRegisterTable(NCT6776_HWM_INDEX_PORT, NCT6776_HWM_DATA_PORT,\
                    NCT6776_DXE_HWM_Init_Table_After_Active,sizeof(NCT6776_DXE_HWM_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));
        break;

        case isAfterBootScript:
            // Restore HWM registers after Sx resume, if needed.
            // Below HWM read/write interface is LPC/ISA interface,
            // if other interface, please re-program it.
            // This, Width, Address, Count, Buffer
            SioLib_BootScriptSioS3SaveTable(NCT6776_HWM_INDEX_PORT, NCT6776_HWM_DATA_PORT, \
                    NCT6776_DXE_HWM_Init_Table_After_Active,sizeof(NCT6776_DXE_HWM_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)), BootScriptProtocol);
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_GPIO_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//            EFI_STATUS
//            EFI_SUCCESS - Initial step sucessfully
//            EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Note:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
EFI_STATUS NCT6776_GPIO_Init(
    AMI_BOARD_INIT_PROTOCOL         *This,
    IN UINTN                        *Function,
    IN OUT VOID                     *ParameterBlock
)
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    EFI_STATUS                      Status=EFI_SUCCESS;
    EFI_EVENT                       GpioReadytoBoot; 
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
        break;

        case isPrsSelect:
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        #endif
        break;

        case isBeforeActivate:
        break;

        case isAfterActivate:
            
            // Initial GPIO register if you need.
            // OEM_TODO: You need to fill NCT6776_DXE_GPIO_Init_Table_After_Active[] first.
            ProgramIsaRegisterTable(NCT6776_CONFIG_INDEX, NCT6776_CONFIG_DATA,\
                    NCT6776_DXE_GPIO_Init_Table_After_Active,sizeof(NCT6776_DXE_GPIO_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));

            //Create event for boot script
            //Because Gpio is not standar device which have no activate reg0x30,so create event to save regs
            Status = CreateReadyToBootEvent(
                TPL_NOTIFY,
                NCT6776_GpioCallbackReadyToBoot,
                NULL,
                &GpioReadytoBoot
            );
            ASSERT_EFI_ERROR(Status);
            
        break;

        case isAfterBootScript:
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_CIR_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//            EFI_STATUS
//            EFI_SUCCESS - Initial step sucessfully
//            EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Note:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_CIR_PORT_PRESENT
EFI_STATUS NCT6776_CIR_Init(
//    IN    AMI_SIO_PROTOCOL        *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL     *PciIo,
//    IN    SIO_INIT_STEP           InitStep
    AMI_BOARD_INIT_PROTOCOL         *This,
    IN UINTN                        *Function,
    IN OUT VOID                     *ParameterBlock )
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK  *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                   InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL             *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;

    SIO_DEV2                        *dev=(SIO_DEV2*)AmiSio;
    EFI_STATUS                      Status=EFI_SUCCESS;
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
            // Disable IODecode?
            if((!dev->DeviceInfo->Implemented) || (!dev->NvData.DevEnable)){
                NCT6776_ClearDevResource(dev);
            }
        break;

        case isPrsSelect:
        break;

        case isBeforeActivate:
        break;
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        break;
        #endif

        case isAfterActivate:
        break;

        case isAfterBootScript:
        break;

        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6776_CIRWAKE_Init
//
// Description:
//  This function provide each initial routine in genericsio.c
//
// Input:
//  IN  AMI_SIO_PROTOCOL    *AmiSio - Logical Device's information
//  IN  EFI_PCI_IO_PROTOCOL *PciIo - Read/Write PCI config space
//  IN  SIO_INIT_STEP       InitStep - Initial routine step
//
// Output:
//            EFI_STATUS
//            EFI_SUCCESS - Initial step sucessfully
//            EFI_INVALID_PARAMETER - not find the initial step
//
// Modified:  Nothing
//
// Referrals: None
//
// Note:
//-------------------------------------------------------------------------
// <AMI_PHDR_END>
#if NCT6776_CIRWAKE_PRESENT
EFI_STATUS NCT6776_CIRWAKE_Init(
//    IN    AMI_SIO_PROTOCOL     *AmiSio,
//    IN    EFI_PCI_IO_PROTOCOL  *PciIo,
//    IN    SIO_INIT_STEP        InitStep
        AMI_BOARD_INIT_PROTOCOL    *This,
        IN UINTN                    *Function,
        IN OUT VOID                    *ParameterBlock )
{
    //Update Standard parameter block
    AMI_BOARD_INIT_PARAMETER_BLOCK    *Args=(AMI_BOARD_INIT_PARAMETER_BLOCK*)ParameterBlock;
    SIO_INIT_STEP                    InitStep=(SIO_INIT_STEP)Args->InitStep;
    AMI_SIO_PROTOCOL                 *AmiSio=(AMI_SIO_PROTOCOL*)Args->Param1;
    EFI_PCI_IO_PROTOCOL              *PciIo=(EFI_PCI_IO_PROTOCOL*)Args->Param2;
    EFI_STATUS    Status=EFI_SUCCESS;

    switch (InitStep) {
        case isGetSetupData:
        break;

        case isPrsSelect:
        break;

        case isBeforeActivate:
            // Initial  register if you need.
        break;

        case isAfterActivate:
        break;

        case isAfterBootScript:
        break;
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        break;
        #endif

        default: Status=EFI_INVALID_PARAMETER;
    } //switch
    return Status;
}
#endif
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
