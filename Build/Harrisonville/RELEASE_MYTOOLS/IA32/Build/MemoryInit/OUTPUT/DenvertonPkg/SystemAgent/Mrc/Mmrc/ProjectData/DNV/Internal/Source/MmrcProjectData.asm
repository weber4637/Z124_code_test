; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.207 

	TITLE	d:\bios\z124-002\z124-002\DenvertonPkg\SystemAgent\Mrc\Mmrc\ProjectData\DNV\Internal\Source\MmrcProjectData.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	_RmtTable
PUBLIC	_StrobeToErrorMask
PUBLIC	_CadbMaGroupsDdr3
PUBLIC	_CadbMaGroupsDdr4
PUBLIC	_SmbusAddressToClttTable
PUBLIC	_NumberEyeMaskRead
PUBLIC	_NumberControlKnobsRead
PUBLIC	_NumberControlKnobsReadPN
PUBLIC	_NumberControlKnobsCtle
PUBLIC	_EyeMaskRead
PUBLIC	_ControlKnobsRead
PUBLIC	_ControlKnobsReadCtle
PUBLIC	_ControlKnobsReadPN
PUBLIC	_NumberEyeMaskWrite
PUBLIC	_NumberControlKnobsWrite
PUBLIC	_EyeMaskWrite
PUBLIC	_ControlKnobsWrite
PUBLIC	_ControlKnobsWriteDdr3
PUBLIC	_NumberEyeMaskCmd
PUBLIC	_NumberControlKnobsCmd
PUBLIC	_EyeMaskCmd
PUBLIC	_ControlKnobsCmd
PUBLIC	_DynamicDmapBitLocations
PUBLIC	_MaxGuardkeyPatterns
_DATA	SEGMENT
COMM	_CPGC_CONFIG_TYPES:DWORD
_DATA	ENDS
CONST	SEGMENT
_CadbMaGroupsDdr3 DB 00H
	DB	03H
	DB	06H
	DB	09H
	DB	0cH
	DB	0fH
	DB	013H
	DB	01H
	DB	04H
	DB	07H
	DB	0aH
	DB	0dH
	DB	014H
	DB	0ffH
	DB	02H
	DB	05H
	DB	08H
	DB	0bH
	DB	0eH
	DB	015H
	DB	0ffH
	ORG $+3
_CadbMaGroupsDdr4 DB 00H
	DB	03H
	DB	06H
	DB	09H
	DB	0cH
	DB	0fH
	DB	013H
	DB	01H
	DB	04H
	DB	07H
	DB	0aH
	DB	0dH
	DB	014H
	DB	0ffH
	DB	02H
	DB	05H
	DB	08H
	DB	0bH
	DB	0eH
	DB	015H
	DB	0ffH
	ORG $+3
_SmbusAddressToClttTable DW 01beH
	DW	01bfH
	DW	01c0H
	DW	01c1H
	DW	01c2H
	DW	01c3H
	DW	01c4H
	DW	01c5H
CONST	ENDS
_DATA	SEGMENT
_RmtTable DW	0e000H
	DB	00H
	ORG $+1
	DW	00H
	DB	00H
	DB	02H
	DB	00H
	DB	01H
	DB	00H
	DB	05H
	DW	00H
	DW	0e004H
	DB	01H
	ORG $+1
	DW	0e001H
	DB	00H
	DB	02H
	DB	02H
	DB	03H
	DB	00H
	DB	01H
	DW	0400H
	DW	0e00eH
	DB	00H
	ORG $+1
	DW	00H
	DB	00H
	DB	02H
	DB	06H
	DB	07H
	DB	00H
	DB	01H
	DW	00H
	DW	03011H
	DB	01H
	ORG $+1
	DW	04003H
	DB	00H
	DB	02H
	DB	08H
	DB	09H
	DB	00H
	DB	01H
	DW	0400H
	DW	0e005H
	DB	00H
	ORG $+1
	DW	00H
	DB	00H
	DB	02H
	DB	04H
	DB	05H
	DB	00H
	DB	01H
	DW	00H
	DW	0e010H
	DB	00H
	ORG $+1
	DW	00H
	DB	00H
	DB	02H
	DB	0aH
	DB	0bH
	DB	00H
	DB	01H
	DW	00H
	DW	0e01dH
	DB	01H
	ORG $+1
	DW	0e01cH
	DB	00H
	DB	07H
	DB	0cH
	DB	0dH
	DB	01H
	DB	05H
	DW	0264H
