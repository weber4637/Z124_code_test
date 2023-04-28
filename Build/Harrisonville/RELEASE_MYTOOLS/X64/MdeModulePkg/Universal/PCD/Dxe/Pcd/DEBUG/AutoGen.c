/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiDriverEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PcdDxe";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseHobGuid = { 0xEA296D92, 0x0B69, 0x423C, { 0x8C, 0x28, 0x33, 0xB4, 0xE0, 0xA9, 0x12, 0x68 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseSignatureGuid = { 0x3c7d193c, 0x682c, 0x4c14, { 0xa6, 0x8f, 0x55, 0x2d, 0xea, 0x4f, 0x43, 0x7e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualDiskGuid = { 0x77AB535A, 0x45FC, 0x624B, {0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualCdGuid = { 0x3D5ABD30, 0x4175, 0x87CE, {0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualDiskGuid = { 0x5CEA02C9, 0x4D07, 0x69D3, {0x26, 0x9F ,0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualCdGuid = { 0x08018188, 0x42CD, 0xBB48, {0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdProtocolGuid = { 0x11B34006, 0xD85B, 0x4D0A, { 0xA2, 0x90, 0xD5, 0xA5, 0x71, 0x31, 0x0E, 0xF7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478,  0xefd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServiceProtocolGuid = { 0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVpdBaseAddress = _PCD_VALUE_PcdVpdBaseAddress;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  294U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  296U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  297U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  298U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  299U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  300U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  301U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

