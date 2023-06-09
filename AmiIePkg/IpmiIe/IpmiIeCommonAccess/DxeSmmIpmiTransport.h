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

/** @file DxeSmmIpmiTransport.h
    Defines structures used to establish communication to 
    use SMM services for DXE case

**/

#ifndef _DXE_SMM_IPMI_TRANSPORT_H_
#define _DXE_SMM_IPMI_TRANSPORT_H_

#include <Protocol/SmmCommunication.h>
#include "IpmiIeCommunicate.h"

///
/// To avoid confusion in interpreting frames, the communication buffer should always
/// begin with EFI_SMM_COMMUNICATE_HEADER and follow with Function number, ReturnStatus and Data
///
typedef struct {
  ///
  /// Designates an Function number for SmiHandler. 1-IpmiSendCommand and 2-GetIeStatus
  ///
  UINTN       FunctionNumber;
  ///
  /// Designates NetFunction of IPMI Command.
  ///
  UINTN       NetFunction;
  ///
  /// Designates LUN of IPMI Command.
  ///
  UINTN       Lun;
  ///
  /// Designates IPMI Command.
  ///
  UINTN       Command;
  ///
  /// Designates IPMI Command specific Data.
  ///
  UINTN       CommandData; //Pointer is copied here
  ///
  /// Designates IPMI Command specific Data size.
  ///
  UINTN       CommandDataSize;
  ///
  /// Designates IPMI Command specific Response Data.
  ///
  UINTN       ResponseData; //Pointer is copied here
  ///
  /// Designates IPMI Command specific Response Data size.
  ///
  UINTN       ResponseDataSize; //Pointer is copied here
  ///
  /// Command Completion Code returned from IpmiSendCommand function.
  ///
  UINT8       CommandCompletionCode; //Pointer is copied here
  ///
  /// Status returned from IpmiSendCommand Function
  ///
  EFI_STATUS  ReturnStatus;

} SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA;

///
/// To avoid confusion in interpreting frames, the communication buffer should always
/// begin with EFI_SMM_COMMUNICATE_HEADER and follow with Function number, ReturnStatus and Data
///
typedef struct {
  ///
  /// Designates an Function number for SmiHandler. 1-IpmiSendCommand and 2-GetIeStatus
  ///
  UINTN       FunctionNumber;
  ///
  /// Designates IeStatus.
  ///
  UINTN        IeStatus; //Pointer is copied here
  ///
  /// Designates ComAddress.
  ///
  UINTN    ComAddress; //Pointer is copied here
  ///
  /// Status returned from GetIeStatus Function
  ///
  EFI_STATUS  ReturnStatus;

} SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA;
//
// The pay load for this function is SMM_IPMI_IE_FUNCTION_SEND_COMMAND.
//
#define SMM_IPMI_IE_FUNCTION_SEND_COMMAND            1
//
// The pay load for this function is SMM_IPMI_IE_FUNCTION_GET_IE_STATUS.
// 
#define SMM_IPMI_IE_FUNCTION_GET_IE_STATUS  2

///
/// Size of SMM communicate header, without including the pay load.
///
#define SMM_COMMUNICATE_HEADER_SIZE  (OFFSET_OF (EFI_SMM_COMMUNICATE_HEADER, Data))

///
/// Size of SMM IPMI IE Send command communicate DATA size
///
#define SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA_SIZE  sizeof(SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA)

///
/// Size of SMM IPMI IE Get status communicate DATA size
///
#define SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA_SIZE  sizeof(SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA)

#endif // _DXE_SMM_IPMI_TRANSPORT_H_

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2014, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**         5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
