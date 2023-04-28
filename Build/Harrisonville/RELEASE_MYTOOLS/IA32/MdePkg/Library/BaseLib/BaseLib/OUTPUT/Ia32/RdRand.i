#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\Ia32\\RdRand.nasm"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"















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


#line 17 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"






























































































































































































































































































































































































































































































































































































                                            













#line 590 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"































































































































































































































































































































































                                         


#line 945 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"









































































































































UINTN
__cdecl
LibPcdSetSku (
   UINTN   SkuId
  );












UINT8
__cdecl
LibPcdGet8 (
   UINTN             TokenNumber
  );












UINT16
__cdecl
LibPcdGet16 (
   UINTN             TokenNumber
  );












UINT32
__cdecl
LibPcdGet32 (
   UINTN             TokenNumber
  );












UINT64
__cdecl
LibPcdGet64 (
   UINTN             TokenNumber
  );












void *
__cdecl
LibPcdGetPtr (
   UINTN             TokenNumber
  );












BOOLEAN 
__cdecl
LibPcdGetBool (
   UINTN             TokenNumber
  );










UINTN
__cdecl
LibPcdGetSize (
   UINTN             TokenNumber
  );
















UINT8
__cdecl
LibPcdGetEx8 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINT16
__cdecl
LibPcdGetEx16 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );













UINT32
__cdecl
LibPcdGetEx32 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINT64
__cdecl
LibPcdGetEx64 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















void *
__cdecl
LibPcdGetExPtr (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















BOOLEAN
__cdecl
LibPcdGetExBool (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINTN
__cdecl
LibPcdGetExSize (
   const GUID        *Guid,
   UINTN             TokenNumber
  );















UINT8
__cdecl
LibPcdSet8 (
   UINTN             TokenNumber,
   UINT8             Value
  );














UINT16
__cdecl
LibPcdSet16 (
   UINTN             TokenNumber,
   UINT16            Value
  );














UINT32
__cdecl
LibPcdSet32 (
   UINTN             TokenNumber,
   UINT32            Value
  );














UINT64
__cdecl
LibPcdSet64 (
   UINTN             TokenNumber,
   UINT64            Value
  );
























void *
__cdecl
LibPcdSetPtr (
          UINTN             TokenNumber,
       UINTN             *SizeOfBuffer,
   const  void              *Buffer
  );














BOOLEAN
__cdecl
LibPcdSetBool (
   UINTN             TokenNumber,
   BOOLEAN           Value
  );


















UINT8
__cdecl
LibPcdSetEx8 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT8             Value
  );


















UINT16
__cdecl
LibPcdSetEx16 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT16            Value
  );


















UINT32
__cdecl
LibPcdSetEx32 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT32            Value
  );


















UINT64
__cdecl
LibPcdSetEx64 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT64            Value
  );
























void *
__cdecl
LibPcdSetExPtr (
        const GUID        *Guid,
        UINTN             TokenNumber,
     UINTN             *SizeOfBuffer,
        void              *Buffer
  );


















BOOLEAN
__cdecl
LibPcdSetExBool (
   const GUID        *Guid,
   UINTN             TokenNumber,
   BOOLEAN           Value
  );
#line 1645 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"













RETURN_STATUS
__cdecl
LibPcdSet8S (
   UINTN          TokenNumber,
   UINT8          Value
  );













RETURN_STATUS
__cdecl
LibPcdSet16S (
   UINTN          TokenNumber,
   UINT16         Value
  );













RETURN_STATUS
__cdecl
LibPcdSet32S (
   UINTN          TokenNumber,
   UINT32         Value
  );













RETURN_STATUS
__cdecl
LibPcdSet64S (
   UINTN          TokenNumber,
   UINT64         Value
  );























RETURN_STATUS
__cdecl
LibPcdSetPtrS (
         UINTN    TokenNumber,
      UINTN    *SizeOfBuffer,
   const void     *Buffer
  );













RETURN_STATUS
__cdecl
LibPcdSetBoolS (
   UINTN          TokenNumber,
   BOOLEAN        Value
  );

















RETURN_STATUS
__cdecl
LibPcdSetEx8S (
   const GUID     *Guid,
   UINTN          TokenNumber,
   UINT8          Value
  );

















RETURN_STATUS
__cdecl
LibPcdSetEx16S (
   const GUID     *Guid,
   UINTN          TokenNumber,
   UINT16         Value
  );

















RETURN_STATUS
__cdecl
LibPcdSetEx32S (
   const GUID     *Guid,
   UINTN          TokenNumber,
   UINT32         Value
  );

















RETURN_STATUS
__cdecl
LibPcdSetEx64S (
   const GUID     *Guid,
   UINTN          TokenNumber,
   UINT64         Value
  );























RETURN_STATUS
__cdecl
LibPcdSetExPtrS (
   const GUID     *Guid,
         UINTN    TokenNumber,
      UINTN    *SizeOfBuffer,
         void     *Buffer
  );

















RETURN_STATUS
__cdecl
LibPcdSetExBoolS (
   const GUID     *Guid,
   UINTN          TokenNumber,
   BOOLEAN        Value
  );

















typedef
void
(__cdecl *PCD_CALLBACK)(
          const GUID        *CallBackGuid, 
          UINTN             CallBackToken,
       void              *TokenData,
          UINTN             TokenDataSize
  );


















void
__cdecl
LibPcdCallbackOnSet (
   const GUID               *Guid,       
   UINTN                    TokenNumber,
   PCD_CALLBACK             NotificationFunction
  );















void
__cdecl
LibPcdCancelCallback (
   const GUID               *Guid,       
   UINTN                    TokenNumber,
   PCD_CALLBACK             NotificationFunction
  );





















