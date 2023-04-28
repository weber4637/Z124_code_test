/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6298FE18_D5EF_42b7_BB0C_2953283F5704
#define _AUTOGENH_6298FE18_D5EF_42b7_BB0C_2953283F5704

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x6298FE18, 0xD5EF, 0x42b7, {0xBB, 0x0C, 0x29, 0x53, 0x28, 0x3F, 0x57, 0x04}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSmmPerformanceProtocolGuid;
extern EFI_GUID gSmmPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiSmmSxDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitSleepSmi (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
