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
// Name:  <NCT6683DDxeInit.c>
//
// Description: 
//
//<AMI_FHDR_END>
//**********************************************************************
#include <AmiDxeLib.h>
#include <Token.h>
#include <AmiGenericSio.h>
#include <Setup.h>
#include <Protocol/AmiSio.h>
#include <Protocol/PciIo.h>
#include <Protocol/AmiBoardInitPolicy.h>
#include <Library/AmiSioDxeLib.h>

#include "NCT6683DDxeIoTable.h"

//G160-004(11) - start
#define BDS_ALL_DRIVERS_CONNECTED_PROTOCOL_GUID \
    {0xdbc9fd21, 0xfad8, 0x45b0, 0x9e, 0x78, 0x27, 0x15, 0x88, 0x67, 0xcc, 0x93}
EFI_GUID gBdsAllDriversConnectedProtocolGuid = BDS_ALL_DRIVERS_CONNECTED_PROTOCOL_GUID;
VOID *gProtocolNotifyRegistration;
EFI_GUID gSetupGuid = SETUP_GUID;

VOID    SIOFixedDelay(IN  UINTN Usec);  //G160-005(17)

SIO_DEVICE_INIT_DATA   DXE_HWM_Smart_Fan_Init_Table[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x28},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},  //Set manual mode Fan1 is full speed.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x29},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},  //Set manual mode Fan2 is full speed.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xD0},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80 | NCT6683D_FANOUT1},  //Select FANOUT source and enable it
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xD1},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80 | NCT6683D_FANOUT2},  //Select FANOUT source and enable it
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF}, 
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x00},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T1 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T2 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x02},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T3 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x03},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T4 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x04},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T5 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x05},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T6 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x06},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x7F},    //Set SF4_T7 default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x08},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Fan function configuration register default value is 0.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Fan function configuration register default value is 0.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0C},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xFC},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x03},    //Enable CH0 and CH1(CH_EN).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x07},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT1_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x08},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT1_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT2_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT2_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT3_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0C},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT3_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0D},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT4_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0E},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT4_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x0F},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT5_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x10},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT5_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x11},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT6_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x12},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT6_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x13},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_OUT7_MSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x14},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xFF},    //Set SF4_OUT7_LSB default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0B},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x16},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set SF4_TOFF default value.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x00},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80},    //Enable Algorithm Engine.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x10},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Main Temperature Zone Decision Data3(MTZ_DCS_DATA3).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x11},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Main Temperature Zone Decision Data2(MTZ_DCS_DATA2).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x12},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Main Temperature Zone Decision Data1(MTZ_DCS_DATA1).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x13},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x01},    //Set Main Temperature Zone Decision Data0(MTZ_DCS_DATA0).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x50},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Ambient Temperature Zone Decision Data3(ATZ_DCS_DATA3).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x51},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Ambient Temperature Zone Decision Data2(ATZ_DCS_DATA2).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x52},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},    //Set Ambient Temperature Zone Decision Data1(ATZ_DCS_DATA1).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x53},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x01},    //Set Ambient Temperature Zone Decision Data0(ATZ_DCS_DATA0).
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x80},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x03},    //Set Algorithm Engine Weight Enable Register(ENG_WETEN) is Fan1 and Fan2.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x0A},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x84},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xAA},    //Set Algorithm Engine Weight Value0 Register(ENG_WET0) is FAN1 10/10 Fan2 10/10.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xD0},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x03},    //Set Fan1 is Smart Fan IV.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x09},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xD1},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x03},    //Set Fan2 is Smart Fan IV.
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
};      //DXE_HWM_Smart_Fan_Init_Table

//G160-005(2) - start
SIO_DEVICE_INIT_DATA   DXE_NCT6683D_GPIO_Init_Table[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_ENTER_VALUE},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_ENTER_VALUE},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_GPIO1},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x23},
    {NCT6683D_CONFIG_DATA,  0xFC, 0x03},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
