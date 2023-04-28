#define BUILD_TOOL_GENERATED_PPI_TABLE_VERSION 1

typedef struct{
    EFI_GUID Guid;
    CHAR8 *Name;
} BUILD_TOOL_GENERATED_PPI_TABLE;

GLOBAL_REMOVE_IF_UNREFERENCED BUILD_TOOL_GENERATED_PPI_TABLE BuildToolGeneratedPpiTable[] = {
	{{ 0x0065d394, 0x9951, 0x4144, { 0x82, 0xa3, 0x0a, 0xfc, 0x85, 0x79, 0xc2, 0x51 }}, "EfiPeiRscHandler"},
	{{ 0x01f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 }}, "EfiPeiPcd"},
	{{ 0x05687f4a, 0x3ca7, 0x4d19, { 0x9b, 0xc5, 0xe1, 0x80, 0xce, 0xa3, 0x56, 0x9f }}, "AmiPlatformSecurityChipGuid"},
	{{ 0x057a449a, 0x1fdc, 0x4c06, { 0xbf, 0xc9, 0xf5, 0x3f, 0x6a, 0x99, 0xbb, 0x92 }}, "EfiPciCfg2"},
	{{ 0x06e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x02, 0x65, 0xf7, 0x24, 0x80 }}, "Pcd"},
	{{ 0x0ae8ce5d, 0xe448, 0x4437, { 0xa8, 0xd7, 0xeb, 0xf5, 0xf1, 0x94, 0xf7, 0x31 }}, "EfiDxeIpl"},
	{{ 0x0de2ce25, 0x446a, 0x45a7, { 0xbf, 0xc9, 0x37, 0xda, 0x26, 0x34, 0x4b, 0x37 }}, "EfiPeiDeviceRecoveryModule"},
	{{ 0x0ecc666b, 0x4662, 0x47f9, { 0x9d, 0xd5, 0xd0, 0x96, 0xff, 0x7d, 0xa4, 0x9e }}, "PeiSecPerformance"},
	{{ 0x12025686, 0x3984, 0x466c, { 0x98, 0x0b, 0x8b, 0x5e, 0x89, 0xda, 0x03, 0x19 }}, "AmiReadyToLoadDxeCore"},
	{{ 0x177d39d2, 0x43b8, 0x40c8, { 0x9a, 0xe1, 0x3c, 0x51, 0x98, 0xd6, 0x94, 0x1e }}, "PeiTcg"},
	{{ 0x17ee496a, 0xd8e4, 0x4b9a, { 0x94, 0xd1, 0xce, 0x82, 0x72, 0x30, 0x08, 0x50 }}, "EfiPeiBootInRecoveryMode"},
	{{ 0x1a36e4e7, 0xfab6, 0x476a, { 0x8e, 0x75, 0x69, 0x5a, 0x05, 0x76, 0xfd, 0xd7 }}, "EfiPeiDecompress"},
	{{ 0x1b1924c3, 0x6321, 0x484f, { 0x83, 0xef, 0x88, 0x94, 0xb2, 0x1d, 0xe2, 0x58 }}, "AmiPeiCrbInfo"},
	{{ 0x1f4c6f90, 0xb06b, 0x48d8, { 0xa2, 0x01, 0xba, 0xe5, 0xf1, 0xcd, 0x7d, 0x56 }}, "EfiPeiStall"},
	{{ 0x229832d3, 0x7a30, 0x4b36, { 0xb8, 0x27, 0xf4, 0x0c, 0xb7, 0xd4, 0x54, 0x36 }}, "EfiPeiStatusCode"},
	{{ 0x268f33a9, 0xcccd, 0x48be, { 0x88, 0x17, 0x86, 0x05, 0x3a, 0xc3, 0x2e, 0xd6 }}, "PeiSmmAccess"},
	{{ 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 }}, "EfiPeiReadOnlyVariable2"},
	{{ 0x30eb2979, 0xb0f7, 0x4d60, { 0xb2, 0xdc, 0x1a, 0x2c, 0x96, 0xce, 0xb1, 0xf4 }}, "PeiPlatformMemoryRange"},
	{{ 0x36232936, 0x0e76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32 }}, "AmiDebugService"},
	{{ 0x38965bb5, 0x8097, 0x40f5, { 0xb7, 0x42, 0x8c, 0xc1, 0x4a, 0x64, 0x9b, 0x64 }}, "AmiPeiSbCustom"},
	{{ 0x3acf33ee, 0xd892, 0x40f4, { 0xa2, 0xfc, 0x38, 0x54, 0xd2, 0xe1, 0x32, 0x3d }}, "EfiPeiCapsule"},
	{{ 0x3acf33ee, 0xd892, 0x40f4, { 0xa2, 0xfc, 0x38, 0x54, 0xd2, 0xe1, 0x32, 0x3d }}, "PeiCapsule"},
	{{ 0x3bc1f6de, 0x693e, 0x4547, { 0xa3, 0x00, 0x21, 0x82, 0x3c, 0xa4, 0x20, 0xb2 }}, "PeiUsbController"},
	{{ 0x3cd652b4, 0x6d33, 0x4dce, { 0x89, 0xdb, 0x83, 0xdf, 0x97, 0x66, 0xfc, 0xca }}, "EfiVectorHandoffInfo"},
	{{ 0x3cdc90c6, 0x13fb, 0x4a75, { 0x9e, 0x79, 0x59, 0xe9, 0xdd, 0x78, 0xb9, 0xfa }}, "EfiPeiReadOnlyVariable"},
	{{ 0x433e0f9f, 0x05ae, 0x410a, { 0xa0, 0xc3, 0xbf, 0x29, 0x8e, 0xcb, 0x25, 0xac }}, "PchReset"},
	{{ 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x00, 0x31, 0xaa, 0xbb, 0x39 }}, "EfiPeiFirmwareVolumeInfo"},
	{{ 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26, 0x06, 0xfd, 0x43, 0x31, 0xdb, 0x8a }}, "GetPcdInfo"},
	{{ 0x584cc99f, 0x4be8, 0x43d1, { 0xa4, 0x5a, 0x93, 0x3d, 0xc3, 0x94, 0x79, 0xfc }}, "AmiPeiNbCustom"},
	{{ 0x605ea650, 0xc65c, 0x42e1, { 0xba, 0x80, 0x91, 0xa5, 0x2a, 0xb6, 0x18, 0xc6 }}, "EfiEndOfPeiSignal"},
	{{ 0x61c68702, 0x4d7e, 0x4f43, { 0x8d, 0xef, 0xa7, 0x43, 0x05, 0xce, 0x74, 0xc5 }}, "PeiSmmControl"},
	{{ 0x633194be, 0x1697, 0x11e1, { 0xb5, 0xf0, 0x2c, 0xb2, 0x48, 0x24, 0x01, 0x9b }}, "AmiPeiEndOfMemDetectGuid"},
	{{ 0x64c96700, 0x6b4c, 0x480c, { 0xa3, 0xe1, 0xb8, 0xbd, 0xe8, 0xf6, 0x02, 0xb2 }}, "AmiPeiAfterMrcGuid"},
	{{ 0x652b38a9, 0x77f4, 0x453f, { 0x89, 0xd5, 0xe7, 0xbd, 0xc3, 0x52, 0xfc, 0x53 }}, "PeiUsbHostController"},
	{{ 0x695d8aa1, 0x42ee, 0x4c46, { 0x80, 0x5c, 0x6e, 0xa6, 0xbc, 0xe7, 0x99, 0xe3 }}, "EfiPeiVirtualBlockIo"},
	{{ 0x6cc45765, 0xcce4, 0x42fd, { 0xbc, 0x56, 0x01, 0x1a, 0xaa, 0xc6, 0xc9, 0xa8 }}, "EfiPeiReset2"},
	{{ 0x6d582dbc, 0xdb85, 0x4514, { 0x8f, 0xcc, 0x5a, 0xdf, 0x62, 0x27, 0xb1, 0x47 }}, "EfiPeiS3Resume2"},
	{{ 0x6f8c2b35, 0xfef4, 0x448d, { 0x82, 0x56, 0xe1, 0x1b, 0x19, 0xd6, 0x10, 0x77 }}, "EfiSecPlatformInformation"},
	{{ 0x71a8917b, 0x0891, 0x4e27, { 0x8a, 0x73, 0xa9, 0xb3, 0x34, 0x84, 0x03, 0x93 }}, "AmiPeiBeforeMrcGuid"},
	{{ 0x7408d748, 0xfc8c, 0x4ee6, { 0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10 }}, "EfiPeiMasterBootMode"},
	{{ 0x7c29785c, 0x66b9, 0x49fc, { 0xb7, 0x97, 0x1c, 0xa5, 0x55, 0x0e, 0xf2, 0x83 }}, "PeiUsbIo"},
	{{ 0x8122cebd, 0xf4fd, 0x4ea8, { 0x97, 0x6c, 0xf0, 0x03, 0xad, 0xdc, 0x4c, 0xb4 }}, "EfiPeiIpmiTransport"},
	{{ 0x86c29aa5, 0x0db0, 0x4343, { 0xbd, 0x52, 0x7a, 0x72, 0x9f, 0x37, 0xc9, 0x6d }}, "AmiDigitalSignaturePPIGuid"},
	{{ 0x86f5680a, 0x155c, 0x4bc8, { 0xac, 0x77, 0x57, 0x38, 0x48, 0xe2, 0xad, 0x3d }}, "AmiTree"},
	{{ 0x88c9d306, 0x0900, 0x4eb5, { 0x82, 0x60, 0x3e, 0x2d, 0xbe, 0xda, 0x1f, 0x89 }}, "PeiPostScriptTable"},
	{{ 0x890c2cef, 0x43c8, 0x4209, { 0xa7, 0x8d, 0xae, 0x14, 0xaa, 0x17, 0x98, 0xb4 }}, "AmiTcgPlatformPpiAfterMem"},
	{{ 0x8c376010, 0x2400, 0x4d7d, { 0xb4, 0x7b, 0x9d, 0x85, 0x1d, 0xf3, 0xc9, 0xd1 }}, "MeUma"},
	{{ 0x8f685891, 0x4e6f, 0x445c, { 0xbb, 0x9e, 0xe5, 0x7a, 0x28, 0xfa, 0x53, 0xa0 }}, "PeiIePlatformPolicy"},
	{{ 0x95e8152b, 0x1b98, 0x4f11, { 0x8a, 0x77, 0xdb, 0x26, 0x58, 0x3e, 0xbc, 0x42 }}, "AmiPeiSbInitPolicyGuid"},
	{{ 0x97f91e78, 0xea12, 0x4ea6, { 0xb7, 0xb3, 0x7b, 0x06, 0x78, 0xc2, 0x86, 0x73 }}, "AmiPeiPciTableInit"},
	{{ 0x9a7ef41e, 0xc140, 0x4bd1, { 0xb8, 0x84, 0x1e, 0x11, 0x24, 0x0b, 0x4c, 0xe6 }}, "PeiPlatformMemorySize"},
	{{ 0x9ca93627, 0xb65b, 0x4324, { 0xa2, 0x02, 0xc0, 0xb4, 0x61, 0x76, 0x45, 0x43 }}, "EfiPeiSmbus2"},
	{{ 0x9ce4d938, 0x9c87, 0x41d0, { 0x9e, 0x55, 0x34, 0x92, 0x3f, 0xaf, 0x8b, 0x4f }}, "AmiPeiNbInitPolicyGuid"},
	{{ 0x9f685891, 0x4e6f, 0x445c, { 0xbb, 0x9e, 0xe5, 0x7a, 0x28, 0xfa, 0x53, 0xa0 }}, "PeiMePlatformPolicy"},
	{{ 0xa45e60d1, 0xc719, 0x44aa, { 0xb0, 0x7a, 0xaa, 0x77, 0x7f, 0x85, 0x90, 0x6d }}, "PeiAtaController"},
	{{ 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69, 0x0b, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 }}, "EfiGetPcdInfo"},
	{{ 0xa70250fc, 0x6b8f, 0x4b24, { 0xb2, 0xef, 0x21, 0x23, 0xe4, 0x70, 0x87, 0x03 }}, "RasPolicy"},
	{{ 0xa76b4e22, 0xb50a, 0x401d, { 0x8b, 0x35, 0x51, 0x24, 0xb0, 0xba, 0x41, 0x04 }}, "TcgPeiPolicyGuid"},
	{{ 0xabd42895, 0x78cf, 0x4872, { 0x84, 0x44, 0x1b, 0x5c, 0x18, 0x0b, 0xfb, 0xda }}, "EfiPeiSmbus"},
	{{ 0xac6bd8e9, 0x0b89, 0x45b1, { 0xae, 0x09, 0xa2, 0xc0, 0x17, 0x33, 0x4b, 0x6a }}, "IqatIpPolicy"},
	{{ 0xae933e1c, 0xcc47, 0x4e38, { 0x8f, 0x0e, 0xe2, 0xf6, 0x1d, 0x26, 0x05, 0xdf }}, "EfiPeiSmmCommunication"},
	{{ 0xaebffa01, 0x7edc, 0x49ff, { 0x8d, 0x88, 0xcb, 0x84, 0x8c, 0x5e, 0x86, 0x70 }}, "SiPolicy"},
	{{ 0xb6ec423c, 0x21d2, 0x490d, { 0x85, 0xc6, 0xdd, 0x58, 0x64, 0xea, 0xa6, 0x74 }}, "PeiBaseMemoryTest"},
	{{ 0xb9e0abfe, 0x5979, 0x4914, { 0x97, 0x7f, 0x6d, 0xee, 0x78, 0xc2, 0x78, 0xa6 }}, "EfiPeiLoadFile"},
	{{ 0xbb159a68, 0x8300, 0x43ef, { 0xa2, 0xa7, 0xf2, 0xad, 0xe6, 0xc9, 0x64, 0xa6 }}, "PcieIpPolicy"},
	{{ 0xbebfba1f, 0x965f, 0x4f87, { 0xad, 0x55, 0xa0, 0x0a, 0x54, 0x7b, 0xcf, 0x69 }}, "PeiIeHeci"},
	{{ 0xc153205a, 0xe898, 0x4c24, { 0x86, 0x89, 0xa4, 0xb4, 0xbc, 0xc5, 0xc8, 0xa2 }}, "PeiCache"},
	{{ 0xc1e6791d, 0xf35b, 0x43ef, { 0x92, 0x0a, 0xbe, 0x06, 0xba, 0x7f, 0x86, 0xa1 }}, "AmiTcgPlatformPpiBeforeMem"},
	{{ 0xc884cccd, 0x2760, 0x400e, { 0xaa, 0x9d, 0x6d, 0x1a, 0x92, 0x41, 0xd5, 0x39 }}, "EfiPeiBeforeMemoryDiscovered"},
	{{ 0xca4853f4, 0xe94b, 0x42b4, { 0x86, 0x42, 0xcd, 0xe2, 0x8a, 0x7f, 0xac, 0x2d }}, "PeiTpm"},
	{{ 0xccbf2786, 0xcd6c, 0x4308, { 0xbd, 0xfa, 0x62, 0x58, 0x70, 0xce, 0xbf, 0x81 }}, "AmiCmosAccess"},
	{{ 0xceab683c, 0xec56, 0x4a2d, { 0xa9, 0x06, 0x40, 0x53, 0xfa, 0x4e, 0x9c, 0x16 }}, "EfiTemporaryRamDone"},
	{{ 0xd14319e2, 0x407a, 0x9580, { 0x8d, 0xe5, 0x51, 0xa8, 0xff, 0xc6, 0xd7, 0xd7 }}, "Heci"},
	{{ 0xd52d8ad2, 0xea9a, 0x470c, { 0x9e, 0x33, 0x82, 0x8f, 0xa5, 0x91, 0xab, 0x8d }}, "AmiPeiHashInterfaceProtocolGuid"},
	{{ 0xdbe23aa9, 0xa345, 0x4b97, { 0x85, 0xb6, 0xb2, 0x26, 0xf1, 0x61, 0x73, 0x89 }}, "EfiTemporaryRamSupport"},
	{{ 0xdcd0be23, 0x9586, 0x40f4, { 0xb6, 0x43, 0x06, 0x52, 0x2c, 0xed, 0x4e, 0xde }}, "EfiPeiSecurity2"},
	{{ 0xdf66196c, 0x958f, 0x472f, { 0x93, 0x93, 0x71, 0x7d, 0x82, 0x11, 0x0a, 0xf6 }}, "AmiHashLogExtendExGuid"},
	{{ 0xdfe2b897, 0x0e8e, 0x4926, { 0xbc, 0x69, 0xe5, 0xed, 0xd3, 0xf9, 0x38, 0xe1 }}, "PchPolicy"},
	{{ 0xe6af1f7b, 0xfc3f, 0x46da, { 0xa8, 0x28, 0xa3, 0xb4, 0x57, 0xa4, 0x42, 0x82 }}, "EfiPeiCpuIoPpiInstalledGuid"},
	{{ 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 }}, "EfiPeiFirmwareVolumeInfo2"},
	{{ 0xee0ea811, 0xfbd9, 0x4777, { 0xb9, 0x5a, 0xba, 0x4f, 0x71, 0x10, 0x1f, 0x74 }}, "PeiHeci2"},
	{{ 0xef398d58, 0x9dfd, 0x4103, { 0xbf, 0x94, 0x78, 0xc6, 0xf4, 0xfe, 0x71, 0x2f }}, "EfiPeiReset"},
	{{ 0xf4ef9d7a, 0x98c5, 0x4c1a, { 0xb4, 0xd9, 0xd8, 0xd8, 0x72, 0x65, 0xbe, 0x0c }}, "PeiSdhc"},
	{{ 0xf5621af5, 0xf70b, 0x4360, { 0x84, 0xf3, 0xc2, 0xcf, 0x51, 0x43, 0xcd, 0xb8 }}, "SiSaPolicy"},
	{{ 0xf894643d, 0xc449, 0x42d1, { 0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde }}, "EfiPeiMemoryDiscovered"},
	{{ 0xf8df0b07, 0x5a84, 0x48d1, { 0xbe, 0x56, 0xc1, 0xbc, 0x48, 0x89, 0xc6, 0x73 }}, "NonVolatileMem"},
	{{ 0xfb6d9542, 0x612d, 0x4f45, { 0x87, 0x2f, 0x5c, 0xff, 0x52, 0xe9, 0x3d, 0xcf }}, "EfiPeiRecoveryModule"}
};

