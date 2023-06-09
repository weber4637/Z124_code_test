; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.207 

	TITLE	d:\bios\z124-002\z124-002\DenvertonPkg\SystemAgent\Mrc\Mmrc\MspLibrary\RegAccess.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	_Mmio32Read
; Function compile flags: /Ogspy
;	COMDAT _Mmio32Read
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Mmio32Read PROC					; COMDAT
; File d:\bios\z124-002\z124-002\denvertonpkg\systemagent\mrc\mmrc\msplibrary\regaccess.c
; Line 38
	mov	eax, DWORD PTR _RegisterAddress$[esp-4]
	mov	eax, DWORD PTR [eax]
; Line 39
	ret	0
_Mmio32Read ENDP
_TEXT	ENDS
PUBLIC	_Mmio16Read
; Function compile flags: /Ogspy
;	COMDAT _Mmio16Read
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Mmio16Read PROC					; COMDAT
; Line 47
	mov	eax, DWORD PTR _RegisterAddress$[esp-4]
	mov	ax, WORD PTR [eax]
; Line 48
	ret	0
_Mmio16Read ENDP
_TEXT	ENDS
PUBLIC	_Mmio8Read
; Function compile flags: /Ogspy
;	COMDAT _Mmio8Read
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Mmio8Read PROC						; COMDAT
; Line 56
	mov	eax, DWORD PTR _RegisterAddress$[esp-4]
	mov	al, BYTE PTR [eax]
; Line 57
	ret	0
_Mmio8Read ENDP
_TEXT	ENDS
PUBLIC	_Mmio32Write
; Function compile flags: /Ogspy
;	COMDAT _Mmio32Write
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Value$ = 12						; size = 4
_Mmio32Write PROC					; COMDAT
; Line 67
	mov	eax, DWORD PTR _Value$[esp-4]
	mov	ecx, DWORD PTR _RegisterAddress$[esp-4]
	mov	DWORD PTR [ecx], eax
; Line 68
	ret	0
_Mmio32Write ENDP
_TEXT	ENDS
PUBLIC	_Mmio16Write
; Function compile flags: /Ogspy
;	COMDAT _Mmio16Write
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Value$ = 12						; size = 2
_Mmio16Write PROC					; COMDAT
; Line 77
	mov	ax, WORD PTR _Value$[esp-4]
	mov	ecx, DWORD PTR _RegisterAddress$[esp-4]
	mov	WORD PTR [ecx], ax
; Line 78
	ret	0
_Mmio16Write ENDP
_TEXT	ENDS
PUBLIC	_Mmio8Write
; Function compile flags: /Ogspy
;	COMDAT _Mmio8Write
_TEXT	SEGMENT
_RegisterAddress$ = 8					; size = 4
_Value$ = 12						; size = 1
_Mmio8Write PROC					; COMDAT
; Line 87
	mov	al, BYTE PTR _Value$[esp-4]
	mov	ecx, DWORD PTR _RegisterAddress$[esp-4]
	mov	BYTE PTR [ecx], al
; Line 88
	ret	0
_Mmio8Write ENDP
_TEXT	ENDS
PUBLIC	_GetRegisterAccessInfo
EXTRN	_InstancePortOffsetGenerated:BYTE
EXTRN	_InstancePortMapGenerated:BYTE
EXTRN	_ChannelToInstanceMapGenerated:BYTE
EXTRN	_GetMspHostStructureAddress:PROC
; Function compile flags: /Ogspy
;	COMDAT _GetRegisterAccessInfo
_TEXT	SEGMENT
_BoxType$ = 8						; size = 1
_Channel$ = 12						; size = 1
_Instance$ = 16						; size = 1
_Command$ = 20						; size = 4
_PortId$ = 24						; size = 4
_Offset$ = 28						; size = 4
_Bus$ = 32						; size = 4
_Device$ = 36						; size = 4
_Func$ = 40						; size = 4
_Mode$ = 44						; size = 4
_GetRegisterAccessInfo PROC				; COMDAT
; Line 155
	push	ebp
	mov	ebp, esp
