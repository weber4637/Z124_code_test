/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BB1AC992_B2CA_4744_84B7_915C185576C5
#define _AUTOGENH_BB1AC992_B2CA_4744_84B7_915C185576C5

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

// PPIs
extern EFI_GUID gPchPolicyPpiGuid;

// PCD definitions
#define _PCD_TOKEN_PcdAcpiBaseAddress  205U
extern const UINT16 _gPcd_FixedAtBuild_PcdAcpiBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiBaseAddress  _gPcd_FixedAtBuild_PcdAcpiBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdAcpiBaseAddress 0x1800
#define _PCD_SIZE_PcdAcpiBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiBaseAddress _PCD_SIZE_PcdAcpiBaseAddress
#define _PCD_TOKEN_PcdSmbusBaseAddress  268U
extern const UINT16 _gPcd_FixedAtBuild_PcdSmbusBaseAddress;
#define _PCD_GET_MODE_16_PcdSmbusBaseAddress  _gPcd_FixedAtBuild_PcdSmbusBaseAddress
//#define _PCD_SET_MODE_16_PcdSmbusBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSmbusBaseAddress 0x0000EFA0
#define _PCD_SIZE_PcdSmbusBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdSmbusBaseAddress _PCD_SIZE_PcdSmbusBaseAddress


#ifdef __cplusplus
}
#endif

#endif
