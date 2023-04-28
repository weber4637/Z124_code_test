/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A29A63E3_E4E7_495f_8A6A_07738300CBB3
#define _AUTOGENH_A29A63E3_E4E7_495f_8A6A_07738300CBB3

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xA29A63E3, 0xE4E7, 0x495f, {0x8A, 0x6A, 0x07, 0x73, 0x83, 0x00, 0xCB, 0xB3}}

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID TcgPasswordAuthenticationGuid;
extern EFI_GUID gEfiImageSecurityDatabaseguid;
extern EFI_GUID FastBootVariableGuid;
extern EFI_GUID gTcgEfiGlobalVariableGuid;
extern EFI_GUID gEfiMemoryOverwriteControlDataGuid;
extern EFI_GUID FlagsStatusguid;
extern EFI_GUID AmiTseSetupGuid;
extern EFI_GUID AmitcgefiOsVariableGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gAmiMeasureCPUMicrocodeGuid;
extern EFI_GUID Tpm12PPILockOverrideguid;
extern EFI_GUID Tpm12MeasureConfigurationInfoFuncGuid;
extern EFI_GUID AmiSetTcgReadytobootGuid;
extern EFI_GUID AmiMeasurePciopromGuid;
extern EFI_GUID AmiBiosPpiFlagsManagementGuid;
extern EFI_GUID AmiProcessTcgSetupGuid;
extern EFI_GUID gAmiOsPpiConfirmationOverrideGuid;
extern EFI_GUID AmiProcessTcgPpiRequestGuid;
extern EFI_GUID gMicrocodeGuid;
extern EFI_GUID gAmiTcgPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gEfiTcgWakeEventDataHobGuid;

// Protocols
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gAmiTcgPlatformProtocolguid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gTcgPlatformSetupPolicyGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gOpromStartEndProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gBdsAllDriversConnectedProtocolGuid;
extern EFI_GUID gEfiTpmDeviceProtocolGuid;
extern EFI_GUID gEfiAcpiSupportGuid;
extern EFI_GUID gAmiPostManagerProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPostStatusCheck  187U
#define _PCD_GET_MODE_BOOL_PcdPostStatusCheck  LibPcdGetBool(_PCD_TOKEN_PcdPostStatusCheck)
#define _PCD_GET_MODE_SIZE_PcdPostStatusCheck  LibPcdGetSize(_PCD_TOKEN_PcdPostStatusCheck)
#define _PCD_SET_MODE_BOOL_PcdPostStatusCheck(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPostStatusCheck, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPostStatusCheck(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPostStatusCheck, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AmiTcgPlatformDXE_Entry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "AmiTcgPlatformDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
