/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_16D0A23E_C09C_407d_A14A_AD058FDD0CA1
#define _AUTOGENH_16D0A23E_C09C_407d_A14A_AD058FDD0CA1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x16D0A23E, 0xC09C, 0x407d, {0xA1, 0x4A, 0xAD, 0x05, 0x8F, 0xDD, 0x0C, 0xA1}}

// Guids
extern EFI_GUID gAmiModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
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
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gAmiBoardInfo2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gAmiBoardSioInitProtocolGuid;
extern EFI_GUID gAmiBoardPciInitProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSioProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_AmiPcdSmmMemLibProperties  318U
#define _PCD_SIZE_AmiPcdSmmMemLibProperties 4
#define _PCD_GET_MODE_SIZE_AmiPcdSmmMemLibProperties  _PCD_SIZE_AmiPcdSmmMemLibProperties 
#define _PCD_VALUE_AmiPcdSmmMemLibProperties  0U
extern const  UINT32  _gPcd_FixedAtBuild_AmiPcdSmmMemLibProperties;
#define _PCD_GET_MODE_32_AmiPcdSmmMemLibProperties  _gPcd_FixedAtBuild_AmiPcdSmmMemLibProperties
//#define _PCD_SET_MODE_32_AmiPcdSmmMemLibProperties  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AcpiNewCoreEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
