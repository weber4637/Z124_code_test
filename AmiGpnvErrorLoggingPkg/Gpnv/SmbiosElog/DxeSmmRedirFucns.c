//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2020, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//**********************************************************************//



/** @file DxeSmmRedirFucns.c
    DxeSmmRedirFuncs Implementation

**/

//---------------------------------------------------------------------------

#include <Protocol/SmmCommunication.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiLib.h>
#include "SmbiosElog.h"
// Denverton AptioV Override Start - EIP#501277
#include "DxeSmmRedirFuncs.h"
#include <Token.h>
// Denverton AptioV Override End - EIP#501277

//---------------------------------------------------------------------------
// Denverton AptioV Override Start - EIP#501277
// Runtime buffer         - Elog Data               RecordId          ElogDataSize     EnableElog         ElogStatus
#define RUNTIME_BUFFER_SIZE MAX_ELOG_DATA_SIZE - 1 + sizeof (UINT64) + sizeof (UINTN) + sizeof (BOOLEAN) + sizeof (BOOLEAN)
// Denverton AptioV Override End - EIP#501277

// Global variables

EFI_SMM_COMMUNICATION_PROTOCOL  *gSmmCommunication = NULL;
UINT8                           *gCommunicateBuffer = NULL;
UINTN                            gCommunicateBufferSize;
// Denverton AptioV Override Start - EIP#501277
UINT8                           *gRuntimeBuffer;
UINT8                           *gElogData;
UINT64                          *gRecordId;
UINTN                           *gElogDataSize;
BOOLEAN                         *gEnableElog;
BOOLEAN                         *gElogStatus;
// Denverton AptioV Override End - EIP#501277
/**

    Once SMM version of Redirect protocol is available this function will be 
    called whenever SetSmbiosElogData is called.
    This function calls the SetSmbiosElogData in SMM through SMM communicate.

    @param This - Instance of EFI_SM_ELOG_REDIR_PROTOCOL.
    @param ElogData - Pointer to the Event-Log data to be recorded.
    @param DataType - Type of Elog Data that is being recorded.
    @param AlertEvent - This is an indication that the input data type is an
                        Alert.
    @param Size - Size of the data to be logged.
    @param RecordId - Record ID sent by the target.

    @return EFI_STATUS
    @retval EFI_SUCCESS - SmmEfiSetSmbiosElogData is called successfully.

**/
EFI_STATUS
SmmEfiSetSmbiosElogData (
    IN  EFI_SM_ELOG_REDIR_PROTOCOL  *This,
    IN  UINT8                       *ElogData,
    IN  EFI_SM_ELOG_REDIR_TYPE      DataType,
    IN  BOOLEAN                     AlertEvent,
    IN  UINTN                       Size,
    OUT UINT64                      *RecordId )
{
     EFI_STATUS                            Status;
     EFI_SMM_COMMUNICATE_HEADER            *SmmCommunicateHeader;
     SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA  *SmmRedirFuncsSetCommunicateData;
     
     // Denverton AptioV Override Start - EIP#501277
     if ((Size > MAX_ELOG_DATA_SIZE) || (DataType >= EfiSmElogRedirMax))
         return EFI_INVALID_PARAMETER;
     // Denverton AptioV Override End - EIP#501277

// Copy SMM Communicate Header Here

     SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
     CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gAmiSmmDummyProtocolRedirGuid);
     SmmCommunicateHeader->MessageLength   = SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA_SIZE;

