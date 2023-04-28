//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2016, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************
/** @file
  Implementation for EFI iSCSI Initiator Name Protocol.

Copyright (c) 2004 - 2011, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include "IScsiImpl.h"

//
// AMI PORITNG STARTS
//
#if (ISCSI_FORCEFULLY_SET_INITIATOR_NAME)
BOOLEAN gIsInitiatorNameForceSet = FALSE;
CHAR8	gForcedInitiatorName[ISCSI_NAME_MAX_SIZE] = {0};
#endif	// ISCSI_FORCEFULLY_SET_INITIATOR_NAME
//
// AMI PORTING ENDS
//
EFI_ISCSI_INITIATOR_NAME_PROTOCOL gIScsiInitiatorName = {
  IScsiGetInitiatorName,
  IScsiSetInitiatorName
};


/**
  Retrieves the current set value of iSCSI Initiator Name.

  @param[in]       This          Pointer to the EFI_ISCSI_INITIATOR_NAME_PROTOCOL
                                 instance.
  @param[in, out]  BufferSize    Size of the buffer in bytes pointed to by Buffer /
                                 Actual size of the variable data buffer.
  @param[out]      Buffer        Pointer to the buffer for data to be read.
                                 The data is a null-terminated UTF-8 encoded string.
                                 The maximum length is 223 characters, including the null-terminator.

  @retval EFI_SUCCESS            Data was successfully retrieved into the provided
                                 buffer and the BufferSize was sufficient to handle
                                 the iSCSI initiator name.
  @retval EFI_BUFFER_TOO_SMALL   BufferSize is too small for the result. BufferSize
                                 will be updated with the size required to complete
                                 the request. Buffer will not be affected.
  @retval EFI_INVALID_PARAMETER  BufferSize is NULL. BufferSize and Buffer will not
                                 be affected.
  @retval EFI_INVALID_PARAMETER  Buffer is NULL. BufferSize and Buffer will not be
                                 affected.
  @retval EFI_DEVICE_ERROR       The iSCSI initiator name could not be retrieved
                                 due to a hardware error.

**/
EFI_STATUS
EFIAPI
IScsiGetInitiatorName (
  IN     EFI_ISCSI_INITIATOR_NAME_PROTOCOL  *This,
  IN OUT UINTN                              *BufferSize,
  OUT    VOID                               *Buffer
  )
{
  EFI_STATUS  Status;

  if ((BufferSize == NULL) || (Buffer == NULL)) {
    return EFI_INVALID_PARAMETER;
  }
// AMI PORTING STARTS
#if(RSA_ISCSI_SUPPORT)
  if(RSAIsBMCDataAvailable()){
  	  // // If BMC data is available, read the respective Initiator name and return.
      Status = RSAGetIScsiInitiatorName((CHAR8*)Buffer);
      if(!EFI_ERROR(Status))
          *BufferSize = AsciiStrLen((CHAR8*)Buffer);
  }
  else
#endif	// RSA_ISCSI_SUPPORT
// AMI PORTING ENDS

//
// AMI PORTING STARTS
//
#if(ISCSI_FORCEFULLY_SET_INITIATOR_NAME)
	  if(gIsInitiatorNameForceSet){
		  // If the hook has returned any valid name, only then copy it to the buffer.
		  AsciiStrCpy((CHAR8*)Buffer,gForcedInitiatorName);
		  *BufferSize = AsciiStrLen(gForcedInitiatorName);			  
	  }
  return EFI_SUCCESS;
#endif	// ISCSI_FORCEFULLY_SET_INITIATOR_NAME
//
// AMI PORTING ENDS
//
  Status = gRT->GetVariable (
                  ISCSI_INITIATOR_NAME_VAR_NAME,
                  &gEfiIScsiInitiatorNameProtocolGuid,
                  NULL,
                  BufferSize,
                  Buffer
                  );

  return Status;
}


/**
  Sets the iSSI Initiator Name.

  @param[in]       This          Pointer to the EFI_ISCSI_INITIATOR_NAME_PROTOCOL
                                 instance.
  @param[in, out]  BufferSize    Size of the buffer in bytes pointed to by Buffer.
  @param[in]       Buffer        Pointer to the buffer for data to be written.
                                 The data is a null-terminated UTF-8 encoded string.
                                 The maximum length is 223 characters, including the null-terminator.

  @retval EFI_SUCCESS            Data was successfully stored by the protocol.
  @retval EFI_UNSUPPORTED        Platform policies do not allow for data to be
                                 written.
  @retval EFI_INVALID_PARAMETER  BufferSize exceeds the maximum allowed limit.
                                 BufferSize will be updated with the maximum size
                                 required to complete the request.
  @retval EFI_INVALID_PARAMETER  Buffersize is NULL. BufferSize and Buffer will not
                                 be affected.
  @retval EFI_INVALID_PARAMETER  Buffer is NULL. BufferSize and Buffer will not be
                                 affected.
  @retval EFI_DEVICE_ERROR       The data could not be stored due to a hardware
                                 error.
  @retval EFI_OUT_OF_RESOURCES   Not enough storage is available to hold the data
  @retval EFI_PROTOCOL_ERROR     Input iSCSI initiator name does not adhere to RFC
                                 3720

**/
EFI_STATUS
EFIAPI
IScsiSetInitiatorName (
  IN     EFI_ISCSI_INITIATOR_NAME_PROTOCOL  *This,
  IN OUT UINTN                              *BufferSize,
  IN     VOID                               *Buffer
  )
{
  EFI_STATUS  Status;

// AMI PORTING STARTS - RSA iSCSI Support.
#if(RSA_ISCSI_SUPPORT)
  if(RSAIsBMCDataAvailable())
  	  // If BMC data is available, it will have the initiator name. No need to set another one.
      return EFI_UNSUPPORTED;
#endif	// RSA_ISCSI_SUPPORT
// AMI PORTING ENDS - RSA iSCSI Support.

//
// AMI PORTING STARTS
//
#if(ISCSI_FORCEFULLY_SET_INITIATOR_NAME)
	  if(gIsInitiatorNameForceSet) {
		  AsciiStrCpy((CHAR8*)Buffer,gForcedInitiatorName);
  		  *BufferSize = AsciiStrLen(gForcedInitiatorName);	// BufferSize here is excluding NULL character.
		  // If we don't increase, the last character will not be validated
		  // even though it is not one of the three allowed special characters.
  		  *BufferSize += 1;
	  }
#endif	// ISCSI_FORCEFULLY_SET_INITIATOR_NAME
//
// AMI PORTING ENDS
//
  if ((BufferSize == NULL) || (Buffer == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  if (*BufferSize > ISCSI_NAME_MAX_SIZE) {
    *BufferSize = ISCSI_NAME_MAX_SIZE;
    return EFI_INVALID_PARAMETER;
  }
  //
  // Only support iqn iSCSI names.
  //
  Status = IScsiNormalizeName ((CHAR8 *) Buffer, *BufferSize - 1);
  if (EFI_ERROR (Status)) {
    return Status;
  }

  Status = gRT->SetVariable (
                  ISCSI_INITIATOR_NAME_VAR_NAME,
                  &gEfiIScsiInitiatorNameProtocolGuid,
                  EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                  *BufferSize,
                  Buffer
                  );

  return Status;
}
