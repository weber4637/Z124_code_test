/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_40BEAB40_CECE_4909_B133_20A413AE19E9
#define _AUTOGENH_40BEAB40_CECE_4909_B133_20A413AE19E9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x40BEAB40, 0xCECE, 0x4909, {0xB1, 0x33, 0x20, 0xA4, 0x13, 0xAE, 0x19, 0xE9}}

// Guids
extern EFI_GUID gEfiHtBistHobGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gIdleLoopEventGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
extern EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid;
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
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiGenericMemTestProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gEfiSmmConfigurationProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;

// PPIs
extern EFI_GUID gEfiSecPlatformInformation2PpiGuid;
extern EFI_GUID gEfiSecPlatformInformationPpiGuid;

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiCpuTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCpuPeciFlag  371U
#define _PCD_SIZE_PcdCpuPeciFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuPeciFlag  _PCD_SIZE_PcdCpuPeciFlag 
#define _PCD_VALUE_PcdCpuPeciFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuPeciFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuPeciFlag  _gPcd_FixedAtBuild_PcdCpuPeciFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuPeciFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuFerrSignalBreakFlag  372U
#define _PCD_SIZE_PcdCpuFerrSignalBreakFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuFerrSignalBreakFlag  _PCD_SIZE_PcdCpuFerrSignalBreakFlag 
#define _PCD_VALUE_PcdCpuFerrSignalBreakFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuFerrSignalBreakFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuFerrSignalBreakFlag  _gPcd_FixedAtBuild_PcdCpuFerrSignalBreakFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuFerrSignalBreakFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuIpPrefetcherFlag  373U
#define _PCD_SIZE_PcdCpuIpPrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuIpPrefetcherFlag  _PCD_SIZE_PcdCpuIpPrefetcherFlag 
#define _PCD_VALUE_PcdCpuIpPrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuIpPrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuIpPrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuIpPrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuIpPrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuDcuPrefetcherFlag  374U
#define _PCD_SIZE_PcdCpuDcuPrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuDcuPrefetcherFlag  _PCD_SIZE_PcdCpuDcuPrefetcherFlag 
#define _PCD_VALUE_PcdCpuDcuPrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuDcuPrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuDcuPrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuDcuPrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuDcuPrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuAdjacentCacheLinePrefetchFlag  375U
#define _PCD_SIZE_PcdCpuAdjacentCacheLinePrefetchFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuAdjacentCacheLinePrefetchFlag  _PCD_SIZE_PcdCpuAdjacentCacheLinePrefetchFlag 
#define _PCD_VALUE_PcdCpuAdjacentCacheLinePrefetchFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuAdjacentCacheLinePrefetchFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuAdjacentCacheLinePrefetchFlag  _gPcd_FixedAtBuild_PcdCpuAdjacentCacheLinePrefetchFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuAdjacentCacheLinePrefetchFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHardwarePrefetcherFlag  376U
#define _PCD_SIZE_PcdCpuHardwarePrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuHardwarePrefetcherFlag  _PCD_SIZE_PcdCpuHardwarePrefetcherFlag 
#define _PCD_VALUE_PcdCpuHardwarePrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHardwarePrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuHardwarePrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuHardwarePrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuHardwarePrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuFastStringFlag  377U
#define _PCD_SIZE_PcdCpuFastStringFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuFastStringFlag  _PCD_SIZE_PcdCpuFastStringFlag 
#define _PCD_VALUE_PcdCpuFastStringFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuFastStringFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuFastStringFlag  _gPcd_FixedAtBuild_PcdCpuFastStringFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuFastStringFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSelectLfpAsBspFlag  378U
#define _PCD_SIZE_PcdCpuSelectLfpAsBspFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuSelectLfpAsBspFlag  _PCD_SIZE_PcdCpuSelectLfpAsBspFlag 
#define _PCD_VALUE_PcdCpuSelectLfpAsBspFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSelectLfpAsBspFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuSelectLfpAsBspFlag  _gPcd_FixedAtBuild_PcdCpuSelectLfpAsBspFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuSelectLfpAsBspFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMachineCheckFlag  379U
#define _PCD_SIZE_PcdCpuMachineCheckFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMachineCheckFlag  _PCD_SIZE_PcdCpuMachineCheckFlag 
#define _PCD_VALUE_PcdCpuMachineCheckFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMachineCheckFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMachineCheckFlag  _gPcd_FixedAtBuild_PcdCpuMachineCheckFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMachineCheckFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMicrocodeUpdateFlag  380U
#define _PCD_SIZE_PcdCpuMicrocodeUpdateFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodeUpdateFlag  _PCD_SIZE_PcdCpuMicrocodeUpdateFlag 
#define _PCD_VALUE_PcdCpuMicrocodeUpdateFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMicrocodeUpdateFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMicrocodeUpdateFlag  _gPcd_FixedAtBuild_PcdCpuMicrocodeUpdateFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMicrocodeUpdateFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuExecuteDisableBitFlag  381U
#define _PCD_SIZE_PcdCpuExecuteDisableBitFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuExecuteDisableBitFlag  _PCD_SIZE_PcdCpuExecuteDisableBitFlag 
#define _PCD_VALUE_PcdCpuExecuteDisableBitFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuExecuteDisableBitFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuExecuteDisableBitFlag  _gPcd_FixedAtBuild_PcdCpuExecuteDisableBitFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuExecuteDisableBitFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxCpuIDValueLimitFlag  382U
#define _PCD_SIZE_PcdCpuMaxCpuIDValueLimitFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMaxCpuIDValueLimitFlag  _PCD_SIZE_PcdCpuMaxCpuIDValueLimitFlag 
#define _PCD_VALUE_PcdCpuMaxCpuIDValueLimitFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMaxCpuIDValueLimitFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMaxCpuIDValueLimitFlag  _gPcd_FixedAtBuild_PcdCpuMaxCpuIDValueLimitFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMaxCpuIDValueLimitFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuVtLtFlag  383U
#define _PCD_SIZE_PcdCpuVtLtFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuVtLtFlag  _PCD_SIZE_PcdCpuVtLtFlag 
#define _PCD_VALUE_PcdCpuVtLtFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuVtLtFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuVtLtFlag  _gPcd_FixedAtBuild_PcdCpuVtLtFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuVtLtFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuEnhancedCStateFlag  384U
#define _PCD_SIZE_PcdCpuEnhancedCStateFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuEnhancedCStateFlag  _PCD_SIZE_PcdCpuEnhancedCStateFlag 
#define _PCD_VALUE_PcdCpuEnhancedCStateFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuEnhancedCStateFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuEnhancedCStateFlag  _gPcd_FixedAtBuild_PcdCpuEnhancedCStateFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuEnhancedCStateFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuEistFlag  385U
#define _PCD_SIZE_PcdCpuEistFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuEistFlag  _PCD_SIZE_PcdCpuEistFlag 
#define _PCD_VALUE_PcdCpuEistFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuEistFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuEistFlag  _gPcd_FixedAtBuild_PcdCpuEistFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuEistFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuThermalManagementFlag  386U
#define _PCD_SIZE_PcdCpuThermalManagementFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuThermalManagementFlag  _PCD_SIZE_PcdCpuThermalManagementFlag 
#define _PCD_VALUE_PcdCpuThermalManagementFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuThermalManagementFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuThermalManagementFlag  _gPcd_FixedAtBuild_PcdCpuThermalManagementFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuThermalManagementFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuConroeFamilyFlag  387U
#define _PCD_SIZE_PcdCpuConroeFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuConroeFamilyFlag  _PCD_SIZE_PcdCpuConroeFamilyFlag 
#define _PCD_VALUE_PcdCpuConroeFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuConroeFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuConroeFamilyFlag  _gPcd_FixedAtBuild_PcdCpuConroeFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuConroeFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuCedarMillFamilyFlag  388U
#define _PCD_SIZE_PcdCpuCedarMillFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuCedarMillFamilyFlag  _PCD_SIZE_PcdCpuCedarMillFamilyFlag 
#define _PCD_VALUE_PcdCpuCedarMillFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuCedarMillFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuCedarMillFamilyFlag  _gPcd_FixedAtBuild_PcdCpuCedarMillFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuCedarMillFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuPrescottFamilyFlag  389U
#define _PCD_SIZE_PcdCpuPrescottFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuPrescottFamilyFlag  _PCD_SIZE_PcdCpuPrescottFamilyFlag 
#define _PCD_VALUE_PcdCpuPrescottFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuPrescottFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuPrescottFamilyFlag  _gPcd_FixedAtBuild_PcdCpuPrescottFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuPrescottFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuTunnelCreekFamilyFlag  390U
#define _PCD_SIZE_PcdCpuTunnelCreekFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuTunnelCreekFamilyFlag  _PCD_SIZE_PcdCpuTunnelCreekFamilyFlag 
#define _PCD_VALUE_PcdCpuTunnelCreekFamilyFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuTunnelCreekFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuTunnelCreekFamilyFlag  _gPcd_FixedAtBuild_PcdCpuTunnelCreekFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuTunnelCreekFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuNehalemFamilyFlag  391U
#define _PCD_SIZE_PcdCpuNehalemFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuNehalemFamilyFlag  _PCD_SIZE_PcdCpuNehalemFamilyFlag 
#define _PCD_VALUE_PcdCpuNehalemFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuNehalemFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuNehalemFamilyFlag  _gPcd_FixedAtBuild_PcdCpuNehalemFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuNehalemFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuGateA20MDisableFlag  392U
#define _PCD_SIZE_PcdCpuGateA20MDisableFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuGateA20MDisableFlag  _PCD_SIZE_PcdCpuGateA20MDisableFlag 
#define _PCD_VALUE_PcdCpuGateA20MDisableFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuGateA20MDisableFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuGateA20MDisableFlag  _gPcd_FixedAtBuild_PcdCpuGateA20MDisableFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuGateA20MDisableFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSandyBridgeFamilyFlag  393U
#define _PCD_SIZE_PcdCpuSandyBridgeFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuSandyBridgeFamilyFlag  _PCD_SIZE_PcdCpuSandyBridgeFamilyFlag 
#define _PCD_VALUE_PcdCpuSandyBridgeFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSandyBridgeFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuSandyBridgeFamilyFlag  _gPcd_FixedAtBuild_PcdCpuSandyBridgeFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuSandyBridgeFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSilvermontFamilyFlag  394U
#define _PCD_SIZE_PcdCpuSilvermontFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuSilvermontFamilyFlag  _PCD_SIZE_PcdCpuSilvermontFamilyFlag 
#define _PCD_VALUE_PcdCpuSilvermontFamilyFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSilvermontFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuSilvermontFamilyFlag  _gPcd_FixedAtBuild_PcdCpuSilvermontFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuSilvermontFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuGoldmontFamilyFlag  395U
#define _PCD_SIZE_PcdCpuGoldmontFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuGoldmontFamilyFlag  _PCD_SIZE_PcdCpuGoldmontFamilyFlag 
#define _PCD_VALUE_PcdCpuGoldmontFamilyFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuGoldmontFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuGoldmontFamilyFlag  _gPcd_FixedAtBuild_PcdCpuGoldmontFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuGoldmontFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuIvyBridgeFamilyFlag  396U
#define _PCD_SIZE_PcdCpuIvyBridgeFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuIvyBridgeFamilyFlag  _PCD_SIZE_PcdCpuIvyBridgeFamilyFlag 
#define _PCD_VALUE_PcdCpuIvyBridgeFamilyFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuIvyBridgeFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuIvyBridgeFamilyFlag  _gPcd_FixedAtBuild_PcdCpuIvyBridgeFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuIvyBridgeFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHaswellFamilyFlag  397U
#define _PCD_SIZE_PcdCpuHaswellFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuHaswellFamilyFlag  _PCD_SIZE_PcdCpuHaswellFamilyFlag 
#define _PCD_VALUE_PcdCpuHaswellFamilyFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHaswellFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuHaswellFamilyFlag  _gPcd_FixedAtBuild_PcdCpuHaswellFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuHaswellFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuBroadwellFamilyFlag  398U
#define _PCD_SIZE_PcdCpuBroadwellFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuBroadwellFamilyFlag  _PCD_SIZE_PcdCpuBroadwellFamilyFlag 
#define _PCD_VALUE_PcdCpuBroadwellFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuBroadwellFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuBroadwellFamilyFlag  _gPcd_FixedAtBuild_PcdCpuBroadwellFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuBroadwellFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSkylakeFamilyFlag  399U
#define _PCD_SIZE_PcdCpuSkylakeFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuSkylakeFamilyFlag  _PCD_SIZE_PcdCpuSkylakeFamilyFlag 
#define _PCD_VALUE_PcdCpuSkylakeFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSkylakeFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuSkylakeFamilyFlag  _gPcd_FixedAtBuild_PcdCpuSkylakeFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuSkylakeFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuKnightsLandingFamilyFlag  400U
#define _PCD_SIZE_PcdCpuKnightsLandingFamilyFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuKnightsLandingFamilyFlag  _PCD_SIZE_PcdCpuKnightsLandingFamilyFlag 
#define _PCD_VALUE_PcdCpuKnightsLandingFamilyFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuKnightsLandingFamilyFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuKnightsLandingFamilyFlag  _gPcd_FixedAtBuild_PcdCpuKnightsLandingFamilyFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuKnightsLandingFamilyFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMlcStreamerPrefetcherFlag  401U
#define _PCD_SIZE_PcdCpuMlcStreamerPrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMlcStreamerPrefetcherFlag  _PCD_SIZE_PcdCpuMlcStreamerPrefetcherFlag 
#define _PCD_VALUE_PcdCpuMlcStreamerPrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMlcStreamerPrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMlcStreamerPrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuMlcStreamerPrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMlcStreamerPrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMlcSpatialPrefetcherFlag  402U
#define _PCD_SIZE_PcdCpuMlcSpatialPrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMlcSpatialPrefetcherFlag  _PCD_SIZE_PcdCpuMlcSpatialPrefetcherFlag 
#define _PCD_VALUE_PcdCpuMlcSpatialPrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMlcSpatialPrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMlcSpatialPrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuMlcSpatialPrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMlcSpatialPrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMonitorMwaitFlag  403U
#define _PCD_SIZE_PcdCpuMonitorMwaitFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuMonitorMwaitFlag  _PCD_SIZE_PcdCpuMonitorMwaitFlag 
#define _PCD_VALUE_PcdCpuMonitorMwaitFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuMonitorMwaitFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuMonitorMwaitFlag  _gPcd_FixedAtBuild_PcdCpuMonitorMwaitFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuMonitorMwaitFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuThreeStrikeCounterFlag  404U
#define _PCD_SIZE_PcdCpuThreeStrikeCounterFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuThreeStrikeCounterFlag  _PCD_SIZE_PcdCpuThreeStrikeCounterFlag 
#define _PCD_VALUE_PcdCpuThreeStrikeCounterFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuThreeStrikeCounterFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuThreeStrikeCounterFlag  _gPcd_FixedAtBuild_PcdCpuThreeStrikeCounterFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuThreeStrikeCounterFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuEnergyPerformanceBiasFlag  405U
#define _PCD_SIZE_PcdCpuEnergyPerformanceBiasFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuEnergyPerformanceBiasFlag  _PCD_SIZE_PcdCpuEnergyPerformanceBiasFlag 
#define _PCD_VALUE_PcdCpuEnergyPerformanceBiasFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuEnergyPerformanceBiasFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuEnergyPerformanceBiasFlag  _gPcd_FixedAtBuild_PcdCpuEnergyPerformanceBiasFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuEnergyPerformanceBiasFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuTStateFlag  406U
#define _PCD_SIZE_PcdCpuTStateFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuTStateFlag  _PCD_SIZE_PcdCpuTStateFlag 
#define _PCD_VALUE_PcdCpuTStateFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuTStateFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuTStateFlag  _gPcd_FixedAtBuild_PcdCpuTStateFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuTStateFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuAesFlag  407U
#define _PCD_SIZE_PcdCpuAesFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuAesFlag  _PCD_SIZE_PcdCpuAesFlag 
#define _PCD_VALUE_PcdCpuAesFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuAesFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuAesFlag  _gPcd_FixedAtBuild_PcdCpuAesFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuAesFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuDcaFlag  408U
#define _PCD_SIZE_PcdCpuDcaFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuDcaFlag  _PCD_SIZE_PcdCpuDcaFlag 
#define _PCD_VALUE_PcdCpuDcaFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuDcaFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuDcaFlag  _gPcd_FixedAtBuild_PcdCpuDcaFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuDcaFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuCStateFlag  409U
#define _PCD_SIZE_PcdCpuCStateFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuCStateFlag  _PCD_SIZE_PcdCpuCStateFlag 
#define _PCD_VALUE_PcdCpuCStateFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuCStateFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuCStateFlag  _gPcd_FixedAtBuild_PcdCpuCStateFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuCStateFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuX2ApicFlag  410U
#define _PCD_SIZE_PcdCpuX2ApicFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuX2ApicFlag  _PCD_SIZE_PcdCpuX2ApicFlag 
#define _PCD_VALUE_PcdCpuX2ApicFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuX2ApicFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuX2ApicFlag  _gPcd_FixedAtBuild_PcdCpuX2ApicFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuX2ApicFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuApicTprUpdateMessageFlag  411U
#define _PCD_SIZE_PcdCpuApicTprUpdateMessageFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuApicTprUpdateMessageFlag  _PCD_SIZE_PcdCpuApicTprUpdateMessageFlag 
#define _PCD_VALUE_PcdCpuApicTprUpdateMessageFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuApicTprUpdateMessageFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuApicTprUpdateMessageFlag  _gPcd_FixedAtBuild_PcdCpuApicTprUpdateMessageFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuApicTprUpdateMessageFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuDcuModeSelectionFlag  412U
#define _PCD_SIZE_PcdCpuDcuModeSelectionFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuDcuModeSelectionFlag  _PCD_SIZE_PcdCpuDcuModeSelectionFlag 
#define _PCD_VALUE_PcdCpuDcuModeSelectionFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuDcuModeSelectionFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuDcuModeSelectionFlag  _gPcd_FixedAtBuild_PcdCpuDcuModeSelectionFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuDcuModeSelectionFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSocketIdReassignmentFlag  413U
#define _PCD_SIZE_PcdCpuSocketIdReassignmentFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuSocketIdReassignmentFlag  _PCD_SIZE_PcdCpuSocketIdReassignmentFlag 
#define _PCD_VALUE_PcdCpuSocketIdReassignmentFlag  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSocketIdReassignmentFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuSocketIdReassignmentFlag  _gPcd_FixedAtBuild_PcdCpuSocketIdReassignmentFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuSocketIdReassignmentFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHotPlugSupport  337U
#define _PCD_SIZE_PcdCpuHotPlugSupport 1
#define _PCD_GET_MODE_SIZE_PcdCpuHotPlugSupport  _PCD_SIZE_PcdCpuHotPlugSupport 
#define _PCD_VALUE_PcdCpuHotPlugSupport  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport;
#define _PCD_GET_MODE_BOOL_PcdCpuHotPlugSupport  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport
//#define _PCD_SET_MODE_BOOL_PcdCpuHotPlugSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuEnableIaUntrustedModeFlag  414U
#define _PCD_SIZE_PcdCpuEnableIaUntrustedModeFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuEnableIaUntrustedModeFlag  _PCD_SIZE_PcdCpuEnableIaUntrustedModeFlag 
#define _PCD_VALUE_PcdCpuEnableIaUntrustedModeFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuEnableIaUntrustedModeFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuEnableIaUntrustedModeFlag  _gPcd_FixedAtBuild_PcdCpuEnableIaUntrustedModeFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuEnableIaUntrustedModeFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuPeciDownstreamWriteFlag  415U
#define _PCD_SIZE_PcdCpuPeciDownstreamWriteFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuPeciDownstreamWriteFlag  _PCD_SIZE_PcdCpuPeciDownstreamWriteFlag 
#define _PCD_VALUE_PcdCpuPeciDownstreamWriteFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuPeciDownstreamWriteFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuPeciDownstreamWriteFlag  _gPcd_FixedAtBuild_PcdCpuPeciDownstreamWriteFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuPeciDownstreamWriteFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuL2PrefetcherFlag  416U
#define _PCD_SIZE_PcdCpuL2PrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuL2PrefetcherFlag  _PCD_SIZE_PcdCpuL2PrefetcherFlag 
#define _PCD_VALUE_PcdCpuL2PrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuL2PrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuL2PrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuL2PrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuL2PrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuL1DataPrefetcherFlag  417U
#define _PCD_SIZE_PcdCpuL1DataPrefetcherFlag 1
#define _PCD_GET_MODE_SIZE_PcdCpuL1DataPrefetcherFlag  _PCD_SIZE_PcdCpuL1DataPrefetcherFlag 
#define _PCD_VALUE_PcdCpuL1DataPrefetcherFlag  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuL1DataPrefetcherFlag;
#define _PCD_GET_MODE_BOOL_PcdCpuL1DataPrefetcherFlag  _gPcd_FixedAtBuild_PcdCpuL1DataPrefetcherFlag
//#define _PCD_SET_MODE_BOOL_PcdCpuL1DataPrefetcherFlag  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  342U
#define _PCD_SIZE_PcdCpuMaxLogicalProcessorNumber 4
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  _PCD_SIZE_PcdCpuMaxLogicalProcessorNumber 
#define _PCD_VALUE_PcdCpuMaxLogicalProcessorNumber  64U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuMaxLogicalProcessorNumber;
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  _gPcd_FixedAtBuild_PcdCpuMaxLogicalProcessorNumber
//#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuApLoopMode  418U
#define _PCD_SIZE_PcdCpuApLoopMode 1
#define _PCD_GET_MODE_SIZE_PcdCpuApLoopMode  _PCD_SIZE_PcdCpuApLoopMode 
#define _PCD_VALUE_PcdCpuApLoopMode  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdCpuApLoopMode;
#define _PCD_GET_MODE_8_PcdCpuApLoopMode  _gPcd_FixedAtBuild_PcdCpuApLoopMode
//#define _PCD_SET_MODE_8_PcdCpuApLoopMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformType  419U
#define _PCD_SIZE_PcdPlatformType 1
#define _PCD_GET_MODE_SIZE_PcdPlatformType  _PCD_SIZE_PcdPlatformType 
#define _PCD_VALUE_PcdPlatformType  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPlatformType;
#define _PCD_GET_MODE_8_PcdPlatformType  _gPcd_FixedAtBuild_PcdPlatformType
//#define _PCD_SET_MODE_8_PcdPlatformType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformDynamicVidSupport  420U
#define _PCD_SIZE_PcdPlatformDynamicVidSupport 1
#define _PCD_GET_MODE_SIZE_PcdPlatformDynamicVidSupport  _PCD_SIZE_PcdPlatformDynamicVidSupport 
#define _PCD_VALUE_PcdPlatformDynamicVidSupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPlatformDynamicVidSupport;
#define _PCD_GET_MODE_BOOL_PcdPlatformDynamicVidSupport  _gPcd_FixedAtBuild_PcdPlatformDynamicVidSupport
//#define _PCD_SET_MODE_BOOL_PcdPlatformDynamicVidSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformHighPowerLoadLineSupport  421U
#define _PCD_SIZE_PcdPlatformHighPowerLoadLineSupport 1
#define _PCD_GET_MODE_SIZE_PcdPlatformHighPowerLoadLineSupport  _PCD_SIZE_PcdPlatformHighPowerLoadLineSupport 
#define _PCD_VALUE_PcdPlatformHighPowerLoadLineSupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPlatformHighPowerLoadLineSupport;
#define _PCD_GET_MODE_BOOL_PcdPlatformHighPowerLoadLineSupport  _gPcd_FixedAtBuild_PcdPlatformHighPowerLoadLineSupport
//#define _PCD_SET_MODE_BOOL_PcdPlatformHighPowerLoadLineSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMicrocodePatchRegionSize  291U
#define _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchRegionSize  _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 
#define _PCD_VALUE_PcdCpuMicrocodePatchRegionSize  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchRegionSize  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMicrocodePatchAddress  290U
#define _PCD_SIZE_PcdCpuMicrocodePatchAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchAddress  _PCD_SIZE_PcdCpuMicrocodePatchAddress 
#define _PCD_VALUE_PcdCpuMicrocodePatchAddress  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchAddress  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdPlatformCpuFrequencyLists  168U
#define _PCD_GET_MODE_64_PcdPlatformCpuFrequencyLists  LibPcdGet64(_PCD_TOKEN_PcdPlatformCpuFrequencyLists)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuFrequencyLists  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuFrequencyLists)
#define _PCD_SET_MODE_64_PcdPlatformCpuFrequencyLists(Value)  LibPcdSet64(_PCD_TOKEN_PcdPlatformCpuFrequencyLists, (Value))
#define _PCD_SET_MODE_64_S_PcdPlatformCpuFrequencyLists(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPlatformCpuFrequencyLists, (Value))

#define _PCD_TOKEN_PcdPlatformCpuMaxFsbFrequency  422U
#define _PCD_SIZE_PcdPlatformCpuMaxFsbFrequency 4
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuMaxFsbFrequency  _PCD_SIZE_PcdPlatformCpuMaxFsbFrequency 
#define _PCD_VALUE_PcdPlatformCpuMaxFsbFrequency  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPlatformCpuMaxFsbFrequency;
#define _PCD_GET_MODE_32_PcdPlatformCpuMaxFsbFrequency  _gPcd_FixedAtBuild_PcdPlatformCpuMaxFsbFrequency
//#define _PCD_SET_MODE_32_PcdPlatformCpuMaxFsbFrequency  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformCpuMaxCoreFrequency  423U
#define _PCD_SIZE_PcdPlatformCpuMaxCoreFrequency 4
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuMaxCoreFrequency  _PCD_SIZE_PcdPlatformCpuMaxCoreFrequency 
#define _PCD_VALUE_PcdPlatformCpuMaxCoreFrequency  3800U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPlatformCpuMaxCoreFrequency;
#define _PCD_GET_MODE_32_PcdPlatformCpuMaxCoreFrequency  _gPcd_FixedAtBuild_PcdPlatformCpuMaxCoreFrequency
//#define _PCD_SET_MODE_32_PcdPlatformCpuMaxCoreFrequency  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuApStackSize  424U
#define _PCD_SIZE_PcdCpuApStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuApStackSize  _PCD_SIZE_PcdCpuApStackSize 
#define _PCD_VALUE_PcdCpuApStackSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuApStackSize;
#define _PCD_GET_MODE_32_PcdCpuApStackSize  _gPcd_FixedAtBuild_PcdCpuApStackSize
//#define _PCD_SET_MODE_32_PcdCpuApStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds  425U
#define _PCD_SIZE_PcdCpuApInitTimeOutInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuApInitTimeOutInMicroSeconds  _PCD_SIZE_PcdCpuApInitTimeOutInMicroSeconds 
#define _PCD_VALUE_PcdCpuApInitTimeOutInMicroSeconds  50000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuApInitTimeOutInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuApInitTimeOutInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuProcessorFeatureSetting  169U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureSetting  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureSetting)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureSetting  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureSetting)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureSetting(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureSetting, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureSetting(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureSetting, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureCapability  170U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureCapability  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureCapability)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureCapability  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureCapability)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureCapability(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureCapability, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureCapability(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureCapability, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration  157U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureUserConfiguration  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureUserConfiguration  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureUserConfiguration(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureUserConfiguration(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureSettingEx1  171U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureSettingEx1  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureSettingEx1)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureSettingEx1  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureSettingEx1)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureSettingEx1(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureSettingEx1, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureSettingEx1(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureSettingEx1, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureCapabilityEx1  172U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureCapabilityEx1  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureCapabilityEx1)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureCapabilityEx1  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureCapabilityEx1)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureCapabilityEx1(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureCapabilityEx1, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureCapabilityEx1(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureCapabilityEx1, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1  158U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureUserConfigurationEx1  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureUserConfigurationEx1  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureUserConfigurationEx1(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureUserConfigurationEx1(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1, (Value))

