#define BUILD_TOOL_GENERATED_PROTOCOL_TABLE_VERSION 1

typedef struct{
    EFI_GUID Guid;
    CHAR8 *Name;
} BUILD_TOOL_GENERATED_PROTOCOL_TABLE;

GLOBAL_REMOVE_IF_UNREFERENCED BUILD_TOOL_GENERATED_PROTOCOL_TABLE BuildToolGeneratedProtocolTable[] = {
	{{ 0x00720665, 0x67eb, 0x4a99, { 0xba, 0xf7, 0xd3, 0xc3, 0x3a, 0x1c, 0x7c, 0xc9 }}, "EfiTcp4ServiceBinding"},
	{{ 0x0325a554, 0x05be, 0x466b, { 0xbc, 0x8c, 0x70, 0xbe, 0x3c, 0x9d, 0xaf, 0xb1 }}, "AmiTcg2Info"},
	{{ 0x03583ff6, 0xcb36, 0x4940, { 0x94, 0x7e, 0xb9, 0xb3, 0x9f, 0x4a, 0xfa, 0xf7 }}, "EfiSmbios"},
	{{ 0x0379be4e, 0xd706, 0x437d, { 0xb0, 0x37, 0xed, 0xb8, 0x2f, 0xb7, 0x72, 0xa4 }}, "EfiDevicePathUtilities"},
	{{ 0x0387f555, 0x20a8, 0x4fc2, { 0xbb, 0x94, 0xcd, 0x30, 0xda, 0x1b, 0x40, 0x08 }}, "EfiWindowsInt10Workaround"},
	{{ 0x03c4e603, 0xac28, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiPxeBaseCode"},
	{{ 0x05c99a21, 0xc70f, 0x4ad2, { 0x8a, 0x5f, 0x35, 0xdf, 0x33, 0x43, 0xf5, 0x1e }}, "EfiDevicePathFromText"},
	{{ 0x074e1e48, 0x8132, 0x47a1, { 0x8c, 0x2c, 0x3f, 0x14, 0xad, 0x9a, 0x66, 0xdc }}, "EfiGlobalNvsArea"},
	{{ 0x07d75280, 0x27d4, 0x4d69, { 0x90, 0xd0, 0x56, 0x43, 0xe2, 0x38, 0xb3, 0x41 }}, "EfiPciPlatform"},
	{{ 0x0903dd14, 0x2ca0, 0x458a, { 0xb5, 0xeb, 0x0c, 0x0c, 0xa3, 0x0d, 0x78, 0x5c }}, "AmiSmbiosBoard"},
	{{ 0x09576e91, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiDevicePath"},
	{{ 0x0a8badd5, 0x03b8, 0x4d19, { 0xb1, 0x28, 0x7b, 0x8f, 0x0e, 0xda, 0xa5, 0x96 }}, "EfiConfigKeywordHandler"},
	{{ 0x0adfb62d, 0xff74, 0x484c, { 0x89, 0x44, 0xf8, 0x5c, 0x4b, 0xea, 0x87, 0xa8 }}, "AmiEfiKeycode"},
	{{ 0x0d66a1cf, 0x79ad, 0x494b, { 0x97, 0x8b, 0xb2, 0x59, 0x81, 0x68, 0x93, 0x34 }}, "PchPcieIoTrap"},
	{{ 0x0fc50878, 0x1633, 0x432a, { 0xbd, 0xe4, 0x84, 0x13, 0x57, 0xfc, 0x15, 0xe9 }}, "AmiScsiPassThruInit"},
	{{ 0x0fd96974, 0x23aa, 0x4cdc, { 0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a }}, "EfiHiiString"},
	{{ 0x107a772c, 0xd5e1, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiComponentName"},
	{{ 0x113fd31a, 0xbe8b, 0x418b, { 0xb0, 0x34, 0x7e, 0xaf, 0xe5, 0xc6, 0x0c, 0x99 }}, "EsaInterfacesForTse"},
	{{ 0x11b34006, 0xd85b, 0x4d0a, { 0xa2, 0x90, 0xd5, 0xa5, 0x71, 0x31, 0x0e, 0xf7 }}, "Pcd"},
	{{ 0x11fbfdfb, 0x10d2, 0x43e6, { 0xb5, 0xb1, 0xb4, 0x38, 0x6e, 0xdc, 0xcb, 0x9a }}, "EfiMeInfo"},
	{{ 0x120d28aa, 0x6630, 0x46f0, { 0x81, 0x57, 0xc0, 0xad, 0xc2, 0x38, 0x3b, 0xf5 }}, "AmiLegacyBoot"},
	{{ 0x125f2de1, 0xfb85, 0x440c, { 0xa5, 0x4c, 0x4d, 0x99, 0x35, 0x8a, 0x8d, 0x38 }}, "EfiAcpiS3Save"},
	{{ 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 }}, "EfiPcd"},
	{{ 0x13ac6dd1, 0x73d0, 0x11d4, { 0xb0, 0x6b, 0x00, 0xaa, 0x00, 0xbd, 0x6d, 0xe7 }}, "EfiEbc"},
	{{ 0x143b7632, 0xb81b, 0x4cb7, { 0xab, 0xd3, 0xb6, 0x25, 0xa5, 0xb9, 0xbf, 0xfe }}, "EfiExtScsiPassThru"},
	{{ 0x151c8eae, 0x7f2c, 0x472c, { 0x9e, 0x54, 0x98, 0x28, 0x19, 0x4f, 0x6a, 0x88 }}, "EfiDiskIo2"},
	{{ 0x16d11030, 0x71ba, 0x4e5e, { 0xa9, 0xf9, 0xb4, 0x75, 0xa5, 0x49, 0x04, 0x8a }}, "EfiRedirElog"},
	{{ 0x170e13c0, 0xbf1b, 0x4218, { 0x87, 0x1d, 0x2a, 0xbd, 0xc6, 0xf8, 0x87, 0xbc }}, "EfiOEMBadging"},
	{{ 0x171e9398, 0x269c, 0x4081, { 0x90, 0x99, 0x38, 0x44, 0xe2, 0x60, 0x46, 0x6c }}, "EfiPlatformType"},
	{{ 0x17706d27, 0x83fe, 0x4770, { 0x87, 0x5f, 0x4c, 0xef, 0x4c, 0xb8, 0xf6, 0x3d }}, "AmiAhciPlatformPolicy"},
	{{ 0x18a031ab, 0xb443, 0x4d1a, { 0xa5, 0xc0, 0x0c, 0x09, 0x26, 0x1e, 0x9f, 0x71 }}, "EfiDriverBinding"},
	{{ 0x18a3c6dc, 0x5eea, 0x48c8, { 0xa1, 0xc1, 0xb5, 0x33, 0x89, 0xf9, 0x89, 0x99 }}, "EfiSmmSwDispatch2"},
	{{ 0x1aced566, 0x76ed, 0x4218, { 0xbc, 0x81, 0x76, 0x7f, 0x1f, 0x97, 0x7a, 0x89 }}, "EfiNetworkInterfaceIdentifierProtocolGuid_31"},
	{{ 0x1b1183fa, 0x1823, 0x46a7, { 0x88, 0x72, 0x9c, 0x57, 0x87, 0x55, 0x40, 0x9d }}, "EfiSmmPowerButtonDispatch2"},
	{{ 0x1c0c34f6, 0xd380, 0x41fa, { 0xa0, 0x49, 0x8a, 0xd0, 0x6c, 0x1a, 0x66, 0xaa }}, "EfiEdidDiscovered"},
	{{ 0x1d202cab, 0xc8ab, 0x4d5c, { 0x94, 0xf7, 0x3c, 0xfc, 0xc0, 0xd3, 0xd3, 0x35 }}, "EfiSmmCpuService"},
	{{ 0x1d3de7f0, 0x0807, 0x424f, { 0xaa, 0x69, 0x11, 0xa5, 0x4e, 0x19, 0xa4, 0x6f }}, "EfiAtaPassThru"},
	{{ 0x1d85cd7f, 0xf43d, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiUnicodeCollation"},
	{{ 0x1da97072, 0xbddc, 0x4b30, { 0x99, 0xf1, 0x72, 0xa0, 0xb5, 0x6f, 0xff, 0x2a }}, "EfiMonotonicCounterArch"},
	{{ 0x1e5668e2, 0x8481, 0x11d4, { 0xbc, 0xf1, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "EfiVariableArch"},
	{{ 0x1ebe5ab9, 0x2129, 0x49e7, { 0x84, 0xd7, 0xee, 0xb9, 0xfc, 0xe5, 0xde, 0xdd }}, "EfiEmmcCardInfo"},
	{{ 0x215fdd18, 0xbd50, 0x4feb, { 0x89, 0x0b, 0x58, 0xca, 0x0b, 0x47, 0x39, 0xe9 }}, "EfiSio"},
	{{ 0x21f302ad, 0x6e94, 0x471b, { 0x84, 0xbc, 0xb1, 0x48, 0x00, 0x40, 0x3a, 0x1d }}, "EfiSmmCpuSaveState"},
	{{ 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x05, 0xb9, 0x74, 0xb1, 0x08, 0x61, 0x9a }}, "EfiFirmwareVolume2"},
	{{ 0x245dca21, 0xfb7b, 0x11d3, { 0x8f, 0x01, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiPxeBaseCodeCallback"},
	{{ 0x24e70042, 0xd5c5, 0x4260, { 0x8c, 0x39, 0x0a, 0xd3, 0xaa, 0x32, 0xe9, 0x3d }}, "EfiSmmEndOfDxe"},
	{{ 0x25566b03, 0xb577, 0x4cbf, { 0x95, 0x8c, 0xed, 0x66, 0x3e, 0xa2, 0x43, 0x80 }}, "EfiSmmGpiDispatch2"},
	{{ 0x26baccb1, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "EfiCpuArch"},
	{{ 0x26baccb2, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "EfiMetronomeArch"},
	{{ 0x26baccb3, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "EfiTimerArch"},
	{{ 0x26eeb3de, 0xb689, 0x492e, { 0x80, 0xf0, 0xbe, 0x8b, 0xd7, 0xda, 0x4b, 0xa7 }}, "EfiSmmConfiguration"},
	{{ 0x2755590c, 0x6f3c, 0x42fa, { 0x9e, 0xa4, 0xa3, 0xba, 0x54, 0x3c, 0xda, 0x25 }}, "EfiDebugSupport"},
	{{ 0x27cfac87, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiRealTimeClockArch"},
	{{ 0x27cfac88, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiResetArch"},
	{{ 0x296eb418, 0xc4c8, 0x4e05, { 0xab, 0x59, 0x39, 0xe8, 0xaf, 0x56, 0xf0, 0x0a }}, "EdkiiSmmExitBootServices"},
	{{ 0x2977064f, 0xab96, 0x4fa9, { 0x85, 0x45, 0xf9, 0xc4, 0x02, 0x51, 0xe0, 0x7f }}, "EfiPlatformPolicy"},
	{{ 0x2a72d11e, 0x7376, 0x40f6, { 0x9c, 0x68, 0x23, 0xfa, 0x2f, 0xe3, 0x63, 0xf1 }}, "EfiEbcSimpleDebugger"},
	{{ 0x2ad8e2d2, 0x2e91, 0x4cd1, { 0x95, 0xf5, 0xe7, 0x8f, 0xe5, 0xeb, 0xe3, 0x16 }}, "EfiUsb"},
	{{ 0x2b2f68d6, 0x0cd2, 0x44cf, { 0x8e, 0x8b, 0xbb, 0xa2, 0x0b, 0x1b, 0x5b, 0x75 }}, "EfiUsbIo"},
	{{ 0x2c8759d5, 0x5c2d, 0x66ef, { 0x92, 0x5f, 0xb6, 0x6c, 0x10, 0x19, 0x57, 0xe2 }}, "EfiIp6"},
	{{ 0x2e058b2b, 0xedc1, 0x4431, { 0x87, 0xd9, 0xc6, 0xc4, 0xea, 0x10, 0x2b, 0xe3 }}, "PchNvsArea"},
	{{ 0x2f707ebb, 0x4a1a, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiPciRootBridgeIo"},
	{{ 0x2fe800be, 0x8f01, 0x4aa6, { 0x94, 0x6b, 0xd7, 0x13, 0x88, 0xe1, 0x83, 0x3f }}, "EfiMtftp4ServiceBinding"},
	{{ 0x2ff29fa7, 0x5e80, 0x4ed9, { 0xb3, 0x80, 0x01, 0x7d, 0x3c, 0x55, 0x4f, 0xf4 }}, "EfiSmmRscHandler"},
	{{ 0x309de7f1, 0x7f5e, 0x4ace, { 0xb4, 0x9c, 0x53, 0x1b, 0xe5, 0xaa, 0x95, 0xef }}, "EfiGenericMemTest"},
	{{ 0x30cfe3e7, 0x3de1, 0x4586, { 0xbe, 0x20, 0xde, 0xab, 0xa1, 0xb3, 0xb7, 0x93 }}, "EfiPciEnumerationComplete"},
	{{ 0x3152bca5, 0xeade, 0x433d, { 0x86, 0x2e, 0xc0, 0x1c, 0xdc, 0x29, 0x1f, 0x44 }}, "EfiRng"},
	{{ 0x31878c87, 0x0b75, 0x11d5, { 0x9a, 0x4f, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiSimplePointer"},
	{{ 0x31a6406a, 0x6bdf, 0x4e46, { 0xb2, 0xa2, 0xeb, 0xaa, 0x89, 0xc4, 0x09, 0x20 }}, "EfiHiiImage"},
	{{ 0x31ce593d, 0x108a, 0x485d, { 0xad, 0xb2, 0x78, 0xf2, 0x1f, 0x29, 0x66, 0xbe }}, "EfiLegacyInterrupt"},
	{{ 0x320afe62, 0xe593, 0x49cb, { 0xa9, 0xf1, 0xd4, 0xc2, 0xf4, 0xaf, 0x01, 0x4c }}, "EfiS3SmmSaveState"},
	{{ 0x320bdc39, 0x3fa0, 0x4ba9, { 0xbf, 0x2d, 0xb3, 0x3f, 0x72, 0xba, 0x9c, 0xa1 }}, "AmiTpmSupportTypeProtocolguid"},
	{{ 0x3242a9d8, 0xce70, 0x4aa0, { 0x95, 0x5d, 0x5e, 0x7b, 0x14, 0x0d, 0xe4, 0xd2 }}, "EfiSmmCpuIo2"},
	{{ 0x330d4706, 0xf2a0, 0x4e4f, { 0xa3, 0x69, 0xb6, 0x6f, 0xa8, 0xd5, 0x43, 0x85 }}, "EfiHiiConfigAccess"},
	{{ 0x36232936, 0x0e76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32 }}, "AmiDebugService"},
	{{ 0x38321dba, 0x4fe0, 0x4e17, { 0x8a, 0xec, 0x41, 0x30, 0x55, 0xea, 0xed, 0xc1 }}, "EfiLegacy8259"},
	{{ 0x387477c1, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiSimpleTextIn"},
	{{ 0x387477c2, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiSimpleTextOut"},
	{{ 0x389f751f, 0x1838, 0x4388, { 0x83, 0x90, 0xcd, 0x81, 0x54, 0xbd, 0x27, 0xf8 }}, "EfiFirmwareVolume"},
	{{ 0x38d65ec3, 0x8f39, 0x4660, { 0xb8, 0xa6, 0xf3, 0x6a, 0xa3, 0x92, 0x54, 0x75 }}, "AmiBdsConnectPolicy"},
	{{ 0x3a3300ab, 0xc929, 0x487d, { 0xab, 0x34, 0x15, 0x9b, 0xc1, 0x35, 0x62, 0xc0 }}, "PchResetCallback"},
	{{ 0x3a4e4376, 0x4871, 0x4b0e, { 0xa0, 0x2f, 0xed, 0x36, 0xf2, 0xae, 0xcd, 0x00 }}, "AmiCsmVideoPolicy"},
	{{ 0x3ad9df29, 0x4501, 0x478d, { 0xb1, 0xf8, 0x7f, 0x7f, 0xe7, 0x0e, 0x50, 0xf3 }}, "EfiUdp4"},
	{{ 0x3bc1b285, 0x8a15, 0x4a82, { 0xaa, 0xbf, 0x4d, 0x7d, 0x13, 0xfb, 0x32, 0x65 }}, "EfiBusSpecificDriverOverride"},
	{{ 0x3c7bc880, 0x41f8, 0x4869, { 0xae, 0xfc, 0x87, 0x0a, 0x3e, 0xd2, 0x82, 0x99 }}, "Heci"},
	{{ 0x3e35c163, 0x4074, 0x45dd, { 0x43, 0x1e, 0x23, 0x98, 0x9d, 0xd8, 0x6b, 0x32 }}, "EfiHttpUtilities"},
	{{ 0x3e745226, 0x9818, 0x45b6, { 0xa2, 0xac, 0xd7, 0xcd, 0x0e, 0x8b, 0xa2, 0xbc }}, "EfiUsb2Hc"},
	{{ 0x3e7d2b56, 0x3f47, 0x42aa, { 0x8f, 0x6b, 0x22, 0xf5, 0x19, 0x81, 0x8d, 0xab }}, "PchPcieSmiDispatch"},
	{{ 0x3ea824d1, 0x81e3, 0x4ff5, { 0xbd, 0x43, 0xbb, 0x9c, 0x65, 0xdf, 0x7c, 0x46 }}, "AmiCsmStarted"},
	{{ 0x3ef7500e, 0xcf55, 0x474f, { 0x8e, 0x7e, 0x00, 0x9e, 0x0e, 0xac, 0xec, 0xd2 }}, "AmiUsbSmm"},
	{{ 0x3fdda605, 0xa76e, 0x4f46, { 0xad, 0x29, 0x12, 0xf4, 0x53, 0x1b, 0x3d, 0x08 }}, "EfiMpService"},
	{{ 0x4006c0c1, 0xfcb3, 0x403e, { 0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }}, "EfiLoadFile2"},
	{{ 0x41d94cd2, 0x35b6, 0x455a, { 0x82, 0x58, 0xd4, 0xe5, 0x13, 0x34, 0xaa, 0xdd }}, "EfiIp4"},
	{{ 0x4250cec2, 0xdddb, 0x400b, { 0x8c, 0x62, 0xcf, 0x98, 0x64, 0xf6, 0xd1, 0x54 }}, "AmiSioPortCompatibility"},
	{{ 0x441ffa18, 0x8714, 0x421e, { 0x8c, 0x95, 0x58, 0x70, 0x80, 0x79, 0x6f, 0xee }}, "AmiSmmDebugService"},
	{{ 0x4566c59f, 0x650b, 0x4b63, { 0xb1, 0xef, 0x4f, 0x36, 0x66, 0x54, 0x4b, 0xef }}, "PchSmiDispatch"},
	{{ 0x456d2859, 0xa84b, 0x4e47, { 0xa2, 0xee, 0x32, 0x76, 0xd8, 0x86, 0x99, 0x7d }}, "EfiSmmSxDispatch2"},
	{{ 0x46e44855, 0xbd60, 0x4ab7, { 0xab, 0x0d, 0xa6, 0x79, 0xb9, 0x44, 0x7d, 0x77 }}, "EfiTcp6"},
	{{ 0x470e1529, 0xb79e, 0x4e32, { 0xa0, 0xfe, 0x6a, 0x15, 0x6d, 0x29, 0xf9, 0xb2 }}, "EfiBootScriptSaveGuid"},
	{{ 0x47b7fa8c, 0xf4bd, 0x4af6, { 0x82, 0x00, 0x33, 0x30, 0x86, 0xf0, 0xd2, 0xc8 }}, "EfiSmmReadyToLock"},
	{{ 0x480f8ae9, 0x0c46, 0x4aa9, { 0xbc, 0x89, 0xdb, 0x9f, 0xba, 0x61, 0x98, 0x06 }}, "EfiDpc"},
	{{ 0x48ecb431, 0xfb72, 0x45c0, { 0xa9, 0x22, 0xf4, 0x58, 0xfe, 0x04, 0x0b, 0xd5 }}, "EfiEdidOverride"},
	{{ 0x4a0266fe, 0xfe57, 0x4738, { 0x80, 0xab, 0x14, 0x6e, 0x46, 0xf0, 0x3a, 0x65 }}, "EfiWheaBoot"},
	{{ 0x4b215191, 0x9a25, 0x43fd, { 0x86, 0xb5, 0x74, 0xe7, 0xaf, 0x72, 0x33, 0x15 }}, "AmiNvmePassThru"},
	{{ 0x4cec368e, 0x8e8e, 0x4d71, { 0x8b, 0xe1, 0x95, 0x8c, 0x45, 0xfc, 0x8a, 0x53 }}, "EfiSmmPeriodicTimerDispatch2"},
	{{ 0x4cf5b200, 0x68b8, 0x4ca5, { 0x9e, 0xec, 0xb2, 0x3e, 0x3f, 0x50, 0x02, 0x9a }}, "EfiPciIo"},
	{{ 0x4f948815, 0xb4b9, 0x43cb, { 0x8a, 0x33, 0x90, 0xe0, 0x60, 0xb3, 0x49, 0x55 }}, "EfiUdp6"},
	{{ 0x4fc0733f, 0x6fd2, 0x491b, { 0xa8, 0x90, 0x53, 0x74, 0x52, 0x1b, 0xf4, 0x8f }}, "AmiBoardInfo2"},
	{{ 0x5053697e, 0x2cbc, 0x4819, { 0x90, 0xd9, 0x05, 0x80, 0xde, 0xee, 0x57, 0x54 }}, "EfiCapsuleArch"},
	{{ 0x50dc5c90, 0x1d33, 0x4fd6, { 0x87, 0xe5, 0x06, 0x3b, 0x1d, 0xfa, 0x21, 0x70 }}, "AmiSerial"},
	{{ 0x51e9b4f9, 0x555d, 0x476c, { 0x8b, 0xb5, 0xbd, 0x18, 0xd9, 0xa6, 0x88, 0x78 }}, "EfiAmiSio"},
	{{ 0x52c78312, 0x8edc, 0x4233, { 0x98, 0xf2, 0x1a, 0x1a, 0xa5, 0xe3, 0x88, 0xa5 }}, "EfiNvmExpressPassThru"},
	{{ 0x542d6248, 0x4198, 0x4960, { 0x9f, 0x59, 0x23, 0x84, 0x64, 0x6d, 0x63, 0xb4 }}, "AmiOpromPolicy"},
	{{ 0x56ec3091, 0x954c, 0x11d2, { 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiLoadFile"},
	{{ 0x5859cb76, 0x6bef, 0x468a, { 0xbe, 0x2d, 0xb3, 0xdd, 0x1a, 0x27, 0xf0, 0x12 }}, "EfiUsbPolicy"},
	{{ 0x587e72d7, 0xcc50, 0x4f79, { 0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f }}, "EfiHiiConfigRouting"},
	{{ 0x58dc368d, 0x7bfa, 0x4e77, { 0xab, 0xbc, 0x0e, 0x29, 0x41, 0x8d, 0xf9, 0x30 }}, "EfiSmmIoTrapDispatch2"},
	{{ 0x59af16b0, 0x661d, 0x4865, { 0xa3, 0x81, 0x38, 0xde, 0x68, 0x38, 0x5d, 0x8d }}, "AmiHddOpalSecInit"},
	{{ 0x59d02fcd, 0x9233, 0x4d34, { 0xbc, 0xfe, 0x87, 0xca, 0x81, 0xd3, 0xdd, 0xa7 }}, "EfiGenericElog"},
	{{ 0x5b1b31a1, 0x9562, 0x11d2, { 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiLoadedImage"},
	{{ 0x5b446ed1, 0xe30b, 0x4faa, { 0x87, 0x1a, 0x36, 0x54, 0xec, 0xa3, 0x60, 0x80 }}, "EfiIp4Config2"},
	{{ 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 }}, "GetPcdInfo"},
	{{ 0x5cb5c776, 0x60d5, 0x45ee, { 0x88, 0x3c, 0x45, 0x27, 0x08, 0xcd, 0x74, 0x3f }}, "EfiLoadPeImage"},
	{{ 0x5e90a50d, 0x6955, 0x4a49, { 0x90, 0x32, 0xda, 0x38, 0x12, 0xf8, 0xe8, 0xe5 }}, "AmiSmbios"},
	{{ 0x5f87ba17, 0x957d, 0x433d, { 0x9e, 0x15, 0xc0, 0xe7, 0xc8, 0x79, 0x88, 0x99 }}, "AmiDigitalSignature"},
	{{ 0x607f766c, 0x7455, 0x42be, { 0x93, 0x0b, 0xe4, 0xd7, 0x6d, 0xb2, 0x72, 0x0f }}, "EfiTrEE"},
	{{ 0x60ff8964, 0xe906, 0x41d0, { 0xaf, 0xed, 0xf2, 0x41, 0xe9, 0x74, 0xe0, 0x8e }}, "EfiDxeSmmReadyToLock"},
	{{ 0x62ceef5a, 0x1d7c, 0x4943, { 0x9b, 0x3a, 0x95, 0xe2, 0x49, 0x4c, 0x89, 0x90 }}, "Emul6064KbdInput"},
	{{ 0x64021dfe, 0xa62c, 0x42a7, { 0xbf, 0x46, 0x15, 0x07, 0x8c, 0xdf, 0x9f, 0x89 }}, "EfiLpcPolicy"},
	{{ 0x6441f818, 0x6362, 0x4e44, { 0xb5, 0x70, 0x7d, 0xba, 0x31, 0xdd, 0x24, 0x53 }}, "EfiVariableWriteArch"},
	{{ 0x65530bc7, 0xa359, 0x410f, { 0xb0, 0x10, 0x5a, 0xad, 0xc7, 0xec, 0x2b, 0x62 }}, "EfiTcp4"},
	{{ 0x665e3ff5, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiWatchdogTimerArch"},
	{{ 0x665e3ff6, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiBdsArch"},
	{{ 0x66ed4721, 0x3c98, 0x4d3e, { 0x81, 0xe3, 0xd0, 0x3d, 0xd3, 0x9a, 0x72, 0x54 }}, "EfiUdp6ServiceBinding"},
	{{ 0x6737f69b, 0xb8cc, 0x45bc, { 0x93, 0x27, 0xcc, 0xf5, 0xee, 0xf7, 0x0c, 0xde }}, "AmiPlatformIde"},
	{{ 0x67820532, 0x7613, 0x4dd3, { 0x9e, 0xd7, 0x3d, 0x9b, 0xe3, 0xa7, 0xda, 0x63 }}, "Aint13"},
	{{ 0x68b81e51, 0x2583, 0x4582, { 0x95, 0xdb, 0xc5, 0x72, 0x32, 0x36, 0xc4, 0xf1 }}, "NonSmmEmul6064Trap"},
	{{ 0x6906e93b, 0x603b, 0x4a0f, { 0x86, 0x92, 0x83, 0x20, 0x04, 0xaa, 0xf2, 0xdb }}, "PchSmmPeriodicTimerControlGuid"},
	{{ 0x6a1ee763, 0xd47a, 0x43b4, { 0xaa, 0xbe, 0xef, 0x1d, 0xe2, 0xab, 0x56, 0xfc }}, "EfiHiiPackageList"},
	{{ 0x6a7a5cff, 0xe8d9, 0x4f70, { 0xba, 0xda, 0x75, 0xab, 0x30, 0x25, 0xce, 0x14 }}, "EfiComponentName2"},
	{{ 0x6afd2b77, 0x98c1, 0x4acd, { 0xa6, 0xf9, 0x8a, 0x94, 0x39, 0xde, 0x0f, 0xb1 }}, "EfiSmmStatusCode"},
	{{ 0x6b30c738, 0xa391, 0x11d4, { 0x9a, 0x3b, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiPlatformDriverOverride"},
	{{ 0x6c09c5b9, 0xbf3f, 0x46d2, { 0x91, 0x98, 0x4a, 0x06, 0x48, 0x26, 0xf4, 0x14 }}, "EfiWheaPlatformSupport"},
	{{ 0x6e057ecf, 0xfa99, 0x4f39, { 0x95, 0xbc, 0x59, 0xf9, 0x92, 0x1d, 0x17, 0xe4 }}, "EdkiiSmmReadyToBoot"},
	{{ 0x6ea0f71c, 0x614a, 0x437e, { 0x8f, 0x49, 0x24, 0x3a, 0xd4, 0xe8, 0x32, 0x68 }}, "Emul6064Trap"},
	{{ 0x6f2c06a8, 0xd4b4, 0x4a93, { 0x9f, 0x78, 0x2b, 0x48, 0x0b, 0xe8, 0x0e, 0x0f }}, "EfiSmiFlash"},
	{{ 0x6fce3bb9, 0x9742, 0x4cfd, { 0x8e, 0x9e, 0x39, 0xf9, 0x8d, 0xca, 0x32, 0x71 }}, "AmiPciSmmHandoff"},
	{{ 0x70101eaf, 0x0085, 0x440c, { 0xb3, 0x56, 0x8e, 0xe3, 0x6f, 0xef, 0x24, 0xf0 }}, "EfiLegacyRegion2"},
	{{ 0x71c4c155, 0xd54b, 0x4d59, { 0xa2, 0xc1, 0xf9, 0xa5, 0x72, 0x3c, 0x65, 0xa8 }}, "EfiIsPlatformSupportWhea"},
	{{ 0x72e40094, 0x2ee1, 0x497a, { 0x8f, 0x33, 0x4c, 0x93, 0x4a, 0x9e, 0x9c, 0x0c }}, "EfiSmmSmbus"},
	{{ 0x73905351, 0xeb4d, 0x4637, { 0xa8, 0x3b, 0xd1, 0xbf, 0x6c, 0x1c, 0x48, 0xeb }}, "TSEInvalidateBgrtStatus"},
	{{ 0x74eab115, 0x0c17, 0x422d, { 0xbc, 0x21, 0x7f, 0xc7, 0x26, 0xdc, 0x92, 0x18 }}, "EfiSpsNm"},
	{{ 0x755b6596, 0x6896, 0x4ba3, { 0xb3, 0xdd, 0x1c, 0x62, 0x9f, 0xd1, 0xea, 0x88 }}, "AmiFlash"},
	{{ 0x755b6596, 0x6896, 0x4ba3, { 0xb3, 0xdd, 0x1c, 0x62, 0x9f, 0xd1, 0xea, 0x88 }}, "Flash"},
	{{ 0x7576cc89, 0x8fa3, 0x4cad, { 0xba, 0x02, 0x61, 0x19, 0xb4, 0x6e, 0xd4, 0x4a }}, "AmiSioSmmHandoff"},
	{{ 0x7578b307, 0xb25b, 0x44f9, { 0x89, 0x2e, 0x20, 0x9b, 0x0e, 0x39, 0x93, 0xc6 }}, "Emul6064MsInput"},
	{{ 0x75ca7c9d, 0x502e, 0x468a, { 0x9a, 0xaf, 0x7f, 0x2a, 0x29, 0xe6, 0xdb, 0xcf }}, "AmiSbHddPolicy"},
	{{ 0x78092548, 0x48cf, 0x449b, { 0x9b, 0xdb, 0xf6, 0x38, 0x49, 0x85, 0x64, 0x60 }}, "AmiProtocolInternalHlxeGuid"},
	{{ 0x78247c57, 0x63db, 0x4708, { 0x99, 0xc2, 0xa8, 0xb4, 0xa9, 0xa6, 0x1f, 0x6b }}, "EfiMtftp4"},
	{{ 0x783658a3, 0x4172, 0x4421, { 0xa2, 0x99, 0xe0, 0x09, 0x07, 0x9c, 0x0c, 0xb4 }}, "EfiLegacyBiosPlatform"},
	{{ 0x7a305c6c, 0x61ae, 0x4bec, { 0xa7, 0xad, 0xec, 0xe3, 0xfb, 0x8f, 0xef, 0xd1 }}, "SmmHeci"},
	{{ 0x7a59b29b, 0x910b, 0x4171, { 0x82, 0x42, 0xa8, 0x5a, 0x0d, 0xf2, 0x5b, 0x5b }}, "EfiHttp"},
	{{ 0x7ab33a91, 0xace5, 0x4326, { 0xb5, 0x72, 0xe7, 0xee, 0x33, 0xd3, 0x9f, 0x16 }}, "EfiManagedNetwork"},
	{{ 0x7ee2bd44, 0x3da0, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiIsaIo"},
	{{ 0x7f1647c8, 0xb76e, 0x44b2, { 0xa5, 0x65, 0xf7, 0x0f, 0xf1, 0x9c, 0xd1, 0x9e }}, "EfiDns6ServiceBinding"},
	{{ 0x7f955a3e, 0xafb5, 0x4122, { 0xb9, 0x25, 0x4b, 0x11, 0x71, 0xf6, 0x93, 0xf5 }}, "AmiBlockIoWriteProtection"},
	{{ 0x801e9def, 0xddbb, 0x4ca3, { 0x96, 0x98, 0xc9, 0x15, 0x8e, 0xb8, 0x6a, 0xea }}, "AmiPeriodicSmiControl"},
	{{ 0x83339ef7, 0x9392, 0x4716, { 0x8d, 0x3a, 0xd1, 0xfc, 0x67, 0xcd, 0x55, 0xdb }}, "PchGpioUnlockSmiDispatch"},
	{{ 0x83f01464, 0x99bd, 0x45e5, { 0xb3, 0x83, 0xaf, 0x63, 0x05, 0xd8, 0xe9, 0xe6 }}, "EfiUdp4ServiceBinding"},
	{{ 0x843dc720, 0xab1e, 0x42cb, { 0x93, 0x57, 0x8a, 0x00, 0x78, 0xf3, 0x56, 0x1b }}, "EfiSmmControl2"},
	{{ 0x85a8ab57, 0x0644, 0x4110, { 0x85, 0x0f, 0x98, 0x13, 0x22, 0x04, 0x70, 0x70 }}, "EdkiiSmmLegacyBoot"},
	{{ 0x86212936, 0x0e76, 0x41c8, { 0xa0, 0x3a, 0x2a, 0xf2, 0xfc, 0x1c, 0x39, 0xe2 }}, "EfiRscHandler"},
	{{ 0x86c77a67, 0x0b97, 0x4633, { 0xa1, 0x87, 0x49, 0x10, 0x4d, 0x06, 0x85, 0xc7 }}, "EfiFirmwareManagement"},
	{{ 0x87c8bad7, 0x0595, 0x4053, { 0x82, 0x97, 0xde, 0xde, 0x39, 0x5f, 0x5d, 0x5b }}, "EfiDhcp6"},
	{{ 0x89e3c1dc, 0xb5e3, 0x4d34, { 0xae, 0xad, 0xdd, 0x7e, 0xb2, 0x82, 0x8c, 0x18 }}, "UsbTimingPolicy"},
	{{ 0x8a219718, 0x4ef5, 0x4761, { 0x91, 0xc8, 0xc0, 0xf0, 0x4b, 0xda, 0x9e, 0x56 }}, "EfiDhcp4"},
	{{ 0x8a91b1e1, 0x56c7, 0x4adc, { 0xab, 0xeb, 0x1c, 0x2c, 0xa1, 0x72, 0x9e, 0xff }}, "AmiPostManager"},
	{{ 0x8b843e20, 0x8132, 0x4852, { 0x90, 0xcc, 0x55, 0x1a, 0x4e, 0x4a, 0x7f, 0x1c }}, "EfiDevicePathToText"},
	{{ 0x8bc1714d, 0xffcb, 0x41c3, { 0x89, 0xdc, 0x6c, 0x74, 0xd0, 0x6d, 0x98, 0xea }}, "EfiSmmPciRootBridgeIo"},
	{{ 0x8c4c9a41, 0xbf56, 0x4627, { 0x9e, 0x0a, 0xc8, 0x38, 0x6d, 0x66, 0x11, 0x5c }}, "EfiTcgPlatform"},
	{{ 0x8c939604, 0x0700, 0x4415, { 0x9d, 0x62, 0x11, 0x61, 0xdb, 0x81, 0x64, 0xa6 }}, "AmiTcgPlatformProtocolguid"},
	{{ 0x8d59d32b, 0xc655, 0x4ae9, { 0x9b, 0x15, 0xf2, 0x59, 0x04, 0x99, 0x2a, 0x43 }}, "EfiAbsolutePointer"},
	{{ 0x8e008510, 0x9bb1, 0x457d, { 0x9f, 0x70, 0x89, 0x7a, 0xba, 0x86, 0x5d, 0xb9 }}, "EfiLegacyBiosExt"},
	{{ 0x8f644fa9, 0xe850, 0x4db1, { 0x9c, 0xe2, 0x0b, 0x44, 0x69, 0x8e, 0x8d, 0xa4 }}, "EfiFirmwareVolumeBlock"},
	{{ 0x8fe545e5, 0xdca9, 0x4d52, { 0xbf, 0xcd, 0x8f, 0x13, 0xe7, 0x17, 0x01, 0x5f }}, "AmiReflash"},
	{{ 0x903cc4d4, 0xd77e, 0x4eb9, { 0xb5, 0x53, 0x47, 0xfd, 0x2e, 0x59, 0x1c, 0xdf }}, "DxePlatformMePolicy"},
	{{ 0x9042a9de, 0x23dc, 0x4a38, { 0x96, 0xfb, 0x7a, 0xde, 0xd0, 0x80, 0x51, 0x6a }}, "EfiGraphicsOutput"},
	{{ 0x91abc830, 0x16fc, 0x4d9e, { 0xa1, 0x89, 0x5f, 0xc8, 0xbb, 0x41, 0x14, 0x02 }}, "AmiSmmDigitalSignature"},
	{{ 0x932f47e6, 0x2362, 0x4002, { 0x80, 0x3e, 0x3c, 0xd5, 0x4b, 0x13, 0x8f, 0x85 }}, "EfiScsiIo"},
	{{ 0x934ce8da, 0x5e2a, 0x4184, { 0x8a, 0x15, 0x8e, 0x08, 0x47, 0x98, 0x84, 0x31 }}, "AmiOptionRomPolicy"},
	{{ 0x937fe521, 0x95ae, 0x4d1a, { 0x89, 0x29, 0x48, 0xbc, 0xd9, 0x0a, 0xd3, 0x1a }}, "EfiIp6Config"},
	{{ 0x9400d59b, 0x0e9c, 0x4f6c, { 0xb5, 0x9a, 0xfc, 0x20, 0x00, 0x9d, 0xb9, 0xec }}, "AmiPciIrqProgramGuid"},
	{{ 0x9401bd4f, 0x1a00, 0x4990, { 0xab, 0x56, 0xda, 0xf0, 0xe4, 0xe3, 0x48, 0xde }}, "AmiHddSmartInit"},
	{{ 0x94ab2f58, 0x1438, 0x4ef1, { 0x91, 0x52, 0x18, 0x94, 0x1a, 0x3a, 0x0e, 0x68 }}, "EfiSecurity2Arch"},
	{{ 0x94c69847, 0xa0cf, 0x4635, { 0xaa, 0x23, 0xd2, 0x66, 0x7b, 0xd7, 0xf7, 0x91 }}, "SdioBusInit"},
	{{ 0x95a9a93e, 0xa86e, 0x4926, { 0xaa, 0xef, 0x99, 0x18, 0xe7, 0x72, 0xd9, 0x87 }}, "EfiEraseBlock"},
	{{ 0x964e5b21, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiBlockIo"},
	{{ 0x964e5b22, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiSimpleFileSystem"},
	{{ 0x984eb4e9, 0x5a95, 0x41de, { 0xaa, 0xd0, 0x53, 0x66, 0x8c, 0xa5, 0x13, 0xc0 }}, "PchInfo"},
	{{ 0x9851740c, 0x22e0, 0x440d, { 0x90, 0x90, 0xef, 0x2d, 0x71, 0xc2, 0x51, 0xc9 }}, "AmiCmosAccessDxe"},
	{{ 0x9c939ba6, 0x1fcc, 0x46f6, { 0xb4, 0xe1, 0x10, 0x2d, 0xbe, 0x18, 0x65, 0x67 }}, "EfiAcpiDisDispatch"},
	{{ 0x9c98c00a, 0x2e9b, 0x4896, { 0x95, 0xc8, 0xac, 0x64, 0x35, 0x82, 0x84, 0xe5 }}, "AmiDxeHashInterfaceguid"},
	{{ 0x9d36f7ef, 0x6078, 0x4419, { 0x8c, 0x46, 0x2b, 0xbd, 0xb0, 0xe0, 0xc7, 0xb3 }}, "AmiBoardSioInit"},
	{{ 0x9d9a39d8, 0xbd42, 0x4a73, { 0xa4, 0xd5, 0x8e, 0xe9, 0x4b, 0xe1, 0x13, 0x80 }}, "EfiDhcp4ServiceBinding"},
	{{ 0x9db72e22, 0x9262, 0x4a18, { 0x8f, 0xe0, 0x85, 0xe0, 0x3d, 0xfa, 0x96, 0x73 }}, "SmmCpuSync2"},
	{{ 0x9e23d768, 0xd2f3, 0x4366, { 0x9f, 0xc3, 0x3a, 0x7a, 0xba, 0x86, 0x43, 0x74 }}, "EfiVlanConfig"},
	{{ 0x9e71d609, 0x6d24, 0x47fd, { 0xb5, 0x72, 0x61, 0x40, 0xf8, 0xd9, 0xc2, 0xa4 }}, "PchTcoSmiDispatch"},
	{{ 0x9fb9a8a1, 0x2f4a, 0x43a6, { 0x88, 0x9c, 0xd0, 0xf7, 0xb6, 0xc4, 0x7a, 0xd5 }}, "EfiDhcp6ServiceBinding"},
	{{ 0xa062cf1f, 0x8473, 0x4aa3, { 0x87, 0x93, 0x60, 0x0b, 0xc4, 0xff, 0xa9, 0xa9 }}, "EfiLegacySredir"},
	{{ 0xa19832b9, 0xac25, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiSimpleNetwork"},
	{{ 0xa1e37052, 0x80d9, 0x4e65, { 0xa3, 0x17, 0x3e, 0x9a, 0x55, 0xc4, 0x3e, 0xc9 }}, "EfiIdeControllerInit"},
	{{ 0xa340c064, 0x723c, 0x4a9c, { 0xa4, 0xdd, 0xd5, 0xb4, 0x7a, 0x26, 0xfb, 0xb0 }}, "EsrtManagement"},
	{{ 0xa3979e64, 0xace8, 0x4ddc, { 0xbc, 0x07, 0x4d, 0x66, 0xb8, 0xfd, 0x09, 0x77 }}, "EfiIpSec2"},
	{{ 0xa4223cf1, 0x6b27, 0x4994, { 0x8f, 0xcb, 0xa3, 0xa2, 0x79, 0xc0, 0x4e, 0x81 }}, "EfiGenericElogSmmProtocolInstallled"},
	{{ 0xa46423e3, 0x4617, 0x49f1, { 0xb9, 0xff, 0xd1, 0xbf, 0xa9, 0x11, 0x58, 0x39 }}, "EfiSecurityArch"},
	{{ 0xa4c751fc, 0x23ae, 0x4c3e, { 0x92, 0xe9, 0x49, 0x64, 0xcf, 0x63, 0xf3, 0x49 }}, "EfiUnicodeCollation2"},
	{{ 0xa56897a1, 0xa77f, 0x4600, { 0x84, 0xdb, 0x22, 0xb0, 0xa8, 0x01, 0xfa, 0x9a }}, "EfiSmmRuntime"},
	{{ 0xa59e8fcf, 0xbda0, 0x43bb, { 0x90, 0xb1, 0xd3, 0x73, 0x2e, 0xca, 0xa8, 0x77 }}, "EfiScsiPassThru"},
	{{ 0xa77b2472, 0xe282, 0x4e9f, { 0xa2, 0x45, 0xc2, 0xc0, 0xe2, 0x7b, 0xbc, 0xc1 }}, "EfiBlockIo2"},
	{{ 0xa8f960c6, 0x4cc3, 0x4417, { 0x8a, 0xd9, 0x2a, 0x3b, 0x3f, 0x80, 0x27, 0xea }}, "AmiMemoryInfoGuid"},
	{{ 0xa9dd1597, 0xf2c5, 0x4cb6, { 0xaa, 0x7b, 0xee, 0x01, 0xae, 0x80, 0x61, 0x85 }}, "AmiSmmNvmeController"},
	{{ 0xaa0e8bc1, 0xdabc, 0x46b0, { 0xa8, 0x44, 0x37, 0xb8, 0x16, 0x9b, 0x2b, 0xea }}, "EfiPciHotPlugInit"},
	{{ 0xaabe9a45, 0xb345, 0x49d2, { 0x88, 0xef, 0x6a, 0xd0, 0xb8, 0x5e, 0xd7, 0xe6 }}, "AmiRomLayout"},
	{{ 0xaaeaccfd, 0xf27b, 0x4c17, { 0xb6, 0x10, 0x75, 0xca, 0x1f, 0x2d, 0xfb, 0x52 }}, "EfiEbcVmTest"},
	{{ 0xab38a0df, 0x6873, 0x44a9, { 0x87, 0xe6, 0xd4, 0xeb, 0x56, 0x14, 0x84, 0x49 }}, "EfiRamDisk"},
	{{ 0xad61f191, 0xae5f, 0x4c0e, { 0xb9, 0xfa, 0xe8, 0x69, 0xd2, 0x88, 0xc6, 0x4f }}, "EfiCpuIo2"},
	{{ 0xad77ae29, 0x4c20, 0x4fdd, { 0x85, 0x04, 0x81, 0x76, 0x61, 0x9b, 0x67, 0x6a }}, "AmiHddSecurityEnd"},
	{{ 0xadb7b9e6, 0x70b7, 0x48d4, { 0xb6, 0xa5, 0x18, 0xfa, 0x15, 0xeb, 0xcd, 0x78 }}, "IntelCpuPcdsSetDone"},
	{{ 0xae3d28cc, 0xe05b, 0x4fa1, { 0xa0, 0x11, 0x7e, 0xb5, 0x5a, 0x3f, 0x14, 0x01 }}, "EfiDns4"},
	{{ 0xae80d021, 0x618e, 0x11d4, { 0xbc, 0xd7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "EfiDataHub"},
	{{ 0xafa4cf3f, 0xaf71, 0x4c30, { 0xa4, 0xfb, 0x29, 0x10, 0xe7, 0x71, 0xf9, 0xb0 }}, "AmiNvmeController"},
	{{ 0xafbfde41, 0x2e6e, 0x4262, { 0xba, 0x65, 0x62, 0xb9, 0x23, 0x6e, 0x54, 0x95 }}, "EfiTimestamp"},
	{{ 0xb0732526, 0x38c8, 0x4b40, { 0x88, 0x77, 0x61, 0xc7, 0xb0, 0x6a, 0xac, 0x45 }}, "EfiCpuIo"},
	{{ 0xb1ee129e, 0xda36, 0x4181, { 0x91, 0xf8, 0x04, 0xa4, 0x92, 0x37, 0x66, 0xa7 }}, "EfiDriverFamilyOverride"},
	{{ 0xb295bd1c, 0x63e3, 0x48e3, { 0xb2, 0x65, 0xf7, 0xdf, 0xa2, 0x07, 0x01, 0x23 }}, "AmiMultiLangSupport"},
	{{ 0xb2fa4764, 0x3b6e, 0x43d3, { 0x91, 0xdf, 0x87, 0xd1, 0x5a, 0x3e, 0x56, 0x68 }}, "AmiAhciBus"},
	{{ 0xb2fa5764, 0x3b6e, 0x43d3, { 0x91, 0xdf, 0x87, 0xd1, 0x5a, 0x3e, 0x56, 0x68 }}, "AmiAhciSmm"},
	{{ 0xb5b35764, 0x460c, 0x4a06, { 0x99, 0xfc, 0x77, 0xa1, 0x7c, 0x1b, 0x5c, 0xeb }}, "EfiPciOverride"},
	{{ 0xb625b186, 0xe063, 0x44f7, { 0x89, 0x05, 0x6a, 0x74, 0xdc, 0x6f, 0x52, 0xb4 }}, "EfiDns4ServiceBinding"},
	{{ 0xb63f8ec7, 0xa9c9, 0x4472, { 0xa4, 0xc0, 0x4d, 0x8b, 0xf3, 0x65, 0xcc, 0x51 }}, "EfiSdHostIo"},
	{{ 0xb7dfb4e1, 0x052f, 0x449f, { 0x87, 0xbe, 0x98, 0x18, 0xfc, 0x91, 0xb7, 0x33 }}, "EfiRuntimeArch"},
	{{ 0xb88fc07f, 0x44b3, 0x48e0, { 0xa1, 0x21, 0xcc, 0x8e, 0x7a, 0x28, 0x13, 0xde }}, "EfiSpsSiEn"},
	{{ 0xb91547f5, 0x4d24, 0x4eef, { 0x85, 0x07, 0x74, 0xdd, 0xab, 0xeb, 0x71, 0xad }}, "AmiSmmNvmePassThru"},
	{{ 0xb9d4c360, 0xbcfb, 0x4f9b, { 0x92, 0x98, 0x53, 0xc1, 0x36, 0x98, 0x22, 0x58 }}, "EfiFormBrowser2"},
	{{ 0xbb25cf6f, 0xf1d4, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0xfd }}, "EfiSerialIo"},
	{{ 0xbb6cbeff, 0xe072, 0x40d2, { 0xa6, 0xeb, 0xba, 0xb7, 0x5b, 0xde, 0x87, 0xe7 }}, "TcgPlatformSetupPolicyGuid"},
	{{ 0xbc62157e, 0x3e33, 0x4fec, { 0x99, 0x20, 0x2d, 0x3b, 0x36, 0xd7, 0x50, 0xdf }}, "EfiLoadedImageDevicePath"},
	{{ 0xbd26cdc9, 0xa092, 0x462a, { 0x87, 0x7a, 0x5a, 0xb6, 0xad, 0xce, 0x48, 0x12 }}, "EfiPlatformCpu"},
	{{ 0xbd445d79, 0xb7ad, 0x4f04, { 0x9a, 0xd8, 0x29, 0xbd, 0x20, 0x40, 0xeb, 0x3c }}, "EfiLockBox"},
	{{ 0xbd88ec68, 0xebe4, 0x4f7b, { 0x93, 0x5a, 0x4f, 0x66, 0x66, 0x42, 0xe7, 0x5f }}, "EfiAcpiEnDispatch"},
	{{ 0xbd8c1056, 0x9f36, 0x44ec, { 0x92, 0xa8, 0xa6, 0x33, 0x7f, 0x81, 0x79, 0x86 }}, "EfiEdidActive"},
	{{ 0xbdc8e6af, 0xd9bc, 0x4379, { 0xa7, 0x2a, 0xe0, 0xc4, 0xe7, 0x5d, 0xae, 0x1c }}, "EfiHttpServiceBinding"},
	{{ 0xbf0a78ba, 0xec29, 0x49cf, { 0xa1, 0xc9, 0x7a, 0xe5, 0x4e, 0xab, 0x6a, 0x51 }}, "EfiMtftp6"},
	{{ 0xc2702b74, 0x800c, 0x4131, { 0x87, 0x46, 0x8f, 0xb5, 0xb8, 0x9c, 0xe4, 0xac }}, "EfiSmmAccess2"},
	{{ 0xc51711e7, 0xb4bf, 0x404a, { 0xbf, 0xb8, 0x0a, 0x04, 0x8e, 0xf1, 0xff, 0xe4 }}, "EfiIp4ServiceBinding"},
	{{ 0xc6734411, 0x2dda, 0x4632, { 0xa5, 0x92, 0x92, 0x0f, 0x24, 0xd6, 0xed, 0x21 }}, "AmiAtaPassThruInit"},
	{{ 0xc68ed8e2, 0x9dc6, 0x4cbd, { 0x9d, 0x94, 0xdb, 0x65, 0xac, 0xc5, 0xc3, 0x32 }}, "EfiSmmCommunication"},
	{{ 0xc7735a2f, 0x88f5, 0x4882, { 0xae, 0x63, 0xfa, 0xac, 0x8c, 0x8b, 0x86, 0xb3 }}, "EfiVgaMiniPort"},
	{{ 0xc88b0b6d, 0x0dfc, 0x49a7, { 0x9c, 0xb4, 0x49, 0x07, 0x4b, 0x4c, 0x3a, 0x78 }}, "EfiStorageSecurityCommand"},
	{{ 0xca236c1b, 0x625c, 0x4753, { 0xb5, 0x53, 0x19, 0x05, 0xfc, 0xec, 0x2e, 0xa7 }}, "PchEspiSmiDispatch"},
	{{ 0xca37bc1f, 0xa327, 0x4ae9, { 0x82, 0x8a, 0x8c, 0x40, 0xd8, 0x50, 0x6a, 0x17 }}, "EfiDns6"},
	{{ 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }}, "EdkiiVariableLock"},
	{{ 0xce345171, 0xba0b, 0x11d2, { 0x8e, 0x4f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b }}, "EfiDiskIo"},
	{{ 0xce6f86bb, 0xb800, 0x4c71, { 0xb2, 0xd1, 0x38, 0x97, 0xa3, 0xbc, 0x1d, 0xae }}, "AmiHddSecurityInit"},
	{{ 0xcf8034be, 0x6768, 0x4d8b, { 0xb7, 0x39, 0x7c, 0xce, 0x68, 0x3a, 0x9f, 0xbe }}, "EfiPciHostBridgeResourceAllocation"},
	{{ 0xd2b2b828, 0x0826, 0x48a7, { 0xb3, 0xdf, 0x98, 0x3c, 0x00, 0x60, 0x24, 0xf0 }}, "EfiStatusCodeRuntime"},
	{{ 0xd326d041, 0xbd31, 0x4c01, { 0xb5, 0xa8, 0x62, 0x8b, 0xe8, 0x7f, 0x06, 0x53 }}, "EfiSmmFirmwareVolumeBlock"},
	{{ 0xd432a67f, 0x14dc, 0x484b, { 0xb3, 0xbb, 0x3f, 0x02, 0x91, 0x84, 0x93, 0x27 }}, "EfiDiskInfo"},
	{{ 0xd4e79dae, 0xaafc, 0x4382, { 0x95, 0x40, 0x3e, 0x3f, 0xa4, 0x2d, 0x42, 0x55 }}, "AmiNvmeLegacy"},
	{{ 0xd52bb262, 0xf022, 0x49ec, { 0x86, 0xd2, 0x7a, 0x29, 0x3a, 0x7a, 0x05, 0x4b }}, "PchAcpiSmiDispatch"},
	{{ 0xd5950985, 0x8be3, 0x4b1c, { 0xb6, 0x3f, 0x95, 0xd1, 0x5a, 0xb3, 0xb6, 0x5f }}, "SmmCpuSync"},
	{{ 0xd6eb696b, 0x7ec3, 0x4d1b, { 0xaa, 0x28, 0x67, 0x75, 0x74, 0x4c, 0x9e, 0xb5 }}, "TSEScreenMgmt"},
	{{ 0xd8117cfe, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }}, "EfiDecompress"},
	{{ 0xd9760ff3, 0x3cca, 0x4267, { 0x80, 0xf9, 0x75, 0x27, 0xfa, 0xfa, 0x42, 0x23 }}, "EfiMtftp6ServiceBinding"},
	{{ 0xdb63592c, 0xb8cc, 0x44c8, { 0x91, 0x8c, 0x51, 0xf5, 0x34, 0x59, 0x8a, 0x5a }}, "PchReset"},
	{{ 0xdb9a1e3d, 0x45cb, 0x4abb, { 0x85, 0x3b, 0xe5, 0x38, 0x7f, 0xdb, 0x2e, 0x2d }}, "EfiLegacyBios"},
	{{ 0xdbc9fd21, 0xfad8, 0x45b0, { 0x9e, 0x78, 0x27, 0x15, 0x88, 0x67, 0xcc, 0x93 }}, "BdsAllDriversConnected"},
	{{ 0xdbff9d55, 0x89b7, 0x46da, { 0xbd, 0xdf, 0x67, 0x7d, 0x3d, 0xc0, 0x24, 0x1d }}, "EfiAcpiSupport"},
	{{ 0xdbff9d55, 0x89b7, 0x46da, { 0xbd, 0xdf, 0x67, 0x7d, 0x3d, 0xc0, 0x24, 0x1d }}, "EfiAcpiSupportGuid"},
	{{ 0xdc14e697, 0x775a, 0x4c3b, { 0xa1, 0x1a, 0xed, 0xc3, 0x8e, 0x1b, 0xe3, 0xe6 }}, "AmiCsmOpromPolicy"},
	{{ 0xdd9e7534, 0x7762, 0x4698, { 0x8c, 0x14, 0xf5, 0x85, 0x17, 0xa6, 0x25, 0xaa }}, "EfiSimpleTextInputEx"},
	{{ 0xddabfeac, 0xef63, 0x452c, { 0x8f, 0x39, 0xed, 0x7f, 0xae, 0xd8, 0x26, 0x5e }}, "PpmPlatformPolicy"},
	{{ 0xdde31574, 0x3589, 0x4fa9, { 0xbc, 0x69, 0x17, 0x29, 0xaf, 0x6f, 0xda, 0x4e }}, "AmiNvramUpdate"},
	{{ 0xddfb5557, 0x3e2e, 0x4569, { 0xb4, 0x59, 0xbe, 0xff, 0xe1, 0x89, 0xb8, 0xb0 }}, "AmiSmbiosFlashData"},
	{{ 0xde161cfe, 0x1e60, 0x42a1, { 0x8c, 0xc3, 0xee, 0x7e, 0xf0, 0x73, 0x52, 0x12 }}, "EfiTpmDevice"},
	{{ 0xe159a956, 0x3299, 0x4ee9, { 0x91, 0x76, 0x65, 0x18, 0x1a, 0x4e, 0x5e, 0x9f }}, "AmiIdeBusInit"},
	{{ 0xe1e4a857, 0xc970, 0x4075, { 0xa4, 0xda, 0xe9, 0xc4, 0x1b, 0x69, 0xad, 0xfc }}, "AmiTextOut"},
	{{ 0xe49d33ed, 0x513d, 0x4634, { 0xb6, 0x98, 0x6f, 0x55, 0xaa, 0x75, 0x1c, 0x1b }}, "EfiSmbusHc"},
	{{ 0xe516acef, 0xfa3c, 0x4068, { 0x8c, 0xe4, 0x88, 0x8d, 0x62, 0xb0, 0xe4, 0x97 }}, "AmiEfiCrbInfo"},
	{{ 0xe5dd1403, 0xd622, 0xc24e, { 0x84, 0x88, 0xc7, 0x1b, 0x17, 0xf5, 0xe8, 0x02 }}, "EfiAdapterInformation"},
	{{ 0xe857caf6, 0xc046, 0x45dc, { 0xbe, 0x3f, 0xee, 0x07, 0x65, 0xfb, 0xa8, 0x87 }}, "EfiS3SaveState"},
	{{ 0xe998c6d8, 0x572b, 0x4e18, { 0x96, 0xcc, 0x03, 0x1e, 0xa3, 0xdd, 0x55, 0x8c }}, "AmiOemCsm16BinaryGuid"},
	{{ 0xe9ca4775, 0x8657, 0x47fc, { 0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24 }}, "EfiHiiFont"},
	{{ 0xea4b0675, 0x1f36, 0x4abe, { 0xbb, 0x3a, 0x6d, 0x60, 0x76, 0x0a, 0x02, 0xa2 }}, "AmiPciPortCompatibility"},
	{{ 0xea7d60a6, 0x1050, 0x45e4, { 0xbe, 0xdf, 0xbf, 0x17, 0x72, 0x90, 0xd4, 0xb2 }}, "EfiEmmcBootPartition"},
	{{ 0xeb23f55a, 0x7863, 0x4ac2, { 0x8d, 0x3d, 0x95, 0x65, 0x35, 0xde, 0x03, 0x75 }}, "EfiIncompatiblePciDeviceSupport"},
	{{ 0xeb346b97, 0x975f, 0x4a9f, { 0x8b, 0x22, 0xf8, 0xe9, 0x2b, 0xb3, 0xd5, 0x69 }}, "EfiSmmCpu"},
	{{ 0xeb97088e, 0xcfdf, 0x49c6, { 0xbe, 0x4b, 0xd9, 0x06, 0xa5, 0xb2, 0x0e, 0x86 }}, "EfiAcpiSdt"},
	{{ 0xec20eb79, 0x6c1a, 0x4664, { 0x9a, 0x0d, 0xd2, 0xe4, 0xcc, 0x16, 0xd6, 0x64 }}, "EfiTcp6ServiceBinding"},
	{{ 0xec63428d, 0x66ca, 0x4bf9, { 0x82, 0xae, 0x84, 0x0f, 0x6d, 0x5c, 0x23, 0x05 }}, "AmiBoardPciInit"},
	{{ 0xec835dd3, 0xfe0f, 0x617b, { 0xa6, 0x21, 0xb3, 0x50, 0xc3, 0xe1, 0x33, 0x88 }}, "EfiIp6ServiceBinding"},
	{{ 0xecb867ab, 0x8df4, 0x492d, { 0x81, 0x50, 0xa7, 0xfd, 0x1b, 0x9b, 0x5a, 0x75 }}, "AmiSmmFlash"},
	{{ 0xecb867ab, 0x8df4, 0x492d, { 0x81, 0x50, 0xa7, 0xfd, 0x1b, 0x9b, 0x5a, 0x75 }}, "FlashSmm"},
	{{ 0xed32d533, 0x99e6, 0x4209, { 0x9c, 0xc0, 0x2d, 0x72, 0xcd, 0xd9, 0x98, 0xa7 }}, "EfiSmmVariable"},
	{{ 0xee9b8d90, 0xc5a6, 0x40a2, { 0xbd, 0xe2, 0x52, 0x55, 0x8d, 0x33, 0xcc, 0xa1 }}, "EfiSmmUsbDispatch2"},
	{{ 0xeee07404, 0x26ee, 0x43c9, { 0x90, 0x71, 0x4e, 0x48, 0x00, 0x8c, 0x46, 0x91 }}, "EfiWheaSupport"},
	{{ 0xef9fc172, 0xa1b2, 0x4693, { 0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42 }}, "EfiHiiDatabase"},
	{{ 0xf2a128ff, 0x257b, 0x456e, { 0x9d, 0xe8, 0x63, 0xe7, 0xc7, 0xdc, 0xdf, 0xac }}, "OpromStartEnd"},
	{{ 0xf3224a5e, 0x17a3, 0x47c2, { 0xa3, 0x8b, 0x48, 0x14, 0x56, 0x86, 0x3c, 0x74 }}, "AmiSmmNvramUpdate"},
	{{ 0xf33261e7, 0x23cb, 0x11d5, { 0xbd, 0x5c, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 }}, "FrameworkEfiMpService"},
	{{ 0xf36ff770, 0xa7e1, 0x42cf, { 0x9e, 0xd2, 0x56, 0xf0, 0xf2, 0x71, 0xf4, 0x4c }}, "EfiManagedNetworkServiceBinding"},
	{{ 0xf42a009d, 0x977f, 0x4f08, { 0x94, 0x40, 0xbc, 0xa5, 0xa3, 0xbe, 0xd9, 0xaf }}, "AmiExtPciBus"},
	{{ 0xf42f7782, 0x012e, 0x4c12, { 0x99, 0x56, 0x49, 0xf9, 0x43, 0x04, 0xf7, 0x21 }}, "EfiConsoleControl"},
	{{ 0xf44c00ee, 0x1f2c, 0x4a00, { 0xaa, 0x09, 0x1c, 0x9f, 0x3e, 0x08, 0x00, 0xa3 }}, "EfiArpServiceBinding"},
	{{ 0xf4b427bb, 0xba21, 0x4f16, { 0xbc, 0x4e, 0x43, 0xe4, 0x16, 0xab, 0x61, 0x9c }}, "EfiArp"},
	{{ 0xf4ccbfb7, 0xf6e0, 0x47fd, { 0x9d, 0xd4, 0x10, 0xa8, 0xf1, 0x50, 0xc1, 0x91 }}, "EfiSmmBase2"},
	{{ 0xf4f63529, 0x281e, 0x4040, { 0xa3, 0x13, 0xc1, 0xd6, 0x76, 0x63, 0x84, 0xbe }}, "AmiHddSecurity"},
	{{ 0xf5089266, 0x1aa0, 0x4953, { 0x97, 0xd8, 0x56, 0x2f, 0x8a, 0x73, 0xb5, 0x19 }}, "EfiUsbHc"},
	{{ 0xf541796d, 0xa62e, 0x4954, { 0xa7, 0x75, 0x95, 0x84, 0xf6, 0x1b, 0x9c, 0xdd }}, "EfiTcg"},
	{{ 0xf7ca7568, 0x5a09, 0x4d2c, { 0x8a, 0x9b, 0x75, 0x84, 0x68, 0x59, 0x2a, 0xe2 }}, "AmiNvramControl"},
	{{ 0xfd0f4478, 0x0efd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e }}, "EfiGetPcdInfo"},
	{{ 0xfedf8e0c, 0xe147, 0x11e3, { 0x99, 0x03, 0xb8, 0xe8, 0x56, 0x2c, 0xba, 0xfa }}, "EfiBootManagerPolicy"},
	{{ 0xffbd9ad2, 0xf1db, 0x4f92, { 0xa6, 0x49, 0xeb, 0x9e, 0xed, 0xea, 0x86, 0xb5 }}, "AmiHddSmart"},
	{{ 0xffe06bdd, 0x6107, 0x46a6, { 0x7b, 0xb2, 0x5a, 0x9c, 0x7e, 0xc5, 0x27, 0x5c }}, "EfiAcpiTable"}
};

GLOBAL_REMOVE_IF_UNREFERENCED UINTN NumberofElementsInBuildToolGeneratedProtocolTable = sizeof(BuildToolGeneratedProtocolTable)/sizeof(BuildToolGeneratedProtocolTable[0]);

static INT32 BuildToolGeneratedCompareProtocolGuid(CONST EFI_GUID *Guid1, CONST EFI_GUID *Guid2){
	UINT8 i;

	if (Guid1->Data1 != Guid2->Data1) return (Guid1->Data1 < Guid2->Data1) ? -1 : 1;
	if (Guid1->Data2 != Guid2->Data2) return Guid1->Data2 - Guid2->Data2;
	if (Guid1->Data3 != Guid2->Data3) return Guid1->Data3 - Guid2->Data3;

	for (i = 0; i<8; i++) {
		if (Guid1->Data4[i] != Guid2->Data4[i]) return Guid1->Data4[i] - Guid2->Data4[i];
	}
	return 0;
}

CHAR8* GetProtocolNameFromBuildToolGeneratedTable(CONST EFI_GUID *Guid){
    INTN Low = 0;
    INTN High = (INTN)(NumberofElementsInBuildToolGeneratedProtocolTable-1);
    
    while(Low<=High){
        INTN i;
        INT32 CompareResult;
        
        i = (Low+High)/2;
        CompareResult = BuildToolGeneratedCompareProtocolGuid(&BuildToolGeneratedProtocolTable[i].Guid,Guid);
        if ( CompareResult < 0 ) Low = i+1;
        else if ( CompareResult > 0 ) High = i-1;
        else return BuildToolGeneratedProtocolTable[i].Name;
    }
    return NULL;
}