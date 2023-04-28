/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ABBCE13D_E25A_4d9f_A1F9_2F7710786892
#define _AUTOGENH_ABBCE13D_E25A_4d9f_A1F9_2F7710786892

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xABBCE13D, 0xE25A, 0x4d9f, {0xA1, 0xF9, 0x2F, 0x77, 0x10, 0x78, 0x68, 0x92}}

// Guids
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gMainPkgListGuid;
extern EFI_GUID gAdvancedPkgListGuid;
extern EFI_GUID gSysInfoPkgListGuid;
extern EFI_GUID gSecurityPkgListGuid;
extern EFI_GUID gChipsetPkgListGuid;
extern EFI_GUID gTpmPkgListGuid;
extern EFI_GUID gEfiCpuHtCapableGuid;
extern EFI_GUID gSignalBeforeEnterSetupGuid;
extern EFI_GUID gEfiLegacyBootMarkerGuid;
extern EFI_GUID gEfiMemoryConfigDataGuid;
extern EFI_GUID gEfiMrcVersionGuid;
extern EFI_GUID gEfiSetupEnterGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
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

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiPlatformPolicyProtocolGuid;
extern EFI_GUID gEfiPlatformTypeProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiIsaIoProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDataHubProtocolGuid;
extern EFI_GUID gEfiWindowsInt10Workaround;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gHeciProtocolGuid;
extern EFI_GUID gDxePlatformMePolicyProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUefiOptimizedBoot  3U
#define _PCD_GET_MODE_BOOL_PcdUefiOptimizedBoot  LibPcdGetBool(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_GET_MODE_SIZE_PcdUefiOptimizedBoot  LibPcdGetSize(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_SET_MODE_BOOL_PcdUefiOptimizedBoot(Value)  LibPcdSetBool(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdUefiOptimizedBoot(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))

#define _PCD_TOKEN_PcdWakeOnRTCS5  431U
#define _PCD_SIZE_PcdWakeOnRTCS5 1
#define _PCD_GET_MODE_SIZE_PcdWakeOnRTCS5  _PCD_SIZE_PcdWakeOnRTCS5 
#define _PCD_VALUE_PcdWakeOnRTCS5  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdWakeOnRTCS5;
#define _PCD_GET_MODE_BOOL_PcdWakeOnRTCS5  _gPcd_FixedAtBuild_PcdWakeOnRTCS5
//#define _PCD_SET_MODE_BOOL_PcdWakeOnRTCS5  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcWakeupTimeHour  176U
#define _PCD_GET_MODE_8_PcdRtcWakeupTimeHour  LibPcdGet8(_PCD_TOKEN_PcdRtcWakeupTimeHour)
#define _PCD_GET_MODE_SIZE_PcdRtcWakeupTimeHour  LibPcdGetSize(_PCD_TOKEN_PcdRtcWakeupTimeHour)
#define _PCD_SET_MODE_8_PcdRtcWakeupTimeHour(Value)  LibPcdSet8(_PCD_TOKEN_PcdRtcWakeupTimeHour, (Value))
#define _PCD_SET_MODE_8_S_PcdRtcWakeupTimeHour(Value)  LibPcdSet8S(_PCD_TOKEN_PcdRtcWakeupTimeHour, (Value))

#define _PCD_TOKEN_PcdRtcWakeupTimeMinute  177U
#define _PCD_GET_MODE_8_PcdRtcWakeupTimeMinute  LibPcdGet8(_PCD_TOKEN_PcdRtcWakeupTimeMinute)
#define _PCD_GET_MODE_SIZE_PcdRtcWakeupTimeMinute  LibPcdGetSize(_PCD_TOKEN_PcdRtcWakeupTimeMinute)
#define _PCD_SET_MODE_8_PcdRtcWakeupTimeMinute(Value)  LibPcdSet8(_PCD_TOKEN_PcdRtcWakeupTimeMinute, (Value))
#define _PCD_SET_MODE_8_S_PcdRtcWakeupTimeMinute(Value)  LibPcdSet8S(_PCD_TOKEN_PcdRtcWakeupTimeMinute, (Value))

#define _PCD_TOKEN_PcdRtcWakeupTimeSecond  178U
#define _PCD_GET_MODE_8_PcdRtcWakeupTimeSecond  LibPcdGet8(_PCD_TOKEN_PcdRtcWakeupTimeSecond)
#define _PCD_GET_MODE_SIZE_PcdRtcWakeupTimeSecond  LibPcdGetSize(_PCD_TOKEN_PcdRtcWakeupTimeSecond)
#define _PCD_SET_MODE_8_PcdRtcWakeupTimeSecond(Value)  LibPcdSet8(_PCD_TOKEN_PcdRtcWakeupTimeSecond, (Value))
#define _PCD_SET_MODE_8_S_PcdRtcWakeupTimeSecond(Value)  LibPcdSet8S(_PCD_TOKEN_PcdRtcWakeupTimeSecond, (Value))

#define _PCD_TOKEN_PcdSMBIOSSystemSKUNumber  179U
#define _PCD_GET_MODE_PTR_PcdSMBIOSSystemSKUNumber  LibPcdGetPtr(_PCD_TOKEN_PcdSMBIOSSystemSKUNumber)
#define _PCD_GET_MODE_SIZE_PcdSMBIOSSystemSKUNumber  LibPcdGetSize(_PCD_TOKEN_PcdSMBIOSSystemSKUNumber)
#define _PCD_SET_MODE_PTR_PcdSMBIOSSystemSKUNumber(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdSMBIOSSystemSKUNumber, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdSMBIOSSystemSKUNumber(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdSMBIOSSystemSKUNumber, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdPlatformCpuAssetTags  165U
#define _PCD_GET_MODE_64_PcdPlatformCpuAssetTags  LibPcdGet64(_PCD_TOKEN_PcdPlatformCpuAssetTags)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuAssetTags  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuAssetTags)
#define _PCD_SET_MODE_64_PcdPlatformCpuAssetTags(Value)  LibPcdSet64(_PCD_TOKEN_PcdPlatformCpuAssetTags, (Value))
#define _PCD_SET_MODE_64_S_PcdPlatformCpuAssetTags(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPlatformCpuAssetTags, (Value))

#define _PCD_TOKEN_PcdPlatformCpuSocketNames  164U
#define _PCD_GET_MODE_64_PcdPlatformCpuSocketNames  LibPcdGet64(_PCD_TOKEN_PcdPlatformCpuSocketNames)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuSocketNames  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuSocketNames)
#define _PCD_SET_MODE_64_PcdPlatformCpuSocketNames(Value)  LibPcdSet64(_PCD_TOKEN_PcdPlatformCpuSocketNames, (Value))
#define _PCD_SET_MODE_64_S_PcdPlatformCpuSocketNames(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPlatformCpuSocketNames, (Value))

#define _PCD_TOKEN_PcdPlatformCpuSocketCount  163U
#define _PCD_GET_MODE_32_PcdPlatformCpuSocketCount  LibPcdGet32(_PCD_TOKEN_PcdPlatformCpuSocketCount)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuSocketCount  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuSocketCount)
#define _PCD_SET_MODE_32_PcdPlatformCpuSocketCount(Value)  LibPcdSet32(_PCD_TOKEN_PcdPlatformCpuSocketCount, (Value))
#define _PCD_SET_MODE_32_S_PcdPlatformCpuSocketCount(Value)  LibPcdSet32S(_PCD_TOKEN_PcdPlatformCpuSocketCount, (Value))

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SetupDriverEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "SetupDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
