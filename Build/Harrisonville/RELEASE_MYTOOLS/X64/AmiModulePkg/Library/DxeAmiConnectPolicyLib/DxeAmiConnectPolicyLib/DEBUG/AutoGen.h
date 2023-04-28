/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AFEAF97A_ACC2_4FB9_A744_3ACA4E40A260
#define _AUTOGENH_AFEAF97A_ACC2_4FB9_A744_3ACA4E40A260

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gAmiBdsConnectPolicyProtocolGuid;

EFI_STATUS
EFIAPI
AmiConnectPolicyLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
