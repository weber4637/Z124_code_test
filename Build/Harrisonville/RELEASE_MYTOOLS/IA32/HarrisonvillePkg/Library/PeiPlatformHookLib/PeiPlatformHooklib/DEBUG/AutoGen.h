/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AD901798_B0DA_4b20_B90C_283F886E76D0
#define _AUTOGENH_AD901798_B0DA_4b20_B90C_283F886E76D0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gPlatformInfoHobGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;

// PPIs
extern EFI_GUID gPchPolicyPpiGuid;

// PCD definitions
#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress
#define _PCD_TOKEN_PcdFlashFvLegacyBase  248U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashFvLegacyBase 0x00000000
#define _PCD_SIZE_PcdFlashFvLegacyBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyBase _PCD_SIZE_PcdFlashFvLegacyBase
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
#define _PCD_TOKEN_PcdUefiOptimizedBoot  3U
#define _PCD_GET_MODE_BOOL_PcdUefiOptimizedBoot  LibPcdGetBool(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_GET_MODE_SIZE_PcdUefiOptimizedBoot  LibPcdGetSize(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_SET_MODE_BOOL_PcdUefiOptimizedBoot(Value)  LibPcdSetBool(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdUefiOptimizedBoot(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))


#ifdef __cplusplus
}
#endif

#endif