GLOBAL_REMOVE_IF_UNREFERENCED UINTN NumberofElementsInBuildToolGeneratedPpiTable = sizeof(BuildToolGeneratedPpiTable)/sizeof(BuildToolGeneratedPpiTable[0]);

static INT32 BuildToolGeneratedComparePpiGuid(CONST EFI_GUID *Guid1, CONST EFI_GUID *Guid2){
	UINT8 i;

	if (Guid1->Data1 != Guid2->Data1) return (Guid1->Data1 < Guid2->Data1) ? -1 : 1;
	if (Guid1->Data2 != Guid2->Data2) return Guid1->Data2 - Guid2->Data2;
	if (Guid1->Data3 != Guid2->Data3) return Guid1->Data3 - Guid2->Data3;

	for (i = 0; i<8; i++) {
		if (Guid1->Data4[i] != Guid2->Data4[i]) return Guid1->Data4[i] - Guid2->Data4[i];
	}
	return 0;
}

CHAR8* GetPpiNameFromBuildToolGeneratedTable(CONST EFI_GUID *Guid){
    INTN Low = 0;
    INTN High = (INTN)(NumberofElementsInBuildToolGeneratedPpiTable-1);
    
    while(Low<=High){
        INTN i;
        INT32 CompareResult;
        
        i = (Low+High)/2;
        CompareResult = BuildToolGeneratedComparePpiGuid(&BuildToolGeneratedPpiTable[i].Guid,Guid);
        if ( CompareResult < 0 ) Low = i+1;
        else if ( CompareResult > 0 ) High = i-1;
        else return BuildToolGeneratedPpiTable[i].Name;
    }
    return NULL;
}
