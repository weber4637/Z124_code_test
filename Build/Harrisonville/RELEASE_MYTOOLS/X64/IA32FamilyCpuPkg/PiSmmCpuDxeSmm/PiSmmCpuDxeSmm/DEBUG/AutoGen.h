/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A3FF0EF5_0C28_42f5_B544_8C7DE1E80014
#define _AUTOGENH_A3FF0EF5_0C28_42f5_B544_8C7DE1E80014

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xA3FF0EF5, 0x0C28, 0x42f5, {0xB5, 0x44, 0x8C, 0x7D, 0xE1, 0xE8, 0x00, 0x14}}

// Guids
extern EFI_GUID gEfiAcpiVariableGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
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
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiSmmConfigurationProtocolGuid;
extern EFI_GUID gEfiSmmCpuProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gSmmCpuSyncProtocolGuid;
extern EFI_GUID gSmmCpuSync2ProtocolGuid;
extern EFI_GUID gEfiSmmCpuServiceProtocolGuid;
extern EFI_GUID gEfiSmmCpuSaveStateProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFrameworkCompatibilitySupport  235U
#define _PCD_SIZE_PcdFrameworkCompatibilitySupport 1
#define _PCD_GET_MODE_SIZE_PcdFrameworkCompatibilitySupport  _PCD_SIZE_PcdFrameworkCompatibilitySupport 
#define _PCD_VALUE_PcdFrameworkCompatibilitySupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport;
#define _PCD_GET_MODE_BOOL_PcdFrameworkCompatibilitySupport  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport
//#define _PCD_SET_MODE_BOOL_PcdFrameworkCompatibilitySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmBlockStartupThisAp  333U
#define _PCD_SIZE_PcdCpuSmmBlockStartupThisAp 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmBlockStartupThisAp  _PCD_SIZE_PcdCpuSmmBlockStartupThisAp 
#define _PCD_VALUE_PcdCpuSmmBlockStartupThisAp  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmBlockStartupThisAp;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmBlockStartupThisAp  _gPcd_FixedAtBuild_PcdCpuSmmBlockStartupThisAp
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmBlockStartupThisAp  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmEnableBspElection  334U
#define _PCD_SIZE_PcdCpuSmmEnableBspElection 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmEnableBspElection  _PCD_SIZE_PcdCpuSmmEnableBspElection 
#define _PCD_VALUE_PcdCpuSmmEnableBspElection  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmEnableBspElection;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmEnableBspElection  _gPcd_FixedAtBuild_PcdCpuSmmEnableBspElection
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmEnableBspElection  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmDebug  335U
#define _PCD_SIZE_PcdCpuSmmDebug 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmDebug  _PCD_SIZE_PcdCpuSmmDebug 
#define _PCD_VALUE_PcdCpuSmmDebug  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmDebug;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmDebug  _gPcd_FixedAtBuild_PcdCpuSmmDebug
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmDebug  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmUncacheCpuSyncData  336U
#define _PCD_SIZE_PcdCpuSmmUncacheCpuSyncData 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmUncacheCpuSyncData  _PCD_SIZE_PcdCpuSmmUncacheCpuSyncData 
#define _PCD_VALUE_PcdCpuSmmUncacheCpuSyncData  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmUncacheCpuSyncData;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmUncacheCpuSyncData  _gPcd_FixedAtBuild_PcdCpuSmmUncacheCpuSyncData
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmUncacheCpuSyncData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHotPlugSupport  337U
#define _PCD_SIZE_PcdCpuHotPlugSupport 1
#define _PCD_GET_MODE_SIZE_PcdCpuHotPlugSupport  _PCD_SIZE_PcdCpuHotPlugSupport 
#define _PCD_VALUE_PcdCpuHotPlugSupport  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport;
#define _PCD_GET_MODE_BOOL_PcdCpuHotPlugSupport  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport
//#define _PCD_SET_MODE_BOOL_PcdCpuHotPlugSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmStackGuard  338U
#define _PCD_SIZE_PcdCpuSmmStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmStackGuard  _PCD_SIZE_PcdCpuSmmStackGuard 
#define _PCD_VALUE_PcdCpuSmmStackGuard  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmStackGuard  _gPcd_FixedAtBuild_PcdCpuSmmStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmProfileEnable  339U
#define _PCD_SIZE_PcdCpuSmmProfileEnable 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmProfileEnable  _PCD_SIZE_PcdCpuSmmProfileEnable 
#define _PCD_VALUE_PcdCpuSmmProfileEnable  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmProfileEnable;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmProfileEnable  _gPcd_FixedAtBuild_PcdCpuSmmProfileEnable
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmProfileEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmProfileRingBuffer  340U
#define _PCD_SIZE_PcdCpuSmmProfileRingBuffer 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmProfileRingBuffer  _PCD_SIZE_PcdCpuSmmProfileRingBuffer 
#define _PCD_VALUE_PcdCpuSmmProfileRingBuffer  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmProfileRingBuffer;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmProfileRingBuffer  _gPcd_FixedAtBuild_PcdCpuSmmProfileRingBuffer
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmProfileRingBuffer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmFeatureControlMsrLock  341U
#define _PCD_SIZE_PcdCpuSmmFeatureControlMsrLock 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmFeatureControlMsrLock  _PCD_SIZE_PcdCpuSmmFeatureControlMsrLock 
#define _PCD_VALUE_PcdCpuSmmFeatureControlMsrLock  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmFeatureControlMsrLock;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmFeatureControlMsrLock  _gPcd_FixedAtBuild_PcdCpuSmmFeatureControlMsrLock
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmFeatureControlMsrLock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  342U
#define _PCD_SIZE_PcdCpuMaxLogicalProcessorNumber 4
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  _PCD_SIZE_PcdCpuMaxLogicalProcessorNumber 
#define _PCD_VALUE_PcdCpuMaxLogicalProcessorNumber  64U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuMaxLogicalProcessorNumber;
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  _gPcd_FixedAtBuild_PcdCpuMaxLogicalProcessorNumber
//#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmProfileSize  343U
#define _PCD_SIZE_PcdCpuSmmProfileSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuSmmProfileSize  _PCD_SIZE_PcdCpuSmmProfileSize 
#define _PCD_VALUE_PcdCpuSmmProfileSize  0x200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuSmmProfileSize;
#define _PCD_GET_MODE_32_PcdCpuSmmProfileSize  _gPcd_FixedAtBuild_PcdCpuSmmProfileSize
//#define _PCD_SET_MODE_32_PcdCpuSmmProfileSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuIEDEnabled  344U
#define _PCD_SIZE_PcdCpuIEDEnabled 1
#define _PCD_GET_MODE_SIZE_PcdCpuIEDEnabled  _PCD_SIZE_PcdCpuIEDEnabled 
#define _PCD_VALUE_PcdCpuIEDEnabled  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuIEDEnabled;
#define _PCD_GET_MODE_BOOL_PcdCpuIEDEnabled  _gPcd_FixedAtBuild_PcdCpuIEDEnabled
//#define _PCD_SET_MODE_BOOL_PcdCpuIEDEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuIEDRamSize  345U
#define _PCD_SIZE_PcdCpuIEDRamSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuIEDRamSize  _PCD_SIZE_PcdCpuIEDRamSize 
#define _PCD_VALUE_PcdCpuIEDRamSize  0x400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuIEDRamSize;
#define _PCD_GET_MODE_32_PcdCpuIEDRamSize  _gPcd_FixedAtBuild_PcdCpuIEDRamSize
//#define _PCD_SET_MODE_32_PcdCpuIEDRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmStackSize  346U
#define _PCD_SIZE_PcdCpuSmmStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuSmmStackSize  _PCD_SIZE_PcdCpuSmmStackSize 
#define _PCD_VALUE_PcdCpuSmmStackSize  0x4000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuSmmStackSize;
#define _PCD_GET_MODE_32_PcdCpuSmmStackSize  _gPcd_FixedAtBuild_PcdCpuSmmStackSize
//#define _PCD_SET_MODE_32_PcdCpuSmmStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmApSyncTimeout  347U
#define _PCD_SIZE_PcdCpuSmmApSyncTimeout 8
#define _PCD_GET_MODE_SIZE_PcdCpuSmmApSyncTimeout  _PCD_SIZE_PcdCpuSmmApSyncTimeout 
#define _PCD_VALUE_PcdCpuSmmApSyncTimeout  10000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuSmmApSyncTimeout;
#define _PCD_GET_MODE_64_PcdCpuSmmApSyncTimeout  _gPcd_FixedAtBuild_PcdCpuSmmApSyncTimeout
//#define _PCD_SET_MODE_64_PcdCpuSmmApSyncTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuS3DataAddress  5U
#define _PCD_GET_MODE_64_PcdCpuS3DataAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuS3DataAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuS3DataAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuS3DataAddress)
#define _PCD_SET_MODE_64_PcdCpuS3DataAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuS3DataAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuS3DataAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuS3DataAddress, (Value))

