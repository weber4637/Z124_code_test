/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_53D7E8EC_56F5_4F9C_8198_7BFB2ED4E05E
#define _AUTOGENH_53D7E8EC_56F5_4F9C_8198_7BFB2ED4E05E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x53D7E8EC, 0x56F5, 0x4F9C, {0x81, 0x98, 0x7B, 0xFB, 0x2E, 0xD4, 0xE0, 0x5E}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gEfiLegacyBiosExtProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiConsoleControlProtocolGuid;
extern EFI_GUID gAmiBlockIoWriteProtectionProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
BootSectorWriteProtectEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
