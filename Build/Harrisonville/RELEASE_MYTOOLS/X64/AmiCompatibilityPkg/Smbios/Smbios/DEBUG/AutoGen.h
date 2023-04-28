/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B13EDD38_684C_41ed_A305_D7B7E32497DF
#define _AUTOGENH_B13EDD38_684C_41ed_A305_D7B7E32497DF

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xB13EDD38, 0x684C, 0x41ed, {0xA3, 0x05, 0xD7, 0xB7, 0xE3, 0x24, 0x97, 0xDF}}

// Guids
extern EFI_GUID gAmiSmbiosStaticDataGuid;
extern EFI_GUID gAmiSmbiosNvramGuid;
extern EFI_GUID gAmiSmbiosDynamicDataGuid;
extern EFI_GUID gAmiSmbrunGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiLegacyRegion2ProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gEfiLegacyBiosExtProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gAmiSmbiosBoardProtocolGuid;
extern EFI_GUID gAmiSmbiosProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmbiosDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