//Z121-001(4)    {NCT6683D_CONFIG_DATA,  0xE7, 0x18},        //Enable GPIO3x and GPIO4x.
    {NCT6683D_CONFIG_DATA,  0xE6, 0x18},        //Enable GPIO3x and GPIO4x control by LPC and GPIO0x control by EC. //Z121-001(4)
    {NCT6683D_CONFIG_INDEX, 0x00, 0xF0},
    {NCT6683D_CONFIG_DATA,  0xF0, 0x03},        //Select GPIO group 3.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE3},
//G160-014(2)    {NCT6683D_CONFIG_DATA,  0x0F, 0x00},        //Set GPIO34~37 is output.
    {NCT6683D_CONFIG_DATA,  0x00, 0x0F},        //Set GPIO34~37 is output GPIO30~33 is Input.   //G160-014(2)
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE5},
    {NCT6683D_CONFIG_DATA,  0x0F, 0x00},        //Set GPIO34~37 is open drain.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE0},
    {NCT6683D_CONFIG_DATA,  0xF0, 0xF0},        //Set GPIO34~37 is output high.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xF0},
    {NCT6683D_CONFIG_DATA,  0xF0, 0x04},        //Select GPIO group 4.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE3},
    {NCT6683D_CONFIG_DATA,  0xF0, 0x0F},        //Set GPIO34~37 is input.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE5},
    {NCT6683D_CONFIG_DATA,  0xF0, 0x00},        //Set GPIO34~37 is open drain.
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_EXIT_VALUE},
};
//G160-005(2) - end

EFI_STATUS
Program_SmartFanCallback (
    IN EFI_EVENT Event,
    IN VOID *Context
)
{
	EFI_STATUS	Status = EFI_SUCCESS;
	SETUP_DATA	SetupData;
	UINTN		Size = sizeof(SETUP_DATA);
	UINT8           u8temp = 0;
	UINT16          RetryCount = 0;

        Status = pRS->GetVariable( L"Setup", &gSetupGuid,
		 NULL, &Size, &SetupData );
		 
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
	
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x01);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x80);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);

        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0C);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0xF8);

        RetryCount = 0;
        do {
               u8temp = IoRead8(NCT6683D_HWM_BASE_ADDRESS+2);
               RetryCount++;
               if (RetryCount >= 5000) break;
        } while ((u8temp&0x08) == 0x00);                                        //Check is Configuration phase?

	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);

        ProgramRtRegisterTable(0, DXE_HWM_Smart_Fan_Init_Table,sizeof(DXE_HWM_Smart_Fan_Init_Table)/(sizeof(SIO_DEVICE_INIT_DATA)));    //Init smart fan reg.

	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0B);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x16);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DThermalOff);     //Set cut off temperature.
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
	
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0B);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x00);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DThermalStart);   //Set SF4_T1 temperature.
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
	
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0B);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x01);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DThermalTarget);  //Set SF4_T2 temperature.
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
	
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0B);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x08);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DFanStartDuty);   //Set SF4_OUT1 duty.
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
	
	if(SetupData.NCT6683DSmartFanMode == 1){
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x00);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x00);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);       //Disable manual mode.
        }else{
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x28);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DFanManualDuty);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);       //Set Fan duty.
    
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x29);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,SetupData.NCT6683DFanManualDuty);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);       //Set Fan duty.
                
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x00);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x03);
	        IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);       //Enable manual mode.
        }
        
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0x0A);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+1,0x01);
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS+2,0x40);             //Set configuration done.
	IoWrite8(NCT6683D_HWM_BASE_ADDRESS,0xFF);
        
        return  Status;
}
//G160-004(11) - end

//G160-005(2) - start
EFI_STATUS
Program_NCT6776_GPIO_Callback (
    IN EFI_EVENT Event,
    IN VOID *Context
)
{
        EFI_STATUS	Status = EFI_SUCCESS;
        
        ProgramRtRegisterTable(0, DXE_NCT6683D_GPIO_Init_Table,sizeof(DXE_NCT6683D_GPIO_Init_Table)/(sizeof(SIO_DEVICE_INIT_DATA)));    //Init NCT6683D GPIO reg.
        return  Status;
}
//G160-005(2) - end

