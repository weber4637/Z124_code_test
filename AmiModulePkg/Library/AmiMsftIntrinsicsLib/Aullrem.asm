;*************************************************************************
;*************************************************************************
;**                                                                     **
;**        (C)Copyright 1985-2017, American Megatrends, Inc.            **
;**                                                                     **
;**                       All Rights Reserved.                          **
;**                                                                     **
;**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
;**                                                                     **
;**                       Phone: (770)-246-8600                         **
;**                                                                     **
;*************************************************************************
;*************************************************************************
.386
.model  flat,C
.data
RetAddress dd ?
OriginalBx	dd	?
.code
EXTERN  _aulldvrm:PROC

;------------------------------------------------------------------------------
; Divides a 64-bit unsigned value by another 64-bit unsigned value and returns
; the 64-bit remainder.
;  
;  On entry:
;      [ESP]    : Return Address
;      [ESP+4]  : QWORD. Dividend
;      [ESP+12] : QWORD. Divisor
;  On exit: 
;      EDX:EAX contains the remainder (divided % divisor)
;
;  NOTE: this routine removes parameters from the stack.
;------------------------------------------------------------------------------
_aullrem    PROC
    mov     OriginalBx, ebx ; save bx
	pop		RetAddress ; save return address
	call  	_aulldvrm
	mov		edx, ebx
	mov		eax, ecx
	mov		ebx, OriginalBx
	push	RetAddress
	ret
_aullrem    ENDP

END