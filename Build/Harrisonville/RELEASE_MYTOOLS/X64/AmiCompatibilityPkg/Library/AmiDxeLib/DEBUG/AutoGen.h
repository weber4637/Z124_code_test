/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_23047428_cbb1_4fb2_8f19_f8cbf8c40381
#define _AUTOGENH_23047428_cbb1_4fb2_8f19_f8cbf8c40381

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
extern const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDebugPrintErrorLevel 0x80000046
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel _PCD_SIZE_PcdDebugPrintErrorLevel


#ifdef __cplusplus
}
#endif

#endif
