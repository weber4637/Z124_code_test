/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD
#define _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x7E374E25, 0x8E01, 0x4FEE, {0x87, 0xF2, 0x39, 0x0C, 0x23, 0xC6, 0x06, 0xCD}}

// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gSiPkgTokenSpaceGuid;
extern GUID gPcAtChipsetPkgTokenSpaceGuid;
extern GUID gEfiCommonPkgTokenSpaceGuid;
extern GUID gPlatformModuleTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiBaseAddress  205U
#define _PCD_SIZE_PcdAcpiBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiBaseAddress  _PCD_SIZE_PcdAcpiBaseAddress 
#define _PCD_VALUE_PcdAcpiBaseAddress  0x1800U
extern const  UINT16  _gPcd_FixedAtBuild_PcdAcpiBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiBaseAddress  _gPcd_FixedAtBuild_PcdAcpiBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHpetBaseAddress  369U
#define _PCD_SIZE_PcdHpetBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdHpetBaseAddress  _PCD_SIZE_PcdHpetBaseAddress 
#define _PCD_VALUE_PcdHpetBaseAddress  0xFED00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdHpetBaseAddress;
#define _PCD_GET_MODE_32_PcdHpetBaseAddress  _gPcd_FixedAtBuild_PcdHpetBaseAddress
//#define _PCD_SET_MODE_32_PcdHpetBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdIoApicBaseAddress  365U
#define _PCD_SIZE_PcdIoApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdIoApicBaseAddress  _PCD_SIZE_PcdIoApicBaseAddress 
#define _PCD_VALUE_PcdIoApicBaseAddress  0xFEC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdIoApicBaseAddress;
#define _PCD_GET_MODE_32_PcdIoApicBaseAddress  _gPcd_FixedAtBuild_PcdIoApicBaseAddress
//#define _PCD_SET_MODE_32_PcdIoApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdIoApicSpaceSize  370U
#define _PCD_SIZE_PcdIoApicSpaceSize 8
#define _PCD_GET_MODE_SIZE_PcdIoApicSpaceSize  _PCD_SIZE_PcdIoApicSpaceSize 
#define _PCD_VALUE_PcdIoApicSpaceSize  0x1000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdIoApicSpaceSize;
#define _PCD_GET_MODE_64_PcdIoApicSpaceSize  _gPcd_FixedAtBuild_PcdIoApicSpaceSize
//#define _PCD_SET_MODE_64_PcdIoApicSpaceSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdLocalApicAddress  366U
#define _PCD_SIZE_PcdLocalApicAddress 4
#define _PCD_GET_MODE_SIZE_PcdLocalApicAddress  _PCD_SIZE_PcdLocalApicAddress 
#define _PCD_VALUE_PcdLocalApicAddress  0xFEE00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdLocalApicAddress;
#define _PCD_GET_MODE_32_PcdLocalApicAddress  _gPcd_FixedAtBuild_PcdLocalApicAddress
//#define _PCD_SET_MODE_32_PcdLocalApicAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGeoSpiChipAddress  362U
#define _PCD_SIZE_PcdGeoSpiChipAddress 8
#define _PCD_GET_MODE_SIZE_PcdGeoSpiChipAddress  _PCD_SIZE_PcdGeoSpiChipAddress 
#define _PCD_VALUE_PcdGeoSpiChipAddress  0x00000000001F0000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGeoSpiChipAddress;
#define _PCD_GET_MODE_64_PcdGeoSpiChipAddress  _gPcd_FixedAtBuild_PcdGeoSpiChipAddress
//#define _PCD_SET_MODE_64_PcdGeoSpiChipAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGeoSpiChipSize  363U
#define _PCD_SIZE_PcdGeoSpiChipSize 8
#define _PCD_GET_MODE_SIZE_PcdGeoSpiChipSize  _PCD_SIZE_PcdGeoSpiChipSize 
#define _PCD_VALUE_PcdGeoSpiChipSize  0x000000000010000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGeoSpiChipSize;
#define _PCD_GET_MODE_64_PcdGeoSpiChipSize  _gPcd_FixedAtBuild_PcdGeoSpiChipSize
//#define _PCD_SET_MODE_64_PcdGeoSpiChipSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
