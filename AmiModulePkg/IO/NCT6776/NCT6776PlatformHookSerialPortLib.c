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
// Name:  <NCT6776PlatformHookSerialPortLib.c>
//
// Description:	
//
//<AMI_FHDR_END>
//**********************************************************************
#include "Token.h"
#include <Base.h>
#include <Library\PlatformHookLib.h>
#include <Protocol\AmiSio.h>
#include <Library\AmiSioPeiLib.h>
#include <Library\PciCf8Lib.h>
#include <NCT6776PlatformHookSerialPortLib.h>

/**
  Performs platform specific initialization required for the CPU to access
  the hardware associated with a SerialPortLib instance.  This function does
  not intiailzie the serial port hardware itself.  Instead, it initializes
  hardware devices that are required for the CPU to access the serial port
  hardware.  This function may be called more than once.

  @retval RETURN_SUCCESS       The platform specific initialization succeeded.
  @retval RETURN_DEVICE_ERROR  The platform specific initialization could not be completed.

**/
RETURN_STATUS
EFIAPI
PlatformHookSerialPortInitialize (
  VOID
  )
{
    //1. Decode
    UINT8 index;

    for(index=0; index<sizeof(NCT6776SerialPortDebugDecodeTable)/sizeof(IO_DECODE_DATA); index++)
        AmiSioLibSetLpcDeviceDecoding(NULL, \
                NCT6776SerialPortDebugDecodeTable[index].BaseAdd, \
                NCT6776SerialPortDebugDecodeTable[index].UID, \
                NCT6776SerialPortDebugDecodeTable[index].Type);
    //2. Enable IO
    //3. Set Serial port address
    ProgramRtRegisterTable(0x00, NCT6776SerialPortDebugInitTable, sizeof(NCT6776SerialPortDebugInitTable)/sizeof(SIO_DEVICE_INIT_DATA));

    return  RETURN_SUCCESS;
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

