/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_00000000_0000_0000_0000_000000000000
#define _AUTOGENH_00000000_0000_0000_0000_000000000000

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid;

// Protocols
extern GUID gEfiUsbIoProtocolGuid;
extern GUID gEfiDiskIoProtocolGuid;
extern GUID gEfiLoadFileProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdShellFile  293U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellFile[];
#define _PCD_GET_MODE_PTR_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
//#define _PCD_SET_MODE_PTR_PcdShellFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellFile (VOID *)_gPcd_FixedAtBuild_PcdShellFile
#define _PCD_SIZE_PcdShellFile 16
#define _PCD_GET_MODE_SIZE_PcdShellFile _PCD_SIZE_PcdShellFile


#ifdef __cplusplus
}
#endif

#endif
