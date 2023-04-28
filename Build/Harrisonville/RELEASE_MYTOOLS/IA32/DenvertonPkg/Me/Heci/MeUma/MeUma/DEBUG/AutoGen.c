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

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0xb6a2aff3, 0x767c, 0x5658, {0xc3, 0x7a, 0xd1, 0xc8, 0x2e, 0xf7, 0x65, 0x43}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "MeUma";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gMemoryInitDoneSentGuid = { 0x12aa57cb, 0xe6f0, 0x40a3, { 0xbd, 0xf4, 0xb0, 0x69, 0x0c, 0x9c, 0xcf, 0x06 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiPkgTokenSpaceGuid = {0x977c97c1, 0x47e1, 0x4b6b, {0x96, 0x69, 0x43, 0x66, 0x99, 0xcb, 0xe4, 0x5b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCommonPkgTokenSpaceGuid = { 0x86cf2b1a, 0xb3da, 0x4642, { 0x95, 0xf5, 0xd0, 0x1c, 0x6c, 0x1c, 0x60, 0xb8 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformInfoHobGuid = { 0x9F504A57, 0x06C2, 0x472D, { 0x9B, 0x5F, 0xC1, 0xA7, 0x0D, 0xEE, 0x1C, 0x77} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformModuleTokenSpaceGuid = { 0xaec0dee0, 0xf04d, 0x425d, { 0x9a, 0xcd, 0xa9, 0x4b, 0x49, 0xc7, 0x51, 0x7a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gCpPlatFlashTokenSpaceGuid = { 0xc9c39664, 0x96dd, 0x4c5c, { 0xaf, 0xd7, 0xcd, 0x65, 0x76, 0x29, 0xcf, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gServerCommonTokenSpaceGuid = { 0x356471b1, 0xb483, 0x42ae, { 0xb6, 0xe7, 0x3b, 0x2e, 0xba, 0xb1, 0x4e, 0x15 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSetupVariableGuid = {0xc598db5c, 0x50e7, 0x46f6, { 0xab, 0x16, 0x41, 0x6f, 0x47, 0x23, 0x9c, 0xa9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceProtocolGuid = { 0x76B6BDFA, 0x2ACD, 0x4462, { 0x9E, 0x3F, 0xCB, 0x58, 0xC9, 0x69, 0xD9, 0x37 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceExProtocolGuid = { 0x1ea81bec, 0xf01a, 0x4d98, { 0xa2, 0x1,  0x4a, 0x61, 0xce, 0x2f, 0xc0, 0x22 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmtForcePushPetPolicyGuid = { 0xacc8e1e4, 0x9f9f, 0x4e40, { 0xa5, 0x7e, 0xf9, 0x9e, 0x52, 0xf3, 0x4c, 0xa5 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gMeBiosExtensionSetupGuid = { 0xaf013532, 0xc828, 0x4fbd, { 0x20, 0xae, 0xfe, 0xe6, 0xaf, 0xbe, 0xdd, 0x4e }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gMeUmaPpiGuid = { 0x8c376010, 0x2400, 0x4d7d, { 0xb4, 0x7b, 0x9d, 0x85, 0x1d, 0xf3, 0xc9, 0xd1 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiMePlatformPolicyPpiGuid = { 0x9f685891, 0x4e6f, 0x445c, { 0xbb, 0x9e, 0xe5, 0x7a, 0x28, 0xfa, 0x53, 0xa0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchResetPpiGuid = { 0x433e0f9f, 0x5ae, 0x410a, { 0xa0, 0xc3, 0xbf, 0x29, 0x8e, 0xcb, 0x25, 0xac }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServicePpiGuid = {0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchPolicyPpiGuid = { 0xdfe2b897, 0xe8e, 0x4926, { 0xbc, 0x69, 0xe5, 0xed, 0xd3, 0xf9, 0x38, 0xe1 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gHeciPpiGuid = { 0xd14319e2, 0x407a, 0x9580, { 0x8d, 0xe5, 0x51, 0xa8, 0xff, 0xc6, 0xd7, 0xd7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gWdtPpiGuid = { 0xF38D1338, 0xAF7A, 0x4FB6, { 0x91, 0xDB, 0x1A, 0x9C, 0x21, 0x83, 0x57, 0x0D }};

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdDebugPropertyMask  194U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  200U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  201U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiBaseAddress  205U
#define _PCD_SIZE_PcdAcpiBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiBaseAddress  _PCD_SIZE_PcdAcpiBaseAddress 
#define _PCD_VALUE_PcdAcpiBaseAddress  0x1800U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdAcpiBaseAddress = _PCD_VALUE_PcdAcpiBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_PcdAcpiBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiBaseAddress  _gPcd_FixedAtBuild_PcdAcpiBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AcpiTimerIoPortBaseAddress  217U
#define _PCD_SIZE_AcpiTimerIoPortBaseAddress 2
#define _PCD_GET_MODE_SIZE_AcpiTimerIoPortBaseAddress  _PCD_SIZE_AcpiTimerIoPortBaseAddress 
#define _PCD_VALUE_AcpiTimerIoPortBaseAddress  0x1808U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress = _PCD_VALUE_AcpiTimerIoPortBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress;
#define _PCD_GET_MODE_16_AcpiTimerIoPortBaseAddress  _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress
//#define _PCD_SET_MODE_16_AcpiTimerIoPortBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AcpiTimerLength  218U
#define _PCD_SIZE_AcpiTimerLength 1
#define _PCD_GET_MODE_SIZE_AcpiTimerLength  _PCD_SIZE_AcpiTimerLength 
#define _PCD_VALUE_AcpiTimerLength  24U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_AcpiTimerLength = _PCD_VALUE_AcpiTimerLength;
extern const  UINT8  _gPcd_FixedAtBuild_AcpiTimerLength;
#define _PCD_GET_MODE_8_AcpiTimerLength  _gPcd_FixedAtBuild_AcpiTimerLength
//#define _PCD_SET_MODE_8_AcpiTimerLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdMaxPeiPerformanceLogEntries  223U
#define _PCD_SIZE_PcdMaxPeiPerformanceLogEntries 1
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPerformanceLogEntries  _PCD_SIZE_PcdMaxPeiPerformanceLogEntries 
#define _PCD_VALUE_PcdMaxPeiPerformanceLogEntries  40U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries = _PCD_VALUE_PcdMaxPeiPerformanceLogEntries;
extern const  UINT8  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries;
#define _PCD_GET_MODE_8_PcdMaxPeiPerformanceLogEntries  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries
//#define _PCD_SET_MODE_8_PcdMaxPeiPerformanceLogEntries  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxPeiPerformanceLogEntries16  224U
#define _PCD_SIZE_PcdMaxPeiPerformanceLogEntries16 2
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPerformanceLogEntries16  _PCD_SIZE_PcdMaxPeiPerformanceLogEntries16 
#define _PCD_VALUE_PcdMaxPeiPerformanceLogEntries16  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16 = _PCD_VALUE_PcdMaxPeiPerformanceLogEntries16;
extern const  UINT16  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16;
#define _PCD_GET_MODE_16_PcdMaxPeiPerformanceLogEntries16  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16
//#define _PCD_SET_MODE_16_PcdMaxPeiPerformanceLogEntries16  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  225U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = AcpiTimerLibConstructor ();
  ASSERT_EFI_ERROR (Status);

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
  return MeUmaEntry (FileHandle, PeiServices);
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
