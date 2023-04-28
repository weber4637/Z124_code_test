/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_57D8BB0D_0A4D_405e_A212_E1EF70E1F7E1
#define _AUTOGENH_57D8BB0D_0A4D_405e_A212_E1EF70E1F7E1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gAmiUsbSmmProtocolGuid;

EFI_STATUS
EFIAPI
AmiUsbSmmGlobalDataValidationLibLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