//G160-005(17) - start
EFI_STATUS
SIO_BEEP_Callback (
    IN EFI_EVENT Event,
    IN VOID *Context
)
{
        EFI_STATUS	Status = EFI_SUCCESS;
        
        IoWrite8(0xA20,0xff);
        IoWrite8(0xA20,0x01);   //Select page 1.
        IoWrite8(0xA21,0xDA);
        IoWrite8(0xA22,0x32);   //Set FANOut divsor.
        IoWrite8(0xA20,0xff);
        
        IoWrite8(0xA20,0xff);
        IoWrite8(0xA20,0x01);   //Select page 1.
        IoWrite8(0xA21,0xD2);
        IoWrite8(0xA22,0x81);   //Set Pin14 is FANOut and push pull mode.
        IoWrite8(0xA20,0xff);
        
        SIOFixedDelay(500000);  //Delay 0.5s.
        
        IoWrite8(0xA20,0xff);
        IoWrite8(0xA20,0x01);   //Select page 1.
        IoWrite8(0xA21,0xD2);
        IoWrite8(0xA22,0x20);   //Disable Pin14 FANOut and push pull mode.
        IoWrite8(0xA20,0xff);
        
        return  Status;
}

VOID 
SIOFixedDelay(
    UINTN           Usec                           
 )
{
    UINTN   Counter, i;
    UINT32  Data32, PrevData;

    Counter = Usec * 3;
    Counter += Usec / 2;
    Counter += (Usec * 2) / 25;

    //
    // Call WaitForTick for Counter + 1 ticks to try to guarantee Counter tick
    // periods, thus attempting to ensure Microseconds of stall time.
    //
    if (Counter != 0) {

        PrevData = IoRead32(PM_BASE_ADDRESS + 8);
        for (i=0; i < Counter; ) {
            Data32 = IoRead32(PM_BASE_ADDRESS + 8);    
            if (Data32 < PrevData) {        // Reset if there is a overlap
                PrevData=Data32;
                continue;
            }
            i += (Data32 - PrevData);        
            PrevData = Data32;
        }
    }
    return;
}
//G160-005(17) - end

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: ClearDevResource
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
VOID ClearDevResource(
    IN  SIO_DEV2    *dev
)
{
    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE);
    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE);

    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_LDN_SEL_REGISTER);
    IoWrite8(NCT6683D_CONFIG_DATA, dev->DeviceInfo->Ldn);

    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_BASE1_HI_REGISTER);
    IoWrite8(NCT6683D_CONFIG_DATA, 0);
    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_BASE1_LO_REGISTER);
    IoWrite8(NCT6683D_CONFIG_DATA, 0);
    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_IRQ1_REGISTER);
    IoWrite8(NCT6683D_CONFIG_DATA, 0);

    IoWrite8(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_EXIT_VALUE);
    return;

}


/**
  This function will save registers into bootscript table when more than one Devive or Bank in a table.

  @param  IndexReg              Register of LPC index port.
  @param  DataReg               Register of LPC data port.
  @param  SelectReg             Register to select LDN of SIO or bank of HW Monitor.
  @param  Table                 Pointer to initialize SIO_DEVICE_INIT_DATA table.
  @param  Count                 Count of SIO_DEVICE_INIT_DATA table.
  @param  SaveState             Pointer to EFI_S3_SAVE_STATE_PROTOCOL.
**/
static VOID SioLib_BootScriptSioS3SaveTableEx(
    UINT16      IndexReg,
    UINT16      DataReg,
    UINT8       SelectReg,
    SIO_DEVICE_INIT_DATA  *Table,
    UINT8       Count,
    EFI_S3_SAVE_STATE_PROTOCOL *SaveState
)
{
    UINT8       i;
    UINT8       val, reg;
    
    for (i=0; i < Count; i++) {
        reg = (UINT8)(Table[i].Reg16 & 0xFF);
        //Select the Bank or LDN first,if it is Select register.
        if(reg == SelectReg){
            //Select LDN/Bank number Register.
            IoWrite8(IndexReg, SelectReg);
            val = (IoRead8(DataReg) & Table[i].AndData8) | Table[i].OrData8;
            //Write LDN/Bank number.
            IoWrite8(DataReg, val); 
        }else{
            //Select register.
            IoWrite8(IndexReg, reg);
            //Read actual data.
            val = IoRead8(DataReg);
        }
        //Save register into boot script.
        SaveState->Write(SaveState, 0x00, EfiBootScriptWidthUint8, (UINT64)IndexReg, (UINTN)1, &reg);
        SaveState->Write(SaveState, 0x00, EfiBootScriptWidthUint8, (UINT64)DataReg,  (UINTN)1, &val);
    }
}