#define _PCD_TOKEN_PcdCpuConfigContextBuffer  8U
#define _PCD_GET_MODE_64_PcdCpuConfigContextBuffer  LibPcdGet64(_PCD_TOKEN_PcdCpuConfigContextBuffer)
#define _PCD_GET_MODE_SIZE_PcdCpuConfigContextBuffer  LibPcdGetSize(_PCD_TOKEN_PcdCpuConfigContextBuffer)
#define _PCD_SET_MODE_64_PcdCpuConfigContextBuffer(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuConfigContextBuffer, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuConfigContextBuffer(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuConfigContextBuffer, (Value))

#define _PCD_TOKEN_PcdCpuCallbackSignal  7U
#define _PCD_GET_MODE_8_PcdCpuCallbackSignal  LibPcdGet8(_PCD_TOKEN_PcdCpuCallbackSignal)
#define _PCD_GET_MODE_SIZE_PcdCpuCallbackSignal  LibPcdGetSize(_PCD_TOKEN_PcdCpuCallbackSignal)
#define _PCD_SET_MODE_8_PcdCpuCallbackSignal(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuCallbackSignal, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuCallbackSignal(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuCallbackSignal, (Value))

#define _PCD_TOKEN_PcdIsPowerOnReset  166U
#define _PCD_GET_MODE_BOOL_PcdIsPowerOnReset  LibPcdGetBool(_PCD_TOKEN_PcdIsPowerOnReset)
#define _PCD_GET_MODE_SIZE_PcdIsPowerOnReset  LibPcdGetSize(_PCD_TOKEN_PcdIsPowerOnReset)
#define _PCD_SET_MODE_BOOL_PcdIsPowerOnReset(Value)  LibPcdSetBool(_PCD_TOKEN_PcdIsPowerOnReset, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdIsPowerOnReset(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdIsPowerOnReset, (Value))