//
// External PCD database debug information
//
#if 0
DXE_PCD_DATABASE_INIT gDXEPcdDbInit = {
  /* SkuIdTable */
  { 1, 0U,  },
  { 0x2049204D2041ULL }, /*  PcdAcpiDefaultOemTableId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */


  { 0x02U }, /*  PcdInterruptOverrideSettingTable0GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x09U }, /*  PcdInterruptOverrideSettingTable1GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0xFEC00000U }, /*  PcdIoApicSettingIoApicAddress_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0xFFDB04CFU }, /*  PcdCpuProcessorFeatureUserConfiguration_2ada836d_0a3d_43d6_a25a_3845cad2d400[1] */
  { 1U }, /*  AmiPcdMaxSegmentSupported_d34d3234_38ba_428b_9acd_84e830a80785[1] */


  /* VPD */

  /* ExMapTable */
  {
    { 0x60008007U, 193U, 0U },

  },
  /* LocalTokenNumberTable */
  {
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuS3DataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuHotPlugDataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuCallbackSignal_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuConfigContextBuffer_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdAcpiDefaultOemTableId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuPageTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuMtrrTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable0Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable0GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdIoApicSettingIoApicAddress_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIoApicSettingGlobalInterruptBase_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdIoApicSettingIoApicId_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIoApicSettingNmiEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIoApicSettingNmiSource_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIoApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIoApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdLocalApicSettingNmiEnabelApicIdMask_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdLocalApicSettingAddressOverrideEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdLocalApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdLocalApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdLocalApicSettingLocalApicLint_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdLocalApicAddressOverride_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDeviceInfoNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdCpuProcessorFeatureUserConfiguration_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureUserConfigurationEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuEnergyPolicy_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuAcpiLvl2Addr_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT16,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuPackageCStateLimit_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuClockModulationDutyCycle_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdPlatformCpuSocketCount_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdPlatformCpuSocketNames_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdPlatformCpuAssetTags_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdIsPowerOnReset_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuDcuMode_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdPlatformCpuFrequencyLists_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureSetting_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureCapability_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureSettingEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureCapabilityEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuRtitSize_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuRtitSetupOption_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdCpuRtitTraceHubBar_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeHour_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeMinute_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeSecond_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdEmmcManufacturerId_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdProductSerialNumber_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdS3BootScriptTablePrivateDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdS3BootScriptTablePrivateSmmDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.AmiPcdPciOutOfResourcesStatus_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.AmiPcdMaxSegmentSupported_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdPostStatusCheck_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdTpmSmbiosCharacteristicSupport_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosConfigFirmware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Init.PcdTpmSmbiosConfigSoftware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosConfigOem_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosOemDefined_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_STRING,

  },
  /* GuidTable */
  {
    { 0x2ADA836D, 0x0A3D, 0x43D6, { 0xA2, 0x5A, 0x38, 0x45, 0xCA, 0xD2, 0xD4, 0x00 }},

  },
  { 0U }, /* PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */
  { 8U }, /* PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 26U }, /* PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 44U }, /* PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 62U }, /* PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 80U }, /* PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 98U }, /* PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 116U }, /* PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 134U }, /* PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 152U }, /* PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 170U }, /* PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 188U }, /* PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 206U }, /* PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 224U }, /* PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 242U }, /* PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 260U }, /* PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 278U }, /* PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 296U }, /* PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 314U }, /* PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 332U }, /* PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 350U }, /* PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 368U }, /* PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 386U }, /* PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 404U }, /* PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 422U }, /* PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 440U }, /* PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 458U }, /* PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 476U }, /* PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 494U }, /* PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 512U }, /* PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 530U }, /* PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 548U }, /* PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 566U }, /* PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 584U }, /* PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 602U }, /* PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 620U }, /* PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 638U }, /* PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 656U }, /* PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 674U }, /* PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 692U }, /* PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 710U }, /* PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 728U }, /* PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 746U }, /* PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 764U }, /* PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 782U }, /* PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 800U }, /* PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 818U }, /* PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 836U }, /* PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 854U }, /* PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 872U }, /* PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 890U }, /* PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 908U }, /* PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 926U }, /* AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785[1] */
  { 934U }, /* PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400[1] */


/* SkuHead */
  {
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuS3DataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuHotPlugDataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuCallbackSignal_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuConfigContextBuffer_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdAcpiDefaultOemTableId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuPageTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuMtrrTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable0Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable0TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable0GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdInterruptOverrideSettingTable1GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable2GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable3GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable4GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable5GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable6GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable7GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable8GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable9GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable10GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable11GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable12GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable13GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable14GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdInterruptOverrideSettingTable15GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdIoApicSettingIoApicAddress_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIoApicSettingGlobalInterruptBase_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdIoApicSettingIoApicId_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIoApicSettingNmiEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIoApicSettingNmiSource_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIoApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIoApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdLocalApicSettingNmiEnabelApicIdMask_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdLocalApicSettingAddressOverrideEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdLocalApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdLocalApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdLocalApicSettingLocalApicLint_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdLocalApicAddressOverride_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDeviceInfoNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdCpuProcessorFeatureUserConfiguration_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureUserConfigurationEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuEnergyPolicy_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuAcpiLvl2Addr_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT16, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuPackageCStateLimit_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuClockModulationDutyCycle_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdPlatformCpuSocketCount_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdPlatformCpuSocketNames_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdPlatformCpuAssetTags_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdIsPowerOnReset_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuDcuMode_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdPlatformCpuFrequencyLists_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureSetting_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureCapability_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureSettingEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuProcessorFeatureCapabilityEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuRtitSize_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuRtitSetupOption_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdCpuRtitTraceHubBar_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeHour_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeMinute_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdRtcWakeupTimeSecond_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdEmmcManufacturerId_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8) | PCD_DATUM_TYPE_UINT8 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdProductSerialNumber_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdS3BootScriptTablePrivateDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdS3BootScriptTablePrivateSmmDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT64 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.AmiPcdPciOutOfResourcesStatus_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.AmiPcdMaxSegmentSupported_d34d3234_38ba_428b_9acd_84e830a80785) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPostStatusCheck_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdTpmSmbiosCharacteristicSupport_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosConfigFirmware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdTpmSmbiosConfigSoftware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosConfigOem_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_DATUM_TYPE_UINT8_BOOLEAN | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdTpmSmbiosOemDefined_eb98a90a_42ee_4a36_8dcc_afa722c9cab3) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
  
  },
 /* StringTable */
  {0x41, 0x4c, 0x41, 0x53, 0x4b, 0x41, 0x00,0x00}, /* PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x01,  0x10,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x01,  0x10,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x17,  0x00,  0x00,  0x04,  0x13,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x06,  0x03}, /* PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x18,  0x00,  0x00,  0x05,  0x14,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x07,  0x03}, /* PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x19,  0x00,  0x00,  0x06,  0x15,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x08,  0x03}, /* PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x1A,  0x00,  0x00,  0x07,  0x16,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x09,  0x03}, /* PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x1B,  0x00,  0x00,  0x08,  0x17,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x19,  0x03}, /* PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x00,  0x00,  0x00,  0x00,  0x1F,  0x00,  0x00,  0x01,  0x10,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x17,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x01,  0x10,  0x02,  0x11,  0x03,  0x12,  0x04,  0x13,  0xFF,  0xFF}, /* PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x18,  0x00,  0x00,  0x00,  0x00,  0x03,  0x00,  0x02,  0x11,  0x03,  0x12,  0x04,  0x13,  0x01,  0x10,  0xFF,  0xFF}, /* PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x19,  0x00,  0x00,  0x00,  0x00,  0x05,  0x00,  0x03,  0x12,  0x04,  0x13,  0x01,  0x10,  0x02,  0x11,  0xFF,  0xFF}, /* PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x00,  0x1A,  0x00,  0x00,  0x00,  0x00,  0x07,  0x00,  0x04,  0x13,  0x01,  0x10,  0x02,  0x11,  0x03,  0x12,  0xFF,  0xFF}, /* PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF}, /* PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x20, 0x53, 0x4b, 0x55, 0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x00,0x00}, /* PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  {0x0, 0x0, 0x0, 0xE0, 0x0, 0x0, 0x0, 0x0}, /* AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785 */
  {0x0, 0x00}, /* PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400 */

  /* SizeTable */
  {
    7U, ['7U'], /* PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
    18U, ['18U'], /* PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    18U, ['18U'], /* PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    17U, ['17U'], /* PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a */
    0x8U, ['8U'], /* AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785 */
    1U, ['1U'], /* PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400 */

  },


  { 0x01U }, /*  PcdInterruptOverrideSettingTable0Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x01U }, /*  PcdInterruptOverrideSettingTable1Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x09U }, /*  PcdInterruptOverrideSettingTable1SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x01U }, /*  PcdInterruptOverrideSettingTable1Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x03U }, /*  PcdInterruptOverrideSettingTable1TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x02U }, /*  PcdIoApicSettingIoApicId_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x03U }, /*  PcdLocalApicSettingNmiEnabelApicIdMask_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x01U }, /*  PcdLocalApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x01U }, /*  PcdLocalApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x01U }, /*  PcdLocalApicSettingLocalApicLint_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */
  { 0x13U }, /*  PcdPciDeviceInfoNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a[1] */


  { 1U }, /*  PcdPostStatusCheck_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1] */
  { 1U }, /*  PcdTpmSmbiosCharacteristicSupport_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1] */
  { 1U }, /*  PcdTpmSmbiosConfigSoftware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1] */


  0
};
#endif


EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
HobLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = HobLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{

}

const UINT32 _gUefiDriverRevision = 0x00000000U;
const UINT32 _gDxeRevision = 0x00000000U;


EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )

{
  return PcdDxeInit (ImageHandle, SystemTable);
}

VOID
EFIAPI
ExitDriver (
  IN EFI_STATUS  Status
  )
{
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (gImageHandle, gST);
  }
  gBS->Exit (gImageHandle, Status, 0, NULL);
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
