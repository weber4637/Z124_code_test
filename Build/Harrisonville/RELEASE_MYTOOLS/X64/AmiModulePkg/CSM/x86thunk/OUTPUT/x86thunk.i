#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\AmiModulePkg\\CSM\\x86thunk\\DEBUG\\AutoGen.h"















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"



























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"


























#pragma pack()
#line 29 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"













#line 43 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"


























#line 70 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"












#pragma warning ( disable : 4214 )




#pragma warning ( disable : 4100 )





#pragma warning ( disable : 4057 )




#pragma warning ( disable : 4127 )




#pragma warning ( disable : 4505 )




#pragma warning ( disable : 4206 )



















#line 129 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"

#line 131 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"



  
  
  

  
  
  
  typedef unsigned __int64    UINT64;
  
  
  
  typedef __int64             INT64;
  
  
  
  typedef unsigned __int32    UINT32;
  
  
  
  typedef __int32             INT32;
  
  
  
  typedef unsigned short      UINT16;
  
  
  
  
  typedef unsigned short      CHAR16;
  
  
  
  typedef short               INT16;
  
  
  
  
  typedef unsigned char       BOOLEAN;
  
  
  
  typedef unsigned char       UINT8;
  
  
  
  typedef char                CHAR8;
  
  
  
  typedef signed char         INT8;















































#line 232 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"





typedef UINT64  UINTN;




typedef INT64   INTN;









































  
  
  
  
















#line 305 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"







#line 313 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"















#line 329 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"

#line 331 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\X64\\ProcessorBind.h"

#line 29 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"





#pragma warning ( disable : 4200 )
#line 36 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"






















