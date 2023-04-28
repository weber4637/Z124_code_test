/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_85B8322F_A311_4976_AE1C_331B51EDA004
#define _AUTOGENH_85B8322F_A311_4976_AE1C_331B51EDA004

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiCommonPkgTokenSpaceGuid;

// PCD definitions
#define _PCD_TOKEN_AcpiTimerIoPortBaseAddress  217U
extern const UINT16 _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress;
#define _PCD_GET_MODE_16_AcpiTimerIoPortBaseAddress  _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress
//#define _PCD_SET_MODE_16_AcpiTimerIoPortBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_AcpiTimerIoPortBaseAddress 0x1808
#define _PCD_SIZE_AcpiTimerIoPortBaseAddress 2
#define _PCD_GET_MODE_SIZE_AcpiTimerIoPortBaseAddress _PCD_SIZE_AcpiTimerIoPortBaseAddress
#define _PCD_TOKEN_AcpiTimerLength  218U
extern const UINT8 _gPcd_FixedAtBuild_AcpiTimerLength;
#define _PCD_GET_MODE_8_AcpiTimerLength  _gPcd_FixedAtBuild_AcpiTimerLength
//#define _PCD_SET_MODE_8_AcpiTimerLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_AcpiTimerLength 24
#define _PCD_SIZE_AcpiTimerLength 1
#define _PCD_GET_MODE_SIZE_AcpiTimerLength _PCD_SIZE_AcpiTimerLength

RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