; Line 159
	call	_GetMspHostStructureAddress
; Line 171
	movzx	eax, BYTE PTR _BoxType$[ebp]
	movzx	ecx, BYTE PTR _Channel$[ebp]
	mov	cl, BYTE PTR _ChannelToInstanceMapGenerated[ecx+eax*2]
	cmp	cl, 255					; 000000ffH
	jne	SHORT $LN20@GetRegiste
; Line 172
	xor	eax, eax
	inc	eax
; Line 230
	pop	ebp
	ret	0
$LN20@GetRegiste:
; Line 174
	mov	dl, BYTE PTR _Instance$[ebp]
; Line 179
	shl	eax, 4
	add	dl, cl
	mov	cl, BYTE PTR _InstancePortMapGenerated[eax+5]
	push	esi
	cmp	cl, 1
	jne	SHORT $LN18@GetRegiste
; Line 180
	mov	esi, DWORD PTR _Bus$[ebp]
	movzx	ecx, dl
	movzx	edx, BYTE PTR _InstancePortMapGenerated[eax+2]
	add	edx, ecx
	mov	dl, BYTE PTR _InstancePortOffsetGenerated[edx*4+1]
	mov	BYTE PTR [esi], dl
; Line 181
	movzx	edx, BYTE PTR _InstancePortMapGenerated[eax+2]
	mov	esi, DWORD PTR _Device$[ebp]
	add	edx, ecx
	mov	dl, BYTE PTR _InstancePortOffsetGenerated[edx*4]
	shr	dl, 3
	and	dl, 31					; 0000001fH
	mov	BYTE PTR [esi], dl
; Line 182
	movzx	edx, BYTE PTR _InstancePortMapGenerated[eax+2]
	add	edx, ecx
	mov	cl, BYTE PTR _InstancePortOffsetGenerated[edx*4]
	mov	edx, DWORD PTR _Func$[ebp]
	and	cl, 7
	mov	BYTE PTR [edx], cl
; Line 183
	mov	ecx, DWORD PTR _Offset$[ebp]
	and	DWORD PTR [ecx], 0
	jmp	SHORT $LN14@GetRegiste
$LN18@GetRegiste:
; Line 184
	test	cl, cl
	jne	SHORT $LN16@GetRegiste
; Line 190
	movzx	esi, dl
	lea	ecx, DWORD PTR _InstancePortMapGenerated[eax+2]
	movzx	edx, BYTE PTR [ecx]
	add	edx, esi
	mov	dl, BYTE PTR _InstancePortOffsetGenerated[edx*4]
	push	edi
	mov	edi, DWORD PTR _PortId$[ebp]
	mov	BYTE PTR [edi], dl
; Line 191
	movzx	ecx, BYTE PTR [ecx]
	mov	edx, DWORD PTR _Offset$[ebp]
	add	ecx, esi
	movzx	ecx, WORD PTR _InstancePortOffsetGenerated[ecx*4+2]
	mov	DWORD PTR [edx], ecx
	pop	edi
	jmp	SHORT $LN14@GetRegiste
$LN16@GetRegiste:
; Line 192
	cmp	cl, 2
	jne	SHORT $LN14@GetRegiste
; Line 197
	movzx	ecx, BYTE PTR _InstancePortMapGenerated[eax+2]
	movzx	edx, dl
	add	ecx, edx
	shl	ecx, 2
	movzx	edx, WORD PTR _InstancePortOffsetGenerated[ecx]
	movzx	ecx, WORD PTR _InstancePortOffsetGenerated[ecx+2]
	shl	edx, 16					; 00000010H
	add	edx, ecx
	mov	ecx, DWORD PTR _Offset$[ebp]
	mov	DWORD PTR [ecx], edx
$LN14@GetRegiste:
; Line 203
	cmp	DWORD PTR _Mode$[ebp], 0
	pop	esi
	jne	SHORT $LN13@GetRegiste
