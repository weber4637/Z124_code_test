//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**        5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093      **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file NvmePassthru.h
    Header file for NvmePassthru.c file

**/

#ifndef __NVM_PASS_THRU_H__
#define __NVM_PASS_THRU_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "NvmeIncludes.h"
#include "Protocol/AmiNvmeController.h"
#include <Protocol/NvmExpressPassthru.h>

#define NVME_ADMIN_SUBMISSION_QUEUE 0x00
#define NVME_IO_SUBMISSION_QUEUE    0x01


#define ERROR_INFO                  0x01
#define SMART_INFO                  0x02
#define FIRMWARE_SLOT_INFO          0x03
#define CHANGED_NAMESPACE_LIST      0x04
#define COMMANDS_SUPPORTED_EFFECT   0x05
#define DEVICE_SELF_LIST            0x06
#define TELEMETRY_HOST_INIT         0x07
#define TELEMETRY_CONTROLLER_INIT   0x08


#define NVME_CONTROLLER_PROTOCOL_FROM_THIS(NvmePassthruProtocol) \
        ((BASE_CR( NvmePassthruProtocol ,NVM_EXPRESS_PASS_THRU_INSTANCE, EfiNvmExpressPassThru))->NvmeControllerProtocol)

typedef
struct _NVM_EXPRESS_PASS_THRU_INSTANCE {
    EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL   EfiNvmExpressPassThru;       // Instance of EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL
    AMI_NVME_CONTROLLER_PROTOCOL         *NvmeControllerProtocol;
    EFI_HANDLE                           ControllerHandle;
} NVM_EXPRESS_PASS_THRU_INSTANCE;

EFI_STATUS 
EFIAPI
NvmePassThru ( 
    IN EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL            *This,
    IN UINT32                                        NamespaceId,
    IN OUT EFI_NVM_EXPRESS_PASS_THRU_COMMAND_PACKET  *Packet,
    IN EFI_EVENT                                     Event
);

EFI_STATUS
EFIAPI
GetNextNamespace(
    IN EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL    *This,
    IN OUT UINT32                            *NamespaceId
);

EFI_STATUS 
EFIAPI
BuildDevicePath (
    IN EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL    *This,
    IN UINT32                                NamespaceId,
    IN OUT EFI_DEVICE_PATH_PROTOCOL          **DevicePath
);

EFI_STATUS 
EFIAPI
GetNamespace (
    IN EFI_NVM_EXPRESS_PASS_THRU_PROTOCOL    *This,
    IN EFI_DEVICE_PATH_PROTOCOL              *DevicePath,
    OUT UINT32                               *NamespaceId
);

#ifdef __cplusplus
}
#endif

#endif // __NVM_PASS_THRU_H__

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