#define _PCD_TOKEN_PcdCpuPageTableAddress  11U
#define _PCD_GET_MODE_64_PcdCpuPageTableAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuPageTableAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuPageTableAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuPageTableAddress)
#define _PCD_SET_MODE_64_PcdCpuPageTableAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuPageTableAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuPageTableAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuPageTableAddress, (Value))

#define _PCD_TOKEN_PcdCpuMtrrTableAddress  12U
#define _PCD_GET_MODE_64_PcdCpuMtrrTableAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuMtrrTableAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuMtrrTableAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuMtrrTableAddress)
#define _PCD_SET_MODE_64_PcdCpuMtrrTableAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuMtrrTableAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuMtrrTableAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuMtrrTableAddress, (Value))

#define _PCD_TOKEN_PcdCpuS3DataAddress  5U
#define _PCD_GET_MODE_64_PcdCpuS3DataAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuS3DataAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuS3DataAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuS3DataAddress)
#define _PCD_SET_MODE_64_PcdCpuS3DataAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuS3DataAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuS3DataAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuS3DataAddress, (Value))

#define _PCD_TOKEN_PcdCpuHwCoordination  426U
#define _PCD_SIZE_PcdCpuHwCoordination 1
#define _PCD_GET_MODE_SIZE_PcdCpuHwCoordination  _PCD_SIZE_PcdCpuHwCoordination 
#define _PCD_VALUE_PcdCpuHwCoordination  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHwCoordination;
#define _PCD_GET_MODE_BOOL_PcdCpuHwCoordination  _gPcd_FixedAtBuild_PcdCpuHwCoordination
//#define _PCD_SET_MODE_BOOL_PcdCpuHwCoordination  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuEnergyPolicy  159U
#define _PCD_GET_MODE_8_PcdCpuEnergyPolicy  LibPcdGet8(_PCD_TOKEN_PcdCpuEnergyPolicy)
#define _PCD_GET_MODE_SIZE_PcdCpuEnergyPolicy  LibPcdGetSize(_PCD_TOKEN_PcdCpuEnergyPolicy)
#define _PCD_SET_MODE_8_PcdCpuEnergyPolicy(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuEnergyPolicy, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuEnergyPolicy(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuEnergyPolicy, (Value))