; Line 204
	movzx	eax, BYTE PTR _InstancePortMapGenerated[eax+3]
	jmp	SHORT $LN23@GetRegiste
$LN13@GetRegiste:
; Line 205
	cmp	DWORD PTR _Mode$[ebp], 1
	jne	SHORT $LN11@GetRegiste
; Line 206
	movzx	eax, BYTE PTR _InstancePortMapGenerated[eax+4]
$LN23@GetRegiste:
	mov	ecx, DWORD PTR _Command$[ebp]
	shl	eax, 24					; 00000018H
	mov	DWORD PTR [ecx], eax
; Line 207
	jmp	SHORT $LN10@GetRegiste
$LN11@GetRegiste:
; Line 208
	mov	eax, DWORD PTR _Command$[ebp]
	shl	DWORD PTR [eax], 24			; 00000018H
$LN10@GetRegiste:
; Line 229
	xor	eax, eax
; Line 230
	pop	ebp
	ret	0
_GetRegisterAccessInfo ENDP
_TEXT	ENDS
PUBLIC	_MemRegRead
EXTRN	__allshl:PROC
EXTRN	__aullshr:PROC
; Function compile flags: /Ogspy
;	COMDAT _MemRegRead
_TEXT	SEGMENT
_TempRegister$ = -52					; size = 24
_TotalValue$ = -28					; size = 8
_Command$ = -20						; size = 4
tv322 = -16						; size = 4
_BaseOffset$ = -12					; size = 4
_PortId$ = -6						; size = 1
_Func$ = -5						; size = 1
_Device$ = -4						; size = 1
_Bus$ = -3						; size = 1
_ShiftRightAmount$ = -2					; size = 1
_ShiftLeftAmount$ = -1					; size = 1
_BoxType$ = 8						; size = 1
_Channel$ = 12						; size = 1
_Instance$ = 16						; size = 1
_Register$ = 20						; size = 24
_MemRegRead PROC					; COMDAT
; Line 257
	push	ebp
	mov	ebp, esp
	sub	esp, 52					; 00000034H
	push	ebx
	push	esi
; Line 276
	xor	esi, esi
	push	edi
	mov	BYTE PTR _ShiftLeftAmount$[ebp], 0
	mov	BYTE PTR _ShiftRightAmount$[ebp], 0
	mov	DWORD PTR _TotalValue$[ebp+4], esi
; Line 277
	call	_GetMspHostStructureAddress
; Line 279
	push	esi
	mov	ebx, eax
	lea	eax, DWORD PTR _Func$[ebp]
	push	eax
	lea	eax, DWORD PTR _Device$[ebp]
	push	eax
	lea	eax, DWORD PTR _Bus$[ebp]
	push	eax
	lea	eax, DWORD PTR _BaseOffset$[ebp]
	push	eax
	lea	eax, DWORD PTR _PortId$[ebp]
	push	eax
	lea	eax, DWORD PTR _Command$[ebp]
	push	eax
	push	DWORD PTR _Instance$[ebp]
	push	DWORD PTR _Channel$[ebp]
	push	DWORD PTR _BoxType$[ebp]
	call	_GetRegisterAccessInfo
	add	esp, 40					; 00000028H
	test	eax, eax
	jne	$LN11@MemRegRead
; Line 286
	movzx	eax, BYTE PTR _BoxType$[ebp]
	shl	eax, 4
	mov	cl, BYTE PTR _InstancePortMapGenerated[eax+5]
	mov	DWORD PTR tv322[ebp], eax
	cmp	cl, 1
	je	SHORT $LN9@MemRegRead
	cmp	cl, 2
	jne	$LN23@MemRegRead
$LN9@MemRegRead:
; Line 287
	mov	al, BYTE PTR _Register$[ebp]
	and	al, 3
; Line 288
	mov	cl, al
	shl	cl, 3
; Line 293
	movzx	edx, al
	sub	DWORD PTR _Register$[ebp], edx