UINTN           
__cdecl
LibPcdGetNextToken (
   const GUID               *Guid,       
   UINTN                    TokenNumber
  );
















GUID *
__cdecl
LibPcdGetNextTokenSpace (
   const GUID  *TokenSpaceGuid
  );

























void *
__cdecl
LibPatchPcdSetPtr (
          void       *PatchVariable,
          UINTN       MaximumDatumSize,
       UINTN       *SizeOfBuffer,
   const  void        *Buffer
  );
























RETURN_STATUS
__cdecl
LibPatchPcdSetPtrS (
        void     *PatchVariable,
         UINTN    MaximumDatumSize,
      UINTN    *SizeOfBuffer,
   const void     *Buffer
  );


























void *
__cdecl
LibPatchPcdSetPtrAndSize (
         void        *PatchVariable,
         UINTN       *SizeOfPatchVariable,
          UINTN       MaximumDatumSize,
       UINTN       *SizeOfBuffer,
   const  void        *Buffer
  );


























RETURN_STATUS
__cdecl
LibPatchPcdSetPtrAndSizeS (
        void     *PatchVariable,
        UINTN    *SizeOfPatchVariable,
         UINTN    MaximumDatumSize,
      UINTN    *SizeOfBuffer,
   const void     *Buffer
  );

typedef enum {
  PCD_TYPE_8,
  PCD_TYPE_16,
  PCD_TYPE_32,
  PCD_TYPE_64,
  PCD_TYPE_BOOL,
  PCD_TYPE_PTR
} PCD_TYPE;

typedef struct {
  
  
  
  
  PCD_TYPE          PcdType;
  
  
  
  
  UINTN             PcdSize;
  
  
  
  
  
  
  CHAR8             *PcdName;
} PCD_INFO;














void
__cdecl
LibPcdGetInfo (
          UINTN           TokenNumber,
         PCD_INFO        *PcdInfo
  );














void
__cdecl
LibPcdGetInfoEx (
   const  GUID            *Guid,
          UINTN           TokenNumber,
         PCD_INFO        *PcdInfo
  );








UINTN
__cdecl
LibPcdGetSku (
  void
  );

#line 2261 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"

#line 18 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiMdePkgTokenSpaceGuid;



extern const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;






extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;






extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;






extern const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask;











#line 66 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\Ia32\\RdRand.nasm"
;------------------------------------------------------------------------------
;
; Copyright (c) 2015, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http:
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
; Module Name:
;
;   RdRand.nasm
;
; Abstract:
;
;   Generates random number through CPU RdRand instruction under 32-bit platform.
;
; Notes:
;
;------------------------------------------------------------------------------

SECTION .text

;------------------------------------------------------------------------------
;  Generates a 16 bit random number through RDRAND instruction.
;  Return ((BOOLEAN)(1==1)) if Rand generated successfully, or ((BOOLEAN)(0==1)) if not.
;
;  BOOLEAN __cdecl AsmRdRand16 (UINT16 *Rand);
;------------------------------------------------------------------------------
global _AsmRdRand16
_AsmRdRand16:
    ; rdrand   ax                  ; generate a 16 bit RN into ax
                                   ; CF=1 if RN generated ok, otherwise CF=0
    db     0xf, 0xc7, 0xf0         ; rdrand r16: "0f c7 /6  ModRM:r/m(w)"
    jc     rn16_ok                 ; jmp if CF=1
    xor    eax, eax                ; reg=0 if CF=0
    ret                            ; return with failure status
rn16_ok:
    mov    edx, dword [esp + 4]
    mov    [edx], ax
    mov    eax,  1
    ret

;------------------------------------------------------------------------------
;  Generates a 32 bit random number through RDRAND instruction.
;  Return ((BOOLEAN)(1==1)) if Rand generated successfully, or ((BOOLEAN)(0==1)) if not.
;
;  BOOLEAN __cdecl AsmRdRand32 (UINT32 *Rand);
;------------------------------------------------------------------------------
global _AsmRdRand32
_AsmRdRand32:
    ; rdrand   eax                 ; generate a 32 bit RN into eax
                                   ; CF=1 if RN generated ok, otherwise CF=0
    db     0xf, 0xc7, 0xf0         ; rdrand r32: "0f c7 /6  ModRM:r/m(w)"
    jc     rn32_ok                 ; jmp if CF=1
    xor    eax, eax                ; reg=0 if CF=0
    ret                            ; return with failure status
rn32_ok:
    mov    edx, dword [esp + 4]
    mov    [edx], eax
    mov    eax,  1
    ret

;------------------------------------------------------------------------------
;  Generates a 64 bit random number through RDRAND instruction.
;  Return ((BOOLEAN)(1==1)) if Rand generated successfully, or ((BOOLEAN)(0==1)) if not.
;
;  BOOLEAN __cdecl AsmRdRand64 (UINT64 *Rand);
;------------------------------------------------------------------------------
global _AsmRdRand64
_AsmRdRand64:
    ; rdrand   eax                 ; generate a 32 bit RN into eax
                                   ; CF=1 if RN generated ok, otherwise CF=0
    db     0xf, 0xc7, 0xf0         ; rdrand r32: "0f c7 /6  ModRM:r/m(w)"
    jnc    rn64_ret                ; jmp if CF=0
    mov    edx, dword [esp + 4]
    mov    [edx], eax

    db     0xf, 0xc7, 0xf0         ; generate another 32 bit RN
    jnc    rn64_ret                ; jmp if CF=0
    mov    [edx + 4], eax

    mov    eax,  1
    ret
rn64_ret:
    xor    eax, eax
    ret                            ; return with failure status