_NumberEyeMaskRead DB 02H
_NumberControlKnobsRead DB 02H
_NumberControlKnobsReadPN DB 03H
_NumberControlKnobsCtle DB 04H
_NumberEyeMaskWrite DB 02H
_NumberControlKnobsWrite DB 02H
_StrobeToErrorMask DW 0165H
	DD	0ffH
	DB	00H
	DW	0165H
	DD	0ff00H
	DB	08H
	DW	0165H
	DD	0ff0000H
	DB	010H
	DW	0165H
	DD	0ff000000H
	DB	018H
	DW	0166H
	DD	0ffH
	DB	00H
	DW	0166H
	DD	0ff00H
	DB	08H
	DW	0166H
	DD	0ff0000H
	DB	010H
	DW	0166H
	DD	0ff000000H
	DB	018H
	DW	0169H
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0ffffH
	DD	0ffH
	DB	00H
	DW	0165H
	DD	0fH
	DB	00H
	DW	0165H
	DD	0f00H
	DB	08H
	DW	0165H
	DD	0f0000H
	DB	010H
	DW	0165H
	DD	0f000000H
	DB	018H
	DW	0166H
	DD	0fH
	DB	00H
	DW	0166H
	DD	0f00H
	DB	08H
	DW	0166H
	DD	0f0000H
	DB	010H
	DW	0166H
	DD	0f000000H
	DB	018H
	DW	0169H
	DD	0fH
	DB	00H
	DW	0165H
	DD	0f0H
	DB	04H
	DW	0165H
	DD	0f000H
	DB	0cH
	DW	0165H
	DD	0f00000H
	DB	014H
	DW	0165H
	DD	0f0000000H
	DB	01cH
	DW	0166H
	DD	0f0H
	DB	04H
	DW	0166H
	DD	0f000H
	DB	0cH
	DW	0166H
	DD	0f00000H
	DB	014H
	DW	0166H
	DD	0f0000000H
	DB	01cH
	DW	0169H
	DD	0f0H
	DB	04H
_EyeMaskRead DW	05H
	DW	0cH
	DW	05H
	DW	06H
_NumberEyeMaskCmd DB 02H
_NumberControlKnobsCmd DB 02H
	ORG $+2
_ControlKnobsRead DW 0e001H
	DW	0ffffH
	DW	0e007H
	DW	00H
	DW	03fH
	DW	03ffH
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	08H
	DW	0602H
	DB	'PI ', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	DW	0e005H
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	071H
	DW	00H
	DW	00H
	DW	071H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	028bH
	DW	0ffffH
	DB	'VRF', 00H
	DB	01H
	DW	00H
	DW	03fH
	DW	02H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	ORG $+6
_ControlKnobsReadCtle DW 0e003H
	DW	0e001H
	DW	0e007H
	DW	00H
	DW	03fH
	DW	03ffH
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	08H
	DW	0602H
	DB	'PI ', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	DW	0e004H
	DW	0e001H
	DW	0e007H
	DW	00H
	DW	03fH
	DW	03ffH
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	08H
	DW	0602H
	DB	'PI ', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	DW	0e005H
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	071H
	DW	00H
	DW	00H
	DW	071H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	028bH
	DW	0ffffH
	DB	'VRF', 00H
	DB	01H
	DW	00H
	DW	03fH
	DW	02H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	DW	05005H
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	027H
	DW	00H
	DW	00H
	DW	027H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0bH
	DW	0ffffH
	DB	'CTL', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	01H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	ORG $+4
_ControlKnobsReadPN DW 0e003H
	DW	0e001H
	DW	0e007H
	DW	00H
	DW	03fH
	DW	03ffH
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	08H
	DW	0602H
	DB	'PI ', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	DW	0e004H
	DW	0e001H
	DW	0e007H
	DW	00H
	DW	03fH
	DW	03ffH
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	08H
	DW	0602H
	DB	'PI ', 00H
	DB	01H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	DW	0e005H
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	071H
	DW	00H
	DW	00H
	DW	071H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	028bH
	DW	0ffffH
	DB	'VRF', 00H
	DB	01H
	DW	00H
	DW	03fH
	DW	02H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	02H
	DB	05H
	ORG $+1
