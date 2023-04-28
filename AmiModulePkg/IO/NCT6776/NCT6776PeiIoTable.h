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
// Name:  <NCT6776PeiIoTable.h>
//
// Description:
//
//<AMI_FHDR_END>
//**********************************************************************
#include "token.h"

IO_DECODE_DATA NCT6776PeiDecodeTable[]={
    // -----------------------------
    //|  BaseAdd | UID  | Type |
    // -----------------------------
//G160-002(5)     {NCT6776_CONFIG_INDEX, 2, 0xFF},
    //Below decode is for recovery mode
    #if (defined(Recovery_SUPPORT) && (SerialRecovery_SUPPORT))
    #if (NCT6776_SERIAL_PORT1_PRESENT)
    {NCT6776_SERIAL_PORT1_BASE_ADDRESS, 0x01, dsUART},
    #endif
    #endif
    #if defined(Recovery_SUPPORT) && (Recovery_SUPPORT)
    #if (NCT6776_KEYBOARD_PRESENT)
    {0x60, 0, dsPS2K},                                  // KBC decode
    #endif
    #if (NCT6776_FLOPPY_PORT_PRESENT)
    {0x3F0, 0, dsFDC},                                  // FDC decode
    #endif
    #endif
    //Below decode is for SIO generic IO decode
    #if defined(NCT6776_TOTAL_BASE_ADDRESS) && (NCT6776_TOTAL_BASE_ADDRESS != 0)
    {NCT6776_TOTAL_BASE_ADDRESS, NCT6776_TOTAL_LENGTH, 0xFF},
    #endif
    // !!!!Attention!!!!This is necessary
    //OEM_TODO//OEM_TODO//OEM_TODO//OEM_TODO
    // If your com port number > 2 , you'd add more table for more com ports.
//G160-002(5)     {0x3E0, 0x10, 0xFF}, // 0x3E0~0x3F0 , open a IODecode section for UART3 4
//G160-002(5)     {0x2E0, 0x20, 0xFF}, // 0x2E0~0x2FF , open a IODecode section for UART5 6
    // Add more OEM IO decode below.
};

SIO_DEVICE_INIT_DATA NCT6776PeiInitTable[]={
    // -----------------------------
    //|  Addr | DataMask  | DataValue |
    // -----------------------------

    //---------------------------------------------------------------------
    // Enter Configuration Mode.
    //---------------------------------------------------------------------
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_CONFIG_MODE_ENTER_VALUE},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_CONFIG_MODE_ENTER_VALUE},
    //---------------------------------------------------------------------
    // Before init all logical devices, program Global register if needed.
    //---------------------------------------------------------------------
    //{NCT6776_CONFIG_INDEX, 0x00, 0x1A},//Multi Function Selection,pin 83,75,76,52
    //{NCT6776_CONFIG_DATA,  0x00, 0xF0}, 
    //{NCT6776_CONFIG_INDEX, 0x00, 0x1B},//Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0x78}, 
    {NCT6776_CONFIG_INDEX, 0x00, 0x1C},    //Multi Function Selection,pin 4,5
    {NCT6776_CONFIG_DATA,  0x00, 0x00}, 
    //{NCT6776_CONFIG_INDEX, 0x00, 0x24},//Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0x64},
    //{NCT6776_CONFIG_INDEX, 0x00, 0x27},    //Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0x00},  
    //{NCT6776_CONFIG_INDEX, 0x00, 0x2A},    //Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0xc0},
    #if (NCT6776_SERIAL_PORT1_PRESENT)
    {NCT6776_CONFIG_INDEX, 0x00, 0x2A},    //Multi Function Selection
    {NCT6776_CONFIG_DATA,  0x7F, 0x00},
    #endif
    #if (NCT6776_SERIAL_PORT2_PRESENT)
    {NCT6776_CONFIG_INDEX, 0x00, 0x27},    //Multi Function Selection
    {NCT6776_CONFIG_DATA,  0xFB, 0x00},
    {NCT6776_CONFIG_INDEX, 0x00, 0x2A},    //Multi Function Selection
    {NCT6776_CONFIG_DATA,  0x9F, 0x00},
    #endif
    #if (NCT6776_KEYBOARD_PRESENT)
    {NCT6776_CONFIG_INDEX, 0x00, 0x2A},    //Multi Function Selection
    {NCT6776_CONFIG_DATA,  0xFC, 0x00},
    #endif
    #if (NCT6776_PARALLEL_PORT_PRESENT)
    {NCT6776_CONFIG_INDEX, 0x00, 0x1B},
    {NCT6776_CONFIG_DATA,  0xDF, 0x00},
    {NCT6776_CONFIG_INDEX, 0x00, 0x1C},
    {NCT6776_CONFIG_DATA,  0x7F, 0x80},
    {NCT6776_CONFIG_INDEX, 0x00, 0x27},
    {NCT6776_CONFIG_DATA,  0xFE, 0x00},
    //{NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    //{NCT6776_CONFIG_DATA,  0x9F, NCT6776_LDN_GPIO3},
    //{NCT6776_CONFIG_INDEX, 0x00, 0x30},
    //{NCT6776_CONFIG_DATA,  0x7F, 0x80},
    #endif
    //{NCT6776_CONFIG_INDEX, 0x00, 0x2B},//Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0x00},
    {NCT6776_CONFIG_INDEX, 0x00, 0x2C},//Multi Function Selection
    {NCT6776_CONFIG_DATA,  0x00, 0x80|NCT6776_PECI_SBTSI},