#define _PCD_TOKEN_PcdCpuClockModulationDutyCycle  162U
#define _PCD_GET_MODE_8_PcdCpuClockModulationDutyCycle  LibPcdGet8(_PCD_TOKEN_PcdCpuClockModulationDutyCycle)
#define _PCD_GET_MODE_SIZE_PcdCpuClockModulationDutyCycle  LibPcdGetSize(_PCD_TOKEN_PcdCpuClockModulationDutyCycle)
#define _PCD_SET_MODE_8_PcdCpuClockModulationDutyCycle(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuClockModulationDutyCycle, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuClockModulationDutyCycle(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuClockModulationDutyCycle, (Value))

#define _PCD_TOKEN_PcdCpuAcpiLvl2Addr  160U
#define _PCD_GET_MODE_16_PcdCpuAcpiLvl2Addr  LibPcdGet16(_PCD_TOKEN_PcdCpuAcpiLvl2Addr)
#define _PCD_GET_MODE_SIZE_PcdCpuAcpiLvl2Addr  LibPcdGetSize(_PCD_TOKEN_PcdCpuAcpiLvl2Addr)
#define _PCD_SET_MODE_16_PcdCpuAcpiLvl2Addr(Value)  LibPcdSet16(_PCD_TOKEN_PcdCpuAcpiLvl2Addr, (Value))
#define _PCD_SET_MODE_16_S_PcdCpuAcpiLvl2Addr(Value)  LibPcdSet16S(_PCD_TOKEN_PcdCpuAcpiLvl2Addr, (Value))