_EyeMaskWrite DW 05H
	DW	0cH
	DW	05H
	DW	06H
_ControlKnobsWrite DW 04003H
	DW	0ffffH
	DW	0e012H
	DW	020H
	DW	020H
	DW	03ffH
	DW	040H
	DW	040H
	DW	01H
	DW	00H
	DW	00H
	DB	00H
	DW	0aH
	DW	02H
	DB	'PI ', 00H
	DB	02H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	01H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	DW	0e010H
	DW	0ffffH
	DW	0ffffH
	DW	01eH
	DW	048H
	DW	00H
	DW	00H
	DW	048H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0aH
	DW	0ffffH
	DB	'VRF', 00H
	DB	02H
	DW	00H
	DW	048H
	DW	02H
	DB	01H
	DB	00H
	DW	00H
	DB	09H
	DB	01H
	DB	05H
	DW	05023H
	DW	0ffffH
	DW	0ffffH
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	0ffffH
	DW	07H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0fH
	DW	0ffffH
	DB	'EQ', 00H
	ORG $+1
	DB	02H
	DW	00H
	DW	00H
	DW	00H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	ORG $+1
_ControlKnobsWriteDdr3 DW 04003H
	DW	0ffffH
	DW	0e012H
	DW	020H
	DW	020H
	DW	03ffH
	DW	040H
	DW	040H
	DW	01H
	DW	00H
	DW	00H
	DB	00H
	DW	0aH
	DW	02H
	DB	'PI ', 00H
	DB	02H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	01H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	DW	0e010H
	DW	0ffffH
	DW	0ffffH
	DW	01eH
	DW	032H
	DW	00H
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0fH
	DW	0ffffH
	DB	'VRF', 00H
	DB	02H
	DW	01eH
	DW	032H
	DW	02H
	DB	01H
	DB	00H
	DW	00H
	DB	09H
	DB	01H
	DB	05H
	DW	05023H
	DW	0ffffH
	DW	0ffffH
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	0ffffH
	DW	07H
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0fH
	DW	0ffffH
	DB	'EQ', 00H
	ORG $+1
	DB	02H
	DW	00H
	DW	00H
	DW	00H
	DB	01H
	DB	00H
	DW	00H
	DB	01H
	DB	01H
	DB	05H
	ORG $+1
_EyeMaskCmd DW	03H
	DW	0aH
	DW	03H
	DW	06H
_ControlKnobsCmd DW 0e01cH
	DW	0ffffH
	DW	0ffffH
	DW	00H
	DW	00H
	DW	00H
	DW	07fH
	DW	0200H
	DW	07H
	DW	00H
	DW	00H
	DB	00H
	DW	0bH
	DW	0ffffH
	DB	'PI ', 00H
	DB	02H
	DW	00H
	DW	00H
	DW	00H
	DB	0ffH
	DB	00H
	DW	0264H
	DB	01H
	DB	01H
	DB	03H
	DW	0e029H
	DW	0ffffH
	DW	0ffffH
	DW	019H
	DW	023H
	DW	00H
	DW	00H
	DW	03fH
	DW	01H
	DW	00H
	DW	00H
	DB	01H
	DW	0bH
	DW	0ffffH
	DB	'VRF', 00H
	DB	02H
	DW	00H
	DW	03fH
	DW	03H
	DB	01H
	DB	00H
	DW	044H
	DB	09H
	DB	01H
	DB	03H
	ORG $+2
_DynamicDmapBitLocations DW 01d7H
	DW	01d6H
	DW	01d5H
	DW	01d4H
	DW	01d3H
	DW	01d2H
	DW	01d1H
	DW	01d0H
	DW	01cfH
	DW	01ceH
	DW	01cdH
	DW	01ccH
	DW	01cbH
	DW	01caH
	DW	01c9H
	DW	01c8H
	DW	01c7H
	DW	01c6H
	DW	01ddH
	DW	01dcH
	DW	01dbH
	DW	01daH
	DW	01d9H
	DW	01d8H
_MaxGuardkeyPatterns DW 0cffH
	DW	07ffH
	DW	0bffH
	DW	03ffH
_DATA	ENDS
END
