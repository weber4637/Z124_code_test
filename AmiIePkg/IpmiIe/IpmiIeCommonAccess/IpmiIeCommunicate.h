//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file IpmiIeCommunicate.h
    IPMI IE Controller functions.

**/

#ifndef _EFI_IPMI_IE_COMMUNICATE_H_
#define _EFI_IPMI_IE_COMMUNICATE_H_

//-----------------------------------------------------------------------
#include "Token.h"
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/DebugLib.h>
#include <Library/ReportStatusCodeLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Protocol/IpmiIeSelfTestLogProtocol.h>

#include <Protocol/IpmiIeTransportProtocol.h>
#include <Protocol/IeHeciDxe.h>

#include <Include/IpmiIeCommon.h>

//-----------------------------------------------------------------------

//
// Function Prototypes
//

EFI_STATUS
InitializeIpmiPhysicalLayerHook (
  VOID
  );
//
// Completion code related definitions
//
#define COMPLETION_CODE_SUCCESS                     0x00
#define COMPLETION_CODE_DEVICE_SPECIFIC_START       0x01
#define COMPLETION_CODE_DEVICE_SPECIFIC_END         0x7E
#define COMPLETION_CODE_COMMAND_SPECIFIC_START      0x80
#define COMPLETION_CODE_COMMAND_SPECIFIC_END        0xBE

//#define ERROR_COMPLETION_CODE(a) !( (a >= COMPLETION_CODE_SUCCESS) && (a <= COMPLETION_CODE_COMMAND_SPECIFIC_END) )

#define ERROR_COMPLETION_CODE(a)        !( (a == COMPLETION_CODE_SUCCESS) || \
                            ( (a >= COMPLETION_CODE_DEVICE_SPECIFIC_START) &&\
                                (a <= COMPLETION_CODE_DEVICE_SPECIFIC_END) )||\
                            ( (a >= COMPLETION_CODE_COMMAND_SPECIFIC_START) &&\
                                (a <= COMPLETION_CODE_COMMAND_SPECIFIC_END) ) )

//
// IPMI Instance signature
//
#define SM_IPMI_IE_SIGNATURE SIGNATURE_32 ('i', 'p', 'm', 'i')

#define INSTANCE_FROM_EFI_SM_IPMI_IE_THIS(a) \
  CR ( \
  a, \
  EFI_IPMI_IE_INSTANCE_DATA, \
  IpmiTransport, \
  SM_IPMI_IE_SIGNATURE \
  )

#endif

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**         5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
