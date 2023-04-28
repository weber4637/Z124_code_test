#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\Alldvrm.asm"
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
#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\Alldvrm.asm"
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
NegateResult db ?
.code
EXTERN  _aulldvrm:PROC

abs64  PROC PRIVATE
	test edx, edx
	jns @F
	xor cl, 1
	jmp neg64
@@:	
	ret
abs64 ENDP
	
neg64  PROC PRIVATE
	neg eax
	not edx
	cmc
	adc edx, 0
	ret
neg64 ENDP	

;------------------------------------------------------------------------------
; Divides a 64-bit signed value by another 64-bit signed value and returns
; the 64-bit signed result and the 64-bit signed remainder.
; NOTE: In Microsoft C, the sign of the remainder is always the same as the sign of the first operand.
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
_alldvrm    PROC
	; Devident = abs(Devident)
	xor cx, cx
	mov NegateResult, 0
	mov eax, [esp+4] ; eax <- DividendLo
	mov edx, [esp+8] ; edx <- DividendHi
	call abs64
	jcxz	@F
	or	NegateResult, 2
@@:
	mov [esp+4], eax
	mov [esp+8], edx
	; Devident = abs(Divisor)
	mov eax, [esp+12] ; eax <- DivisorLo
	mov edx, [esp+16] ; edx <- DivisorHi
	call abs64
	mov [esp+12], eax
	mov [esp+16], edx
	or	NegateResult, cl

	pop		RetAddress ; save return address
	call  	_aulldvrm ; perform unsigned division
	test	NegateResult, 1
	jz		@F
	call   neg64
@@:		
	test	NegateResult, 2
	jz		@F
	push	edx
	push	eax
	mov		edx, ebx
	mov		eax, ecx
	call   neg64
	mov		ebx, edx
	mov		ecx, eax
	pop		eax
	pop		edx
@@:	
	push	RetAddress
	ret
_alldvrm    ENDP

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
