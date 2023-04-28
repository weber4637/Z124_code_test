#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\MemCpyIa32.asm"
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
#line 1 "d:\\bios\\z124-002\\z124-002\\AmiModulePkg\\Library\\AmiMsftIntrinsicsLib\\MemCpyIa32.asm"
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
; Name: MemCpy
;
; Description:
;  void* MemCpy( void *pDestination,  void *pSource,  UINTN Count)
; copies Count bytes of memory from Source to Destination.
;
; Input:
;   void *pDestination
; Memory address where data shall be copied.  User is responsible for
; allocating the necessary memory resources.
;
;   void *pSource
; Memory address from where data shall be copied.
;
;   UINTN Count
; Number of bytes to copy from pSource.
;
; Output:
;  Returns pointer to destination buffer.
;
; Modified:
;
; Referrals:
;
; Notes:
;  This function checks for overlapping of source and destination and
; selects copy direction that prevents memory corruption.
;
;<AMI_PHDR_END>
;*************************************************************************
memcpy proc C public pDestination:DWORD, pSource:DWORD, Count:DWORD
		push edi
		push esi
        push ebx
		pushf
        push pDestination
		mov esi, pSource
		mov edi, pDestination
		mov ecx, Count
		mov dl, 0
		mov eax, esi
		sub eax, edi
		jnb CopyForward
		lea ebx, [esi+ecx]
		neg eax
		cmp ebx, edi
		jb CopyForward
		mov esi, ebx
		lea edi, [edi+ecx]
		mov dl, 1
		std
CopyForward:
		cmp ecx, 4
		jb m8
		cmp eax, 4
		jb m8
		mov eax, esi
		mov ebx, edi
		and eax, 3
		and ebx, 3
		test dl, dl
		jz skip1
		dec esi
		dec edi
skip1:
		cmp eax, ebx
		jne m32
		test eax, eax
		jz m32
		test dl, dl
		jnz skip_nz1
		neg eax
		add eax, 4
skip_nz1:
		xchg eax, ecx
		sub eax, ecx
		rep movsb
		mov ecx, eax
m32:
		test dl, dl
		jz skip2
		sub esi, 3
		sub edi, 3
skip2:
		mov eax, ecx
		shr ecx, 2
		rep movsd
		and eax, 3
		jz memcpyend
		test dl, dl
		jz skip3
		add esi, 4
		add edi, 4
skip3:
		mov ecx, eax
m8:
		test dl, dl
		jz skip4
		dec esi
		dec edi
skip4:
		rep movsb
memcpyend:
        pop eax
        popf
        pop ebx
		pop esi
		pop edi
        ret
memcpy endp

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
