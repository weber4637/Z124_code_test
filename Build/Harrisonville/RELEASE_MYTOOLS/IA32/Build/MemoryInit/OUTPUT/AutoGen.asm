; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.207 

	TITLE	d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\IA32\Build\MemoryInit\DEBUG\AutoGen.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	??_C@_0L@MPBIGKHF@MemoryInit?$AA@		; `string'
PUBLIC	_gEfiCallerIdGuid
PUBLIC	_gEfiCallerBaseName
PUBLIC	_gEfiSmmPeiSmramMemoryReserveGuid
PUBLIC	_gEfiAcpiVariableGuid
PUBLIC	_gEfiGlobalVariableGuid
PUBLIC	_gEfiMemoryConfigDataGuid
PUBLIC	_gEfiMrcVersionGuid
PUBLIC	_gEfiBdatMemoryData2Guid
PUBLIC	_gIqatIpReservedBaseHobGuid
PUBLIC	_gEfiMdePkgTokenSpaceGuid
PUBLIC	_gEfiFirmwareFileSystem2Guid
PUBLIC	_gEfiHobMemoryAllocStackGuid
PUBLIC	_gEfiHobMemoryAllocBspStoreGuid
PUBLIC	_gEfiHobMemoryAllocModuleGuid
PUBLIC	_gAmiGlobalVariableGuid
PUBLIC	_gEfiMdeModulePkgTokenSpaceGuid
PUBLIC	_gIqatIpPolicyHobGuid
PUBLIC	_gEfiPeiReadOnlyVariable2PpiGuid
PUBLIC	_gSiSaPolicyPpiGuid
PUBLIC	_gMeUmaPpiGuid
PUBLIC	_gPchPolicyPpiGuid
PUBLIC	_gPeiIeHeciPpiGuid
PUBLIC	_gEfiPeiBeforeMemoryDiscoveredPpiGuid
PUBLIC	_gAmiPeiBeforeMrcGuid
PUBLIC	_gAmiPeiAfterMrcGuid
PUBLIC	_gAmiPeiEndOfMemDetectGuid
PUBLIC	_gPeiCapsulePpiGuid
PUBLIC	_gPcdPpiGuid
PUBLIC	_gEfiPeiPcdPpiGuid
PUBLIC	_gGetPcdInfoPpiGuid
PUBLIC	_gEfiGetPcdInfoPpiGuid
PUBLIC	_gEfiPeiFirmwareVolumeInfoPpiGuid
PUBLIC	_gEfiPeiFirmwareVolumeInfo2PpiGuid
PUBLIC	_gAmiDebugServicePpiGuid
PUBLIC	_gIqatIpPolicyPpiGuid
PUBLIC	__gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
PUBLIC	__gPcd_FixedAtBuild_PcdDebugClearMemoryValue
PUBLIC	__gPcd_FixedAtBuild_PcdDebugPropertyMask
PUBLIC	__gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
PUBLIC	__gPcd_FixedAtBuild_PcdVerifyNodeInList
PUBLIC	__gPcd_FixedAtBuild_PcdMaximumLinkedListLength
PUBLIC	__gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
PUBLIC	__gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
PUBLIC	__gPcd_FixedAtBuild_PcdPostCodePropertyMask
PUBLIC	__gPcd_FixedAtBuild_PcdPort80DataWidth
PUBLIC	__gPcd_FixedAtBuild_PcdSerialUseMmio
PUBLIC	__gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl
PUBLIC	__gPcd_FixedAtBuild_PcdSerialDetectCable
PUBLIC	__gPcd_BinaryPatch_PcdSerialRegisterBase
PUBLIC	__gPcd_BinaryPatch_Size_PcdSerialRegisterBase
PUBLIC	__gPcd_FixedAtBuild_PcdSerialBaudRate
PUBLIC	__gPcd_FixedAtBuild_PcdSerialLineControl
PUBLIC	__gPcd_FixedAtBuild_PcdSerialFifoControl
PUBLIC	__gPcd_FixedAtBuild_PcdSerialClockRate
PUBLIC	__gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
PUBLIC	__gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize
PUBLIC	__gPcd_FixedAtBuild_PcdSerialRegisterStride
PUBLIC	__gPeimRevision
PUBLIC	__gDriverUnloadImageCount
;	COMDAT __gDriverUnloadImageCount
CONST	SEGMENT
__gDriverUnloadImageCount DB 00H
CONST	ENDS
;	COMDAT __gPeimRevision
CONST	SEGMENT
__gPeimRevision DD 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialRegisterStride
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialRegisterStride DD 01H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize DD 040H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialPciDeviceInfo DB 0ffH
	ORG $+31
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialClockRate
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialClockRate DD 01c2000H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialFifoControl
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialFifoControl DB 027H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialLineControl
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialLineControl DB 03H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialBaudRate
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialBaudRate DD 01c200H
CONST	ENDS
;	COMDAT __gPcd_BinaryPatch_Size_PcdSerialRegisterBase
_DATA	SEGMENT
__gPcd_BinaryPatch_Size_PcdSerialRegisterBase DD 08H
_DATA	ENDS
_DATA	SEGMENT
__gPcd_BinaryPatch_PcdSerialRegisterBase DQ 00000000000003f8H
_DATA	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialDetectCable
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialDetectCable DB 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl DB 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdSerialUseMmio
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdSerialUseMmio DB 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdPort80DataWidth
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdPort80DataWidth DB 08H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdPostCodePropertyMask
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdPostCodePropertyMask DB 08H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength DD 0f4240H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdMaximumAsciiStringLength DD 0f4240H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdMaximumLinkedListLength
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdMaximumLinkedListLength DD 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdVerifyNodeInList
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdVerifyNodeInList DB 00H
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel DD 0ffffffffH
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdDebugPropertyMask
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdDebugPropertyMask DB 02fH
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdDebugClearMemoryValue
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdDebugClearMemoryValue DB 0afH
CONST	ENDS
;	COMDAT __gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
CONST	SEGMENT
__gPcd_FixedAtBuild_PcdDebugPrintErrorLevel DD 080000046H
CONST	ENDS
;	COMDAT _gIqatIpPolicyPpiGuid
_DATA	SEGMENT
_gIqatIpPolicyPpiGuid DD 0ac6bd8e9H
	DW	0b89H
	DW	045b1H
	DB	0aeH
	DB	09H
	DB	0a2H
	DB	0c0H
	DB	017H
	DB	033H
	DB	04bH
	DB	06aH
_DATA	ENDS
;	COMDAT _gAmiDebugServicePpiGuid
_DATA	SEGMENT
_gAmiDebugServicePpiGuid DD 036232936H
	DW	0e76H
	DW	031c8H
	DB	0a1H
	DB	03aH
	DB	03aH
	DB	0f2H
	DB	0fcH
	DB	01cH
	DB	039H
	DB	032H
_DATA	ENDS
;	COMDAT _gEfiPeiFirmwareVolumeInfo2PpiGuid
_DATA	SEGMENT
_gEfiPeiFirmwareVolumeInfo2PpiGuid DD 0ea7ca24bH
	DW	0ded5H
	DW	04dadH
	DB	0a3H
	DB	089H
	DB	0bfH
	DB	082H
	DB	07eH
	DB	08fH
	DB	09bH
	DB	038H
_DATA	ENDS
;	COMDAT _gEfiPeiFirmwareVolumeInfoPpiGuid
_DATA	SEGMENT
_gEfiPeiFirmwareVolumeInfoPpiGuid DD 049edb1c1H
	DW	0bf21H
	DW	04761H
	DB	0bbH
	DB	012H
	DB	0ebH
	DB	00H
	DB	031H
	DB	0aaH
	DB	0bbH
	DB	039H
_DATA	ENDS
;	COMDAT _gEfiGetPcdInfoPpiGuid
_DATA	SEGMENT
_gEfiGetPcdInfoPpiGuid DD 0a60c6b59H
	DW	0e459H
	DW	0425dH
	DB	09cH
	DB	069H
	DB	0bH
	DB	0ccH
	DB	09cH
	DB	0b2H
	DB	07dH
	DB	081H
_DATA	ENDS
;	COMDAT _gGetPcdInfoPpiGuid
_DATA	SEGMENT
_gGetPcdInfoPpiGuid DD 04d8b155bH
	DW	0c059H
	DW	04c8fH
	DB	089H
	DB	026H
	DB	06H
	DB	0fdH
	DB	043H
	DB	031H
	DB	0dbH
	DB	08aH
_DATA	ENDS
;	COMDAT _gEfiPeiPcdPpiGuid
_DATA	SEGMENT
_gEfiPeiPcdPpiGuid DD 01f34d25H
	DW	04de2H
	DW	023adH
	DB	03fH
	DB	0f3H
	DB	036H
	DB	035H
	DB	03fH
	DB	0f3H
	DB	023H
	DB	0f1H
_DATA	ENDS
;	COMDAT _gPcdPpiGuid
_DATA	SEGMENT
_gPcdPpiGuid DD	06e81c58H
	DW	04ad7H
	DW	044bcH
	DB	083H
	DB	090H
	DB	0f1H
	DB	02H
	DB	065H
	DB	0f7H
	DB	024H
	DB	080H
_DATA	ENDS
;	COMDAT _gPeiCapsulePpiGuid
_DATA	SEGMENT
_gPeiCapsulePpiGuid DD 03acf33eeH
	DW	0d892H
	DW	040f4H
	DB	0a2H
	DB	0fcH
	DB	038H
	DB	054H
	DB	0d2H
	DB	0e1H
	DB	032H
	DB	03dH
_DATA	ENDS
;	COMDAT _gAmiPeiEndOfMemDetectGuid
_DATA	SEGMENT
_gAmiPeiEndOfMemDetectGuid DD 0633194beH
	DW	01697H
	DW	011e1H
	DB	0b5H
	DB	0f0H
	DB	02cH
	DB	0b2H
	DB	048H
	DB	024H
	DB	01H
	DB	09bH
_DATA	ENDS
;	COMDAT _gAmiPeiAfterMrcGuid
_DATA	SEGMENT
_gAmiPeiAfterMrcGuid DD 064c96700H
	DW	06b4cH
	DW	0480cH
	DB	0a3H
	DB	0e1H
	DB	0b8H
	DB	0bdH
	DB	0e8H
	DB	0f6H
	DB	02H
	DB	0b2H
_DATA	ENDS
;	COMDAT _gAmiPeiBeforeMrcGuid
_DATA	SEGMENT
_gAmiPeiBeforeMrcGuid DD 071a8917bH
	DW	0891H
	DW	04e27H
	DB	08aH
	DB	073H
	DB	0a9H
	DB	0b3H
	DB	034H
	DB	084H
	DB	03H
	DB	093H
_DATA	ENDS
;	COMDAT _gEfiPeiBeforeMemoryDiscoveredPpiGuid
_DATA	SEGMENT
_gEfiPeiBeforeMemoryDiscoveredPpiGuid DD 0c884cccdH
	DW	02760H
	DW	0400eH
	DB	0aaH
	DB	09dH
	DB	06dH
	DB	01aH
	DB	092H
	DB	041H
	DB	0d5H
	DB	039H
_DATA	ENDS
;	COMDAT _gPeiIeHeciPpiGuid
_DATA	SEGMENT
_gPeiIeHeciPpiGuid DD 0bebfba1fH
	DW	0965fH
	DW	04f87H
	DB	0adH
	DB	055H
	DB	0a0H
	DB	0aH
	DB	054H
	DB	07bH
	DB	0cfH
	DB	069H
_DATA	ENDS
;	COMDAT _gPchPolicyPpiGuid
_DATA	SEGMENT
_gPchPolicyPpiGuid DD 0dfe2b897H
	DW	0e8eH
	DW	04926H
	DB	0bcH
	DB	069H
	DB	0e5H
	DB	0edH
	DB	0d3H
	DB	0f9H
	DB	038H
	DB	0e1H
_DATA	ENDS
;	COMDAT _gMeUmaPpiGuid
_DATA	SEGMENT
_gMeUmaPpiGuid DD 08c376010H
	DW	02400H
	DW	04d7dH
	DB	0b4H
	DB	07bH
	DB	09dH
	DB	085H
	DB	01dH
	DB	0f3H
	DB	0c9H
	DB	0d1H
_DATA	ENDS
;	COMDAT _gSiSaPolicyPpiGuid
_DATA	SEGMENT
_gSiSaPolicyPpiGuid DD 0f5621af5H
	DW	0f70bH
	DW	04360H
	DB	084H
	DB	0f3H
	DB	0c2H
	DB	0cfH
	DB	051H
	DB	043H
	DB	0cdH
	DB	0b8H
_DATA	ENDS
;	COMDAT _gEfiPeiReadOnlyVariable2PpiGuid
_DATA	SEGMENT
_gEfiPeiReadOnlyVariable2PpiGuid DD 02ab86ef5H
	DW	0ecb5H
	DW	04134H
	DB	0b5H
	DB	056H
	DB	038H
	DB	054H
	DB	0caH
	DB	01fH
	DB	0e1H
	DB	0b4H
_DATA	ENDS
;	COMDAT _gIqatIpPolicyHobGuid
_DATA	SEGMENT
_gIqatIpPolicyHobGuid DD 0a351a181H
	DW	04580H
	DW	048d0H
	DB	083H
	DB	069H
	DB	03cH
	DB	0daH
	DB	09aH
	DB	0f5H
	DB	096H
	DB	03cH
_DATA	ENDS
;	COMDAT _gEfiMdeModulePkgTokenSpaceGuid
_DATA	SEGMENT
_gEfiMdeModulePkgTokenSpaceGuid DD 0a1aff049H
	DW	0fdebH
	DW	0442aH
	DB	0b3H
	DB	020H
	DB	013H
	DB	0abH
	DB	04cH
	DB	0b7H
	DB	02bH
	DB	0bcH
_DATA	ENDS
;	COMDAT _gAmiGlobalVariableGuid
_DATA	SEGMENT
_gAmiGlobalVariableGuid DD 01368881H
	DW	0c4adH
	DW	04b1dH
	DB	0b6H
	DB	031H
	DB	0d5H
	DB	07aH
	DB	08eH
	DB	0c8H
	DB	0dbH
	DB	06bH
_DATA	ENDS
;	COMDAT _gEfiHobMemoryAllocModuleGuid
_DATA	SEGMENT
_gEfiHobMemoryAllocModuleGuid DD 0f8e21975H
	DW	0899H
	DW	04f58H
	DB	0a4H
	DB	0beH
	DB	055H
	DB	025H
	DB	0a9H
	DB	0c6H
	DB	0d7H
	DB	07aH
_DATA	ENDS
;	COMDAT _gEfiHobMemoryAllocBspStoreGuid
_DATA	SEGMENT
_gEfiHobMemoryAllocBspStoreGuid DD 0564b33cdH
	DW	0c92aH
	DW	04593H
	DB	090H
	DB	0bfH
	DB	024H
	DB	073H
	DB	0e4H
	DB	03cH
	DB	063H
	DB	022H
_DATA	ENDS
;	COMDAT _gEfiHobMemoryAllocStackGuid
_DATA	SEGMENT
_gEfiHobMemoryAllocStackGuid DD 04ed4bf27H
	DW	04092H
	DW	042e9H
	DB	080H
	DB	07dH
	DB	052H
	DB	07bH
	DB	01dH
	DB	00H
	DB	0c9H
	DB	0bdH
_DATA	ENDS
;	COMDAT _gEfiFirmwareFileSystem2Guid
_DATA	SEGMENT
_gEfiFirmwareFileSystem2Guid DD 08c8ce578H
	DW	08a3dH
	DW	04f1cH
	DB	099H
	DB	035H
	DB	089H
	DB	061H
	DB	085H
	DB	0c3H
	DB	02dH
	DB	0d3H
_DATA	ENDS
;	COMDAT _gEfiMdePkgTokenSpaceGuid
_DATA	SEGMENT
_gEfiMdePkgTokenSpaceGuid DD 0914aebe7H
	DW	04635H
	DW	0459bH
	DB	0aaH
	DB	01cH
	DB	011H
	DB	0e2H
	DB	019H
	DB	0b0H
	DB	03aH
	DB	010H
_DATA	ENDS
;	COMDAT _gIqatIpReservedBaseHobGuid
_DATA	SEGMENT
_gIqatIpReservedBaseHobGuid DD 0d3953ea4H
	DW	05c26H
	DW	04c12H
	DB	0a5H
	DB	041H
	DB	0edH
	DB	098H
	DB	0ceH
	DB	0e0H
	DB	08fH
	DB	07aH
_DATA	ENDS
;	COMDAT _gEfiBdatMemoryData2Guid
_DATA	SEGMENT
_gEfiBdatMemoryData2Guid DD 0ce3f6794H
	DW	04883H
	DW	0492cH
	DB	08dH
	DB	0baH
	DB	02fH
	DB	0c0H
	DB	098H
	DB	044H
	DB	077H
	DB	010H
_DATA	ENDS
;	COMDAT _gEfiMrcVersionGuid
_DATA	SEGMENT
_gEfiMrcVersionGuid DD 07fc49008H
	DW	0cfa8H
	DW	04097H
	DB	0a5H
	DB	065H
	DB	0d2H
	DB	042H
	DB	01dH
	DB	0b2H
	DB	046H
	DB	0e2H
_DATA	ENDS
;	COMDAT _gEfiMemoryConfigDataGuid
_DATA	SEGMENT
_gEfiMemoryConfigDataGuid DD 080dbd530H
	DW	0b74cH
	DW	04f11H
	DB	08cH
	DB	03H
	DB	041H
	DB	086H
	DB	065H
	DB	053H
	DB	028H
	DB	031H
_DATA	ENDS
;	COMDAT _gEfiGlobalVariableGuid
_DATA	SEGMENT
_gEfiGlobalVariableGuid DD 08be4df61H
	DW	093caH
	DW	011d2H
	DB	0aaH
	DB	0dH
	DB	00H
	DB	0e0H
	DB	098H
	DB	03H
	DB	02bH
	DB	08cH
_DATA	ENDS
;	COMDAT _gEfiAcpiVariableGuid
_DATA	SEGMENT
_gEfiAcpiVariableGuid DD 0c020489eH
	DW	06db2H
	DW	04ef2H
	DB	09aH
	DB	0a5H
	DB	0caH
	DB	06H
	DB	0fcH
	DB	011H
	DB	0d3H
	DB	06aH
_DATA	ENDS
;	COMDAT _gEfiSmmPeiSmramMemoryReserveGuid
_DATA	SEGMENT
_gEfiSmmPeiSmramMemoryReserveGuid DD 06dadf1d1H
	DW	0d4ccH
	DW	04910H
	DB	0bbH
	DB	06eH
	DB	082H
	DB	0b1H
	DB	0fdH
	DB	080H
	DB	0ffH
	DB	03dH
_DATA	ENDS
;	COMDAT _gEfiCallerBaseName
_DATA	SEGMENT
_gEfiCallerBaseName DD FLAT:??_C@_0L@MPBIGKHF@MemoryInit?$AA@
_DATA	ENDS
;	COMDAT ??_C@_0L@MPBIGKHF@MemoryInit?$AA@
CONST	SEGMENT
??_C@_0L@MPBIGKHF@MemoryInit?$AA@ DB 'MemoryInit', 00H	; `string'
CONST	ENDS
;	COMDAT _gEfiCallerIdGuid
_DATA	SEGMENT
_gEfiCallerIdGuid DD 0dd86c88bH
	DW	0c71aH
	DW	04033H
	DB	0a2H
	DB	0f8H
	DB	032H
	DB	078H
	DB	0afH
	DB	0a0H
	DB	096H
	DB	028H