; Line 298
	mov	edx, DWORD PTR _Register$[ebp+12]
	mov	BYTE PTR _ShiftLeftAmount$[ebp], cl
	mov	cl, 32					; 00000020H
	sub	cl, BYTE PTR _ShiftLeftAmount$[ebp]
	test	al, al
	mov	eax, DWORD PTR _Register$[ebp+8]
	mov	BYTE PTR _ShiftRightAmount$[ebp], cl
	jne	SHORT $LN22@MemRegRead
	test	edx, edx
	ja	SHORT $LN22@MemRegRead
	cmp	eax, -1
	jbe	SHORT $LN24@MemRegRead
$LN22@MemRegRead:
; Line 302
	movzx	ecx, cl
	call	__aullshr
; Line 303
	mov	ecx, DWORD PTR _Register$[ebp]
	add	ecx, 4
	mov	DWORD PTR _TempRegister$[ebp+8], eax
; Line 304
	or	eax, edx
	mov	DWORD PTR _TempRegister$[ebp+12], edx
	mov	DWORD PTR _TempRegister$[ebp], ecx
	je	SHORT $LN24@MemRegRead
; Line 305
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	lea	esi, DWORD PTR _TempRegister$[ebp]
	push	DWORD PTR _Channel$[ebp]
	rep movsd
	push	DWORD PTR _BoxType$[ebp]
	call	_MemRegRead
	add	esp, 36					; 00000024H
	mov	esi, eax
	mov	DWORD PTR _TotalValue$[ebp+4], edx
$LN24@MemRegRead:
; Line 313
	movzx	ecx, BYTE PTR _ShiftLeftAmount$[ebp]
	mov	eax, DWORD PTR _Register$[ebp+8]
	mov	edx, DWORD PTR _Register$[ebp+12]
	call	__allshl
	mov	DWORD PTR _Register$[ebp+8], eax
	mov	eax, DWORD PTR tv322[ebp]
	mov	DWORD PTR _Register$[ebp+12], edx
$LN23@MemRegRead:
; Line 318
	mov	cl, BYTE PTR _InstancePortMapGenerated[eax+5]
	cmp	cl, 1
	jne	SHORT $LN5@MemRegRead
; Line 337
	movzx	eax, BYTE PTR _Bus$[ebp]
	movzx	ecx, BYTE PTR _Device$[ebp]
	shl	eax, 5
	add	eax, ecx
	movzx	ecx, BYTE PTR _Func$[ebp]
	lea	eax, DWORD PTR [ecx+eax*8]
	shl	eax, 12					; 0000000cH
	add	eax, DWORD PTR [ebx+28]
	add	eax, DWORD PTR _Register$[ebp]
	add	eax, DWORD PTR _BaseOffset$[ebp]
	jmp	SHORT $LN25@MemRegRead
$LN5@MemRegRead:
; Line 342
	cmp	cl, 2
	jne	SHORT $LN3@MemRegRead
; Line 352
	movzx	ecx, BYTE PTR _Channel$[ebp]
	movzx	eax, WORD PTR _InstancePortMapGenerated[eax+6]
	imul	ecx, 542				; 0000021eH
	add	eax, ecx
	mov	eax, DWORD PTR [ebx+eax*8+40]
	add	eax, DWORD PTR _Register$[ebp]
	mov	ecx, DWORD PTR _BaseOffset$[ebp]
	mov	eax, DWORD PTR [eax+ecx]
; Line 355
	jmp	SHORT $LN2@MemRegRead
$LN3@MemRegRead:
; Line 362
	mov	cl, BYTE PTR _InstancePortMapGenerated[eax+3]
	cmp	cl, BYTE PTR _InstancePortMapGenerated[eax+4]
	jne	SHORT $LN1@MemRegRead
; Line 363
	xor	eax, eax
	xor	edx, edx
	jmp	SHORT $LN12@MemRegRead
$LN1@MemRegRead:
; Line 371
	mov	eax, DWORD PTR _BaseOffset$[ebp]
	mov	ecx, DWORD PTR _Register$[ebp]
	add	ecx, eax
	mov	eax, DWORD PTR [ebx+28]
	and	ecx, -256				; ffffff00H
	mov	DWORD PTR [eax+216], ecx
