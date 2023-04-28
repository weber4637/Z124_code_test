/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BA5CD127_1960_4fa0_B024_BA8EF79B5209
#define _AUTOGENH_BA5CD127_1960_4fa0_B024_BA8EF79B5209

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// PCD definitions
#define _PCD_TOKEN_PcdNemCodeCacheBase  286U
extern const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheBase;
#define _PCD_GET_MODE_32_PcdNemCodeCacheBase  _gPcd_FixedAtBuild_PcdNemCodeCacheBase
//#define _PCD_SET_MODE_32_PcdNemCodeCacheBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdNemCodeCacheBase 0xffe70000
#define _PCD_SIZE_PcdNemCodeCacheBase 4
#define _PCD_GET_MODE_SIZE_PcdNemCodeCacheBase _PCD_SIZE_PcdNemCodeCacheBase
#define _PCD_TOKEN_PcdNemCodeCacheSize  287U
extern const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheSize;
#define _PCD_GET_MODE_32_PcdNemCodeCacheSize  _gPcd_FixedAtBuild_PcdNemCodeCacheSize
//#define _PCD_SET_MODE_32_PcdNemCodeCacheSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdNemCodeCacheSize 0x180000
#define _PCD_SIZE_PcdNemCodeCacheSize 4
#define _PCD_GET_MODE_SIZE_PcdNemCodeCacheSize _PCD_SIZE_PcdNemCodeCacheSize
#define _PCD_TOKEN_PcdTemporaryRamBase  288U
extern const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamBase;
#define _PCD_GET_MODE_32_PcdTemporaryRamBase  _gPcd_FixedAtBuild_PcdTemporaryRamBase
//#define _PCD_SET_MODE_32_PcdTemporaryRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTemporaryRamBase 0xff700000
#define _PCD_SIZE_PcdTemporaryRamBase 4
#define _PCD_GET_MODE_SIZE_PcdTemporaryRamBase _PCD_SIZE_PcdTemporaryRamBase
#define _PCD_TOKEN_PcdTemporaryRamSize  289U
extern const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamSize;
#define _PCD_GET_MODE_32_PcdTemporaryRamSize  _gPcd_FixedAtBuild_PcdTemporaryRamSize
//#define _PCD_SET_MODE_32_PcdTemporaryRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTemporaryRamSize 0x80000
#define _PCD_SIZE_PcdTemporaryRamSize 4
#define _PCD_GET_MODE_SIZE_PcdTemporaryRamSize _PCD_SIZE_PcdTemporaryRamSize
#define _PCD_TOKEN_PcdCpuMicrocodePatchAddress  290U
extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchAddress  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuMicrocodePatchAddress 0x0
#define _PCD_SIZE_PcdCpuMicrocodePatchAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchAddress _PCD_SIZE_PcdCpuMicrocodePatchAddress
#define _PCD_TOKEN_PcdCpuMicrocodePatchRegionSize  291U
extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchRegionSize  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuMicrocodePatchRegionSize 0x0
#define _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchRegionSize _PCD_SIZE_PcdCpuMicrocodePatchRegionSize
#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress

RETURN_STATUS
EFIAPI
PlatformSecLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
