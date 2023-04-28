#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\Aulldvrm.asm"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\AmiMsftIntrinsicsLib\\DEBUG\\AutoGen.h"















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"



























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"


























#pragma pack()
#line 29 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"


























#line 56 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"












#pragma warning ( disable : 4214 )




#pragma warning ( disable : 4100 )





#pragma warning ( disable : 4057 )




#pragma warning ( disable : 4127 )




#pragma warning ( disable : 4505 )




#pragma warning ( disable : 4206 )



















#line 115 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"

#line 117 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"




  
  
  

  
  
  
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















































#line 219 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"





typedef UINT32  UINTN;




typedef INT32   INTN;








































  
  
  
  











#line 286 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"







#line 294 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"















#line 310 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"

#line 312 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ia32\\ProcessorBind.h"

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


#line 17 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\AmiMsftIntrinsicsLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;







#line 28 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\AmiMsftIntrinsicsLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\Aulldvrm.asm"
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
;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http:
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;------------------------------------------------------------------------------
.386
.model  flat,C
.code

;------------------------------------------------------------------------------
; Divides a 64-bit unsigned value by another 64-bit unsigned value and returns
; the 64-bit result and the 64-bit remainder.
;  
;  On entry:
;      [ESP]    : Return Address
;      [ESP+4]  : QWORD. Dividend
;      [ESP+12] : QWORD. Divisor
;  On exit: 
;      EDX:EAX contains the quotient (dividend/divisor)
;      EBX:ECX contains the remainder (divided % divisor)
;
;  NOTE: this routine removes parameters from the stack.
;------------------------------------------------------------------------------
_aulldvrm    PROC
    mov     ecx, [esp + 16]             ; ecx <- divisor[32..63]
    test    ecx, ecx
    jnz     _@DivRemU64x64              ; call _@DivRemU64x64 if Divisor > 2^32
    jmp     _@DivRemU64x32				; call _@DivRemU64x32 if Divisor < 2^32
_aulldvrm    ENDP

_@DivRemU64x64  PROC PRIVATE
	push	esi
	push	edi
;   [ESP+12] : QWORD. Dividend
;   [ESP+20] : QWORD. Divisor
	
    mov     edx, dword ptr [esp + 16]
    mov     eax, dword ptr [esp + 12]   ; edx:eax <- dividend
    mov     edi, edx
    mov     esi, eax                    ; edi:esi <- dividend
    mov     ebx, dword ptr [esp + 20]   ; ecx:ebx <- divisor (ecx has been initialized before jumping to _@DivRemU64x64)
@@:
    shr     edx, 1
    rcr     eax, 1
    shrd    ebx, ecx, 1
    shr     ecx, 1
    jnz     @B
    div     ebx
    mov     ebx, eax                    ; ebx <- quotient
    mov     ecx, [esp + 24]             ; ecx <- high dword of divisor
    mul     dword ptr [esp + 20]        ; edx:eax <- quotient * divisor[0..31]
    imul    ecx, ebx                    ; ecx <- quotient * divisor[32..63]
    add     edx, ecx                    ; edx <- (quotient * divisor)[32..63]
    jc      @TooLarge                   ; product > 2^64
    cmp     edi, edx                    ; compare high 32 bits
    ja      @Correct
    jb      @TooLarge                   ; product > dividend
    cmp     esi, eax
    jae     @Correct                    ; product <= dividend
@TooLarge:
    dec     ebx                         ; adjust quotient by -1
    sub     eax, dword ptr [esp + 20]
    sbb     edx, dword ptr [esp + 24]   ; edx:eax <- (quotient - 1) * divisor
@Correct:
    sub     esi, eax
    sbb     edi, edx                    ; edi:esi <- remainder
    mov     eax, ebx                    ; eax <- quotient
    xor     edx, edx                    ; quotient is 32 bits long
    mov		ebx, edi                	; ebx <- Remainder[32..63]
	mov     ecx, esi                	; ecx <- Remainder[0..31]
	
	pop		edi
	pop		esi
    ret		16							; remove parameters from the stack
_@DivRemU64x64  ENDP

_@DivRemU64x32    PROC PRIVATE
    mov     ecx, [esp + 12]         ; ecx <- divisor
    mov     eax, [esp + 8]          ; eax <- dividend[32..63]
    xor     edx, edx
    div     ecx                     ; eax <- quotient[32..63], edx <- remainder
    push    eax
    mov     eax, [esp + 8]          ; eax <- dividend[0..31]
    div     ecx                     ; eax <- quotient[0..31]
    xor		ebx, ebx                ; ebx <- Remainder[32..63] (always zero)
	mov     ecx, edx                ; ecx <- Remainder[0..31]
    pop     edx                     ; edx <- quotient[32..63]
    ret		16						; remove parameters from the stack
_@DivRemU64x32    ENDP

END
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
