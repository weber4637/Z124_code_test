/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80E66E0A_CCD1_43FA_A7B1_2D5EE0F13910
#define _AUTOGENH_80E66E0A_CCD1_43FA_A7B1_2D5EE0F13910

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x80E66E0A, 0xCCD1, 0x43FA, {0xA7, 0xB1, 0x2D, 0x5E, 0xE0, 0xF1, 0x39, 0x10}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gAmiModulePkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiPciHostBridgeResourceAllocationProtocolGuid;
extern EFI_GUID gEfiPciHotPlugInitProtocolGuid;
extern EFI_GUID gAmiPciSmmHandoffProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gAmiBoardInfo2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gAmiBoardSioInitProtocolGuid;
extern EFI_GUID gAmiBoardPciInitProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AmiPcdPcieBaseAddressBuffer  185U
#define _PCD_GET_MODE_PTR_AmiPcdPcieBaseAddressBuffer  LibPcdGetPtr(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer)
#define _PCD_GET_MODE_SIZE_AmiPcdPcieBaseAddressBuffer  LibPcdGetSize(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer)
#define _PCD_SET_MODE_PTR_AmiPcdPcieBaseAddressBuffer(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_AmiPcdPcieBaseAddressBuffer(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_AmiPcdMaxSegmentSupported  186U
#define _PCD_GET_MODE_32_AmiPcdMaxSegmentSupported  LibPcdGet32(_PCD_TOKEN_AmiPcdMaxSegmentSupported)
#define _PCD_GET_MODE_SIZE_AmiPcdMaxSegmentSupported  LibPcdGetSize(_PCD_TOKEN_AmiPcdMaxSegmentSupported)
#define _PCD_SET_MODE_32_AmiPcdMaxSegmentSupported(Value)  LibPcdSet32(_PCD_TOKEN_AmiPcdMaxSegmentSupported, (Value))
#define _PCD_SET_MODE_32_S_AmiPcdMaxSegmentSupported(Value)  LibPcdSet32S(_PCD_TOKEN_AmiPcdMaxSegmentSupported, (Value))

#define _PCD_TOKEN_AmiPcdPciOutOfResourcesStatus  184U
#define _PCD_GET_MODE_BOOL_AmiPcdPciOutOfResourcesStatus  LibPcdGetBool(_PCD_TOKEN_AmiPcdPciOutOfResourcesStatus)
#define _PCD_GET_MODE_SIZE_AmiPcdPciOutOfResourcesStatus  LibPcdGetSize(_PCD_TOKEN_AmiPcdPciOutOfResourcesStatus)
#define _PCD_SET_MODE_BOOL_AmiPcdPciOutOfResourcesStatus(Value)  LibPcdSetBool(_PCD_TOKEN_AmiPcdPciOutOfResourcesStatus, (Value))
#define _PCD_SET_MODE_BOOL_S_AmiPcdPciOutOfResourcesStatus(Value)  LibPcdSetBoolS(_PCD_TOKEN_AmiPcdPciOutOfResourcesStatus, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePCIHostBridge (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
