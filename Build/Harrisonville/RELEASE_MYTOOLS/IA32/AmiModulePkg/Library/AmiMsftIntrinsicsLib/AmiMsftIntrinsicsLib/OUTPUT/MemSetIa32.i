#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\MemSetIa32.asm"
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
#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\MemSetIa32.asm"
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
.686p
.xmm
.model  flat
.code


;*************************************************************************
;<AMI_PHDR_START>
;
; Name: MemSet
;
; Description:
;  void MemSet( void *pBuffer,  UINTN Count,  UINT8 Value) fills Count
; bytes of memory in pBuffer with Value.
;
; Input:
;   void *pBuffer
; The starting location in memory where to begin filling.
;
;   UINTN Count
; The number of bytes to fill with Value.
;
;   UINT8 Value
; The value to fill memory with starting at pBuffer.
;
; Output:
;  void.
;
; Modified:
;
; Referrals:
;
; Notes:
;
;<AMI_PHDR_END>
;*************************************************************************
_memset proc
		mov ecx, [esp+12] ; ecx = Count
		mov al, [esp+8] ; al = Value
		push edi
		mov edi, [esp+4+4] ; edi = pBuffer
		push [esp+4+4] ; save pBuffer
		push ebx		
		; fill EAX with the Value so that we can perform DWORD operatins
		mov ah, al
		mov bx,ax
		shl eax,16
		mov ax,bx
		; if Counter is less then 4, jump to byte copy
		cmp ecx, 4
		jb  CopyByte
		; check if the Buffer is 4-bytes aligned
		mov edx,edi
		and edx, 3
		; if the Buffer is 4-bytes aligned, jump to DWORD copy
		jz CopyDword
		; Buffer is not 4-bytes aligned
		; Calculate 4-(Buffer%4), which is a number of bytes we have to copy before
		; Buffer will reach 4-bytes boundary, and perform byte copy
		neg edx
		add edx, 4
		xchg ecx, edx
		sub edx, ecx
		rep stosb
		mov ecx, edx
CopyDword:
		; perform DWORD copy
		mov edx, ecx
		shr ecx, 2
		rep stosd
		; copy the remainder
		and edx,3
		mov ecx, edx
CopyByte:
		rep stosb
		
        pop ebx
		pop eax		
		pop edi
		ret
_memset endp

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