//Update the SmmRedirFuncsSetCommunicateData here

     SmmRedirFuncsSetCommunicateData = (SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
     SmmRedirFuncsSetCommunicateData->FunctionNumber = SMM_REDIR_FUNCS_SET_COMMUNICATE;
     // Denverton AptioV Override Start - EIP#501277
     if ((ElogData == NULL) || (Size == 0))
         SmmRedirFuncsSetCommunicateData->ElogData = NULL;
     else {
         SetMem (gElogData, MAX_ELOG_DATA_SIZE, LOCAL_DEFAULT_BYTE_AFTER_ERASE);
         SmmRedirFuncsSetCommunicateData->ElogData = gElogData;
         CopyMem (SmmRedirFuncsSetCommunicateData->ElogData, ElogData, Size);
     }
     // Denverton AptioV Override End - EIP#501277
     SmmRedirFuncsSetCommunicateData->DataType = DataType;
     SmmRedirFuncsSetCommunicateData->AlertEvent = AlertEvent;
     SmmRedirFuncsSetCommunicateData->Size = Size;
     // Denverton AptioV Override Start - EIP#501277
     if (RecordId == NULL)
         SmmRedirFuncsSetCommunicateData->RecordId = NULL;
     else
         SmmRedirFuncsSetCommunicateData->RecordId = gRecordId;
     // Denverton AptioV Override End - EIP#501277

// Send data to SMM.

     gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA_SIZE;
     Status = gSmmCommunication->Communicate ( gSmmCommunication, 
                                               gCommunicateBuffer, 
                                               &gCommunicateBufferSize 
                                              );

     // Denverton AptioV Override Start - EIP#501277
     if (EFI_ERROR(Status)) {
         return Status;
     }
     // Denverton AptioV Override End - EIP#501277

// Sending the status from the data present in header


    SmmCommunicateHeader      = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmRedirFuncsSetCommunicateData = (SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    // Denverton AptioV Override Start - EIP#501277
    if (!EFI_ERROR(SmmRedirFuncsSetCommunicateData->ReturnStatus))
        CopyMem (RecordId, SmmRedirFuncsSetCommunicateData->RecordId, sizeof(UINT64));
    // Denverton AptioV Override End - EIP#501277

    return  SmmRedirFuncsSetCommunicateData->ReturnStatus;

}

/**

    Once SMM version of Redirect protocol is available this function will be 
    called whenever GetSmbiosElogData is called.
    This function calls the GetSmbiosElogData in SMM through SMM communicate.

    @param This - Instance of EFI_SM_ELOG_REDIR_PROTOCOL.
    @param ElogData - Pointer to the Event-Log data to be recorded.
    @param DataType - Type of Elog Data that is being recorded.
    @param Size - Size of the data to be logged.
    @param RecordId - Record ID sent by the target.

    @return EFI_STATUS
    @retval EFI_SUCCESS - SmmEfiGetSmbiosElogData is called successfully.

**/

EFI_STATUS
SmmEfiGetSmbiosElogData (
    IN  EFI_SM_ELOG_REDIR_PROTOCOL  *This,
    IN  UINT8                       *ElogData,
    IN  EFI_SM_ELOG_REDIR_TYPE      DataType,
    OUT UINTN                       *Size,
    OUT UINT64                      *RecordId )
{
    EFI_STATUS                             Status;
    EFI_SMM_COMMUNICATE_HEADER            *SmmCommunicateHeader;
    SMM_REDIR_FUNCS_GET_COMMUNICATE_DATA  *SmmRedirFuncsGetCommunicateData;

    // Denverton AptioV Override Start - EIP#501277
    if (RecordId == NULL || Size == NULL || DataType >= EfiSmElogRedirMax) {
        return EFI_INVALID_PARAMETER;
    }
    // Denverton AptioV Override End - EIP#501277

// Copy SMM Communicate Header Here

    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
    CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gAmiSmmDummyProtocolRedirGuid);
    SmmCommunicateHeader->MessageLength   = SMM_REDIR_FUNCS_GET_COMMUNICATE_DATA_SIZE;

//Update the SmmRedirFuncsGetCommunicateData here

    SmmRedirFuncsGetCommunicateData = (SMM_REDIR_FUNCS_GET_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    SmmRedirFuncsGetCommunicateData->FunctionNumber = SMM_REDIR_FUNCS_GET_COMMUNICATE;
    SmmRedirFuncsGetCommunicateData->DataType = DataType;
    // Denverton AptioV Override Start - EIP#501277
    if ((ElogData == NULL) || (*Size == 0))
        SmmRedirFuncsGetCommunicateData->ElogData = NULL;
    else {
        SetMem (gElogData, MAX_ELOG_DATA_SIZE, LOCAL_DEFAULT_BYTE_AFTER_ERASE);
        SmmRedirFuncsGetCommunicateData->ElogData = gElogData;
    }
    SmmRedirFuncsGetCommunicateData->Size = gElogDataSize;
    CopyMem (SmmRedirFuncsGetCommunicateData->Size, Size, sizeof(UINTN));
    SmmRedirFuncsGetCommunicateData->RecordId = gRecordId;
    CopyMem (SmmRedirFuncsGetCommunicateData->RecordId, RecordId, sizeof(UINT64));
    // Denverton AptioV Override End - EIP#501277

// Send data to SMM.

    gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_REDIR_FUNCS_GET_COMMUNICATE_DATA_SIZE;
    Status = gSmmCommunication->Communicate ( gSmmCommunication, 
                                              gCommunicateBuffer, 
                                              &gCommunicateBufferSize
                                            );
    // Denverton AptioV Override Start - EIP#501277
    if (EFI_ERROR(Status)) {
        return Status;
    }
    // Denverton AptioV Override End - EIP#501277

// Getting the Status of the protocol from the communicate data

    SmmCommunicateHeader      = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmRedirFuncsGetCommunicateData = (SMM_REDIR_FUNCS_GET_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    // Denverton AptioV Override Start - EIP#501277
    CopyMem (Size, SmmRedirFuncsGetCommunicateData->Size, sizeof(UINTN));
    CopyMem (ElogData, SmmRedirFuncsGetCommunicateData->ElogData, *(SmmRedirFuncsGetCommunicateData->Size));
    CopyMem (RecordId, SmmRedirFuncsGetCommunicateData->RecordId, sizeof(UINT64));
    // Denverton AptioV Override End - EIP#501277

    return  SmmRedirFuncsGetCommunicateData->ReturnStatus;

}

/**
    Once SMM version of Redirect protocol is available this function will be 
    called whenever EraseSmbiosElogData is called.
    This function calls the EraseSmbiosElogData in SMM through SMM communicate.

    @param This - Instance of EFI_SM_ELOG_REDIR_PROTOCOL.
    @param DataType - Type of Elog Data that is being recorded.
    @param RecordId - Record ID sent by the target.

    @return EFI_STATUS
    @retval EFI_SUCCESS - SmmEfiEraseSmbiosElogData is called successfully.

**/

EFI_STATUS
SmmEfiEraseSmbiosElogData (
    IN  EFI_SM_ELOG_REDIR_PROTOCOL    *This,
    IN  EFI_SM_ELOG_REDIR_TYPE        DataType,
    OUT UINT64                        *RecordId )
{
    EFI_STATUS                               Status;
    EFI_SMM_COMMUNICATE_HEADER              *SmmCommunicateHeader;
    SMM_REDIR_FUNCS_ERASE_COMMUNICATE_DATA  *SmmRedirFuncsEraseCommunicateData;

// Copy SMM Communicate Header Here

    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
    CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gAmiSmmDummyProtocolRedirGuid);
    SmmCommunicateHeader->MessageLength   = SMM_REDIR_FUNCS_ERASE_COMMUNICATE_DATA_SIZE;

// Update the SmmRedirFuncsEraseCommunicateData here

    SmmRedirFuncsEraseCommunicateData = (SMM_REDIR_FUNCS_ERASE_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    SmmRedirFuncsEraseCommunicateData->FunctionNumber = SMM_REDIR_FUNCS_ERASE_COMMUNICATE;
    SmmRedirFuncsEraseCommunicateData->DataType = DataType;
    // Denverton AptioV Override Start - EIP#501277
    if (RecordId == NULL)
        SmmRedirFuncsEraseCommunicateData->RecordId = NULL;
    else {
    SmmRedirFuncsEraseCommunicateData->RecordId = gRecordId;
    CopyMem (SmmRedirFuncsEraseCommunicateData->RecordId, RecordId, sizeof(UINT64));
    }
    // Denverton AptioV Override End - EIP#501277

// Send data to SMM.

    gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_REDIR_FUNCS_ERASE_COMMUNICATE_DATA_SIZE;
    Status = gSmmCommunication->Communicate ( gSmmCommunication, 
                                              gCommunicateBuffer, 
                                              &gCommunicateBufferSize
                                            );
    // Denverton AptioV Override Start - EIP#501277
    if (EFI_ERROR(Status)) {
        return Status;
    }
    // Denverton AptioV Override End - EIP#501277

// Getting the Status of the protocol from the communicate data

    SmmCommunicateHeader      = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmRedirFuncsEraseCommunicateData = (SMM_REDIR_FUNCS_ERASE_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;

    CopyMem (RecordId, SmmRedirFuncsEraseCommunicateData->RecordId, sizeof(UINT64)); // Denverton AptioV Override - EIP#501277
    return  SmmRedirFuncsEraseCommunicateData->ReturnStatus;

}

/**

    Once SMM version of Redirect protocol is available this function will be 
    called whenever ActivateSmbiosElogData is called.
    This function calls the ActivateSmbiosElogData in SMM through SMM communicate.

    @param This - Instance of EFI_SM_ELOG_REDIR_PROTOCOL.
    @param DataType - Type of Elog Data that is being recorded.
    @param EnableElog - Enables (TRUE)/Disables(FALSE) Event Log. If NULL just
                        returns the Current ElogStatus.
    @param ElogStatus - Current (New) Status of Event Log. Enabled (TRUE),
                        Disabled (FALSE).

    @return EFI_STATUS
    @retval EFI_SUCCESS - SmmEfiActivateSmbiosElogData is called successfully.

**/
EFI_STATUS
SmmEfiActivateSmbiosElog (
    IN  EFI_SM_ELOG_REDIR_PROTOCOL    *This,
    IN  EFI_SM_ELOG_REDIR_TYPE        DataType,
    IN  BOOLEAN                       *EnableElog,
    OUT BOOLEAN                       *ElogStatus)
{
    EFI_STATUS                          Status;
    EFI_SMM_COMMUNICATE_HEADER          *SmmCommunicateHeader;
    SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE_DATA     *SmmRedirFuncsActivateCommunicateData;

// Copy SMM Communicate Header Here

    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
    CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gAmiSmmDummyProtocolRedirGuid);
    SmmCommunicateHeader->MessageLength   = SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE_DATA_SIZE;

//Update the SmmRedirFuncsActivateCommunicateData here

    SmmRedirFuncsActivateCommunicateData = (SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    SmmRedirFuncsActivateCommunicateData->FunctionNumber = SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE;
    SmmRedirFuncsActivateCommunicateData->DataType = DataType;
    // Denverton AptioV Override Start - EIP#501277
    if (EnableElog == NULL)
        SmmRedirFuncsActivateCommunicateData->EnableElog = NULL;
    else {
        SmmRedirFuncsActivateCommunicateData->EnableElog = gEnableElog;
        CopyMem (SmmRedirFuncsActivateCommunicateData->EnableElog, EnableElog, sizeof(BOOLEAN));
    }
    if (ElogStatus == NULL)
        SmmRedirFuncsActivateCommunicateData->ElogStatus = NULL;
    else
        SmmRedirFuncsActivateCommunicateData->ElogStatus = gElogStatus;
    // Denverton AptioV Override End - EIP#501277

// Send data to SMM.

    gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE_DATA_SIZE;
    Status = gSmmCommunication->Communicate ( gSmmCommunication, 
                                              gCommunicateBuffer, 
                                              &gCommunicateBufferSize 
                                            );
    // Denverton AptioV Override Start - EIP#501277
    if (EFI_ERROR(Status)) {
        return Status;
    }
    // Denverton AptioV Override End - EIP#501277

// Getting the Status of the protocol from the communicate data

    SmmCommunicateHeader      = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmRedirFuncsActivateCommunicateData = (SMM_REDIR_FUNCS_ACTIVATE_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    // Denverton AptioV Override Start - EIP#501277
    if (!EFI_ERROR(SmmRedirFuncsActivateCommunicateData->ReturnStatus)) {
        CopyMem (ElogStatus, SmmRedirFuncsActivateCommunicateData->ElogStatus, sizeof(BOOLEAN));
    }
    // Denverton AptioV Override End - EIP#501277

    return  SmmRedirFuncsActivateCommunicateData->ReturnStatus;

}


/**

    This function locates the SMM communicate and Overrides all the Redirect 
    Functions of the SmbiosElog.

    @param Event - EFI_EVENT_NOTIFY
    @param Context - The Event relative context

    @return VOID

**/
VOID
EFIAPI
DxeSmmRedirFuncsProtocolReady (
  IN  EFI_EVENT                             Event,
  IN  VOID                                  *Context
  )
{
    EFI_STATUS                      Status;
    // Denverton AptioV Override Start - EIP#501277
    VOID        *Interface;

    Status = gBS->LocateProtocol ( &gAmiSmmDummyProtocolRedirGuid, 
                                   NULL, 
                                   (VOID **) &Interface 
                                 );

    if (EFI_ERROR (Status)) {
        DEBUG((DEBUG_ERROR, "%a Locating AmiSmmDummyProtocolRedir failed!!!\n", __FUNCTION__));
        return;
    }
    // Denverton AptioV Override End - EIP#501277

// Locate the SMM communicate protocol

    Status = gBS->LocateProtocol ( &gEfiSmmCommunicationProtocolGuid, 
                                   NULL, 
                                  (VOID **) &gSmmCommunication 
                                 );

    if (EFI_ERROR (Status)) {
        return;
    }


// Allocate memory for variable store.

    gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_REDIR_FUNCS_SET_COMMUNICATE_DATA_SIZE;
    gCommunicateBuffer      = AllocateRuntimeZeroPool (gCommunicateBufferSize);
    // Denverton AptioV Override Start - EIP#501277
    if (gCommunicateBuffer == NULL){
        return;
    }
    
    gRuntimeBuffer          = AllocateRuntimeZeroPool (RUNTIME_BUFFER_SIZE);
    if (gRuntimeBuffer == NULL){
        FreePool( gCommunicateBuffer);
        return;
    }
    
    gElogData               = gRuntimeBuffer;
    gRecordId               = (UINT64 *)(gElogData + MAX_ELOG_DATA_SIZE - 1);
    gElogDataSize           = (UINTN *)((UINT8 *)gRecordId + sizeof (UINT64));
    gEnableElog             = (UINT8 *)gElogDataSize + sizeof (UINTN);
    gElogStatus             = (UINT8 *)gEnableElog + sizeof (BOOLEAN);
    // Denverton AptioV Override End - EIP#501277

// Override all the Redirect Functions of the SmbiosElog

    mRedirSmbiosPrivate->SmbiosElog.ActivateEventLog  = SmmEfiActivateSmbiosElog;
    mRedirSmbiosPrivate->SmbiosElog.EraseEventLogData = SmmEfiEraseSmbiosElogData;
    mRedirSmbiosPrivate->SmbiosElog.GetEventLogData   = SmmEfiGetSmbiosElogData;
    mRedirSmbiosPrivate->SmbiosElog.SetEventLogData   = SmmEfiSetSmbiosElogData;

    return;
}

/**

    This function registers callback for the gAmiSmmDummyProtocolRedirGuid.
    This function gets control when SMM Redirect Protocol is available

    @param VOID

    @return EFI_STATUS
    @retval EFI_SUCCESS - Protocol Callback is registered successfully.

**/
EFI_STATUS
DxeSmmRedirFuncsHook ( VOID )
{
    VOID        *DxeSmmRedirFuncsReg;


// Create Notification event for SmmSmbiosRedirProtocol GUID

    EfiCreateProtocolNotifyEvent (
        &gAmiSmmDummyProtocolRedirGuid,
        TPL_CALLBACK,
        DxeSmmRedirFuncsProtocolReady,
        NULL,
        &DxeSmmRedirFuncsReg
        );

    return EFI_SUCCESS;

}
