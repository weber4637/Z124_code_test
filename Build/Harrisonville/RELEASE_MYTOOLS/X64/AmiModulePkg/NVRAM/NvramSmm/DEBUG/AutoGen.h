/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_447A1B58_8F3E_4658_ABAA_9E7B2280B90A
#define _AUTOGENH_447A1B58_8F3E_4658_ABAA_9E7B2280B90A

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x447A1B58, 0x8F3E, 0x4658, {0xAB, 0xAA, 0x9E, 0x7B, 0x22, 0x80, 0xB9, 0x0A}}

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gAmiNvramSmmCommunicationGuid;
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiHardwareErrorVariableGuid;
extern EFI_GUID gAmiModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSmmPerformanceProtocolGuid;
extern EFI_GUID gSmmPerformanceExProtocolGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
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
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gAmiSmmFlashProtocolGuid;
extern EFI_GUID gEfiSmmVariableProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gAmiSmmNvramUpdateProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
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
extern EFI_GUID gAmiSmmBufferValidationProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_AmiPcdNvramSmmSupport  303U
#define _PCD_SIZE_AmiPcdNvramSmmSupport 1
#define _PCD_GET_MODE_SIZE_AmiPcdNvramSmmSupport  _PCD_SIZE_AmiPcdNvramSmmSupport 
#define _PCD_VALUE_AmiPcdNvramSmmSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_AmiPcdNvramSmmSupport;
#define _PCD_GET_MODE_BOOL_AmiPcdNvramSmmSupport  _gPcd_FixedAtBuild_AmiPcdNvramSmmSupport
//#define _PCD_SET_MODE_BOOL_AmiPcdNvramSmmSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVariableStoreSize  304U
#define _PCD_SIZE_PcdVariableStoreSize 4
#define _PCD_GET_MODE_SIZE_PcdVariableStoreSize  _PCD_SIZE_PcdVariableStoreSize 
#define _PCD_VALUE_PcdVariableStoreSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVariableStoreSize;
#define _PCD_GET_MODE_32_PcdVariableStoreSize  _gPcd_FixedAtBuild_PcdVariableStoreSize
//#define _PCD_SET_MODE_32_PcdVariableStoreSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AmiPcdNvramResetPropertyMask  305U
#define _PCD_SIZE_AmiPcdNvramResetPropertyMask 4
#define _PCD_GET_MODE_SIZE_AmiPcdNvramResetPropertyMask  _PCD_SIZE_AmiPcdNvramResetPropertyMask 
#define _PCD_VALUE_AmiPcdNvramResetPropertyMask  0U
extern const  UINT32  _gPcd_FixedAtBuild_AmiPcdNvramResetPropertyMask;
#define _PCD_GET_MODE_32_AmiPcdNvramResetPropertyMask  _gPcd_FixedAtBuild_AmiPcdNvramResetPropertyMask
//#define _PCD_SET_MODE_32_AmiPcdNvramResetPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
NvramSmmInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