; Line 372
	movzx	eax, BYTE PTR _Register$[ebp]
	movzx	ecx, BYTE PTR _PortId$[ebp]
	shl	eax, 8
	add	eax, 240				; 000000f0H
	shl	ecx, 16					; 00000010H
	or	eax, ecx
	or	eax, DWORD PTR _Command$[ebp]
	mov	ecx, DWORD PTR [ebx+28]
	mov	DWORD PTR [ecx+208], eax
; Line 373
	mov	eax, DWORD PTR [ebx+28]
	add	eax, 212				; 000000d4H
$LN25@MemRegRead:
	mov	eax, DWORD PTR [eax]
$LN2@MemRegRead:
; Line 378
	mov	edx, DWORD PTR _Register$[ebp+8]
	mov	cl, BYTE PTR _ShiftLeftAmount$[ebp]
	and	edx, eax
	shr	edx, cl
; Line 379
	movzx	ecx, BYTE PTR _ShiftRightAmount$[ebp]
	mov	edi, edx
	mov	edx, DWORD PTR _TotalValue$[ebp+4]
	mov	eax, esi
	xor	ebx, ebx
	call	__allshl
	or	edi, eax
	or	ebx, edx
	mov	eax, edi
	mov	edx, ebx
	jmp	SHORT $LN12@MemRegRead
$LN11@MemRegRead:
; Line 382
	or	edx, -1
	mov	eax, edx
$LN12@MemRegRead:
; Line 386
	pop	edi
	pop	esi
	pop	ebx
	leave
	ret	0
_MemRegRead ENDP
_TEXT	ENDS
PUBLIC	_MemRegWrite
EXTRN	_ByteEnableToUintX:PROC
; Function compile flags: /Ogspy
;	COMDAT _MemRegWrite
_TEXT	SEGMENT
_TempRegister$ = -60					; size = 24
_TotalValue$ = -36					; size = 8
_Command$ = -28						; size = 4
tv372 = -24						; size = 4
_BaseOffset$ = -20					; size = 4
_MspData$ = -16						; size = 4
tv354 = -12						; size = 4
_Temp$ = -6						; size = 1
_PortId$ = -5						; size = 1
_Func$ = -4						; size = 1
_Device$ = -3						; size = 1
_Bus$ = -2						; size = 1
_ShiftLeftAmount$ = -1					; size = 1
_BoxType$ = 8						; size = 1
_Channel$ = 12						; size = 1
_Instance$ = 16						; size = 1
_Register$ = 20						; size = 24
_Data$ = 44						; size = 8
_Be$ = 52						; size = 1
_MemRegWrite PROC					; COMDAT
; Line 416
	push	ebp
	mov	ebp, esp
	sub	esp, 60					; 0000003cH
; Line 436
	and	DWORD PTR _TotalValue$[ebp], 0
	and	DWORD PTR _TotalValue$[ebp+4], 0
	push	ebx
	push	esi
	push	edi
; Line 437
	call	_GetMspHostStructureAddress
	mov	edi, eax
; Line 439
	push	1
	lea	eax, DWORD PTR _Func$[ebp]
	push	eax
	lea	eax, DWORD PTR _Device$[ebp]
	push	eax
	lea	eax, DWORD PTR _Bus$[ebp]
	push	eax
	lea	eax, DWORD PTR _BaseOffset$[ebp]
	push	eax
	lea	eax, DWORD PTR _PortId$[ebp]
	push	eax
	lea	eax, DWORD PTR _Command$[ebp]
	push	eax
	push	DWORD PTR _Instance$[ebp]
	mov	DWORD PTR _MspData$[ebp], edi
	push	DWORD PTR _Channel$[ebp]
	push	DWORD PTR _BoxType$[ebp]
	call	_GetRegisterAccessInfo
	add	esp, 40					; 00000028H
	test	eax, eax
	jne	$LN32@MemRegWrit
