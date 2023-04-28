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
// Name:    NCT6776DxeIoTable.h
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
//  Table filled with SIO GPIO,PME,HWM, etc. logical devices' setting
//  For example:
//  1. GPIO will define the GPIO pin useage
//  2. PME will power management control
//  3. HWM will set temperature, fan, voltage and start control.
//
// Notes:
//
//-------------------------------------------------------------------------
//<AMI_THDR_END>

DXE_DEVICE_INIT_DATA   NCT6776_DXE_COM_Mode_Init_Table[] = {
    // -----------------------------
    //| Reg8 | AndData8  | OrData8  |
    // -----------------------------
    // OEM_TODO: Base on OEM board.
    // Program COM RS485/RS232 Mode Registers.
    {0xF2, 0xED, (NCT6776_COM1_RS485_Mode<<1) | (NCT6776_COM1_RS485_RTS_INV << 4)},	//make no effect when com1 disabled
    {0xF2, 0xED, (NCT6776_COM2_RS485_Mode<<1) | (NCT6776_COM2_RS485_RTS_INV << 4)},	//make no effect when com2 disabled
    // Program COM Clock Source Registers.
    {0xF0, 0xFC, NCT6776_SERIAL_PORT1_Clock_Value},	//make no effect when com1 disabled
    {0xF0, 0xFC, NCT6776_SERIAL_PORT2_Clock_Value},	//make no effect when com2 disabled
};
//-------------------------------------------------------------------------
// GPIO registers init table.
//-------------------------------------------------------------------------
// Define a table for init LDN8 after active.
SIO_DEVICE_INIT_DATA   NCT6776_DXE_GPIO_Init_Table_After_Active[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    //OEM_TODO: Base on OEM board.
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO2}, //Select WDT1, GPIO0, GPIO1, GPIOA (LDN8)
    {0x60,0x00, (UINT8)(IO1B >> 8)},    //GPIO  Interface  I/O  base address MSB register
    {0x61,0x00, (UINT8)(IO1B & 0xFF)},  //GPIO  Interface  I/O  base address LSB register
    {0x30,0x00, NCT6776_GPIO2_REG30_VAL},
    //-------------------------------------------------------------------------
    // GPIO registers init table.
    //-------------------------------------------------------------------------
    /*
    #if NCT6776_GPIO1_PORT_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO1}, //Select GPIO6, GPIO7, GPIO8, GPIO9 (LDN7)
    //...
    //..
    //.
    #endif //NCT6776_GPIO1_PORT_PRESENT
    #if NCT6776_GPIO2_PORT_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO2}, //Select GPIO, WDT1, GPIO0, GPIO1, GPIOA (LDN8)
    //...
    //..
    //.
    #endif //NCT6776_GPIO2_PORT_PRESENT
    #if NCT6776_GPIO3_PORT_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO3}, //Select GPIO2, GPIO3, GPIO4, GPIO5 (LDN9)
    //...
    //..
    //.
    #endif //NCT6776_GPIO3_PORT_PRESENT
    #if NCT6776_GPIO4_PORT_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO4}, //Select GPIO Push-pull or Open-drain selection(LDNF)
    //...
    //..
    //.
    #endif //NCT6776_GPIO4_PORT_PRESENT
    #if NCT6776_GPIO5_PORT_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_GPIO5}, //Select GPIOA(LDNF)
    //...
    //..
    //.
    #endif //NCT6776_GPIO5_PORT_PRESENT
    //-------------------------------------------------------------------------
    // ACPI registers init table.
    //-------------------------------------------------------------------------
    #if NCT6776_ACPI_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_ACPI}, //Select ACPI
    //...
    //..
    //.
    #endif 
    //-------------------------------------------------------------------------
    // VID registers init table.
    //-------------------------------------------------------------------------
    #if NCT6776_VID_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_VID}, //Select VID
    //...
    //..
    //.
    #endif 
    //-------------------------------------------------------------------------
    // SVID registers init table.
    //-------------------------------------------------------------------------
    #if NCT6776_SVID_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_SVID}, //Select FADING SVID
    //...
    //..
    //.
    #endif 
    //-------------------------------------------------------------------------
    // DEEP SLEEP registers init table.
    //-------------------------------------------------------------------------
    #if NCT6776_DSLP_PRESENT
    {NCT6776_LDN_SEL_REGISTER,0x00, NCT6776_LDN_DSLP}, //Select DEEP SLEEP
    //...
    //..
    //.
    #endif 
    */
};//NCT6776_DXE_GPIO_Init_Table_After_Active
#if NCT6776_HWM_PRESENT
//----------------------------------------------------------------------------------------------
// ENV registers need init BeforeActivate, !!! BeforeActivate
//----------------------------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   NCT6776_DXE_ENV_Init_Table_Before_Active[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    {0xE0, 0x00, 0x7F},//SYSFAN Duty Cycle Register 
    {0xE1, 0x00, 0x7F},//CPUFAN Duty Cycle Register
    {0xE2, 0x00, 0x7F},//AUXFAN Duty Cycle Register  
}; //NCT6776_DXE_ENV_Init_Table_Before_Active
//-------------------------------------------------------------------------
// HWM registers need init AfterActivate. !!!AfterActivate
//-------------------------------------------------------------------------
SIO_DEVICE_INIT_DATA   NCT6776_DXE_HWM_Init_Table_After_Active[] = {
    // -----------------------------
    //| Reg16 | AndData8  | OrData8  | 
    // -----------------------------
    //OEM_TODO: Base on OEM board.
    //1.  Set the Limits. 
    //2.  Set the interrupt Mask
    //3.  Set the Enable bits. 
    //--------------------------------------------------------------------
    {0x4E,0x00, 0x00},//Select bank 0
    {0x04,0x00, 0x01},//FAN Configuration Register I - Index 04h (Bank 0)
    {0x12,0x00, 0x00},//FAN Configuration Register II - Index 12h (Bank 0)
    {0x18,0x00, 0x00},//OVT# Configuration Register - Index 18h (Bank 0)
    {0x5d,0x00, 0x05},//VBAT Monitor Control Register - Index 5Dh (Bank 0)
    {0x66,0x00, 0x07},//MAX RPM Detect Time Configuration Register - Index 66 (Bank 0)

    {0x4E,0x00, 0x00},//Select bank 7
    //peci config>
    {0x01,0x00, NCT6776_PECI_EN_SET},//PECI Enable Function Register - Index 01 (Bank 7)
    //{0x02,0x00, (0x00 | PECI_EN_SET)},//PECI Timing Config Register - Index 02h (Bank 7)
    {0x03,0x00, NCT6776_PECI_AGENT_CONFIG },//PECI Agent Config Register - Index 03 (Bank 7)
    //{0x04,0x00, PECI_TEMP_CONFIG },//PECI Temperature Config Register - Index 04h (Bank 7)
    {0x09,0x00, NCT6776_PECI_TBASE0 },// peci Agent0 Tbase0
    {0x0A,0x00, NCT6776_PECI_TBASE1 },// peci Agent1 Tbase1
    //<peci config 

    {0x4E,0x00, 0x00},//Select bank 0
    //start monitor
    {0x40,0x00, 0x03},//Configuration Register - Index 40h (Bank 0)
}; //NCT6776_DXE_HWM_Init_Table_After_Active
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


