//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2019, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file DxeSmmIpmiTransport.c
    Establishes communication to use SMM services for DXE case

**/

//----------------------------------------------------------------------

#include <Library/UefiLib.h>
#include "DxeSmmIpmiTransport.h"

//----------------------------------------------------------------------

#if IPMI_SEPARATE_DXE_SMM_INTERFACES == 0


//
// Extern Variables
//
extern EFI_IPMI_IE_INSTANCE_DATA   *gIpmiInstance;

//
// Global variables
//
EFI_SMM_COMMUNICATION_PROTOCOL  *gSmmCommunication = NULL;
UINT8                           *gCommunicateBuffer = NULL;
UINTN                            gCommunicateBufferSize;
// Denverton AptioV Override Start - EIP#440090
#define MAXIMUM_DATA_SIZE 0xFF
#define SMM_IPMI_RUNTIME_BUFFER_SIZE 0x2FF

UINT8                           *gCommandData;
UINT8                           *gResponseDataSize;
UINT8                           *gResponseData;
UINT8                           *gIEStatus;
UINT8                           *gComAddress;
UINT8                           *TotalBlockSize;
// Denverton AptioV Override End - EIP#440090


// Denverton AptioV Override Start - EIP#440090
/**
    IPMI send command SMM service for Non SMM case

    @param This             Pointer to IPMI Protocol/PPI
    @param NetFunction      Net function of the command
    @param LUN              Logical Unit number of the command
    @param Command          Command to be sent to IE
    @param CommandData      Command data to be sent along with Command
    @param CommandDataSize  Command Data size
    @param ResponseData     Response Data from IE
    @param ResponseDataSize Size of the Response data
    @param CompletionCode   Completion code returned by IE
    
    @retval EFI_SUCCESS Status returned from IE while executing the command.

**/


EFI_STATUS
SmmIpmiSendCommand (
  IN EFI_IPMI_TRANSPORT    *This,
  IN UINT8                 NetFunction,
  IN UINT8                 Lun,
  IN UINT8                 Command,
  IN UINT8                 *CommandData,
  IN UINT8                 CommandDataSize,
  OUT UINT8                *ResponseData,
  OUT UINT8                *ResponseDataSize,
  OUT UINT8                *CompletionCode
  )
{
    EFI_STATUS                                    Status;
    EFI_SMM_COMMUNICATE_HEADER                   *SmmCommunicateHeader;
    SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA   *SmmIpmiIeData;

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmEfiIpmiSendCommand entered  IpmiInstance: %x \n", gIpmiInstance));

    //
    // Copy SMM Communicate Header Here
    //
    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
    CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gEfiSmmIpmiIeTransportProtocolGuid);
    SmmCommunicateHeader->MessageLength = SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA_SIZE;

    //
    // Copy SMM IPMI IE Communicate Data Here
    //
    SmmIpmiIeData = (SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    SmmIpmiIeData->FunctionNumber = SMM_IPMI_IE_FUNCTION_SEND_COMMAND;
    SmmIpmiIeData->NetFunction = NetFunction;
    SmmIpmiIeData->Lun = Lun;
    SmmIpmiIeData->Command = Command;
 if ((VOID *) CommandData == NULL || CommandDataSize == 0) {
     SmmIpmiIeData->CommandData = 0;
    } else {
        SmmIpmiIeData->CommandData = ((UINTN)(UINTN *) gCommandData);
        CopyMem ((VOID *)(UINTN *)SmmIpmiIeData->CommandData, CommandData, (UINTN)CommandDataSize);
    }
    SmmIpmiIeData->CommandDataSize = CommandDataSize;
    if ((VOID *) ResponseDataSize == NULL) {
        SmmIpmiIeData->ResponseDataSize = 0;
    } else {
        SmmIpmiIeData->ResponseDataSize = ((UINTN)(UINTN *) gResponseDataSize);
        CopyMem ((VOID *)(UINTN *)SmmIpmiIeData->ResponseDataSize, ResponseDataSize,sizeof (UINT8));
    }
    if ((VOID *) ResponseData == NULL || *ResponseDataSize == 0) {
        SmmIpmiIeData->ResponseData = 0;
    } else {
        SmmIpmiIeData->ResponseData = ((UINTN)(UINTN *) gResponseData);
        CopyMem ((VOID *)(UINTN *)SmmIpmiIeData->ResponseData, ResponseData,*ResponseDataSize);
    }
     //
    // Specify some initial value to data's return status
    //
    SmmIpmiIeData->ReturnStatus = EFI_PROTOCOL_ERROR;
    
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiIeData->ReturnStatus initializing the value: %r \n", SmmIpmiIeData->ReturnStatus));

    //
    // Send data to SMM.
    //
    gCommunicateBufferSize = SMM_COMMUNICATE_HEADER_SIZE + SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA_SIZE;
    Status = gSmmCommunication->Communicate (gSmmCommunication, gCommunicateBuffer, &gCommunicateBufferSize);
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "gSmmCommunication->Communicate  Status: %r \n", Status));
    ASSERT_EFI_ERROR (Status);

    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmIpmiIeData = (SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    CopyMem (ResponseDataSize, (VOID *)(UINTN *) SmmIpmiIeData->ResponseDataSize, sizeof(UINT8));
    CopyMem (ResponseData, (VOID *)(UINTN *) SmmIpmiIeData->ResponseData, *ResponseDataSize);

    if (SmmIpmiIeData->ReturnStatus == EFI_PROTOCOL_ERROR) {
        SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiIeData->ReturnStatus inside for loop: %r \n", SmmIpmiIeData->ReturnStatus));
        SmmIpmiIeData->ReturnStatus = EFI_SUCCESS;
    }

    //
    //  If Completion Code is assigned with a proper address
    //
    if ((CompletionCode != NULL)) {
        *CompletionCode = SmmIpmiIeData->CommandCompletionCode;
    }

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiIeData->ReturnStatus : %r \n", SmmIpmiIeData->ReturnStatus));

    This->CommandCompletionCode = SmmIpmiIeData->CommandCompletionCode;

    //
    // Status returned by the SMM based routine.
    //
    return  SmmIpmiIeData->ReturnStatus;
}


