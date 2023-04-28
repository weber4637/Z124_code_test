/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7FEC3851_DDE3_48c2_892A_9DC80461DEE9
#define _AUTOGENH_7FEC3851_DDE3_48c2_892A_9DC80461DEE9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gAmiModulePkgTokenSpaceGuid;

// PCD definitions
#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress
#define _PCD_TOKEN_AmiPcdPcieBaseAddressBuffer  185U
#define _PCD_GET_MODE_PTR_AmiPcdPcieBaseAddressBuffer  LibPcdGetPtr(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer)
#define _PCD_GET_MODE_SIZE_AmiPcdPcieBaseAddressBuffer  LibPcdGetSize(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer)
#define _PCD_SET_MODE_PTR_AmiPcdPcieBaseAddressBuffer(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_AmiPcdPcieBaseAddressBuffer(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_AmiPcdPcieBaseAddressBuffer, (SizeOfBuffer), (Buffer))
#define _PCD_TOKEN_AmiPcdMaxSegmentSupported  186U
#define _PCD_GET_MODE_32_AmiPcdMaxSegmentSupported  LibPcdGet32(_PCD_TOKEN_AmiPcdMaxSegmentSupported)
#define _PCD_GET_MODE_SIZE_AmiPcdMaxSegmentSupported  LibPcdGetSize(_PCD_TOKEN_AmiPcdMaxSegmentSupported)
#define _PCD_SET_MODE_32_AmiPcdMaxSegmentSupported(Value)  LibPcdSet32(_PCD_TOKEN_AmiPcdMaxSegmentSupported, (Value))
#define _PCD_SET_MODE_32_S_AmiPcdMaxSegmentSupported(Value)  LibPcdSet32S(_PCD_TOKEN_AmiPcdMaxSegmentSupported, (Value))


#ifdef __cplusplus
}
#endif

#endif