//G160-002(6) - start
    {NCT6776_CONFIG_INDEX, 0x00, 0x2F},    //Strapping Function Result
    {NCT6776_CONFIG_DATA,  0xFE, 0x00},    //Set CLKIN is 24Mhz
//G160-002(6) - end
    //{NCT6776_CONFIG_INDEX, 0x00, 0x2D},//Multi Function Selection
    //{NCT6776_CONFIG_DATA,  0x00, 0x00},
    //{NCT6776_CONFIG_INDEX, 0x00, 0x2F},    //Strapping Function Result
    //{NCT6776_CONFIG_DATA,  0x00, 0x00 | (NCT6776_AMDPWR_EN << 5)\
    //                                   | (NCT6776_DSW_EN << 3)\
    //                                   | (NCT6776_LPT_EN << 1)\
    //                                   | (NCT6776_SEL_24M_48M)},
    //---------------------------------------------------------------------
    // Initialize the Serial Port for Recovery. Default is COMA
    //---------------------------------------------------------------------
    #if (defined(Recovery_SUPPORT) && (SerialRecovery_SUPPORT))
    #if (NCT6776_SERIAL_PORT1_PRESENT)
    // Select device
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_UART1},
    // Program Base Addr
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_LO_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, (UINT8)(NCT6776_SERIAL_PORT1_BASE_ADDRESS & 0xFF)},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_HI_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, (UINT8)(NCT6776_SERIAL_PORT1_BASE_ADDRESS >> 8)},
    // Activate Device
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_ACTIVATE_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_ACTIVATE_VALUE},
    #endif
    #endif
    //---------------------------------------------------------------------
    // Initialize the KeyBoard and floppy controller for Recovery
    //---------------------------------------------------------------------
    #if defined(Recovery_SUPPORT) && (Recovery_SUPPORT)
    #if (NCT6776_KEYBOARD_PRESENT)
    // Seclect device KEYBOARD
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_PS2K},
    // Program Base Addr
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_HI_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x00},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_LO_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x60},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE2_HI_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x00},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE2_LO_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x64},
    // Program Interrupt
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_IRQ1_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x01},
    // Activate Device
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_ACTIVATE_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_ACTIVATE_VALUE},
    #else
    // Deactivate Device
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_PS2K},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_ACTIVATE_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_DEACTIVATE_VALUE},
    #endif //NCT6776_KEYBOARD_PRESENT
    #if (NCT6776_FLOPPY_PORT_PRESENT)
    // Seclect device FLOPPY
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_FDC},
    // Program Base Addr
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_HI_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x03},
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_BASE1_LO_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0xF0},
    // Program Interrupt
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_IRQ1_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, 0x06},
    // Activate Device
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_ACTIVATE_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_ACTIVATE_VALUE},
    #endif //NCT6776_FLOPPY_PORT_PRESENT
    #endif //#if defined(Recovery_SUPPORT) && (Recovery_SUPPORT == 1)
    //---------------------------------------------------------------------
    // Program and initialize some logical device if needed.
    //---------------------------------------------------------------------
    // Seclect device KEYBOARD
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_PS2K},
    // config
    {NCT6776_CONFIG_INDEX, 0xFF, 0xF0},
    {NCT6776_CONFIG_DATA,  0xF7, 0x80 | (NCT6776_PORT92_EN << 2) | (NCT6776_GA20_SFTCTL<<1) | NCT6776_KBRST_SFTCTL},
    //---------------------------------------------------------------------
    // After init all logical devices, program Global register if needed.
    //---------------------------------------------------------------------
