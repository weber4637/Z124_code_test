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
//*************************************************************************
//<AMI_FHDR_START>
//
// Name:    NCT6683DDxeIoTable.h
//
// Description: 
//  SIO init table in DXE phase. Any customers have to review below tables 
//  for themselves platform and make sure each initialization is necessary.
//
// Notes:
//  In all tables, only fill with necessary setting. Don't fill with default
//
//<AMI_FHDR_END>
//*************************************************************************
#ifndef _DXEIoTable_H
#define _DXEIoTable_H
#ifdef __cplusplus
extern "C" {
#endif
//-------------------------------------------------------------------------
// Include Files
//-------------------------------------------------------------------------

//<AMI_THDR_START>
//-------------------------------------------------------------------------
//
// Name:        DXE_XXX_Init_Table
//
// Description: 
//  Table filled with SIO GPIO,ACPI,HWM, etc. logical devices' setting
//  For example:
//  1. GPIO will define the GPIO pin useage
//  2. ACPI will power management control
//  3. HWM will set temperature, fan, voltage and start control.
//
// Notes:
//
//-------------------------------------------------------------------------
//<AMI_THDR_END>

DXE_DEVICE_INIT_DATA   DXE_COM_Mode_Init_Table[] = {
    // -----------------------------
    //| Reg8 | AndData8  | OrData8  |
    // -----------------------------
    // OEM_TODO: Base on OEM board.
    // Program COM Clock Source Registers.
    {0xF0, 0xFC, NCT6683D_SERIAL_PORT1_Clock_Value},    //make no effect when com1 disabled
    {0xF0, 0xFC, NCT6683D_SERIAL_PORT2_Clock_Value},    //make no effect when com2 disabled
};

//#if NCT6683D_GPIO_PORT_PRESENT
//-------------------------------------------------------------------------
// GPIO registers need init AfterActivate, !!! AfterActivate
//-------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   DXE_GPIO_Init_Table_After_Active[] = {
    // -----------------------------
    //| Reg8 | AndData8  | OrData8  |
    // -----------------------------
    // OEM_TODO: Base on OEM board.
    // Program Global Configuration Registers.
    // These registers ask enter LDN== first.
    {0x60,0x00, (UINT8)(IO1B >> 8)},     //SMI# Normal Run Access Base Address MSB Register
    {0x61,0x00, (UINT8)(IO1B & 0xFF)},   //SMI# Normal Run Access Base Address LSB Register
    /*
    #if NCT6683D_GPIO_PORT2_PRESENT
    {NCT6683D_LDN_SEL_REGISTER,0x00, NCT6683D_LDN_GPIO2}, //Select GPIO6 7 8
    //OEM_TODO: Base on OEM board.
    #endif 
    */
}; //DXE_GPIO_Init_Table_After_Active
//#endif
#if NCT6683D_ACPI_PRESENT
//-------------------------------------------------------------------------
// ACPI registers need init BeforeActivate, !!! BeforeActivate
//-------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   DXE_ACPI_Init_Table_Before_Active[] = {
    // ----------------
    //|  Reg8 | Data8  |
    // ----------------
    // OEM_TODO: Base on OEM board.
    {0x07, 0x00, 0x0A},

};
#endif

#if NCT6683D_EC_SPACE_PRESENT
//----------------------------------------------------------------------------------------------
// EC Space registers need init BeforeActivate, !!! BeforeActivate
//----------------------------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   DXE_EC_Init_Table_Before_Active[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    {0x07, 0x00, 0x0B},
}; //DXE_EC_Init_Table_Before_Active
//-------------------------------------------------------------------------
// HWM registers need init AfterActivate. !!!AfterActivate
//-------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   DXE_HWM_Init_Table_After_Active[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},    

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB0},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x60},    //Select 3VCC as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB1},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x61},    //Select 3VSB as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB2},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x64},    //Select VBAT as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB3},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6D},    //Select VIN7 as input source      //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x66},    //Select VIN0 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB4},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x69},    //Select VIN3 as input source      //G160-004(11)      {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x67},    //Select VIN1 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB5},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x68},    //Select VIN2 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB6},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x67},    //Select VIN1 as input source      //G160-004(11)      {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x69},    //Select VIN3 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB7},    
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x66},    //Select VIN0 as input source      //G160-004(11)      {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6A},    //Select VIN4 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB8},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6B},    //Select VIN5 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xB9},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6C},    //Select VIN6 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBA},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6E},    //Select VIN8 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBB},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x6F},    //Select VIN9 as input souce
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBC},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x70},    //Select VIN10 as input souce
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBD},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x71},    //Select VIN11 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBD},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x72},    //Select VIN12 as input souce
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xBF},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x73},    //Select VIN13 as input souce
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x05},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x60},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xC1},    //Enable SIO PECI function
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA0},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x20},    //Select PECI Agent0 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x05},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x60},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0xC1},    //Enable SIO PECI function
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x04},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x10},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x23},    //Select pin.77/78 to read PCH temperature
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x04},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x11},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x96},    //Set PCH GP address = 0x96
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x04},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x12},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x40},    //Set CMD code 0x40 for PCH thermal reportiong
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA1},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x31},    //Select PCH chip temperature as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
    
//G160-004(11) - start
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA2},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},       //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x31},    //Select PCH chip temperature as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
//G160-004(11) - end

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA3},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x38},    //Select SMBus Thermal Sensor 0 as input source     //G160-004(11)      {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x09},    //Select THR15 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA4},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x39},    //Select SMBus Thermal Sensor 1 as input source     //G160-004(11)      {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x0A},    //Select THR16 as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xA5},
	{NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x00},		//G160-004(11)		{NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x02},    //Select TD0P as input source
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xC0},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80 | NCT6683D_FANIN1},  //Select pin.115 as FANIN source and enable it
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xC1},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80 | NCT6683D_FANIN2},  //Select pin.116 as FANIN source and enable it
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0xC2},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x20},     //G160-004(11)       {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x00, 0x80 | NCT6683D_FANIN3},  //Select pin.117 as FANIN source and enable it
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},

    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0x01},
    {NCT6683D_HWM_BASE_ADDRESS+0x01, 0x00, 0x80},
    {NCT6683D_HWM_BASE_ADDRESS+0x02, 0x7F, 0x80},    //Enable Hardware Mornitor Function
    {NCT6683D_HWM_BASE_ADDRESS,      0x00, 0xFF},
}; // DXE_HWM_Init_Table_After_Active
#endif

/****** DO NOT WRITE BELOW THIS LINE *******/
#ifdef __cplusplus
}
#endif
#endif //_DXEIoTable_H
//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2013, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************

