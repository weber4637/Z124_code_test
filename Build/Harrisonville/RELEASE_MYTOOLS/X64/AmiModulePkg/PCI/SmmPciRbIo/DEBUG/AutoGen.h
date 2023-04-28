/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_37A01080_2346_4a54_9900_D22B7B687C22
#define _AUTOGENH_37A01080_2346_4a54_9900_D22B7B687C22

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x37A01080, 0x2346, 0x4a54, {0x99, 0x00, 0xD2, 0x2B, 0x7B, 0x68, 0x7C, 0x22}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSmmPerformanceProtocolGuid;
extern EFI_GUID gSmmPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;
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

// Protocols
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiSmmPciRootBridgeIoProtocolGuid;
extern EFI_GUID gAmiPciSmmHandoffProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gAmiBoardInfo2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gAmiBoardSioInitProtocolGuid;
extern EFI_GUID gAmiBoardPciInitProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmmPciRootBridgeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
