/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8A9A62F5_758B_4965_A28B_0AAC292FBD89
#define _AUTOGENH_8A9A62F5_758B_4965_A28B_0AAC292FBD89

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gSiPkgTokenSpaceGuid;

// PCD definitions
#define _PCD_TOKEN_PcdAcpiBaseAddress  205U
extern const UINT16 _gPcd_FixedAtBuild_PcdAcpiBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiBaseAddress  _gPcd_FixedAtBuild_PcdAcpiBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdAcpiBaseAddress 0x1800
#define _PCD_SIZE_PcdAcpiBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiBaseAddress _PCD_SIZE_PcdAcpiBaseAddress


#ifdef __cplusplus
}
#endif

#endif
