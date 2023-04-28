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
// Name:  <NCT6683DPeiIoTable.h>
//
// Description:
//
//<AMI_FHDR_END>
//**********************************************************************
#include "Token.h"
#include <Library/AmiSioPeiLib.h>

IO_DECODE_DATA NCT6683DPeiDecodeTable[]={
    // -----------------------------
    //|  BaseAdd | UID  | Type |
    // -----------------------------
    {NCT6683D_CONFIG_INDEX, 2, 0xFF},
    //Below decode is for recovery mode
    #if (NCT6683D_SERIAL_PORT1_PRESENT)
    {NCT6683D_SERIAL_PORT1_BASE_ADDRESS, 0x01, dsUART},
    #endif
    #if (NCT6683D_KEYBOARD_PRESENT)
    {0x60, 0, dsPS2K},                                  // KBC decode
    #endif
    //Below decode is for SIO generic IO decode
    #if defined(NCT6683D_TOTAL_BASE_ADDRESS) && (NCT6683D_TOTAL_BASE_ADDRESS != 0)
    {NCT6683D_TOTAL_BASE_ADDRESS, NCT6683D_TOTAL_LENGTH, 0xFF},
    #endif
    // !!!!Attention!!!!This is necessary
    //OEM_TODO//OEM_TODO//OEM_TODO//OEM_TODO
    // If your com port number > 2 , you'd add more table for more com ports.
    // Add more OEM IO decode below.
//G160-012(1)    {0x3E0, 0x10, 0xFF},//for CIR
    {0x0F0, 0x10, 0xFF},//for CPLD      //G160-012(1)
};

SIO_DEVICE_INIT_DATA NCT6683DPeiInitTable[]={
    // -----------------------------
    //|  Addr | DataMask  | DataValue |
    // -----------------------------

    //---------------------------------------------------------------------
    // Enter Configuration Mode.
    //---------------------------------------------------------------------
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_ENTER_VALUE},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_ENTER_VALUE},
    //---------------------------------------------------------------------
    // Before init all logical devices, program Global register if needed.
    //---------------------------------------------------------------------
    #if NCT6683D_GLOBAL_REGISTER_NOT_DEFAULT
    {NCT6683D_CONFIG_INDEX, 0x00, 0x15},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL15},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x1A},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL1A},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x1B},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL1B},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x1E},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL1E},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x1F},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL1F},
    //Don't write any value to 0x22 0x23, 
    //{NCT6683D_CONFIG_INDEX, 0x00, 0x22},
    //{NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL22},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x24},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL24},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x25},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL25},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x27},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL27},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x28},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL28},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x29},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL29},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x2A},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL2A},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x2B},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL2B},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x2C},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL2C},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x2D},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL2D},
    #endif
    //---------------------------------------------------------------------
    // Initialize the Serial Port for debug useage. Default is COMA
    //---------------------------------------------------------------------
    #if (NCT6683D_SERIAL_PORT1_PRESENT)
    // Select device
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_UART1},
    // Program Base Addr
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_LO_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, (UINT8)(NCT6683D_SERIAL_PORT1_BASE_ADDRESS & 0xFF)},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_HI_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, (UINT8)(NCT6683D_SERIAL_PORT1_BASE_ADDRESS >> 8)},
    // Activate Device
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_ACTIVATE_VALUE},
    #endif
    //---------------------------------------------------------------------
    // Initialize the KeyBoard and floppy controller for Recovery
    //---------------------------------------------------------------------
    #if (NCT6683D_KEYBOARD_PRESENT)
    // Seclect device KEYBOARD
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_PS2K},
    // Program Base Addr
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_HI_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_LO_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x60},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE2_HI_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE2_LO_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x64},
    // Program Interrupt
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_IRQ1_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x01},
    // Activate Device
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_ACTIVATE_VALUE},
    #else
    // Deactivate Device
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_PS2K},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_DEACTIVATE_VALUE},
    #endif //NCT6683D_KEYBOARD_PRESENT
    //---------------------------------------------------------------------
    // Program and initialize some logical device if needed.
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Clear resources of the devices which exceed IOST.
    //---------------------------------------------------------------------
    // Seclect device CIR
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_CIR},
    // Clear Base Addr
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_HI_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE1_LO_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE2_HI_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_BASE2_LO_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    // Clear Interrupt
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_IRQ1_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, 0x00},
    // Deactivate Device
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_CIR},
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_DEACTIVATE_VALUE},

//G160-004(11) - start
    //---------------------------------------------------------------------
    // Init LDN GPIO1   0x07
    //---------------------------------------------------------------------
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_GPIO1},
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0x23},        //wch
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0x00, 0x03},        //wch
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_ACTIVATE_REGISTER},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xE7, 0x18},        //Enable GPIO3x and GPIO4x.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xF0},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xF0, 0x03},        //Select GPIO group 3.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xE3},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0x0F, 0x00},        //Set GPIO34~37 is output.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xE5},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0x0F, 0x00},        //Set GPIO34~37 is open drain.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xE0},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xF0, 0xF0},        //Set GPIO34~37 is output high.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xF0},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xF0, 0x04},        //Select GPIO group 4.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xE3},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xF0, 0x0F},        //Set GPIO34~37 is input.
//G160-005(2)    {NCT6683D_CONFIG_INDEX, 0x00, 0xE5},
//G160-005(2)    {NCT6683D_CONFIG_DATA,  0xF0, 0x00},        //Set GPIO34~37 is open drain.
    
    //---------------------------------------------------------------------
    // Init LDN TACHIN 0x0E
    //---------------------------------------------------------------------
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_LDN_SEL_REGISTER},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_LDN_TACHIN},
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE8},
    {NCT6683D_CONFIG_DATA,  0x00, 0x10},        //Set Pin111 is PWMOut0 and Pin112 is PWMOut1.
    {NCT6683D_CONFIG_INDEX, 0x00, 0xE9},
    {NCT6683D_CONFIG_DATA,  0x00, 0x98},        //Set Pin113 is Tachin0 and Pin112 is Tachin1.
//G160-004(11) - end

    //---------------------------------------------------------------------
    // After init all logical devices, program Global register if needed.
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // After init all logical devices,  Exit Configuration Mode.
    //---------------------------------------------------------------------
    {NCT6683D_CONFIG_INDEX, 0x00, NCT6683D_CONFIG_MODE_EXIT_VALUE},

};

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
