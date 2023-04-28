/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_5E9CABA3_F2B1_497a_ADAC_24F575E9CDE9
#define _AUTOGENH_5E9CABA3_F2B1_497a_ADAC_24F575E9CDE9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x5E9CABA3, 0xF2B1, 0x497a, {0xAD, 0xAC, 0x24, 0xF5, 0x75, 0xE9, 0xCD, 0xE9}}

// Guids
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiTcgMpDriverHobGuid;
extern EFI_GUID AmiValidBootImageCertTblGuid;
extern EFI_GUID ExtendedDataGuid;
extern EFI_GUID gEfiPartTypeUnusedGuid;
extern EFI_GUID AmiTcgResetVarHobGuid;
extern EFI_GUID gTpm20HobGuid;
extern EFI_GUID gEfiPeiTcgLogHobGuid;
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
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiAcpiTableGuid;

// Protocols
extern EFI_GUID gEfiTpmDeviceProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gTcgPlatformSetupPolicyGuid;
extern EFI_GUID gAmiTpmSupportTypeProtocolguid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiAcpiSupportGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiTcgPlatformProtocolGuid;
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
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;

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
CommonTcgDxEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