/**
  This function will call back in ready to boot phase to save registers into bootscript table.

  @param  Event                 Event whose notification function is being invoked.
  @param  Context               Pointer to the notification function's context.
**/

#if  AMI_SIO_MINOR_VERSION >= 6
static VOID NCT6683D_SmmGpioRecordBootScript(
        EFI_S3_SAVE_STATE_PROTOCOL      *BootScriptProtocol     
)
{   
    //1,AMI_TODO:enter cfgmode
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);

    //2,AMI_TODO:select gpio device
    SioLib_BootscriptLdnSel(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA, \
                            NCT6683D_LDN_SEL_REGISTER, NCT6683D_LDN_GPIO1, BootScriptProtocol);

    //3,save table value
    //If more than one device in DXE_GPIO_Init_Table_After_Active table.
    SioLib_BootScriptSioS3SaveTableEx(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA, NCT6683D_LDN_SEL_REGISTER, \
                                        DXE_GPIO_Init_Table_After_Active, sizeof(DXE_GPIO_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)), BootScriptProtocol);
    
    //4,AMI_TODO:exit cfg mode
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_EXIT_VALUE, BootScriptProtocol);
}
#endif//#if  AMI_SIO_MINOR_VERSION >= 6

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: GpioCallbackReadyToBoot
//
// Description:
//  This function will call back in ready to boot phase to save registers
//  into bootscript table
// Input:
//  IN  EFI_EVENT Event  
//  IN VOID *Context
//
// Output: 
//  NONE
//
//------------------------------------------------------------------------- 
// <AMI_PHDR_END>
static VOID GpioCallbackReadyToBoot(IN EFI_EVENT Event, IN VOID *Context)
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
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_ENTER_VALUE, BootScriptProtocol);

    //2,AMI_TODO:select gpio device
    SioLib_BootscriptLdnSel(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA, \
            NCT6683D_LDN_SEL_REGISTER, NCT6683D_LDN_GPIO1, BootScriptProtocol);

    //3,save table value
    SioLib_BootScriptSioS3SaveTableEx(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA, NCT6683D_LDN_SEL_REGISTER, \
                                        DXE_GPIO_Init_Table_After_Active,sizeof(DXE_GPIO_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)), BootScriptProtocol);

    //4,AMI_TODO:exit cfg mode
    SioLib_BootScriptIO(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_MODE_EXIT_VALUE, BootScriptProtocol);

    //
    //Kill the Event
    //
    pBS->CloseEvent(Event);
}

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_COM_Init
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
#if NCT6683D_SERIAL_PORT1_PRESENT | NCT6683D_SERIAL_PORT2_PRESENT
EFI_STATUS NCT6683D_COM_Init(
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
                ClearDevResource(dev);
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
            // Program COM Clock Source Registers.
            if(DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].AndData8 == 0xFF) {
                rv=DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].OrData8;
            } else {
                Status=AmiSio->Access(AmiSio, FALSE, FALSE, DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].Reg8,&rv);
                ASSERT_EFI_ERROR(Status);
                rv &= DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].AndData8;
                rv |= DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].OrData8;
            }
            Status=AmiSio->Access(AmiSio,TRUE,FALSE,DXE_COM_Mode_Init_Table[dev->DeviceInfo->Uid].Reg8,&rv);
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
                        SIO_TRACE((TRACE_SIO,"NCT6683D_COM_Init: Fail to Get DSDT - returned %r\n", Status));
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
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:      
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    }//switch
    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_LPT_Init
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
#if NCT6683D_PARALLEL_PORT_PRESENT
EFI_STATUS NCT6683D_LPT_Init(
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
                ClearDevResource(dev);
            }
        break;

        case isPrsSelect:
            //depend on LPT Mode it may or may not use a DMA channel
            if(dev->NvData.DevMode >3 ) {  // 7 mode
                if(ACPI_SUPPORT){
                    //if ACPI is Supported get _PRS for Extended Parallel Port from DSDT
                    //last parameter is 0-based index in NCT6683D_DevLst[] table.
                    Status=SioDxeLibGetPrsFromAml(dev,"EPPR", 1);
                } else {
                    //if ACPI is not supported use corresponded Function seting
                    //"UseDma" parameter to TRUE for Extended Parallel Port
                    Status=SioDxeLibSetLptPrs(dev, TRUE);
                }
                //Get DSDT.. we have to update it.
                Status=LibGetDsdt(&a,EFI_ACPI_TABLE_VERSION_ALL);
                if(EFI_ERROR(Status)){
                    SIO_TRACE((TRACE_SIO,"NCT6683D_LPT_Init: Fail to Get DSDT - returned %r\n", Status));
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
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:      
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_KBC_Init
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
#if NCT6683D_KEYBOARD_PRESENT
EFI_STATUS NCT6683D_KBC_Init(
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
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:      
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_ACPI_Init
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
#if NCT6683D_ACPI_PRESENT
EFI_STATUS NCT6683D_ACPI_Init(
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
    //Check if parameters passed are VALID and
    if(Args->Signature != AMI_SIO_PARAM_SIG) return EFI_INVALID_PARAMETER;

    switch (InitStep) {
        case isGetSetupData:
        break;

        case isPrsSelect:
        break;

        case isBeforeActivate:
            // ACPI registers initial if needed.
            // OEM_TODO: You need to fill DXE_ACPI_Init_Table_Before_Active[] first.
            ProgramIsaRegisterTable(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA,\
                    DXE_ACPI_Init_Table_Before_Active,sizeof(DXE_ACPI_Init_Table_Before_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));

        break;

        case isAfterActivate:
        break;

        case isAfterBootScript:
        #if (AMI_SIO_MAJOR_VERSION == 0xA5)
        case isGetModeData:
        #endif
        break;
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:      
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif

// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_HWM_Init
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
#if NCT6683D_HWM_PRESENT
EFI_STATUS NCT6683D_HWM_Init(
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
    EFI_S3_SAVE_STATE_PROTOCOL      *BootScriptProtocol;
    UINTN                           i;
    EFI_EVENT                       Event;      //G160-004(11)
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
            // EC Space registers initial if needed.
            // OEM_TODO: You need to fill DXE_EC_Init_Table_Before_Active[] first.
            ProgramIsaRegisterTable(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA,\
                    DXE_EC_Init_Table_Before_Active,sizeof(DXE_EC_Init_Table_Before_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));
        break;

        case isAfterActivate:
            // HWM registers initial if needed.
            // OEM_TODO: You need to fill DXE_HWM_Init_Table_After_Active[] first.
            ProgramRtRegisterTable(0, DXE_HWM_Init_Table_After_Active,sizeof(DXE_HWM_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));
            
//G160-004(11) - start
	Status = RegisterProtocolCallback(
		 &gBdsAllDriversConnectedProtocolGuid,
		 Program_SmartFanCallback,
		 NULL,   // Context
		 &Event,
		 &gProtocolNotifyRegistration
		 );
	ASSERT_EFI_ERROR(Status);
//G160-004(11) - end
            
//G160-005(2) - start
	Status = RegisterProtocolCallback(
		 &gBdsAllDriversConnectedProtocolGuid,
		 Program_NCT6776_GPIO_Callback,
		 NULL,   // Context
		 &Event,
		 &gProtocolNotifyRegistration
		 );
	ASSERT_EFI_ERROR(Status);
//G160-005(5) - end

//G160-005(17) - start
	Status = RegisterProtocolCallback(
		 &gBdsAllDriversConnectedProtocolGuid,
		 SIO_BEEP_Callback,
		 NULL,   // Context
		 &Event,
		 &gProtocolNotifyRegistration
		 );
	ASSERT_EFI_ERROR(Status);
//G160-005(17) - end
            
        break;

        case isAfterBootScript:
            // Restore HWM registers after Sx resume, if needed.
            // Below HWM read/write interface is LPC/ISA interface,
            // if other interface, please re-program it.
            // This, Width, Address, Count, Buffer
            BootScriptProtocol=(EFI_S3_SAVE_STATE_PROTOCOL*)dev->Owner->SaveState;
            for (i=0;i<sizeof(DXE_HWM_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA));i++)
                SioLib_BootScriptIO(DXE_HWM_Init_Table_After_Active[i].Reg16, DXE_HWM_Init_Table_After_Active[i].OrData8, BootScriptProtocol);
        break;
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:   
            //Restore HWM registers after Sx resume, if needed.
            //Below HWM read/write interface is LPC/ISA interface,
            //if other interface, please re-program it.
            //This, Width, Address, Count, Buffer
            BootScriptProtocol=(EFI_S3_SMM_SAVE_STATE_PROTOCOL*)Args->Param3;
            for (i=0;i<sizeof(DXE_HWM_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA));i++)
                SioLib_BootScriptIO(DXE_HWM_Init_Table_After_Active[i].Reg16, DXE_HWM_Init_Table_After_Active[i].OrData8, BootScriptProtocol);
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_GPIO_Init
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
//#if NCT6683D_GPIO_PORT_PRESENT
EFI_STATUS NCT6683D_GPIO_Init(
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
#if  AMI_SIO_MINOR_VERSION < 6
    EFI_EVENT                       GpioReadytoBoot;
#else       
    EFI_S3_SAVE_STATE_PROTOCOL     *BootScriptProtocol;
#endif  
    
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
            // OEM_TODO: You need to fill DXE_GPIO_Init_Table_After_Active[] first.
            ProgramIsaRegisterTable(NCT6683D_CONFIG_INDEX, NCT6683D_CONFIG_DATA,\
                    DXE_GPIO_Init_Table_After_Active,sizeof(DXE_GPIO_Init_Table_After_Active)/(sizeof(SIO_DEVICE_INIT_DATA)));
            
#if  AMI_SIO_MINOR_VERSION < 6 
            //Create event for boot script
            //Because Gpio is not standar device which have no activate reg0x30,so create event to save regs
            Status = CreateReadyToBootEvent(
                TPL_NOTIFY,
                GpioCallbackReadyToBoot,
                NULL,
                &GpioReadytoBoot
            );
            ASSERT_EFI_ERROR(Status);
#endif            
        break;

        case isAfterBootScript:
        break;
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript: 
            BootScriptProtocol=(EFI_S3_SMM_SAVE_STATE_PROTOCOL*)Args->Param3;
            NCT6683D_SmmGpioRecordBootScript(BootScriptProtocol);
        break;
#endif    
        default: Status=EFI_INVALID_PARAMETER;
    } //switch

    return Status;
}
//#endif
// <AMI_PHDR_START>
//-------------------------------------------------------------------------
//
// Procedure: NCT6683D_CIR_Init
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
#if NCT6683D_CIR_PORT_PRESENT
EFI_STATUS NCT6683D_CIR_Init(
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
                ClearDevResource(dev);
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
#if  AMI_SIO_MINOR_VERSION >= 6     
        case isAfterSmmBootScript:      
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