//G160-002(9) - start
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_GPIO2},
    {NCT6776_CONFIG_INDEX, 0x00, 0x24},
    {NCT6776_CONFIG_DATA,  0xBF, 0x00}, //Set CR24 Bit6 is 0.
    {NCT6776_CONFIG_INDEX, 0x00, 0x30},
    {NCT6776_CONFIG_DATA,  0xF5, 0x0A}, //Set GPIO0 is active and enable GPIO base address.
    {NCT6776_CONFIG_INDEX, 0x00, 0xE0},
    {NCT6776_CONFIG_DATA,  0x38, 0x38}, //Set GP02 GP03 GP04 is input and GP06 GP07 is output.
    {NCT6776_CONFIG_INDEX, 0x00, 0xE1},
    {NCT6776_CONFIG_DATA,  0x3F, 0xC0}, //Set GP06 GP07 output high.
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_GPIO3},
    {NCT6776_CONFIG_INDEX, 0x00, 0x2B},
    {NCT6776_CONFIG_DATA,  0xFB, 0x04}, //Set CR2B Bit2 is 1.
    {NCT6776_CONFIG_INDEX, 0x00, 0x30},
    {NCT6776_CONFIG_DATA,  0x77, 0x88}, //Set GPIO3 is active and GPIO7 is active.
    {NCT6776_CONFIG_INDEX, 0x00, 0xE4},
    {NCT6776_CONFIG_DATA,  0xFB, 0x04}, //Set GP32 is input.
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_GPIO1},    
    {NCT6776_CONFIG_INDEX, 0x00, 0x27},
    {NCT6776_CONFIG_DATA,  0xBF, 0x40}, //Set CR27 Bit6 is 1.
    {NCT6776_CONFIG_INDEX, 0x00, 0xE0},
    {NCT6776_CONFIG_DATA,  0x3F, 0x00}, //Set GP76 GP77 is output.
    {NCT6776_CONFIG_INDEX, 0x00, 0xE1},
    {NCT6776_CONFIG_DATA,  0x3F, 0xC0}, //Set GP76 GP77 is output high.
//G160-002(9) - end
//G160-002(23) - start
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_GPIO2},    
    {NCT6776_CONFIG_INDEX, 0xFF, 0x30},
    {NCT6776_CONFIG_DATA,  0xFF, 0x01},    
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_LDN_SEL_REGISTER},
    {NCT6776_CONFIG_DATA,  0x00, NCT6776_LDN_GPIO3},    
    {NCT6776_CONFIG_INDEX, 0x00, 0x30},
    {NCT6776_CONFIG_DATA,  0xFF, 0x08},    
    {NCT6776_CONFIG_INDEX, 0x00, 0xE4},
    {NCT6776_CONFIG_DATA,  0xEF, 0x00},     
    {NCT6776_CONFIG_INDEX, 0x00, 0xEA},
    {NCT6776_CONFIG_DATA,  0xFF, 0x10},
    {NCT6776_CONFIG_INDEX, 0x00, 0x2B},
    {NCT6776_CONFIG_DATA,  0xFF, 0x10},
//G160-002(23) - end
    //---------------------------------------------------------------------
    // After init all logical devices,  Exit Configuration Mode.
    //---------------------------------------------------------------------
    {NCT6776_CONFIG_INDEX, 0x00, NCT6776_CONFIG_MODE_EXIT_VALUE},
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