#define _PCD_TOKEN_PcdCpuPackageCStateLimit  161U
#define _PCD_GET_MODE_8_PcdCpuPackageCStateLimit  LibPcdGet8(_PCD_TOKEN_PcdCpuPackageCStateLimit)
#define _PCD_GET_MODE_SIZE_PcdCpuPackageCStateLimit  LibPcdGetSize(_PCD_TOKEN_PcdCpuPackageCStateLimit)
#define _PCD_SET_MODE_8_PcdCpuPackageCStateLimit(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuPackageCStateLimit, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuPackageCStateLimit(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuPackageCStateLimit, (Value))

#define _PCD_TOKEN_PcdCpuDcuMode  167U
#define _PCD_GET_MODE_8_PcdCpuDcuMode  LibPcdGet8(_PCD_TOKEN_PcdCpuDcuMode)
#define _PCD_GET_MODE_SIZE_PcdCpuDcuMode  LibPcdGetSize(_PCD_TOKEN_PcdCpuDcuMode)
#define _PCD_SET_MODE_8_PcdCpuDcuMode(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuDcuMode, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuDcuMode(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuDcuMode, (Value))

#define _PCD_TOKEN_PcdCpuTccActivationOffset  427U
#define _PCD_SIZE_PcdCpuTccActivationOffset 1
#define _PCD_GET_MODE_SIZE_PcdCpuTccActivationOffset  _PCD_SIZE_PcdCpuTccActivationOffset 
#define _PCD_VALUE_PcdCpuTccActivationOffset  0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdCpuTccActivationOffset;
#define _PCD_GET_MODE_8_PcdCpuTccActivationOffset  _gPcd_FixedAtBuild_PcdCpuTccActivationOffset
//#define _PCD_SET_MODE_8_PcdCpuTccActivationOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEbdaReservedMemorySize  428U
#define _PCD_PATCHABLE_VALUE_PcdEbdaReservedMemorySize  ((UINT32)0x10000U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdEbdaReservedMemorySize;
#define _PCD_GET_MODE_32_PcdEbdaReservedMemorySize  _gPcd_BinaryPatch_PcdEbdaReservedMemorySize
#define _PCD_PATCHABLE_PcdEbdaReservedMemorySize_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdEbdaReservedMemorySize  _gPcd_BinaryPatch_Size_PcdEbdaReservedMemorySize 
extern UINTN _gPcd_BinaryPatch_Size_PcdEbdaReservedMemorySize; 
#define _PCD_SET_MODE_32_PcdEbdaReservedMemorySize(Value)  (_gPcd_BinaryPatch_PcdEbdaReservedMemorySize = (Value))
#define _PCD_SET_MODE_32_S_PcdEbdaReservedMemorySize(Value)  ((_gPcd_BinaryPatch_PcdEbdaReservedMemorySize = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdOpromReservedMemoryBase  429U
#define _PCD_SIZE_PcdOpromReservedMemoryBase 4
#define _PCD_GET_MODE_SIZE_PcdOpromReservedMemoryBase  _PCD_SIZE_PcdOpromReservedMemoryBase 
#define _PCD_VALUE_PcdOpromReservedMemoryBase  0x60000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOpromReservedMemoryBase;
#define _PCD_GET_MODE_32_PcdOpromReservedMemoryBase  _gPcd_FixedAtBuild_PcdOpromReservedMemoryBase
//#define _PCD_SET_MODE_32_PcdOpromReservedMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOpromReservedMemorySize  430U
#define _PCD_SIZE_PcdOpromReservedMemorySize 4
#define _PCD_GET_MODE_SIZE_PcdOpromReservedMemorySize  _PCD_SIZE_PcdOpromReservedMemorySize 
#define _PCD_VALUE_PcdOpromReservedMemorySize  0x28000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOpromReservedMemorySize;
#define _PCD_GET_MODE_32_PcdOpromReservedMemorySize  _gPcd_FixedAtBuild_PcdOpromReservedMemorySize
//#define _PCD_SET_MODE_32_PcdOpromReservedMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuRtitSize  173U
#define _PCD_GET_MODE_32_PcdCpuRtitSize  LibPcdGet32(_PCD_TOKEN_PcdCpuRtitSize)
#define _PCD_GET_MODE_SIZE_PcdCpuRtitSize  LibPcdGetSize(_PCD_TOKEN_PcdCpuRtitSize)
#define _PCD_SET_MODE_32_PcdCpuRtitSize(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuRtitSize, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuRtitSize(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuRtitSize, (Value))