/** 
    Calls the IPMI send command SMM service for Non SMM case

    @param This Pointer to IPMI Protocol/PPI
    @param NetFunction Net function of the command
    @param LUN Logical Unit number of the command
    @param Command Command to be sent to IE
    @param CommandData Command data to be sent along with Command
    @param CommandDataSize Command Data size
    @param ResponseData Response Data from IE
    @param ResponseDataSize Size of the Response data

    @retval EFI_SUCCESS Status returned from IE while executing the command.

**/

EFI_STATUS
SmmEfiIpmiSendCommand (
  IN EFI_IPMI_TRANSPORT    *This,
  IN UINT8                 NetFunction,
  IN UINT8                 Lun,
  IN UINT8                 Command,
  IN UINT8                 *CommandData,
  IN UINT8                 CommandDataSize,
  OUT UINT8                *ResponseData,
  OUT UINT8                *ResponseDataSize
  )
{
    return SmmIpmiSendCommand (
            This,
            NetFunction,
            Lun,
            Command,
            CommandData,
            CommandDataSize,
            ResponseData,
            ResponseDataSize,
            NULL
            );
}

// Denverton AptioV Override End - EIP#440090
/**
    Calls the IPMI IE status SMM service for Non SMM case

    @param This Pointer to IPMI Protocol/PPI
    @param IeStatus State of the IE
    @param ComAddress IE Communication address

    @retval EFI_SUCCESS Status returned

**/

EFI_STATUS
SmmEfiIpmiIeStatus (
  IN EFI_IPMI_TRANSPORT     *This,
  OUT EFI_IE_STATUS         *IeStatus,
  OUT EFI_SM_COM_ADDRESS    *ComAddress )
{

    EFI_STATUS                                   Status;
    EFI_SMM_COMMUNICATE_HEADER                   *SmmCommunicateHeader;
    SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA      *SmmIpmiGetIeStatusData;

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmEfiIpmiSendCommand entered  IpmiInstance: %x \n", gIpmiInstance));

    //
    // Copy SMM Communicate Header Here
    //
    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *)gCommunicateBuffer;
    CopyGuid (&SmmCommunicateHeader->HeaderGuid, &gEfiSmmIpmiIeTransportProtocolGuid);
    SmmCommunicateHeader->MessageLength = SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA_SIZE;

    //
    // Copy SMM IPMI Get IE Communicate Data Here
    //
    SmmIpmiGetIeStatusData = (SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;
    SmmIpmiGetIeStatusData->FunctionNumber = SMM_IPMI_IE_FUNCTION_GET_IE_STATUS;
// Denverton AptioV Override Start - EIP#440090
    SmmIpmiGetIeStatusData->IeStatus = (UINTN) gIEStatus;
    SmmIpmiGetIeStatusData->ComAddress = (UINTN) gComAddress;
// Denverton AptioV Override End - EIP#440090
    //
    // Specify some initial value to data's return status
    //
    SmmIpmiGetIeStatusData->ReturnStatus = EFI_PROTOCOL_ERROR;

    //
    // Send data to SMM.
    //
    gCommunicateBufferSize = SMM_COMMUNICATE_HEADER_SIZE + SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA_SIZE;
    Status = gSmmCommunication->Communicate (gSmmCommunication, gCommunicateBuffer, &gCommunicateBufferSize);
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "gSmmCommunication->Communicate  Status: %r \n", Status));
    ASSERT_EFI_ERROR (Status);

    SmmCommunicateHeader = (EFI_SMM_COMMUNICATE_HEADER *) gCommunicateBuffer;
    SmmIpmiGetIeStatusData = (SMM_IPMI_IE_GET_STATUS_COMMUNICATE_DATA *)SmmCommunicateHeader->Data;