_DATA	ENDS
PUBLIC	_ProcessLibraryConstructorList
; Function compile flags: /Ogspy
;	COMDAT _ProcessLibraryConstructorList
_TEXT	SEGMENT
_FileHandle$ = 8					; size = 4
_PeiServices$ = 12					; size = 4
_ProcessLibraryConstructorList PROC			; COMDAT
; File d:\bios\z124-002\z124-002\build\harrisonville\release_mytools\ia32\build\memoryinit\debug\autogen.c
; Line 257
	ret	0
_ProcessLibraryConstructorList ENDP
_TEXT	ENDS
PUBLIC	_ProcessLibraryDestructorList
; Function compile flags: /Ogspy
;	COMDAT _ProcessLibraryDestructorList
_TEXT	SEGMENT
_FileHandle$ = 8					; size = 4
_PeiServices$ = 12					; size = 4
_ProcessLibraryDestructorList PROC			; COMDAT
; Line 269
	ret	0
_ProcessLibraryDestructorList ENDP
_TEXT	ENDS
PUBLIC	_ProcessModuleEntryPointList
EXTRN	_PeimMemoryInit:PROC
; Function compile flags: /Ogspy
;	COMDAT _ProcessModuleEntryPointList
_TEXT	SEGMENT
_FileHandle$ = 8					; size = 4
_PeiServices$ = 12					; size = 4
_ProcessModuleEntryPointList PROC			; COMDAT
; Line 281
	jmp	_PeimMemoryInit
_ProcessModuleEntryPointList ENDP
_TEXT	ENDS
PUBLIC	_ProcessModuleUnloadList
; Function compile flags: /Ogspy
;	COMDAT _ProcessModuleUnloadList
_TEXT	SEGMENT
_ImageHandle$ = 8					; size = 4
_ProcessModuleUnloadList PROC				; COMDAT
; Line 293
	xor	eax, eax
; Line 294
	ret	0
_ProcessModuleUnloadList ENDP
_TEXT	ENDS
END
