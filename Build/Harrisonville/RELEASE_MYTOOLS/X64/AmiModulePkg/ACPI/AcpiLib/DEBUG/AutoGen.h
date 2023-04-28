/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C9DBF045_9DFC_44f6_AF11_733E5F5A879C
#define _AUTOGENH_C9DBF045_9DFC_44f6_AF11_733E5F5A879C

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSioProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdAcpiDefaultOemTableId  10U
#define _PCD_GET_MODE_64_PcdAcpiDefaultOemTableId  LibPcdGet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemTableId  LibPcdGetSize(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_SET_MODE_64_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))
#define _PCD_SET_MODE_64_S_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64S(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))

EFI_STATUS
EFIAPI
AmiAcpiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