#define _PCD_TOKEN_PcdCpuHotPlugDataAddress  6U
#define _PCD_GET_MODE_64_PcdCpuHotPlugDataAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuHotPlugDataAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuHotPlugDataAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuHotPlugDataAddress)
#define _PCD_SET_MODE_64_PcdCpuHotPlugDataAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuHotPlugDataAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuHotPlugDataAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuHotPlugDataAddress, (Value))

#define _PCD_TOKEN_PcdCpuSmmCodeAccessCheckEnable  348U
#define _PCD_SIZE_PcdCpuSmmCodeAccessCheckEnable 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmCodeAccessCheckEnable  _PCD_SIZE_PcdCpuSmmCodeAccessCheckEnable 
#define _PCD_VALUE_PcdCpuSmmCodeAccessCheckEnable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmCodeAccessCheckEnable;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmCodeAccessCheckEnable  _gPcd_FixedAtBuild_PcdCpuSmmCodeAccessCheckEnable
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmCodeAccessCheckEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmMsrSaveStateEnable  349U
#define _PCD_SIZE_PcdCpuSmmMsrSaveStateEnable 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmMsrSaveStateEnable  _PCD_SIZE_PcdCpuSmmMsrSaveStateEnable 
#define _PCD_VALUE_PcdCpuSmmMsrSaveStateEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmMsrSaveStateEnable;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmMsrSaveStateEnable  _gPcd_FixedAtBuild_PcdCpuSmmMsrSaveStateEnable
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmMsrSaveStateEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmSmrr2Base  350U
#define _PCD_SIZE_PcdCpuSmmSmrr2Base 4
#define _PCD_GET_MODE_SIZE_PcdCpuSmmSmrr2Base  _PCD_SIZE_PcdCpuSmmSmrr2Base 
#define _PCD_VALUE_PcdCpuSmmSmrr2Base  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2Base;
#define _PCD_GET_MODE_32_PcdCpuSmmSmrr2Base  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2Base
//#define _PCD_SET_MODE_32_PcdCpuSmmSmrr2Base  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmSmrr2Size  351U
#define _PCD_SIZE_PcdCpuSmmSmrr2Size 4
#define _PCD_GET_MODE_SIZE_PcdCpuSmmSmrr2Size  _PCD_SIZE_PcdCpuSmmSmrr2Size 
#define _PCD_VALUE_PcdCpuSmmSmrr2Size  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2Size;
#define _PCD_GET_MODE_32_PcdCpuSmmSmrr2Size  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2Size
//#define _PCD_SET_MODE_32_PcdCpuSmmSmrr2Size  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmSmrr2CacheType  352U
#define _PCD_SIZE_PcdCpuSmmSmrr2CacheType 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmSmrr2CacheType  _PCD_SIZE_PcdCpuSmmSmrr2CacheType 
#define _PCD_VALUE_PcdCpuSmmSmrr2CacheType  5U
extern const  UINT8  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2CacheType;
#define _PCD_GET_MODE_8_PcdCpuSmmSmrr2CacheType  _gPcd_FixedAtBuild_PcdCpuSmmSmrr2CacheType
//#define _PCD_SET_MODE_8_PcdCpuSmmSmrr2CacheType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmUseDelayIndication  353U
#define _PCD_SIZE_PcdCpuSmmUseDelayIndication 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmUseDelayIndication  _PCD_SIZE_PcdCpuSmmUseDelayIndication 
#define _PCD_VALUE_PcdCpuSmmUseDelayIndication  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmUseDelayIndication;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmUseDelayIndication  _gPcd_FixedAtBuild_PcdCpuSmmUseDelayIndication
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmUseDelayIndication  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmUseBlockIndication  354U
#define _PCD_SIZE_PcdCpuSmmUseBlockIndication 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmUseBlockIndication  _PCD_SIZE_PcdCpuSmmUseBlockIndication 
#define _PCD_VALUE_PcdCpuSmmUseBlockIndication  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmUseBlockIndication;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmUseBlockIndication  _gPcd_FixedAtBuild_PcdCpuSmmUseBlockIndication
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmUseBlockIndication  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmUseSmmEnableIndication  355U
#define _PCD_SIZE_PcdCpuSmmUseSmmEnableIndication 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmUseSmmEnableIndication  _PCD_SIZE_PcdCpuSmmUseSmmEnableIndication 
#define _PCD_VALUE_PcdCpuSmmUseSmmEnableIndication  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmUseSmmEnableIndication;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmUseSmmEnableIndication  _gPcd_FixedAtBuild_PcdCpuSmmUseSmmEnableIndication
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmUseSmmEnableIndication  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmProtectedModeEnable  356U
#define _PCD_SIZE_PcdCpuSmmProtectedModeEnable 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmProtectedModeEnable  _PCD_SIZE_PcdCpuSmmProtectedModeEnable 
#define _PCD_VALUE_PcdCpuSmmProtectedModeEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmProtectedModeEnable;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmProtectedModeEnable  _gPcd_FixedAtBuild_PcdCpuSmmProtectedModeEnable
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmProtectedModeEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PiCpuSmmEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
