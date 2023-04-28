/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_39045756_FCA3_49bd_8DAE_C7BAE8389AFF
#define _AUTOGENH_39045756_FCA3_49bd_8DAE_C7BAE8389AFF

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x39045756, 0xFCA3, 0x49bd, {0x8D, 0xAE, 0xC7, 0xBA, 0xE8, 0x38, 0x9A, 0xFF}}

// Guids
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID AmiValidBootImageCertTblGuid;
extern EFI_GUID gTpm20HobGuid;
extern EFI_GUID gTcg2FinalEventsTableGuid;
extern EFI_GUID gEfiMemoryOverwriteControlDataGuid;
extern EFI_GUID ExtendedDataGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gEfiTcgTreeLogHobGuid;
extern EFI_GUID gTcgInternalflagGuid;
extern EFI_GUID AmitcgefiOsVariableGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID gAmiResetSystemEventGuid;
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

// Protocols
extern EFI_GUID gTcgPlatformSetupPolicyGuid;
extern EFI_GUID gAmiTpmSupportTypeProtocolguid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiAcpiSupportGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiTrEEProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiTcgPlatformProtocolGuid;
extern EFI_GUID AmiProtocolInternalHlxeGuid;
extern EFI_GUID gAmiDxeHashInterfaceguid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gBdsAllDriversConnectedProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
TreeDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
