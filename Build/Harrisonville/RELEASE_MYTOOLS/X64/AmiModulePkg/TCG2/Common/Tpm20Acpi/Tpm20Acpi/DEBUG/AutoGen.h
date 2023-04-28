/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4C8BDF60_2085_4577_8A46_96CB180967BC
#define _AUTOGENH_4C8BDF60_2085_4577_8A46_96CB180967BC

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4C8BDF60, 0x2085, 0x4577, {0x8A, 0x46, 0x96, 0xCB, 0x18, 0x09, 0x67, 0xBC}}

// Guids
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID FlagsStatusguid;
extern EFI_GUID gPttSsdtAcpiTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID AmitcgefiOsVariableGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gEfiTcgWakeEventDataHobGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiAcpiSupportGuid;
extern EFI_GUID gEfiTrEEProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gBdsAllDriversConnectedProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAcpiDefaultOemId  9U
#define _PCD_GET_MODE_PTR_PcdAcpiDefaultOemId  LibPcdGetPtr(_PCD_TOKEN_PcdAcpiDefaultOemId)
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemId  LibPcdGetSize(_PCD_TOKEN_PcdAcpiDefaultOemId)
#define _PCD_SET_MODE_PTR_PcdAcpiDefaultOemId(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdAcpiDefaultOemId, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdAcpiDefaultOemId(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdAcpiDefaultOemId, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdAcpiDefaultOemTableId  10U
#define _PCD_GET_MODE_64_PcdAcpiDefaultOemTableId  LibPcdGet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemTableId  LibPcdGetSize(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_SET_MODE_64_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))
#define _PCD_SET_MODE_64_S_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64S(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
Tpm20AcpiInitEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