#define _PCD_TOKEN_PcdCpuRtitSetupOption  174U
#define _PCD_GET_MODE_32_PcdCpuRtitSetupOption  LibPcdGet32(_PCD_TOKEN_PcdCpuRtitSetupOption)
#define _PCD_GET_MODE_SIZE_PcdCpuRtitSetupOption  LibPcdGetSize(_PCD_TOKEN_PcdCpuRtitSetupOption)
#define _PCD_SET_MODE_32_PcdCpuRtitSetupOption(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuRtitSetupOption, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuRtitSetupOption(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuRtitSetupOption, (Value))

#define _PCD_TOKEN_PcdCpuRtitTraceHubBar  175U
#define _PCD_GET_MODE_32_PcdCpuRtitTraceHubBar  LibPcdGet32(_PCD_TOKEN_PcdCpuRtitTraceHubBar)
#define _PCD_GET_MODE_SIZE_PcdCpuRtitTraceHubBar  LibPcdGetSize(_PCD_TOKEN_PcdCpuRtitTraceHubBar)
#define _PCD_SET_MODE_32_PcdCpuRtitTraceHubBar(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuRtitTraceHubBar, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuRtitTraceHubBar(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuRtitTraceHubBar, (Value))

#define _PCD_TOKEN_gEfiCpuTokenSpaceGuid_PcdCpuSocketId  1610645511U
#define _PCD_TOKEN_PcdCpuSocketId  _PCD_TOKEN_gEfiCpuTokenSpaceGuid_PcdCpuSocketId
#define _PCD_GET_MODE_PTR_PcdCpuSocketId  LibPcdGetExPtr(&gEfiCpuTokenSpaceGuid, _PCD_TOKEN_PcdCpuSocketId)
#define _PCD_GET_MODE_SIZE_PcdCpuSocketId LibPcdGetExSize(&gEfiCpuTokenSpaceGuid, _PCD_TOKEN_PcdCpuSocketId)
#define _PCD_SET_MODE_PTR_PcdCpuSocketId(SizeOfBuffer, Buffer)  LibPcdSetExPtr(&gEfiCpuTokenSpaceGuid, _PCD_TOKEN_PcdCpuSocketId, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdCpuSocketId(SizeOfBuffer, Buffer)  LibPcdSetExPtrS(&gEfiCpuTokenSpaceGuid, _PCD_TOKEN_PcdCpuSocketId, (SizeOfBuffer), (Buffer))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdCpuSocketId_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiCpuTokenSpaceGuid) ? _PCD_TOKEN_gEfiCpuTokenSpaceGuid_PcdCpuSocketId:0 \
  )

#define __PCD_PcdCpuSocketId_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiCpuTokenSpaceGuid) ? _PCD_TOKEN_gEfiCpuTokenSpaceGuid_PcdCpuSocketId:0 \
  )
#define _PCD_TOKEN_EX_PcdCpuSocketId(GuidPtr)   __PCD_PcdCpuSocketId_ADDR_CMP(GuidPtr) ? __PCD_PcdCpuSocketId_ADDR_CMP(GuidPtr) : __PCD_PcdCpuSocketId_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MultiProcessorInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "CpuMpDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