extern UINT8 _VerifySizeofBOOLEAN[(int)(sizeof(BOOLEAN) == (1)) /(int) (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(int)(sizeof(INT8) == (1)) /(int) (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(int)(sizeof(UINT8) == (1)) /(int) (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(int)(sizeof(INT16) == (2)) /(int) (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(int)(sizeof(UINT16) == (2)) /(int) (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(int)(sizeof(INT32) == (4)) /(int) (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(int)(sizeof(UINT32) == (4)) /(int) (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(int)(sizeof(INT64) == (8)) /(int) (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(int)(sizeof(UINT64) == (8)) /(int) (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(int)(sizeof(CHAR8) == (1)) /(int) (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(int)(sizeof(CHAR16) == (2)) /(int) (sizeof(CHAR16) == (2))];







  
  
  
  
  
  







#line 90 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"






  






#line 104 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"







#line 112 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"

  
    
    
    
    
    
  #line 120 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
#line 121 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"







  






#line 136 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
    
    
    
    
    
    
  






#line 150 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
#line 151 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"






  









  
    
    
    
    
    
  #line 174 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
#line 175 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"








  









  
    
    
    
    
    
  #line 200 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
#line 201 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"























#line 225 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
  
#line 227 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"








  
#line 237 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"





typedef struct {
  UINT32  Data1;
  UINT16  Data2;
  UINT16  Data3;
  UINT8   Data4[8];
} GUID;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY  *ForwardLink;
  LIST_ENTRY  *BackLink;
};










































































































































































































































































































































#line 597 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"












































#line 642 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"




typedef CHAR8 *VA_LIST;






























































#line 710 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"




typedef UINTN  *BASE_LIST;

















































#line 765 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"

















































































































typedef UINTN RETURN_STATUS;





























































































































































































































































































































#line 1197 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"













#line 1211 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"
  







  
#line 1221 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"

#line 1223 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"


#line 17 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\AmiModulePkg\\CSM\\x86thunk\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;









#line 30 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\AmiModulePkg\\CSM\\x86thunk\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
;**********************************************************************
;**********************************************************************
;**                                                                  **
;**        (C)Copyright 1985-2012, American Megatrends, Inc.         **
;**                                                                  **
;**                       All Rights Reserved.                       **
;**                                                                  **
;**           5555 Oakbrook Pkwy, Suite 200, Norcross, GA 30093      **
;**                                                                  **
;**                       Phone: (770)-246-8600                      **
;**                                                                  **
;**********************************************************************
;**********************************************************************

;**********************************************************************
; $Header: /Alaska/SOURCE/Modules/CSM/Generic/Thunk/x86/x86thunk.asm 33    12/05/11 5:53p Olegi $
;
; $Revision: 33 $
;
; $Date: 12/05/11 5:53p $
;**********************************************************************

;**********************************************************************
;<AMI_FHDR_START>
;
; Name:	x86Thunk.asm16
;
; Description: x86 CPU thunk functions
;
;<AMI_FHDR_END>
;**********************************************************************

.586P
.model small

;STACK_SIZE equ 8192
STACK_TOP equ (4096 * 3)

FAR_CALL_PTR_16 struct
	ptr_offset	dw ?
	seg_offset	dw ? 
FAR_CALL_PTR_16 ends

REGISTERS struct
	reg_eax dd ?
	reg_ebx	dd ?
	reg_ecx	dd ?
	reg_edx	dd ?
	reg_esi	dd ?
	reg_edi	dd ?
	reg_eflags dd ?
	reg_es	dw ?
	reg_cs	dw ?
	reg_ss	dw ?
	reg_ds	dw ?
	reg_fs	dw ?
	reg_gs	dw ?
	reg_ebp	dd ?
	reg_esp dd ?
REGISTERS ends

STACK_PARAM struct
	StackPtr        dd ?
	StackSize	dd ?
STACK_PARAM ends

THUNK_DATA struct
	FarCallPtr16 FAR_CALL_PTR_16 <>
	Regs		 REGISTERS <>
	StackParm 	 STACK_PARAM<>
	isFarCall	 db 0
	BiosInt		 db 0
THUNK_DATA ends


ASSUME ds:THUNK_SEG

THUNK_SEG SEGMENT USE32 'CODE'

THUNK proc
	jmp over_data
; The following data must be here. Don't move. These are used by the Thunk C driver.
	dw	LOWWORD offset Fixups
	dw	LOWWORD offset ReverseThunk
	ThunkData THUNK_DATA <>
over_data:
	cli
;--------------------------------------------------------------------------------
; The following code switches from protected mode (from x64 if EFIx64 is defined,
; otherwise from 32-bit protected mode) to 16-bit real mode.
;--------------------------------------------------------------------------------
; Calculate entry point and load EBX/RBX with it.

	push	ebx

	call	@f
@@:
	pop	ebx
	sub	ebx, @b     ; RBX/EBX - physical address of CSM16 entry point

	mov	DWORD PTR [RtReturnResult+ebx], eax

	sidt	fword ptr [IdtSave+ebx]	;Save IDT
	sgdt	fword ptr [GdtSave+ebx]	;Save GDT
	lgdt	fword ptr [GdtDescriptor+ebx]

	mov	eax, cr3		;;Save CR3, CR4
	mov	[CR3Save+ebx], eax
	mov	eax, cr4
	mov	[CR4Save+ebx], eax

	;Save segement registers.
	mov	ax, ds
	push	eax			;64-bit doesn't support push ds, es, ss
	mov	ax, es
	push	eax
	mov	ax, ss
	push	eax
	push	fs
	push	gs
	mov	ax, cs	  ;This must be last for cs restore.
	push	eax

	mov	eax,  DATA_SEL		;make sure segments are approriate for 32-bit mode.
	mov	ds, ax      ; Load SS with the known descriptor value
	mov	es, ax
	mov	ss, ax
	mov	fs, ax
	mov	gs, ax



;---Jump from long mode to compatiblity mode---
	;jmp	far ptr [ComModeAdr]
	db	0ffh,2dh
	dd	ComModeAdr - $ - 4

ComMode:
;---Go to protected mode---
	mov	eax, cr0
	btr	eax, 31
	mov	cr0, eax		;Now in protected mode.
	jmp	$+2

	mov ecx, 0c0000080h
	rdmsr
	btr	eax, 8
	wrmsr
	
	mov	eax, cr4
	btr	eax, 5
	mov	cr4, eax	;Turn off PAE bit. Windows expects when calling INT19h.
#line 154 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"

	cmp	BYTE PTR [IsReverseThunk+ebx], 1
	je	no_stack_to_copy

	pushad
	pushfd

;--Save Data--
	mov	[StackSave+ebx], esp	;Save 32 bit stack address of this module.

	;---Copy Stack parameters of LegacyBiosFarCall---
	mov	ecx, [ThunkData.StackParm.StackSize+ebx]
	or	ecx, ecx
	jz	no_stack_to_copy

	mov	esi, [ThunkData.StackParm.StackPtr+ebx]
	mov	edi, ebx
	add	edi, STACK_TOP
	sub	edi, ecx
	rep	movsb
no_stack_to_copy:
;--Switch to real mode--	
	lidt	fword ptr [LegacyLdtDescriptor+ebx]

	mov	ax, DATA_SEL_16
	mov	ds, ax
	mov	es, ax
	mov	ss, ax
	mov	fs, ax
	mov	gs, ax

	;jmp	CODE_SEL_16:next
	db	0eah
	dd	offset next
	dw	CODE_SEL_16
next:
	mov	eax, cr0
	and	al, 0feh
	mov	cr0, eax

	;--ITP doesn't display disassebly correctly until jump to real mode.

	;jmp	CS_SEGMENT:RealModeAddr
	db 0eah
	dw LOWWORD offset RealMode
RealModeFixUp:
	dw 0
RealMode:
	db 8ch, 0c8h	;mov	ax, cs
	db 8eh, 0d8h	;mov    ds, ax
	db 8eh, 0c0h	;mov    es, ax
	db 8eh, 0d0h	;mov    ss, ax
	db 8eh, 0e0h	;mov    fs, ax
	db 8eh, 0e8h	;mov    gs, ax

;	sti
;---------------Real mode operations-----------
	db 2eh, 80h, 3eh
	dw LOWWORD offset IsReverseThunk
	db 1	;cmp	cs:IsReverseThunk, 1

	jnz	@f

	db 2eh, 0c6h, 6
	dw LOWWORD offset IsReverseThunk
	db 0	;mov	cs:IsReverseThunk, 0

	; Restore the registers from RtRegs
	push	cs
	pop	ss
	
	db 0bch		; mov	sp, LOWWORD OFFSET RtRegs
	dw LOWWORD OFFSET RtRegs

	pop	gs
	pop	fs
	pop	es
	pop	ds
	db 66h, 61h	; popad

	; Restore stack pointer and its contents

	db 2eh, 8eh, 16h	;mov cs:RtStackSave+4, ss
	dw LOWWORD offset RtStackSave+4

	db 66h, 2eh, 8bh, 26h	;mov sp, cs:RtStackSave
	dw LOWWORD offset RtStackSave

	; Restore flags
	db 66h, 2eh, 0ffh, 36h	; push DWORD PTR cs:RtSavedFlags
	dw LOWWORD OFFSET RtSavedFlags
	db 66h, 9dh		; popfd

	db 83h, 0c4h, 4		; add sp, 4: prepare stack for a push

	db 66h, 2eh, 0ffh, 36h	; push dword ptr cs:RtRetAddressSave
	dw LOWWORD offset RtRetAddressSave

	db 66h, 2eh, 0a1h		;mov eax, RtReturnResult
	dw LOWWORD offset RtReturnResult

	db 0cbh	;retf		; reverse thunk call returns control

@@:
	db 66h
	mov	esp, STACK_TOP	;This is the top stack for real mode.

	db 2bh, 26h	;sub sp, word ptr ThunkData.StackParm.StackSize
	dw LOWWORD offset ThunkData.StackParm.StackSize

	;---copy registers for FarCall and BIOS INT---

	db 66h, 8bh, 1eh			;mov ebx, ThunkData.regs.reg_ebx
	dw LOWWORD offset ThunkData.regs.reg_ebx
	db 66h, 8bh, 0eh			;mov ecx, ThunkData.regs.reg_ecx
	dw LOWWORD offset ThunkData.regs.reg_ecx
	db 66h, 8bh, 16h			;mov edx, ThunkData.regs.reg_edx
	dw LOWWORD offset ThunkData.regs.reg_edx
	db 66h, 8bh, 36h			;mov esi, ThunkData.regs.reg_esi
	dw LOWWORD offset ThunkData.regs.reg_esi
	db 66h, 8bh, 3eh			;mov edi, ThunkData.regs.reg_edi
	dw LOWWORD offset ThunkData.regs.reg_edi
	db 66h, 8bh, 2eh			;mov ebp, ThunkData.regs.reg_ebp
	dw LOWWORD offset ThunkData.regs.reg_ebp

	db 0a1h					;mov ax, ThunkData.regs.reg_es
	dw LOWWORD offset ThunkData.regs.reg_es

	db 08eh, 0c0h				;mov	es, ax

	db 66h, 0a1h				;mov eax, ThunkData.regs.reg_eax
	dw LOWWORD offset ThunkData.regs.reg_eax

	;Change ds last, since above operations depend on ds.
	db 0ffh, 36h				;push ThunkData.regs.reg_ds
	dw LOWWORD offset ThunkData.regs.reg_ds
	pop	ds

    ;Don't load the flags! They aren't needed, and if they aren't
    ;initialized properly, the system hangs.

    ;--Keep CLI mode for the first time execution
    
    db 2eh, 80h, 3eh    ;cmp cs:Csm16Initialized, 1
    dw LOWWORD offset cs:Csm16Initialized
    db 1
    
    db 2eh, 0c6h, 06h   ;mov cs:Csm16Initialized, 1
    dw LOWWORD offset cs:Csm16Initialized
    db 1
    
    jnz @f

    sti

	;--Call real mode function or interrupt--
@@:
	db 2eh, 80h, 3eh	;cmp cs:ThunkData.isFarCall, 0
	dw LOWWORD offset ThunkData.isFarCall
	db 0

	jnz	FarCall

	db 66h
	pushad

	db 2eh, 0a0h		;mov	al, cs:ThunkData.BiosInt
	dw LOWWORD offset ThunkData.BiosInt

	db 2eh, 0a2h		;mov	cs:intxx, al	;Sets the intermediate value for intxx below.
	dw LOWWORD offset intxx	

	db 66h
	mov	eax, 1
	cpuid		;serializing instruction because of runtime code modification.

	db 66h
	popad

	db 0cdh						;Execute int x
intxx label byte
	db 0

	jmp	@f
FarCall:
	;call dword ptr cs:[ThunkData.FarCallPtr16]
	db 02eh, 0ffh, 1eh				;Execute far call
	dw LOWWORD offset ThunkData.FarCallPtr16
@@:

	cli
	;--Copy registers back for FarCall and BIOS INT---

	db 66h, 2eh, 0a3h		;mov cs:ThunkData.regs.reg_eax, eax
	dw LOWWORD offset ThunkData.regs.reg_eax

	push	ds

	db 2eh, 08fh, 6			;pop cs:ThunkData.regs.reg_ds
	dw LOWWORD offset ThunkData.regs.reg_ds

	db 8ch, 0c8h	;mov	ax, cs
	db 8eh, 0d8h	;mov    ds, ax

	db 66h, 89h, 1eh		;mov ThunkData.regs.reg_ebx, ebx
	dw LOWWORD offset ThunkData.regs.reg_ebx

	db 66h, 89h, 0eh		;mov  ThunkData.regs.reg_ecx, ecx
	dw LOWWORD offset ThunkData.regs.reg_ecx

	db 66h, 89h, 16h		;mov ThunkData.regs.reg_edx, edx
	dw LOWWORD offset ThunkData.regs.reg_edx

	db 66h, 89h, 36h		;mov ThunkData.regs.reg_esi, esi
	dw LOWWORD offset ThunkData.regs.reg_esi

	db 66h, 89h, 3eh		;mov ThunkData.regs.reg_edi, edi
	dw LOWWORD offset ThunkData.regs.reg_edi

	db 66h, 89h, 2eh		;mov ThunkData.regs.reg_ebp, ebp
	dw LOWWORD offset ThunkData.regs.reg_ebp

	db 08ch ,0c0h			;mov ax, es

	db 0a3h				;mov ThunkData.regs.reg_es, ax
	dw LOWWORD offset ThunkData.regs.reg_es

	db 09ch				;pushf
	db 08fh, 6			;pop	ThunkData.regs.reg_eflags
	dw LOWWORD offset ThunkData.regs.reg_eflags

;--------------End Real Mode operations---------
RealToPm:
	db 66h
	xor	ebx, ebx
	db 8ch, 0cbh	;mov    bx, cs
	db 66h
	shl	ebx, 4	;ebx = entry point

	;--Switch to protected mode--
;	cli

	;Reload GDT in case it was changed.
	;lgdt	fword ptr cs:[GdtDescriptor]
	db 66h,02eh,0fh,1,16h
	dw LOWWORD offset GdtDescriptor

	mov	eax, cr0
	or	al, 1		;Set PE bit
	mov	cr0, eax	;Turn on Protected Mode

	;jmp CODE_SEL:P32MODE
	db 66h, 0eah
P32ModeFixUp:
	dd offset P32Mode
	dw CODE_SEL

P32Mode::
	mov	ax, DATA_SEL 
	mov	ds, ax
	mov	es, ax
	mov	ss, ax
	mov	fs, ax
	mov	gs, ax
	cmp	BYTE PTR [IsReverseThunk + ebx], 1
	je	CreateReverseThunkESP
	mov	esp, [StackSave + ebx]	;Get original stack back.
	;---Copy Stack parameters of LegacyBiosFarCall---;
	mov	ecx, [ThunkData.StackParm.StackSize+ebx]
	or	ecx, ecx
	jz	@F
	mov 	edi, [ThunkData.StackParm.StackPtr+ebx]
	mov	esi, ebx
	add	esi, STACK_TOP
	sub	esi, ecx
	rep movsb
@@:
	popfd
	popad
	jmp	DonePreparingESP

CreateReverseThunkESP:			; EBX = ThunkStart code segment << 4
	mov	[ThunkStart + ebx], ebx
	mov	esp, [PmStackPtr + ebx]


	sub	esp, 20h		; allocate 20h bytes in stack (x64 calling convention)
#line 442 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
	mov	[esp], ebx

	mov	DWORD PTR [esp+4], 0
#line 446 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
	sub	esp, 4
	mov	[esp], esi		; Function pointer (DWORD)

	mov	DWORD PTR [esp], 0
	sub	esp, 4
	mov	[esp], esi		; Function pointer (QWORD)
#line 453 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"

DonePreparingESP:
	xor	eax, eax		; short/quick way to set EAX = 0
	lldt	ax			; (source operand == 0) => LDTR is invalid


	mov	eax, cr4
	bts	eax, 5
	mov	cr4, eax		;Enable PAE

	mov	ecx, 0c0000080h
	rdmsr
	bts	eax, 8
	wrmsr

	mov	eax, cr0
	bts	eax, 31
	mov	cr0, eax		;Now in compatibility mode.
	jmp	$+2

	pushd CODE_SEL_64
	call	@f	;push rip/eip
@@:
	add	dword ptr [esp], @f - $
	retf
@@:

    ;--In long mode.
#line 482 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"

	lgdt	fword ptr [GdtSave + ebx]  ;Restore GDT
	lidt	fword ptr [IdtSave+ebx]	;Restore IDT

    ;restore original cs
    ;rsp/esp = cs
	call	@f	;push rip/eip	
@@:
	add	dword ptr [esp], @f - $

	db 48h
#line 494 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
	retf	;pop cs and eip.
@@:

	pop	gs
	pop	fs
	pop	eax
	mov	ss, ax
	pop	eax
	mov	es, ax
	pop	eax
	mov	ds, ax


	cmp	BYTE PTR [IsReverseThunk+ebx], 1
	jne	@f
; Reverse thunk - copy parameters to RCX, RDX, R8, R9
	db 48h, 8bh, 4ch, 24h, 28h	; mov	rcx, [rsp + 28h]
	db 48h, 8bh, 54h, 24h, 30h	; mov	rdx, [rsp + 30h]
	db 67h, 4ch, 8bh, 44h, 24h, 38h ; mov	r8d, [rsp + 38h]
	db 67h, 4ch, 8bh, 4ch, 24h, 40h ; mov	r9d, [rsp + 40h]

	jmp	RealToPm_Exit
@@:
#line 518 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"

	mov	eax, cs:[CR3Save + ebx]
	mov	cr3, eax
	mov	eax, cs:[CR4Save + ebx]
	mov	cr4, eax
	pop	ebx
RealToPm_Exit:
	ret

;-----------------------------------------------------------
ReverseThunk:
	; Save flags
	db 66h, 9ch		; pushfd
	db 66h, 2eh, 8fh, 6	; pop DWORD PTR cs:RtSavedFlags
	dw LOWWORD OFFSET RtSavedFlags

	cli

	db 66h, 2eh, 89h, 26h	;mov cs:RtStackSave, esp
	dw LOWWORD offset RtStackSave

	db 2eh, 8ch, 16h	;mov cs:RtStackSave+4, ss
	dw LOWWORD offset RtStackSave+4

	; Get the PM stack pointer from the stack
	db	89h, 0e5h		; mov	bp, sp
	db	66h, 8bh, 46h, 4	; mov	eax, [bp+4]
	db	66h, 2eh, 0a3h		; mov cs:PmStackPtr, eax
	dw	LOWWORD offset PmStackPtr

        ; Get return address and store it in cs:RtRetAddressSave
	db	66h, 8bh, 46h, 0	; mov	eax, [bp+0]
	db	66h, 2eh, 0a3h		; mov cs:RtRetAddressSave, eax
	dw	LOWWORD offset RtRetAddressSave

	; Save the registers in RtRegs
	push	cs
	pop	ss
	
	db 0bch		; mov	sp, LOWWORD OFFSET RtRegs+28h
	dw LOWWORD OFFSET RtRegs+28h

	db 66h, 60h	; pushad
	push	ds
	push	es
	push	fs
	push	gs

	; Restore SS:ESP
	db 66h, 2eh, 8bh, 26h	;mov esp, cs:RtStackSave
	dw LOWWORD offset RtStackSave

	db 2eh, 8eh, 16h	;mov ss, cs:RtStackSave+4
	dw LOWWORD offset RtStackSave+4

	db 2eh, 0c6h, 06h	;mov cs:[IsReverseThunk], 1
	dw LOWWORD offset IsReverseThunk
	db 1

	db 0e9h
	dw RealToPm - ($+2)	;jmp NEAR RealToPm
	
;-----------------------------------------------------------
	reg_gs	dw ?
	reg_fs	dw ?
	reg_es	dw ?
	reg_ds	dw ?
	reg_eflags dd ?

Fixups:

    ;In 64 bit mode, but compiled under 32-bit mode.
	push	ebx		;(push rbx) cpuid changes ebx
	mov	edx, ecx
	shr	edx, 4		;Get segment

;--Fixups---
	;add 	ComModeFixup, ecx
	db 01, 0dh
	dd ComModeFixup - $ - 4
	;add 	P32ModeFixUp, ecx
	db 01, 0dh
	dd P32ModeFixUp - $ - 4
	;add 	GdtDescriptorFixUp, ecx
	db 01, 0dh
	dd GdtDescriptorFixUp - $ - 4
;	add	CODE_SEL_BASE_FIXUP, ecx ;must use add because upper 8 bit shouldn't change. Only 20 bit number.
	db 01, 0dh
	dd CODE_SEL_BASE_FIXUP - $ - 4
;	mov	word ptr RealModeFixUp, dx
	db 66h, 89h, 15h
	dd RealModeFixUp - $ - 4
	mov	eax, 1
	cpuid			;serialization for fixups
	pop	ebx		;pop rbx
























#line 638 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"
	ret

align 16
GDT_BASE:
NULL_SEL	equ	$-GDT_BASE	 ;((void *) 0) Selector 0
	dq 0
DATA_SEL 		equ	$-GDT_BASE
	dq 00cf93000000ffffh
CODE_SEL			equ	$-GDT_BASE
    dq 00cf9b000000ffffh
CODE_SEL_64	equ	$-GDT_BASE
	dq 00af9b000000ffffh
DATA_SEL_16	equ	$-GDT_BASE
	dq 008f93000000ffffh

CODE_SEL_16	equ	$-GDT_BASE
	dw 0ffffh
CODE_SEL_BASE_FIXUP:			;Only 20 bits max
	dw 0
	db 0
	
	db 09ah
	db 0
	db 0

GDT_SIZE	equ $-GDT_BASE		;Size of Descriptor Table
GdtDescriptor:
	dw GDT_SIZE - 1			; GDT limit
GdtDescriptorFixUp:
	dq OFFSET GDT_BASE		; GDT base


align 8
ComModeFixup equ $
ComModeAdr equ $
	dd  offset ComMode
	dw CODE_SEL
#line 676 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\CSM\\x86thunk.asm16"

	public StackSave
StackSave label dword
	dd 0
align 8
	public CR3Save
CR3Save label dword
	dq	0
align 8
	public CR4Save
CR4Save label dword
	dq	0
align 8
	public GdtSave
GdtSave	label fword
	dw 0
	dq 0

align 8
	public IdtSave
IdtSave label fword	
	dw 0
	dq 0
align 8
	public LegacyLdtDescriptor
LegacyLdtDescriptor label fword
	dw 3ffh
	dq 0

Csm16Initialized label byte
    db 0
    
;------Reverse thunk data------------
IsReverseThunk		db 0
RtReturnResult		dd 0
RtSavedFlags		dd 0
RtStackSave		db 6 dup (0)    ; DW for SS, DD for ESP
PmStackPtr		dd 0
RtRetAddressSave	dd 0
ThunkStart 		dd 0
RtRegs	 		REGISTERS <>

THUNK	endp
THUNK_SEG ENDS
end

;**********************************************************************
;**********************************************************************
;**                                                                  **
;**        (C)Copyright 1985-2012, American Megatrends, Inc.         **
;**                                                                  **
;**                       All Rights Reserved.                       **
;**                                                                  **
;**           5555 Oakbrook Pkwy, Suite 200, Norcross, GA 30093      **
;**                                                                  **
;**                       Phone: (770)-246-8600                      **
;**                                                                  **
;**********************************************************************
;**********************************************************************