// Denverton AptioV Override Start - EIP#440090
    CopyMem(IeStatus, (VOID *) SmmIpmiGetIeStatusData->IeStatus, sizeof(EFI_IE_STATUS) );
    CopyMem(ComAddress, (VOID *) SmmIpmiGetIeStatusData->ComAddress, sizeof(EFI_SM_COM_ADDRESS) );
    if (SmmIpmiGetIeStatusData->ReturnStatus == EFI_PROTOCOL_ERROR) {
        SmmIpmiGetIeStatusData->ReturnStatus = EFI_ABORTED;
    }
// Denverton AptioV Override End - EIP#440090
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiGetIeStatusData->ReturnStatus : %r \n", SmmIpmiGetIeStatusData->ReturnStatus));

    //
    // Status returned by the SMM based routine.
    //
    return  SmmIpmiGetIeStatusData->ReturnStatus;
}

/**
    Notification function for SmmIpmi Transport protocol.
    Performs necessary steps to proxy the DXE calls to SMM

    @param Event Event which caused this handler
    @param Context Context passed during Event Handler registration

    @retval VOID

**/

VOID
EFIAPI
SmmIpmiIeTransportProtocolReady (
  IN  EFI_EVENT         Event,
  IN  VOID              *Context )
{
    EFI_STATUS                    Status;
    EFI_IPMI_TRANSPORT            *DummySmmmIpmiTransport = NULL;

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiIeTransportProtocolReady entered IpmiInstance: %x \n", gIpmiInstance));
    Status = gBS->LocateProtocol (&gEfiSmmIpmiIeTransportProtocolGuid, NULL, (VOID **)&DummySmmmIpmiTransport);
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "gBS->LocateProtocol gEfiSmmIpmiIeTransportProtocolGuid protocol  status %r\n", Status));
    if (EFI_ERROR (Status)) {
        return;
    }

    Status = gBS->LocateProtocol (&gEfiSmmCommunicationProtocolGuid, NULL, (VOID **) &gSmmCommunication);
    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "gBS->LocateProtocol gEfiSmmCommunicationProtocolGuid protocol  status %r\n", Status));
    if (EFI_ERROR (Status)) {
        return;
    }

    //
    // Allocate memory for variable store.
    //
    gCommunicateBufferSize  = SMM_COMMUNICATE_HEADER_SIZE + SMM_IPMI_IE_SEND_COMMAND_COMMUNICATE_DATA_SIZE;
    gCommunicateBuffer      = AllocateRuntimeZeroPool (gCommunicateBufferSize);
    ASSERT (gCommunicateBuffer != NULL);
	
	// Denverton AptioV Override Start - EIP#440090
	// Allocates and zeros a buffer of type EfiRuntimeServicesData.
	
    TotalBlockSize = AllocateRuntimeZeroPool (SMM_IPMI_RUNTIME_BUFFER_SIZE);
    ASSERT (TotalBlockSize != NULL);
    gCommandData = (UINT8 *) (TotalBlockSize);
    gResponseDataSize = gCommandData + MAXIMUM_DATA_SIZE;
    gResponseData = (UINT8 *) (gResponseDataSize + sizeof(UINT8));
    gIEStatus = gResponseData + MAXIMUM_DATA_SIZE;
    gComAddress = gIEStatus + sizeof(EFI_IE_STATUS);
	
	// Denverton AptioV Override End - EIP#440090
    //
    // Override SendIpmiCommand and GetIeStatus entries in IpmiTransport protocol
    //
    gIpmiInstance->IpmiTransport.SendIpmiCommand = SmmEfiIpmiSendCommand;
    gIpmiInstance->IpmiTransport.GetIeStatus = SmmEfiIpmiIeStatus;

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "SmmIpmiIeTransportProtocolReady Exiting....  IpmiInstance: %x \n", gIpmiInstance));

    return;
}

/**
    Hook to register Notification function for SmmIpmi Transport protocol.

    @param VOID

    @return EFI_STATUS
    @retval EFI_SUCCESS

**/

EFI_STATUS
InitializeIpmiPhysicalLayerHook (
  VOID )
{
    VOID        *SmmIpmiIeRegistration;

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "InitializeIpmiPhysicalLayerHook entered  gIpmiInstance: %x \n", gIpmiInstance));

    //
    // Create Notification event for SmmDxeIpmiIe GUID
    //
    EfiCreateProtocolNotifyEvent (
        &gEfiSmmIpmiIeTransportProtocolGuid,
        TPL_CALLBACK,
        SmmIpmiIeTransportProtocolReady,
        NULL,
        &SmmIpmiIeRegistration
        );

    SERVER_IPMI_IE_DEBUG ((EFI_D_LOAD, "InitializeIpmiPhysicalLayerHook exiting.......\n"));
    return EFI_SUCCESS;

}

#endif //IPMI_SEPARATE_DXE_SMM_INTERFACES == 0

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2019, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**         5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
