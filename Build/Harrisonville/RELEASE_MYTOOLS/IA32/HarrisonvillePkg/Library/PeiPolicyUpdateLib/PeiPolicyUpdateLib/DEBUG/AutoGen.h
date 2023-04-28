/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6EA9585C_3C15_47da_9FFC_25E9E4EA4D0C
#define _AUTOGENH_6EA9585C_3C15_47da_9FFC_25E9E4EA4D0C

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gPchSetupVariableGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gPchSpiPpiGuid;

// PCD definitions
#define _PCD_TOKEN_PcdFlashFvMainBase  256U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainBase;
#define _PCD_GET_MODE_32_PcdFlashFvMainBase  _gPcd_FixedAtBuild_PcdFlashFvMainBase
//#define _PCD_SET_MODE_32_PcdFlashFvMainBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMainBase 0xff850000
#define _PCD_SIZE_PcdFlashFvMainBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainBase _PCD_SIZE_PcdFlashFvMainBase
#define _PCD_TOKEN_PcdFlashFvMainSize  257U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainSize;
#define _PCD_GET_MODE_32_PcdFlashFvMainSize  _gPcd_FixedAtBuild_PcdFlashFvMainSize
//#define _PCD_SET_MODE_32_PcdFlashFvMainSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMainSize 0x61f000
#define _PCD_SIZE_PcdFlashFvMainSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainSize _PCD_SIZE_PcdFlashFvMainSize
#define _PCD_TOKEN_PcdFlashFvLegacySize  249U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacySize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacySize  _gPcd_FixedAtBuild_PcdFlashFvLegacySize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvLegacySize 0x00000000
#define _PCD_SIZE_PcdFlashFvLegacySize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacySize _PCD_SIZE_PcdFlashFvLegacySize
#define _PCD_TOKEN_PcdFlashFvLegacyFreeBase  250U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvLegacyFreeBase 0x00000000
#define _PCD_SIZE_PcdFlashFvLegacyFreeBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeBase _PCD_SIZE_PcdFlashFvLegacyFreeBase
#define _PCD_TOKEN_PcdFlashFvLegacyFreeSize  251U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeSize  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvLegacyFreeSize 0x00000000
#define _PCD_SIZE_PcdFlashFvLegacyFreeSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeSize _PCD_SIZE_PcdFlashFvLegacyFreeSize
#define _PCD_TOKEN_PcdFlashFvNvStorageEventLogBase  269U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdFlashFvNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdFlashFvNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvNvStorageEventLogBase 0xFF820000
#define _PCD_SIZE_PcdFlashFvNvStorageEventLogBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvNvStorageEventLogBase _PCD_SIZE_PcdFlashFvNvStorageEventLogBase
#define _PCD_TOKEN_PcdFlashFvNvStorageEventLogSize  270U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdFlashFvNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdFlashFvNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvNvStorageEventLogSize 0x00200000
#define _PCD_SIZE_PcdFlashFvNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvNvStorageEventLogSize _PCD_SIZE_PcdFlashFvNvStorageEventLogSize
#define _PCD_TOKEN_PcdFlashFvOemLogoBase  254U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoBase  _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvOemLogoBase 0xFF820000
#define _PCD_SIZE_PcdFlashFvOemLogoBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoBase _PCD_SIZE_PcdFlashFvOemLogoBase
#define _PCD_TOKEN_PcdFlashFvOemLogoSize  255U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoSize  _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvOemLogoSize 0x00200000
#define _PCD_SIZE_PcdFlashFvOemLogoSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoSize _PCD_SIZE_PcdFlashFvOemLogoSize
#define _PCD_TOKEN_PcdFlashMicrocodeFvBase  266U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashMicrocodeFvBase;
#define _PCD_GET_MODE_32_PcdFlashMicrocodeFvBase  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvBase
//#define _PCD_SET_MODE_32_PcdFlashMicrocodeFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashMicrocodeFvBase 0x00000000
#define _PCD_SIZE_PcdFlashMicrocodeFvBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashMicrocodeFvBase _PCD_SIZE_PcdFlashMicrocodeFvBase
#define _PCD_TOKEN_PcdFlashMicrocodeFvSize  267U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashMicrocodeFvSize;
#define _PCD_GET_MODE_32_PcdFlashMicrocodeFvSize  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvSize
//#define _PCD_SET_MODE_32_PcdFlashMicrocodeFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashMicrocodeFvSize 0x00000000
#define _PCD_SIZE_PcdFlashMicrocodeFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashMicrocodeFvSize _PCD_SIZE_PcdFlashMicrocodeFvSize
#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  258U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableBase 0x0
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase _PCD_SIZE_PcdFlashNvStorageVariableBase
#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  259U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableSize 0x0
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize _PCD_SIZE_PcdFlashNvStorageVariableSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  260U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase 0x0
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  261U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize 0x0
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  262U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase 0x0
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase _PCD_SIZE_PcdFlashNvStorageFtwSpareBase
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  263U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize 0x0
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize _PCD_SIZE_PcdFlashNvStorageFtwSpareSize
#define _PCD_TOKEN_PcdFlashFvMrcNormalBase  264U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalBase;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalBase  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalBase
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMrcNormalBase 0x00000000
#define _PCD_SIZE_PcdFlashFvMrcNormalBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalBase _PCD_SIZE_PcdFlashFvMrcNormalBase
#define _PCD_TOKEN_PcdFlashFvMrcNormalSize  265U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalSize;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalSize  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalSize
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMrcNormalSize 0x00100000
#define _PCD_SIZE_PcdFlashFvMrcNormalSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalSize _PCD_SIZE_PcdFlashFvMrcNormalSize
#define _PCD_TOKEN_PcdFlashFvSecPeiBase  252U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiBase  _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvSecPeiBase 0x00000000
#define _PCD_SIZE_PcdFlashFvSecPeiBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiBase _PCD_SIZE_PcdFlashFvSecPeiBase
#define _PCD_TOKEN_PcdFlashFvSecPeiSize  253U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiSize  _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvSecPeiSize 0x00040000
#define _PCD_SIZE_PcdFlashFvSecPeiSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiSize _PCD_SIZE_PcdFlashFvSecPeiSize
#define _PCD_TOKEN_PcdFlashFvMainOffset  271U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainOffset;
#define _PCD_GET_MODE_32_PcdFlashFvMainOffset  _gPcd_FixedAtBuild_PcdFlashFvMainOffset
//#define _PCD_SET_MODE_32_PcdFlashFvMainOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMainOffset 0x00000000
#define _PCD_SIZE_PcdFlashFvMainOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainOffset _PCD_SIZE_PcdFlashFvMainOffset
#define _PCD_TOKEN_PcdFlashFvOemLogoOffset  272U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoOffset;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoOffset  _gPcd_FixedAtBuild_PcdFlashFvOemLogoOffset
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvOemLogoOffset 0x00000000
#define _PCD_SIZE_PcdFlashFvOemLogoOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoOffset _PCD_SIZE_PcdFlashFvOemLogoOffset
#define _PCD_TOKEN_PcdFlashFvMrcNormalOffset  273U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalOffset;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalOffset  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalOffset
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvMrcNormalOffset 0x00000000
#define _PCD_SIZE_PcdFlashFvMrcNormalOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalOffset _PCD_SIZE_PcdFlashFvMrcNormalOffset


#ifdef __cplusplus
}
#endif

#endif
