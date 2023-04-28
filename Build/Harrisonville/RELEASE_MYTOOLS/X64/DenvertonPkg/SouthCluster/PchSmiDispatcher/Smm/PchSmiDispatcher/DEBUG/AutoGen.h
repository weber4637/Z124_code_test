/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B0D6ED53_B844_43f5_BD2F_61095264E77E
#define _AUTOGENH_B0D6ED53_B844_43f5_BD2F_61095264E77E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xB0D6ED53, 0xB844, 0x43f5, {0xBD, 0x2F, 0x61, 0x09, 0x52, 0x64, 0xE7, 0x7E}}

// Guids
extern EFI_GUID SmmRsTableGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gSmmPerformanceProtocolGuid;
extern EFI_GUID gSmmPerformanceExProtocolGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gAmiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiSmmGpiDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmSxDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmUsbDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPowerButtonDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPeriodicTimerDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmCpuProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gPchTcoSmiDispatchProtocolGuid;
extern EFI_GUID gPchPcieSmiDispatchProtocolGuid;
extern EFI_GUID gPchAcpiSmiDispatchProtocolGuid;
extern EFI_GUID gPchGpioUnlockSmiDispatchProtocolGuid;
extern EFI_GUID gPchSmiDispatchProtocolGuid;
extern EFI_GUID gPchEspiSmiDispatchProtocolGuid;
extern EFI_GUID gPchSmmPeriodicTimerControlGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
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
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;
extern EFI_GUID gEfiS3SmmSaveStateProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;

// PPIs
extern EFI_GUID gPchPolicyPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdProgressCodeS3SuspendEnd  438U
#define _PCD_SIZE_PcdProgressCodeS3SuspendEnd 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeS3SuspendEnd  _PCD_SIZE_PcdProgressCodeS3SuspendEnd 
#define _PCD_VALUE_PcdProgressCodeS3SuspendEnd  0x03078001U
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendEnd;
#define _PCD_GET_MODE_32_PcdProgressCodeS3SuspendEnd  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendEnd
//#define _PCD_SET_MODE_32_PcdProgressCodeS3SuspendEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePchSmmDispatcher (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