; Line 446
	movzx	esi, BYTE PTR _BoxType$[ebp]
	shl	esi, 4
	mov	al, BYTE PTR _InstancePortMapGenerated[esi+5]
	mov	DWORD PTR tv354[ebp], esi
	cmp	al, 1
	je	SHORT $LN21@MemRegWrit
	cmp	al, 2
	jne	$LN37@MemRegWrit
$LN21@MemRegWrit:
; Line 447
	mov	bl, BYTE PTR _Register$[ebp]
	and	bl, 3
; Line 448
	mov	cl, bl
	shl	cl, 3
; Line 449
	mov	al, 32					; 00000020H
	sub	al, cl
	mov	BYTE PTR _ShiftLeftAmount$[ebp], cl
; Line 453
	movzx	ecx, bl
	sub	DWORD PTR _Register$[ebp], ecx
; Line 458
	test	bl, bl
	jne	SHORT $LN41@MemRegWrit
	cmp	DWORD PTR _Register$[ebp+12], 0
	ja	SHORT $LN41@MemRegWrit
	cmp	DWORD PTR _Register$[ebp+8], -1
	jbe	SHORT $LN18@MemRegWrit
$LN41@MemRegWrit:
; Line 463
	mov	edx, DWORD PTR _Register$[ebp+12]
	movzx	esi, al
	mov	eax, DWORD PTR _Register$[ebp+8]
	mov	ecx, esi
	call	__aullshr
; Line 464
	mov	ecx, DWORD PTR _Register$[ebp]
	add	ecx, 4
	mov	DWORD PTR _TempRegister$[ebp], ecx
; Line 465
	mov	cl, BYTE PTR _Register$[ebp+16]
	mov	DWORD PTR _TempRegister$[ebp+8], eax
; Line 467
	or	eax, edx
	mov	DWORD PTR _TempRegister$[ebp+12], edx
	mov	BYTE PTR _TempRegister$[ebp+16], cl
	je	SHORT $LN39@MemRegWrit
	mov	eax, DWORD PTR _Data$[ebp]
	mov	edx, DWORD PTR _Data$[ebp+4]
; Line 468
	push	15					; 0000000fH
	mov	ecx, esi
	call	__aullshr
	push	edx
	push	eax
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	lea	esi, DWORD PTR _TempRegister$[ebp]
	push	DWORD PTR _Channel$[ebp]
	rep movsd
	push	DWORD PTR _BoxType$[ebp]
	call	_MemRegWrite
	mov	edi, DWORD PTR _MspData$[ebp]
	add	esp, 48					; 00000030H
$LN39@MemRegWrit:
	mov	esi, DWORD PTR tv354[ebp]
$LN18@MemRegWrit:
; Line 476
	movzx	ecx, BYTE PTR _ShiftLeftAmount$[ebp]
	mov	eax, DWORD PTR _Register$[ebp+8]
	mov	edx, DWORD PTR _Register$[ebp+12]
	mov	DWORD PTR tv372[ebp], ecx
	call	__allshl
	mov	DWORD PTR _Register$[ebp+8], eax
	mov	DWORD PTR _Register$[ebp+12], edx
; Line 481
	test	bl, bl
	jne	SHORT $LN16@MemRegWrit
	cmp	eax, -1
	je	SHORT $LN40@MemRegWrit
$LN16@MemRegWrit:
; Line 486
	and	DWORD PTR _TempRegister$[ebp+12], 0
; Line 488
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	not	eax
	push	DWORD PTR _Channel$[ebp]
	mov	DWORD PTR _TempRegister$[ebp+8], eax
	mov	eax, DWORD PTR _Register$[ebp]
	push	DWORD PTR _BoxType$[ebp]
	mov	DWORD PTR _TempRegister$[ebp], eax
	lea	esi, DWORD PTR _TempRegister$[ebp]
	rep movsd
	call	_MemRegRead
	mov	edi, DWORD PTR _MspData$[ebp]
	mov	esi, DWORD PTR tv354[ebp]
	add	esp, 36					; 00000024H
	mov	DWORD PTR _TotalValue$[ebp], eax
	mov	DWORD PTR _TotalValue$[ebp+4], edx
