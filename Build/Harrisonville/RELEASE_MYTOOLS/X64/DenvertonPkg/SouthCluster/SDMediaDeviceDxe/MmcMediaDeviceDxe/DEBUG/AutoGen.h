/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DD223EF8_6D1B_490a_A53E_BA86FAAEB778
#define _AUTOGENH_DD223EF8_6D1B_490a_A53E_BA86FAAEB778

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xDD223EF8, 0x6D1B, 0x490a, {0xA5, 0x3E, 0xBA, 0x86, 0xFA, 0xAE, 0xB7, 0x78}}

// Guids
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiSdHostIoProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiEmmcCardInfoProtocolGuid;
extern EFI_GUID gEfiEmmcBootPartitionProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEmmcManufacturerId  180U
#define _PCD_GET_MODE_8_PcdEmmcManufacturerId  LibPcdGet8(_PCD_TOKEN_PcdEmmcManufacturerId)
#define _PCD_GET_MODE_SIZE_PcdEmmcManufacturerId  LibPcdGetSize(_PCD_TOKEN_PcdEmmcManufacturerId)
#define _PCD_SET_MODE_8_PcdEmmcManufacturerId(Value)  LibPcdSet8(_PCD_TOKEN_PcdEmmcManufacturerId, (Value))
#define _PCD_SET_MODE_8_S_PcdEmmcManufacturerId(Value)  LibPcdSet8S(_PCD_TOKEN_PcdEmmcManufacturerId, (Value))

#define _PCD_TOKEN_PcdProductSerialNumber  181U
#define _PCD_GET_MODE_32_PcdProductSerialNumber  LibPcdGet32(_PCD_TOKEN_PcdProductSerialNumber)
#define _PCD_GET_MODE_SIZE_PcdProductSerialNumber  LibPcdGetSize(_PCD_TOKEN_PcdProductSerialNumber)
#define _PCD_SET_MODE_32_PcdProductSerialNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdProductSerialNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdProductSerialNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdProductSerialNumber, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MediaDeviceDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
