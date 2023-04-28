/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_94F399A7_C224_40AD_B695_FDF7EFDE4805
#define _AUTOGENH_94F399A7_C224_40AD_B695_FDF7EFDE4805

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress
#define _PCD_TOKEN_PcdRcrbBaseAddress  219U
extern const UINT32 _gPcd_FixedAtBuild_PcdRcrbBaseAddress;
#define _PCD_GET_MODE_32_PcdRcrbBaseAddress  _gPcd_FixedAtBuild_PcdRcrbBaseAddress
//#define _PCD_SET_MODE_32_PcdRcrbBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdRcrbBaseAddress 0xFED1C000
#define _PCD_SIZE_PcdRcrbBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdRcrbBaseAddress _PCD_SIZE_PcdRcrbBaseAddress
#define _PCD_TOKEN_PcdSbWakeType  2U
#define _PCD_GET_MODE_8_PcdSbWakeType  LibPcdGet8(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_GET_MODE_SIZE_PcdSbWakeType  LibPcdGetSize(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_SET_MODE_8_PcdSbWakeType(Value)  LibPcdSet8(_PCD_TOKEN_PcdSbWakeType, (Value))
#define _PCD_SET_MODE_8_S_PcdSbWakeType(Value)  LibPcdSet8S(_PCD_TOKEN_PcdSbWakeType, (Value))
#define _PCD_TOKEN_PcdAcpiIoPortBaseAddress  220U
extern const UINT16 _gPcd_FixedAtBuild_PcdAcpiIoPortBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiIoPortBaseAddress  _gPcd_FixedAtBuild_PcdAcpiIoPortBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiIoPortBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdAcpiIoPortBaseAddress 0x1800
#define _PCD_SIZE_PcdAcpiIoPortBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiIoPortBaseAddress _PCD_SIZE_PcdAcpiIoPortBaseAddress


#ifdef __cplusplus
}
#endif

#endif