$LN40@MemRegWrit:
; Line 494
	movzx	ecx, BYTE PTR _Register$[ebp+16]
	mov	eax, DWORD PTR _Data$[ebp]
	mov	edx, DWORD PTR _Data$[ebp+4]
	call	__allshl
	or	eax, DWORD PTR _TotalValue$[ebp]
	or	edx, DWORD PTR _TotalValue$[ebp+4]
	mov	ecx, DWORD PTR tv372[ebp]
	call	__allshl
	mov	ebx, eax
	mov	DWORD PTR _Data$[ebp+4], edx
	jmp	SHORT $LN22@MemRegWrit
$LN37@MemRegWrit:
	mov	ebx, DWORD PTR _Data$[ebp]
$LN22@MemRegWrit:
; Line 499
	mov	al, BYTE PTR _InstancePortMapGenerated[esi+5]
	cmp	al, 1
	jne	SHORT $LN15@MemRegWrit
; Line 519
	movzx	eax, BYTE PTR _Bus$[ebp]
	movzx	ecx, BYTE PTR _Device$[ebp]
	shl	eax, 5
	add	eax, ecx
	movzx	ecx, BYTE PTR _Func$[ebp]
	lea	eax, DWORD PTR [ecx+eax*8]
	shl	eax, 12					; 0000000cH
	add	eax, DWORD PTR [edi+28]
	jmp	SHORT $LN42@MemRegWrit
$LN15@MemRegWrit:
; Line 522
	cmp	al, 2
	jne	SHORT $LN13@MemRegWrit
; Line 567
	movzx	ecx, BYTE PTR _Channel$[ebp]
	movzx	eax, WORD PTR _InstancePortMapGenerated[esi+6]
	imul	ecx, 542				; 0000021eH
	add	eax, ecx
	mov	eax, DWORD PTR [edi+eax*8+40]
$LN42@MemRegWrit:
	add	eax, DWORD PTR _Register$[ebp]
	mov	ecx, DWORD PTR _BaseOffset$[ebp]
	mov	DWORD PTR [eax+ecx], ebx
; Line 569
	jmp	$LN32@MemRegWrit
$LN13@MemRegWrit:
; Line 578
	lea	eax, DWORD PTR _Temp$[ebp]
	push	eax
	push	-1
	push	-1
	push	DWORD PTR _Be$[ebp]
	call	_ByteEnableToUintX
	mov	ecx, DWORD PTR _Register$[ebp+8]
	add	esp, 16					; 00000010H
	cmp	eax, ecx
	jne	SHORT $LN35@MemRegWrit
	cmp	edx, DWORD PTR _Register$[ebp+12]
	je	SHORT $LN1@MemRegWrit
$LN35@MemRegWrit:
; Line 583
	mov	eax, DWORD PTR _Register$[ebp]
	and	DWORD PTR _TempRegister$[ebp+12], 0
; Line 584
	sub	esp, 24					; 00000018H
	not	ecx
	push	6
	mov	DWORD PTR _TempRegister$[ebp+8], ecx
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	mov	DWORD PTR _TempRegister$[ebp], eax
	push	DWORD PTR _Channel$[ebp]
	lea	esi, DWORD PTR _TempRegister$[ebp]
	push	DWORD PTR _BoxType$[ebp]
	rep movsd
	call	_MemRegRead
; Line 585
	movzx	ecx, BYTE PTR _Register$[ebp+16]
	mov	esi, eax
	mov	edi, edx
	mov	edx, DWORD PTR _Data$[ebp+4]
	add	esp, 36					; 00000024H
	mov	eax, ebx
	call	__allshl
	or	eax, esi
	or	edx, edi
	mov	edi, DWORD PTR _MspData$[ebp]
	mov	ebx, eax
	mov	DWORD PTR _Data$[ebp+4], edx
