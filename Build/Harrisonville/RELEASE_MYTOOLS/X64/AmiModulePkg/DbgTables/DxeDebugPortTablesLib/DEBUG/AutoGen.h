/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_64723DFA_709D_42F7_959F_5094E71417E9
#define _AUTOGENH_64723DFA_709D_42F7_959F_5094E71417E9

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
extern EFI_GUID gEfiPciIoProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdSerialRegisterBase  209U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdSerialRegisterBase;
#define _PCD_GET_MODE_64_PcdSerialRegisterBase  _gPcd_BinaryPatch_PcdSerialRegisterBase
#define _PCD_SET_MODE_64_PcdSerialRegisterBase(Value)  (_gPcd_BinaryPatch_PcdSerialRegisterBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSerialRegisterBase(Value)  ((_gPcd_BinaryPatch_PcdSerialRegisterBase = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSerialRegisterBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterBase _gPcd_BinaryPatch_Size_PcdSerialRegisterBase
extern UINTN _gPcd_BinaryPatch_Size_PcdSerialRegisterBase; 


#ifdef __cplusplus
}
#endif

#endif
