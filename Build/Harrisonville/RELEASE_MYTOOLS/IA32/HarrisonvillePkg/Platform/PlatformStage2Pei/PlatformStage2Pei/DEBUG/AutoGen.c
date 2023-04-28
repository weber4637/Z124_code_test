/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x233DF097, 0x3218, 0x47b2, {0x9E, 0x09, 0xFE, 0x58, 0xC2, 0xB2, 0x0D, 0x22}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PlatformStage2Pei";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryConfigDataGuid = { 0x80dbd530, 0xb74c, 0x4f11, {0x8c, 0x03, 0x41, 0x86, 0x65, 0x53, 0x28, 0x31}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gCpPlatFlashTokenSpaceGuid = { 0xc9c39664, 0x96dd, 0x4c5c, { 0xaf, 0xd7, 0xcd, 0x65, 0x76, 0x29, 0xcf, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformInfoHobGuid = { 0x9F504A57, 0x06C2, 0x472D, { 0x9B, 0x5F, 0xC1, 0xA7, 0x0D, 0xEE, 0x1C, 0x77} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformModuleTokenSpaceGuid = { 0xaec0dee0, 0xf04d, 0x425d, { 0x9a, 0xcd, 0xa9, 0x4b, 0x49, 0xc7, 0x51, 0x7a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gServerCommonTokenSpaceGuid = { 0x356471b1, 0xb483, 0x42ae, { 0xb6, 0xe7, 0x3b, 0x2e, 0xba, 0xb1, 0x4e, 0x15 } };

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiPlatformMemorySizePpiGuid = {0x9a7ef41e, 0xc140, 0x4bd1, {0xb8, 0x84, 0x1e, 0x11, 0x24, 0xb, 0x4c, 0xe6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiPlatformMemoryRangePpiGuid = { 0x30eb2979, 0xb0f7, 0x4d60, {0xb2, 0xdc, 0x1a, 0x2c, 0x96, 0xce, 0xb1, 0xf4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid = {0xf894643d, 0xc449, 0x42d1, {0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiSmbusPpiGuid = { 0xabd42895, 0x78cf, 0x4872, { 0x84, 0x44, 0x1b, 0x5c, 0x18, 0x0b, 0xfb, 0xda }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiStallPpiGuid = { 0x1f4c6f90, 0xb06b, 0x48d8, {0xa2, 0x01, 0xba, 0xe5, 0xf1, 0xcd, 0x7d, 0x56 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEndOfPeiSignalPpiGuid = {0x605EA650, 0xC65C, 0x42e1, {0xBA, 0x80, 0x91, 0xA5, 0x2A, 0xB6, 0x18, 0xC6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiCachePpiGuid = { 0xC153205A, 0xE898, 0x4C24, { 0x86, 0x89, 0xA4, 0xB4, 0xBC, 0xC5, 0xC8, 0xA2 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchPolicyPpiGuid = { 0xdfe2b897, 0xe8e, 0x4926, { 0xbc, 0x69, 0xe5, 0xed, 0xd3, 0xf9, 0x38, 0xe1 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServicePpiGuid = {0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32} };

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainBase = _PCD_VALUE_PcdFlashFvMainBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainSize = _PCD_VALUE_PcdFlashFvMainSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdBiosBase = _PCD_VALUE_PcdBiosBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdBiosSize = _PCD_VALUE_PcdBiosSize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  200U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  194U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  201U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVerifyNodeInList  196U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  197U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  198U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  199U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyBase  248U
#define _PCD_SIZE_PcdFlashFvLegacyBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyBase  _PCD_SIZE_PcdFlashFvLegacyBase 
#define _PCD_VALUE_PcdFlashFvLegacyBase  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyBase = _PCD_VALUE_PcdFlashFvLegacyBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacySize  249U
#define _PCD_SIZE_PcdFlashFvLegacySize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacySize  _PCD_SIZE_PcdFlashFvLegacySize 
#define _PCD_VALUE_PcdFlashFvLegacySize  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacySize = _PCD_VALUE_PcdFlashFvLegacySize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacySize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacySize  _gPcd_FixedAtBuild_PcdFlashFvLegacySize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyFreeBase  250U
#define _PCD_SIZE_PcdFlashFvLegacyFreeBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeBase  _PCD_SIZE_PcdFlashFvLegacyFreeBase 
#define _PCD_VALUE_PcdFlashFvLegacyFreeBase  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase = _PCD_VALUE_PcdFlashFvLegacyFreeBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyFreeSize  251U
#define _PCD_SIZE_PcdFlashFvLegacyFreeSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeSize  _PCD_SIZE_PcdFlashFvLegacyFreeSize 
#define _PCD_VALUE_PcdFlashFvLegacyFreeSize  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize = _PCD_VALUE_PcdFlashFvLegacyFreeSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeSize  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvSecPeiBase  252U
#define _PCD_SIZE_PcdFlashFvSecPeiBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiBase  _PCD_SIZE_PcdFlashFvSecPeiBase 
#define _PCD_VALUE_PcdFlashFvSecPeiBase  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase = _PCD_VALUE_PcdFlashFvSecPeiBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiBase  _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvSecPeiSize  253U
#define _PCD_SIZE_PcdFlashFvSecPeiSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiSize  _PCD_SIZE_PcdFlashFvSecPeiSize 
#define _PCD_VALUE_PcdFlashFvSecPeiSize  0x00040000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize = _PCD_VALUE_PcdFlashFvSecPeiSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiSize  _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvOemLogoBase  254U
#define _PCD_SIZE_PcdFlashFvOemLogoBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoBase  _PCD_SIZE_PcdFlashFvOemLogoBase 
#define _PCD_VALUE_PcdFlashFvOemLogoBase  0xFF820000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase = _PCD_VALUE_PcdFlashFvOemLogoBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoBase  _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvOemLogoSize  255U
#define _PCD_SIZE_PcdFlashFvOemLogoSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoSize  _PCD_SIZE_PcdFlashFvOemLogoSize 
#define _PCD_VALUE_PcdFlashFvOemLogoSize  0x00200000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize = _PCD_VALUE_PcdFlashFvOemLogoSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoSize  _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiOptimizedBoot  3U
#define _PCD_GET_MODE_BOOL_PcdUefiOptimizedBoot  LibPcdGetBool(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_GET_MODE_SIZE_PcdUefiOptimizedBoot  LibPcdGetSize(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_SET_MODE_BOOL_PcdUefiOptimizedBoot(Value)  LibPcdSetBool(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdUefiOptimizedBoot(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))



VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return PeiInitPlatformStage2 (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