$LN1@MemRegWrit:
; Line 594
	mov	eax, DWORD PTR _BaseOffset$[ebp]
	mov	ecx, DWORD PTR _Register$[ebp]
	add	ecx, eax
	mov	eax, DWORD PTR [edi+28]
	and	ecx, -256				; ffffff00H
	mov	DWORD PTR [eax+216], ecx
; Line 595
	mov	eax, DWORD PTR [edi+28]
; Line 596
	movzx	ecx, BYTE PTR _Be$[ebp]
	mov	DWORD PTR [eax+212], ebx
	movzx	eax, BYTE PTR _Register$[ebp]
	shl	eax, 4
	add	eax, ecx
	movzx	ecx, BYTE PTR _PortId$[ebp]
	shl	ecx, 16					; 00000010H
	shl	eax, 4
	or	eax, ecx
	or	eax, DWORD PTR _Command$[ebp]
	mov	ecx, DWORD PTR [edi+28]
	mov	DWORD PTR [ecx+208], eax
$LN32@MemRegWrit:
; Line 600
	pop	edi
	pop	esi
	pop	ebx
	leave
	ret	0
_MemRegWrite ENDP
_TEXT	ENDS
PUBLIC	_MemFieldRead
; Function compile flags: /Ogspy
;	COMDAT _MemFieldRead
_TEXT	SEGMENT
_BoxType$ = 8						; size = 1
_Channel$ = 12						; size = 1
_Instance$ = 16						; size = 1
_Register$ = 20						; size = 24
_MemFieldRead PROC					; COMDAT
; Line 610
	push	ebp
	mov	ebp, esp
	push	esi
	push	edi
; Line 615
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	lea	esi, DWORD PTR _Register$[ebp]
	push	DWORD PTR _Channel$[ebp]
	rep movsd
	push	DWORD PTR _BoxType$[ebp]
	call	_MemRegRead
; Line 623
	movzx	ecx, BYTE PTR _Register$[ebp+16]
	add	esp, 36					; 00000024H
; Line 624
	pop	edi
	pop	esi
	pop	ebp
; Line 619
	jmp	__aullshr
_MemFieldRead ENDP
_TEXT	ENDS
PUBLIC	_MemFieldWrite
; Function compile flags: /Ogspy
;	COMDAT _MemFieldWrite
_TEXT	SEGMENT
_BoxType$ = 8						; size = 1
_Channel$ = 12						; size = 1
_Instance$ = 16						; size = 1
_Register$ = 20						; size = 24
_Value$ = 44						; size = 8
_Be$ = 52						; size = 1
_MemFieldWrite PROC					; COMDAT
; Line 635
	push	ebp
	mov	ebp, esp
; Line 638
	cmp	DWORD PTR _Register$[ebp], 65535	; 0000ffffH
	push	esi
	push	edi
	je	SHORT $LN2@MemFieldWr
; Line 644
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	lea	esi, DWORD PTR _Register$[ebp]
	push	DWORD PTR _Channel$[ebp]
	rep movsd
	push	DWORD PTR _BoxType$[ebp]
	call	_MemRegRead
; Line 652
	movzx	ecx, BYTE PTR _Register$[ebp+16]
	add	esp, 36					; 00000024H
	push	DWORD PTR _Be$[ebp]
	mov	esi, eax
	mov	edi, edx
	call	__allshl
	or	edx, edi
	push	edx
	or	eax, esi
	push	eax
	sub	esp, 24					; 00000018H
	push	6
	pop	ecx
	mov	edi, esp
	push	DWORD PTR _Instance$[ebp]
	lea	esi, DWORD PTR _Register$[ebp]
	push	DWORD PTR _Channel$[ebp]
	rep movsd
	push	DWORD PTR _BoxType$[ebp]
	call	_MemRegWrite
	add	esp, 48					; 00000030H
$LN2@MemFieldWr:
; Line 655
	pop	edi
	pop	esi
	pop	ebp
	ret	0
_MemFieldWrite ENDP
_TEXT	ENDS
END
