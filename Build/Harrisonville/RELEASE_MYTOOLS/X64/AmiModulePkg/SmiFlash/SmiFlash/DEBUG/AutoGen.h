/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BC327DBD_B982_4f55_9F79_056AD7E987C5
#define _AUTOGENH_BC327DBD_B982_4f55_9F79_056AD7E987C5

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBC327DBD, 0xB982, 0x4f55, {0x9F, 0x79, 0x05, 0x6A, 0xD7, 0xE9, 0x87, 0xC5}}

// Guids
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSmmPerformanceProtocolGuid;
extern EFI_GUID gSmmPerformanceExProtocolGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;
extern EFI_GUID gEfiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gFlashSmmProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gAmiUsbSmmProtocolGuid;
extern EFI_GUID gEmul6064TrapProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gAmiSmmBufferValidationProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SMIFlashDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
