/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0718AD81_F26A_4850_A6EC_F268E309D707
#define _AUTOGENH_0718AD81_F26A_4850_A6EC_F268E309D707

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x0718AD81, 0xF26A, 0x4850, {0xA6, 0xEC, 0xF2, 0x68, 0xE3, 0x09, 0xD7, 0x07}}

// Guids
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gAmiTsePasswordPromptExitGuid;
extern EFI_GUID gAmiTseAdminPasswordValidGuid;
extern EFI_GUID gTcgEfiGlobalVariableGuid;
extern EFI_GUID AmitcgefiOsVariableGuid;
extern EFI_GUID AmiValidBootImageCertTblGuid;
extern EFI_GUID FastBootVariableGuid;
extern EFI_GUID gTcgInternalflagGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID FlagsStatusguid;
extern EFI_GUID gAmiOsPpiConfirmationOverrideGuid;
extern EFI_GUID TcgPasswordAuthenticationGuid;
extern EFI_GUID gEfiMemoryOverwriteControlDataGuid;
extern EFI_GUID gEfiPartTypeUnusedGuid;
extern EFI_GUID gAmiTpm20MeasureConfigurationInfoGuid;
extern EFI_GUID gMicrocodeGuid;
extern EFI_GUID gTcgNvramHobGuid;
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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiTcgWakeEventDataHobGuid;

// Protocols
extern EFI_GUID gAmiTcgPlatformProtocolguid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiAcpiSupportGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gOpromStartEndProtocolGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gEfiTrEEProtocolGuid;
extern EFI_GUID gTcgPlatformSetupPolicyGuid;
extern EFI_GUID AmiProtocolInternalHlxeGuid;
extern EFI_GUID gBdsAllDriversConnectedProtocolGuid;
extern EFI_GUID gAmiPostManagerProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gAmiDxeHashInterfaceguid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
Tpm20PlatformEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "Tpm20PlatformDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
