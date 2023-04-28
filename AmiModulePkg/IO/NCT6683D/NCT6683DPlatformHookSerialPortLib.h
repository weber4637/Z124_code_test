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
// Name:  <NCT6683DPlatformHookSerialPortLib.h>
//
// Description:
//
//<AMI_FHDR_END>
//**********************************************************************
#include "Token.h"
#include <Library/AmiSioPeiLib.h>

IO_DECODE_DATA NCT6683DSerialPortDebugDecodeTable[]={
    // -----------------------------
    //|  BaseAdd | UID  | Type |
    // -----------------------------
    {NCT6683D_CONFIG_INDEX, 2, 0xFF},
    //Below decode is for DEBUG Mode
    #if (NCT6683D_SERIAL_PORT1_PRESENT)
    {NCT6683D_SERIAL_PORT1_BASE_ADDRESS, 0x01, dsUART},
    #endif
};

SIO_DEVICE_INIT_DATA NCT6683DSerialPortDebugInitTable[]={
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
    {NCT6683D_CONFIG_INDEX, 0x00, 0x1B},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL1B},
    {NCT6683D_CONFIG_INDEX, 0x00, 0x24},
    {NCT6683D_CONFIG_DATA,  0x00, NCT6683D_VAL24},
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
    #endif // NCT6683D_SERIAL_PORT1_PRESENT
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
