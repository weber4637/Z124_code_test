#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\X64\\Thunk16.nasm"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"















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


#line 17 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
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

#line 18 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiMdePkgTokenSpaceGuid;



extern const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;






extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;






extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;






extern const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask;











#line 66 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\X64\\Thunk16.nasm"

#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"

















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"








































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 19 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"





































#line 39 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"

















































#line 89 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"





typedef struct {
  UINT64                            Rbx;
  UINT64                            Rsp;
  UINT64                            Rbp;
  UINT64                            Rdi;
  UINT64                            Rsi;
  UINT64                            R12;
  UINT64                            R13;
  UINT64                            R14;
  UINT64                            R15;
  UINT64                            Rip;
  UINT64                            MxCsr;
  UINT8                             XmmBuffer[160]; 
} BASE_LIBRARY_JUMP_BUFFER;



#line 112 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"















#line 128 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"



















#line 148 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"































#line 180 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"























UINTN
__cdecl
StrnLenS (
   const CHAR16              *String,
   UINTN                     MaxSize
  );




























RETURN_STATUS
__cdecl
StrCpyS (
   CHAR16       *Destination,
    UINTN        DestMax,
    const CHAR16 *Source
  );































RETURN_STATUS
__cdecl
StrnCpyS (
   CHAR16       *Destination,
    UINTN        DestMax,
    const CHAR16 *Source,
    UINTN        Length
  );































RETURN_STATUS
__cdecl
StrCatS (
    CHAR16       *Destination,
       UINTN        DestMax,
       const CHAR16 *Source
  );


































RETURN_STATUS
__cdecl
StrnCatS (
    CHAR16       *Destination,
       UINTN        DestMax,
       const CHAR16 *Source,
       UINTN        Length
  );















UINTN
__cdecl
AsciiStrnLenS (
   const CHAR8               *String,
   UINTN                     MaxSize
  );


























RETURN_STATUS
__cdecl
AsciiStrCpyS (
   CHAR8        *Destination,
    UINTN        DestMax,
    const CHAR8  *Source
  );





























RETURN_STATUS
__cdecl
AsciiStrnCpyS (
   CHAR8        *Destination,
    UINTN        DestMax,
    const CHAR8  *Source,
    UINTN        Length
  );





























RETURN_STATUS
__cdecl
AsciiStrCatS (
    CHAR8        *Destination,
       UINTN        DestMax,
       const CHAR8  *Source
  );
































RETURN_STATUS
__cdecl
AsciiStrnCatS (
    CHAR8        *Destination,
       UINTN        DestMax,
       const CHAR8  *Source,
       UINTN        Length
  );





























CHAR16 *
__cdecl
StrCpy (
       CHAR16                    *Destination,
        const CHAR16              *Source
  );


































CHAR16 *
__cdecl
StrnCpy (
       CHAR16                    *Destination,
        const CHAR16              *Source,
        UINTN                     Length
  );
#line 607 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"


















UINTN
__cdecl
StrLen (
        const CHAR16              *String
  );




















UINTN
__cdecl
StrSize (
        const CHAR16              *String
  );






























INTN
__cdecl
StrCmp (
        const CHAR16              *FirstString,
        const CHAR16              *SecondString
  );


































INTN
__cdecl
StrnCmp (
        const CHAR16              *FirstString,
        const CHAR16              *SecondString,
        UINTN                     Length
  );






































CHAR16 *
__cdecl
StrCat (
     CHAR16                    *Destination,
        const CHAR16              *Source
  );










































CHAR16 *
__cdecl
StrnCat (
     CHAR16                    *Destination,
        const CHAR16              *Source,
        UINTN                     Length
  );
#line 826 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"


























CHAR16 *
__cdecl
StrStr (
        const CHAR16              *String,
        const CHAR16              *SearchString
  );



































UINTN
__cdecl
StrDecimalToUintn (
        const CHAR16              *String
  );



































UINT64
__cdecl
StrDecimalToUint64 (
        const CHAR16              *String
  );
 




































UINTN
__cdecl
StrHexToUintn (
        const CHAR16              *String
  );





































UINT64
__cdecl
StrHexToUint64 (
        const CHAR16             *String
  );






































CHAR8 *
__cdecl
UnicodeStrToAsciiStr (
        const CHAR16              *Source,
       CHAR8                     *Destination
  );

#line 1068 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"










































RETURN_STATUS
__cdecl
UnicodeStrToAsciiStrS (
        const CHAR16              *Source,
       CHAR8                     *Destination,
        UINTN                     DestMax
  );


























CHAR8 *
__cdecl
AsciiStrCpy (
       CHAR8                     *Destination,
        const CHAR8               *Source
  );































CHAR8 *
__cdecl
AsciiStrnCpy (
       CHAR8                     *Destination,
        const CHAR8               *Source,
        UINTN                     Length
  );
#line 1188 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"


















UINTN
__cdecl
AsciiStrLen (
        const CHAR8               *String
  );



















UINTN
__cdecl
AsciiStrSize (
        const CHAR8               *String
  );




























INTN
__cdecl
AsciiStrCmp (
        const CHAR8               *FirstString,
        const CHAR8               *SecondString
  );































INTN
__cdecl
AsciiStriCmp (
        const CHAR8               *FirstString,
        const CHAR8               *SecondString
  );
































INTN
__cdecl
AsciiStrnCmp (
        const CHAR8               *FirstString,
        const CHAR8               *SecondString,
        UINTN                     Length
  );

































CHAR8 *
__cdecl
AsciiStrCat (
    CHAR8    *Destination,
   const CHAR8  *Source
  );








































CHAR8 *
__cdecl
AsciiStrnCat (
     CHAR8                     *Destination,
        const CHAR8               *Source,
        UINTN                     Length
  );
#line 1432 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"

























CHAR8 *
__cdecl
AsciiStrStr (
        const CHAR8               *String,
        const CHAR8               *SearchString
  );
































UINTN
__cdecl
AsciiStrDecimalToUintn (
        const CHAR8               *String
  );
































UINT64
__cdecl
AsciiStrDecimalToUint64 (
        const CHAR8               *String
  );




































UINTN
__cdecl
AsciiStrHexToUintn (
        const CHAR8               *String
  );




































UINT64
__cdecl
AsciiStrHexToUint64 (
        const CHAR8                *String
  );
































CHAR16 *
__cdecl
AsciiStrToUnicodeStr (
        const CHAR8               *Source,
       CHAR16                    *Destination
  );

#line 1659 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"






































RETURN_STATUS
__cdecl
AsciiStrToUnicodeStrS (
        const CHAR8               *Source,
       CHAR16                    *Destination,
        UINTN                     DestMax
  );














UINT8
__cdecl
DecimalToBcd8 (
        UINT8                     Value
  );
















UINT8
__cdecl
BcdToDecimal8 (
        UINT8                     Value
  );














BOOLEAN
__cdecl
PathRemoveLastItem(
    CHAR16 *Path
  );














CHAR16*
__cdecl
PathCleanUpDirectories(
   CHAR16 *Path
  );






































LIST_ENTRY *
__cdecl
InitializeListHead (
     LIST_ENTRY                *ListHead
  );
























LIST_ENTRY *
__cdecl
InsertHeadList (
     LIST_ENTRY                *ListHead,
     LIST_ENTRY                *Entry
  );
























LIST_ENTRY *
__cdecl
InsertTailList (
     LIST_ENTRY                *ListHead,
     LIST_ENTRY                *Entry
  );






















LIST_ENTRY *
__cdecl
GetFirstNode (
        const LIST_ENTRY          *List
  );























LIST_ENTRY *
__cdecl
GetNextNode (
        const LIST_ENTRY          *List,
        const LIST_ENTRY          *Node
  );

  





















LIST_ENTRY *
__cdecl
GetPreviousNode (
        const LIST_ENTRY          *List,
        const LIST_ENTRY          *Node
  );

  



















BOOLEAN
__cdecl
IsListEmpty (
        const LIST_ENTRY          *ListHead
  );




























BOOLEAN
__cdecl
IsNull (
        const LIST_ENTRY          *List,
        const LIST_ENTRY          *Node
  );

























BOOLEAN
__cdecl
IsNodeAtEnd (
        const LIST_ENTRY          *List,
        const LIST_ENTRY          *Node
  );




























LIST_ENTRY *
__cdecl
SwapListEntries (
     LIST_ENTRY                *FirstEntry,
     LIST_ENTRY                *SecondEntry
  );























LIST_ENTRY *
__cdecl
RemoveEntryList (
        const LIST_ENTRY          *Entry
  );




















UINT64
__cdecl
LShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );

















UINT64
__cdecl
RShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );

















UINT64
__cdecl
ARShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );


















UINT32
__cdecl
LRotU32 (
        UINT32                    Operand,
        UINTN                     Count
  );


















UINT32
__cdecl
RRotU32 (
        UINT32                    Operand,
        UINTN                     Count
  );


















UINT64
__cdecl
LRotU64 (
        UINT64                    Operand,
        UINTN                     Count
  );


















UINT64
__cdecl
RRotU64 (
        UINT64                    Operand,
        UINTN                     Count
  );















INTN
__cdecl
LowBitSet32 (
        UINT32                    Operand
  );
















INTN
__cdecl
LowBitSet64 (
        UINT64                    Operand
  );
















INTN
__cdecl
HighBitSet32 (
        UINT32                    Operand
  );
















INTN
__cdecl
HighBitSet64 (
        UINT64                    Operand
  );















UINT32
__cdecl
GetPowerOfTwo32 (
        UINT32                    Operand
  );















UINT64
__cdecl
GetPowerOfTwo64 (
        UINT64                    Operand
  );














UINT16
__cdecl
SwapBytes16 (
        UINT16                    Value
  );














UINT32
__cdecl
SwapBytes32 (
        UINT32                    Value
  );














UINT64
__cdecl
SwapBytes64 (
        UINT64                    Value
  );
















UINT64
__cdecl
MultU64x32 (
        UINT64                    Multiplicand,
        UINT32                    Multiplier
  );
















UINT64
__cdecl
MultU64x64 (
        UINT64                    Multiplicand,
        UINT64                    Multiplier
  );
















INT64
__cdecl
MultS64x64 (
        INT64                     Multiplicand,
        INT64                     Multiplier
  );


















UINT64
__cdecl
DivU64x32 (
        UINT64                    Dividend,
        UINT32                    Divisor
  );


















UINT32
__cdecl
ModU64x32 (
        UINT64                    Dividend,
        UINT32                    Divisor
  );





















UINT64
__cdecl
DivU64x32Remainder (
        UINT64                    Dividend,
        UINT32                    Divisor,
       UINT32                    *Remainder  
  );





















UINT64
__cdecl
DivU64x64Remainder (
        UINT64                    Dividend,
        UINT64                    Divisor,
       UINT64                    *Remainder  
  );

























INT64
__cdecl
DivS64x64Remainder (
        INT64                     Dividend,
        INT64                     Divisor,
       INT64                     *Remainder  
  );















UINT16
__cdecl
ReadUnaligned16 (
   const UINT16              *Buffer
  );

















UINT16
__cdecl
WriteUnaligned16 (
   UINT16                    *Buffer,
    UINT16                    Value
  );















UINT32
__cdecl
ReadUnaligned24 (
   const UINT32              *Buffer
  );

















UINT32
__cdecl
WriteUnaligned24 (
   UINT32                    *Buffer,
    UINT32                    Value
  );















UINT32
__cdecl
ReadUnaligned32 (
   const UINT32              *Buffer
  );

















UINT32
__cdecl
WriteUnaligned32 (
   UINT32                    *Buffer,
    UINT32                    Value
  );















UINT64
__cdecl
ReadUnaligned64 (
   const UINT64              *Buffer
  );

















UINT64
__cdecl
WriteUnaligned64 (
   UINT64                    *Buffer,
    UINT64                    Value
  );

























UINT8
__cdecl
BitFieldRead8 (
        UINT8                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit
  );

























UINT8
__cdecl
BitFieldWrite8 (
        UINT8                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT8                     Value
  );


























UINT8
__cdecl
BitFieldOr8 (
        UINT8                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT8                     OrData
  );


























UINT8
__cdecl
BitFieldAnd8 (
        UINT8                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT8                     AndData
  );





























UINT8
__cdecl
BitFieldAndThenOr8 (
        UINT8                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT8                     AndData,
        UINT8                     OrData
  );





















UINT16
__cdecl
BitFieldRead16 (
        UINT16                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit
  );

























UINT16
__cdecl
BitFieldWrite16 (
        UINT16                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT16                    Value
  );


























UINT16
__cdecl
BitFieldOr16 (
        UINT16                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT16                    OrData
  );


























UINT16
__cdecl
BitFieldAnd16 (
        UINT16                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT16                    AndData
  );





























UINT16
__cdecl
BitFieldAndThenOr16 (
        UINT16                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT16                    AndData,
        UINT16                    OrData
  );





















UINT32
__cdecl
BitFieldRead32 (
        UINT32                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit
  );

























UINT32
__cdecl
BitFieldWrite32 (
        UINT32                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    Value
  );


























UINT32
__cdecl
BitFieldOr32 (
        UINT32                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    OrData
  );


























UINT32
__cdecl
BitFieldAnd32 (
        UINT32                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    AndData
  );





























UINT32
__cdecl
BitFieldAndThenOr32 (
        UINT32                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    AndData,
        UINT32                    OrData
  );





















UINT64
__cdecl
BitFieldRead64 (
        UINT64                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit
  );

























UINT64
__cdecl
BitFieldWrite64 (
        UINT64                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    Value
  );


























UINT64
__cdecl
BitFieldOr64 (
        UINT64                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    OrData
  );


























UINT64
__cdecl
BitFieldAnd64 (
        UINT64                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    AndData
  );





























UINT64
__cdecl
BitFieldAndThenOr64 (
        UINT64                    Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    AndData,
        UINT64                    OrData
  );























UINT8
__cdecl
CalculateSum8 (
        const UINT8              *Buffer,
        UINTN                     Length
  );




















UINT8
__cdecl
CalculateCheckSum8 (
        const UINT8              *Buffer,
        UINTN                     Length
  );





















UINT16
__cdecl
CalculateSum16 (
        const UINT16             *Buffer,
        UINTN                     Length
  );






















UINT16
__cdecl
CalculateCheckSum16 (
        const UINT16             *Buffer,
        UINTN                     Length
  );





















UINT32
__cdecl
CalculateSum32 (
        const UINT32             *Buffer,
        UINTN                     Length
  );






















UINT32
__cdecl
CalculateCheckSum32 (
        const UINT32             *Buffer,
        UINTN                     Length
  );





















UINT64
__cdecl
CalculateSum64 (
        const UINT64             *Buffer,
        UINTN                     Length
  );






















UINT64
__cdecl
CalculateCheckSum64 (
        const UINT64             *Buffer,
        UINTN                     Length
  );













typedef
void
(__cdecl *SWITCH_STACK_ENTRY_POINT)(
        void                      *Context1,  
        void                      *Context2   
  );









void
__cdecl
MemoryFence (
  void
  );























UINTN
__cdecl
SetJump (
       BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer
  );


















void
__cdecl
LongJump (
        BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer,
        UINTN                     Value
  );






void
__cdecl
EnableInterrupts (
  void
  );






void
__cdecl
DisableInterrupts (
  void
  );










BOOLEAN
__cdecl
SaveAndDisableInterrupts (
  void
  );







void
__cdecl
EnableDisableInterrupts (
  void
  );












BOOLEAN
__cdecl
GetInterruptState (
  void
  );
















BOOLEAN
__cdecl
SetInterruptState (
        BOOLEAN                   InterruptState
  );









void
__cdecl
CpuPause (
  void
  );































void
__cdecl
SwitchStack (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,  
        void                      *Context2,  
        void                      *NewStack,
  ...
  );









void
__cdecl
CpuBreakpoint (
  void
  );











void
__cdecl
CpuDeadLoop (
  void
  );
 














































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 5385 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"






typedef union {
  struct {
    UINT32  CF:1;           
    UINT32  Reserved_0:1;   
    UINT32  PF:1;           
    UINT32  Reserved_1:1;   
    UINT32  AF:1;           
    UINT32  Reserved_2:1;   
    UINT32  ZF:1;           
    UINT32  SF:1;           
    UINT32  TF:1;           
    UINT32  IF:1;           
    UINT32  DF:1;           
    UINT32  OF:1;           
    UINT32  IOPL:2;         
    UINT32  NT:1;           
    UINT32  Reserved_3:1;   
  } Bits;
  UINT16    Uint16;
} IA32_FLAGS16;






typedef union {
  struct {
    UINT32  CF:1;           
    UINT32  Reserved_0:1;   
    UINT32  PF:1;           
    UINT32  Reserved_1:1;   
    UINT32  AF:1;           
    UINT32  Reserved_2:1;   
    UINT32  ZF:1;           
    UINT32  SF:1;           
    UINT32  TF:1;           
    UINT32  IF:1;           
    UINT32  DF:1;           
    UINT32  OF:1;           
    UINT32  IOPL:2;         
    UINT32  NT:1;           
    UINT32  Reserved_3:1;   
    UINT32  RF:1;           
    UINT32  VM:1;           
    UINT32  AC:1;           
    UINT32  VIF:1;          
    UINT32  VIP:1;          
    UINT32  ID:1;           
    UINT32  Reserved_4:10;  
  } Bits;
  UINTN     UintN;
} IA32_EFLAGS32;






typedef union {
  struct {
    UINT32  PE:1;           
    UINT32  MP:1;           
    UINT32  EM:1;           
    UINT32  TS:1;           
    UINT32  ET:1;           
    UINT32  NE:1;           
    UINT32  Reserved_0:10;  
    UINT32  WP:1;           
    UINT32  Reserved_1:1;   
    UINT32  AM:1;           
    UINT32  Reserved_2:10;  
    UINT32  NW:1;           
    UINT32  CD:1;           
    UINT32  PG:1;           
  } Bits;
  UINTN     UintN;
} IA32_CR0;






typedef union {
  struct {
    UINT32  VME:1;          
    UINT32  PVI:1;          
    UINT32  TSD:1;          
    UINT32  DE:1;           
    UINT32  PSE:1;          
    UINT32  PAE:1;          
    UINT32  MCE:1;          
    UINT32  PGE:1;          
    UINT32  PCE:1;          
                            
    UINT32  OSFXSR:1;       
                            
    UINT32  OSXMMEXCPT:1;   
                            
                            
    UINT32  Reserved_0:2;   
    UINT32  VMXE:1;         
    UINT32  Reserved_1:18;  
  } Bits;
  UINTN     UintN;
} IA32_CR4;




typedef union {
  struct {
    UINT32  LimitLow:16;
    UINT32  BaseLow:16;
    UINT32  BaseMid:8;
    UINT32  Type:4;
    UINT32  S:1;
    UINT32  DPL:2;
    UINT32  P:1;
    UINT32  LimitHigh:4;
    UINT32  AVL:1;
    UINT32  L:1;
    UINT32  DB:1;
    UINT32  G:1;
    UINT32  BaseHigh:8;
  } Bits;
  UINT64  Uint64;
} IA32_SEGMENT_DESCRIPTOR;




#pragma pack (1)
typedef struct {
  UINT16  Limit;
  UINTN   Base;
} IA32_DESCRIPTOR;
#pragma pack ()























#line 5554 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"





typedef union {
  struct {
    UINT32  OffsetLow:16;   
    UINT32  Selector:16;    
    UINT32  Reserved_0:8;   
    UINT32  GateType:8;     
    UINT32  OffsetHigh:16;  
    UINT32  OffsetUpper:32; 
    UINT32  Reserved_1:32;  
  } Bits;
  struct {
    UINT64  Uint64;
    UINT64  Uint64_1;
  } Uint128;   
} IA32_IDT_GATE_DESCRIPTOR;

#line 5576 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"




typedef struct {
  UINT8  Buffer[512];
} IA32_FX_BUFFER;




typedef struct {
  UINT32                            Reserved1;
  UINT32                            Reserved2;
  UINT32                            Reserved3;
  UINT32                            Reserved4;
  UINT8                             BL;
  UINT8                             BH;
  UINT16                            Reserved5;
  UINT8                             DL;
  UINT8                             DH;
  UINT16                            Reserved6;
  UINT8                             CL;
  UINT8                             CH;
  UINT16                            Reserved7;
  UINT8                             AL;
  UINT8                             AH;
  UINT16                            Reserved8;
} IA32_BYTE_REGS;

typedef struct {
  UINT16                            DI;
  UINT16                            Reserved1;
  UINT16                            SI;
  UINT16                            Reserved2;
  UINT16                            BP;
  UINT16                            Reserved3;
  UINT16                            SP;
  UINT16                            Reserved4;
  UINT16                            BX;
  UINT16                            Reserved5;
  UINT16                            DX;
  UINT16                            Reserved6;
  UINT16                            CX;
  UINT16                            Reserved7;
  UINT16                            AX;
  UINT16                            Reserved8;
} IA32_WORD_REGS;

typedef struct {
  UINT32                            EDI;
  UINT32                            ESI;
  UINT32                            EBP;
  UINT32                            ESP;
  UINT32                            EBX;
  UINT32                            EDX;
  UINT32                            ECX;
  UINT32                            EAX;
  UINT16                            DS;
  UINT16                            ES;
  UINT16                            FS;
  UINT16                            GS;
  IA32_EFLAGS32                     EFLAGS;
  UINT32                            Eip;
  UINT16                            CS;
  UINT16                            SS;
} IA32_DWORD_REGS;

typedef union {
  IA32_DWORD_REGS                   E;
  IA32_WORD_REGS                    X;
  IA32_BYTE_REGS                    H;
} IA32_REGISTER_SET;




typedef struct {
  IA32_REGISTER_SET                 *RealModeState;
  void                              *RealModeBuffer;
  UINT32                            RealModeBufferSize;
  UINT32                            ThunkAttributes;
} THUNK_CONTEXT;






























UINT32
__cdecl
AsmCpuid (
        UINT32                    Index,
       UINT32                    *Eax,  
       UINT32                    *Ebx,  
       UINT32                    *Ecx,  
       UINT32                    *Edx   
  );


































UINT32
__cdecl
AsmCpuidEx (
        UINT32                    Index,
        UINT32                    SubIndex,
       UINT32                    *Eax,  
       UINT32                    *Ebx,  
       UINT32                    *Ecx,  
       UINT32                    *Edx   
  );









void
__cdecl
AsmDisableCache (
  void
  );









void
__cdecl
AsmEnableCache (
  void
  );
















UINT32
__cdecl
AsmReadMsr32 (
        UINT32                    Index
  );



















UINT32
__cdecl
AsmWriteMsr32 (
        UINT32                    Index,
        UINT32                    Value
  );





















UINT32
__cdecl
AsmMsrOr32 (
        UINT32                    Index,
        UINT32                    OrData
  );





















UINT32
__cdecl
AsmMsrAnd32 (
        UINT32                    Index,
        UINT32                    AndData
  );
























UINT32
__cdecl
AsmMsrAndThenOr32 (
        UINT32                    Index,
        UINT32                    AndData,
        UINT32                    OrData
  );
























UINT32
__cdecl
AsmMsrBitFieldRead32 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit
  );



























UINT32
__cdecl
AsmMsrBitFieldWrite32 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    Value
  );





























UINT32
__cdecl
AsmMsrBitFieldOr32 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    OrData
  );





























UINT32
__cdecl
AsmMsrBitFieldAnd32 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    AndData
  );

































UINT32
__cdecl
AsmMsrBitFieldAndThenOr32 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT32                    AndData,
        UINT32                    OrData
  );
















UINT64
__cdecl
AsmReadMsr64 (
        UINT32                    Index
  );



















UINT64
__cdecl
AsmWriteMsr64 (
        UINT32                    Index,
        UINT64                    Value
  );




















UINT64
__cdecl
AsmMsrOr64 (
        UINT32                    Index,
        UINT64                    OrData
  );




















UINT64
__cdecl
AsmMsrAnd64 (
        UINT32                    Index,
        UINT64                    AndData
  );























UINT64
__cdecl
AsmMsrAndThenOr64 (
        UINT32                    Index,
        UINT64                    AndData,
        UINT64                    OrData
  );
























UINT64
__cdecl
AsmMsrBitFieldRead64 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit
  );


























UINT64
__cdecl
AsmMsrBitFieldWrite64 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    Value
  );





























UINT64
__cdecl
AsmMsrBitFieldOr64 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    OrData
  );





























UINT64
__cdecl
AsmMsrBitFieldAnd64 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    AndData
  );
































UINT64
__cdecl
AsmMsrBitFieldAndThenOr64 (
        UINT32                    Index,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINT64                    AndData,
        UINT64                    OrData
  );












UINTN
__cdecl
AsmReadEflags (
  void
  );












UINTN
__cdecl
AsmReadCr0 (
  void
  );












UINTN
__cdecl
AsmReadCr2 (
  void
  );












UINTN
__cdecl
AsmReadCr3 (
  void
  );












UINTN
__cdecl
AsmReadCr4 (
  void
  );













UINTN
__cdecl
AsmWriteCr0 (
  UINTN  Cr0
  );













UINTN
__cdecl
AsmWriteCr2 (
  UINTN  Cr2
  );













UINTN
__cdecl
AsmWriteCr3 (
  UINTN  Cr3
  );













UINTN
__cdecl
AsmWriteCr4 (
  UINTN  Cr4
  );












UINTN
__cdecl
AsmReadDr0 (
  void
  );












UINTN
__cdecl
AsmReadDr1 (
  void
  );












UINTN
__cdecl
AsmReadDr2 (
  void
  );












UINTN
__cdecl
AsmReadDr3 (
  void
  );












UINTN
__cdecl
AsmReadDr4 (
  void
  );












UINTN
__cdecl
AsmReadDr5 (
  void
  );












UINTN
__cdecl
AsmReadDr6 (
  void
  );












UINTN
__cdecl
AsmReadDr7 (
  void
  );













UINTN
__cdecl
AsmWriteDr0 (
  UINTN  Dr0
  );













UINTN
__cdecl
AsmWriteDr1 (
  UINTN  Dr1
  );













UINTN
__cdecl
AsmWriteDr2 (
  UINTN  Dr2
  );













UINTN
__cdecl
AsmWriteDr3 (
  UINTN  Dr3
  );













UINTN
__cdecl
AsmWriteDr4 (
  UINTN  Dr4
  );













UINTN
__cdecl
AsmWriteDr5 (
  UINTN  Dr5
  );













UINTN
__cdecl
AsmWriteDr6 (
  UINTN  Dr6
  );













UINTN
__cdecl
AsmWriteDr7 (
  UINTN  Dr7
  );











UINT16
__cdecl
AsmReadCs (
  void
  );











UINT16
__cdecl
AsmReadDs (
  void
  );











UINT16
__cdecl
AsmReadEs (
  void
  );











UINT16
__cdecl
AsmReadFs (
  void
  );











UINT16
__cdecl
AsmReadGs (
  void
  );











UINT16
__cdecl
AsmReadSs (
  void
  );











UINT16
__cdecl
AsmReadTr (
  void
  );













void
__cdecl
AsmReadGdtr (
       IA32_DESCRIPTOR           *Gdtr
  );













void
__cdecl
AsmWriteGdtr (
        const IA32_DESCRIPTOR     *Gdtr
  );













void
__cdecl
AsmReadIdtr (
       IA32_DESCRIPTOR           *Idtr
  );













void
__cdecl
AsmWriteIdtr (
        const IA32_DESCRIPTOR     *Idtr
  );











UINT16
__cdecl
AsmReadLdtr (
  void
  );











void
__cdecl
AsmWriteLdtr (
        UINT16                    Ldtr
  );















void
__cdecl
AsmFxSave (
       IA32_FX_BUFFER            *Buffer
  );
















void
__cdecl
AsmFxRestore (
        const IA32_FX_BUFFER      *Buffer
  );











UINT64
__cdecl
AsmReadMm0 (
  void
  );











UINT64
__cdecl
AsmReadMm1 (
  void
  );











UINT64
__cdecl
AsmReadMm2 (
  void
  );











UINT64
__cdecl
AsmReadMm3 (
  void
  );











UINT64
__cdecl
AsmReadMm4 (
  void
  );











UINT64
__cdecl
AsmReadMm5 (
  void
  );











UINT64
__cdecl
AsmReadMm6 (
  void
  );











UINT64
__cdecl
AsmReadMm7 (
  void
  );











void
__cdecl
AsmWriteMm0 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm1 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm2 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm3 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm4 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm5 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm6 (
        UINT64                    Value
  );











void
__cdecl
AsmWriteMm7 (
        UINT64                    Value
  );











UINT64
__cdecl
AsmReadTsc (
  void
  );













UINT64
__cdecl
AsmReadPmc (
        UINT32                    Index
  );


















UINTN
__cdecl
AsmMonitor (
        UINTN                     Eax,
        UINTN                     Ecx,
        UINTN                     Edx
  );
















UINTN
__cdecl
AsmMwait (
        UINTN                     Eax,
        UINTN                     Ecx
  );









void
__cdecl
AsmWbinvd (
  void
  );









void
__cdecl
AsmInvd (
  void
  );

















void *
__cdecl
AsmFlushCacheLine (
        void                      *LinearAddress
  );







































void
__cdecl
AsmEnablePaging32 (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,  
        void                      *Context2,  
        void                      *NewStack
  );




































void
__cdecl
AsmDisablePaging32 (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,  
        void                      *Context2,  
        void                      *NewStack
  );


































void
__cdecl
AsmEnablePaging64 (
        UINT16                    Cs,
        UINT64                    EntryPoint,
        UINT64                    Context1,  
        UINT64                    Context2,  
        UINT64                    NewStack
  );
































void
__cdecl
AsmDisablePaging64 (
        UINT16                    Cs,
        UINT32                    EntryPoint,
        UINT32                    Context1,  
        UINT32                    Context2,  
        UINT32                    NewStack
  );



























void
__cdecl
AsmGetThunk16Properties (
       UINT32                    *RealModeBufferSize,
       UINT32                    *ExtraStackSize
  );
















void
__cdecl
AsmPrepareThunk16 (
     THUNK_CONTEXT             *ThunkContext
  );























































void
__cdecl
AsmThunk16 (
     THUNK_CONTEXT             *ThunkContext
  );






















void
__cdecl
AsmPrepareAndThunk16 (
     THUNK_CONTEXT             *ThunkContext
  );












BOOLEAN
__cdecl
AsmRdRand16 (
       UINT16                    *Rand
  );












BOOLEAN
__cdecl
AsmRdRand32 (
       UINT32                    *Rand
  );












BOOLEAN
__cdecl
AsmRdRand64  (
       UINT64                    *Rand
  );

#line 7841 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"
#line 7842 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"



#line 20 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseMemoryLib.h"






































void *
__cdecl
CopyMem (
   void       *DestinationBuffer,
   const void  *SourceBuffer,
   UINTN       Length
  );















void *
__cdecl
SetMem (
   void  *Buffer,
   UINTN  Length,
   UINT8  Value
  );




















void *
__cdecl
SetMem16 (
   void   *Buffer,
   UINTN   Length,
   UINT16  Value
  );




















void *
__cdecl
SetMem32 (
   void   *Buffer,
   UINTN   Length,
   UINT32  Value
  );




















void *
__cdecl
SetMem64 (
   void   *Buffer,
   UINTN   Length,
   UINT64  Value
  );




















void *
__cdecl
SetMemN (
   void  *Buffer,
   UINTN  Length,
   UINTN  Value
  );















void *
__cdecl
ZeroMem (
   void  *Buffer,
   UINTN  Length
  );























INTN
__cdecl
CompareMem (
   const void  *DestinationBuffer,
   const void  *SourceBuffer,
   UINTN       Length
  );




















void *
__cdecl
ScanMem8 (
   const void  *Buffer,
   UINTN       Length,
   UINT8       Value
  );






















void *
__cdecl
ScanMem16 (
   const void  *Buffer,
   UINTN       Length,
   UINT16      Value
  );






















void *
__cdecl
ScanMem32 (
   const void  *Buffer,
   UINTN       Length,
   UINT32      Value
  );






















void *
__cdecl
ScanMem64 (
   const void  *Buffer,
   UINTN       Length,
   UINT64      Value
  );






















void *
__cdecl
ScanMemN (
   const void  *Buffer,
   UINTN       Length,
   UINTN       Value
  );
  















GUID *
__cdecl
CopyGuid (
   GUID       *DestinationGuid,
   const GUID  *SourceGuid
  );

















BOOLEAN
__cdecl
CompareGuid (
   const GUID  *Guid1,
   const GUID  *Guid2
  );























void *
__cdecl
ScanGuid (
   const void  *Buffer,
   UINTN       Length,
   const GUID  *Guid
  );















BOOLEAN
__cdecl
IsZeroGuid (
   const GUID  *Guid
  );

















BOOLEAN
__cdecl
IsZeroBuffer (
   const void  *Buffer,
   UINTN       Length
  );

#line 490 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseMemoryLib.h"
#line 21 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"























































                                    






































void
__cdecl
DebugPrint (
    UINTN        ErrorLevel,
    const CHAR8  *Format,
  ...
  );























void
__cdecl
DebugAssert (
   const CHAR8  *FileName,
   UINTN        LineNumber,
   const CHAR8  *Description
  );

















void *
__cdecl
DebugClearMemory (
   void  *Buffer,
   UINTN  Length
  );












BOOLEAN
__cdecl
DebugAssertEnabled (
  void
  );












BOOLEAN
__cdecl
DebugPrintEnabled (
  void
  );












BOOLEAN
__cdecl
DebugCodeEnabled (
  void
  );












BOOLEAN
__cdecl
DebugClearMemoryEnabled (
  void
  );










BOOLEAN
__cdecl
DebugPrintLevelEnabled (
    const UINTN        ErrorLevel
  );



























  





  


#line 275 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"














  










#line 301 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"














  







#line 324 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"














  










#line 350 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"
























  

















#line 393 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"




































































































  






#line 501 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"
    
#line 503 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/DebugLib.h"
#line 22 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 23 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"


















UINT64
__cdecl
InternalMathLShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );














UINT64
__cdecl
InternalMathRShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );














UINT64
__cdecl
InternalMathARShiftU64 (
        UINT64                    Operand,
        UINTN                     Count
  );















UINT64
__cdecl
InternalMathLRotU64 (
        UINT64                    Operand,
        UINTN                     Count
  );















UINT64
__cdecl
InternalMathRRotU64 (
        UINT64                    Operand,
        UINTN                     Count
  );













UINT64
__cdecl
InternalMathSwapBytes64 (
        UINT64                    Operand
  );















UINT64
__cdecl
InternalMathMultU64x32 (
        UINT64                    Multiplicand,
        UINT32                    Multiplier
  );















UINT64
__cdecl
InternalMathMultU64x64 (
        UINT64                    Multiplicand,
        UINT64                    Multiplier
  );















UINT64
__cdecl
InternalMathDivU64x32 (
        UINT64                    Dividend,
        UINT32                    Divisor
  );















UINT32
__cdecl
InternalMathModU64x32 (
        UINT64                    Dividend,
        UINT32                    Divisor
  );


















UINT64
__cdecl
InternalMathDivRemU64x32 (
        UINT64                    Dividend,
        UINT32                    Divisor,
       UINT32                    *Remainder 
  );


















UINT64
__cdecl
InternalMathDivRemU64x64 (
        UINT64                    Dividend,
        UINT64                    Divisor,
       UINT64                    *Remainder 
  );


















INT64
__cdecl
InternalMathDivRemS64x64 (
        INT64                     Dividend,
        INT64                     Divisor,
       INT64                     *Remainder  
  );

























void
__cdecl
InternalSwitchStack (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,   
        void                      *Context2,   
        void                      *NewStack,
        VA_LIST                   Marker
  );























BOOLEAN
__cdecl
IsNodeInList (
        const LIST_ENTRY      *List,
        const LIST_ENTRY      *Node
  );













UINTN
__cdecl
BitFieldReadUint (
        UINTN                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit
  );


















UINTN
__cdecl
BitFieldOrUint (
        UINTN                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINTN                     OrData
  );


















UINTN
__cdecl
BitFieldAndUint (
        UINTN                     Operand,
        UINTN                     StartBit,
        UINTN                     EndBit,
        UINTN                     AndData
  );













void
__cdecl
InternalAssertJumpBuffer (
        BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer
  );













void
__cdecl
InternalLongJump (
        BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer,
        UINTN                     Value
  );
















void
__cdecl
InternalX86ReadGdtr (
       IA32_DESCRIPTOR           *Gdtr
  );










void
__cdecl
InternalX86WriteGdtr (
        const IA32_DESCRIPTOR     *Gdtr
  );










void
__cdecl
InternalX86ReadIdtr (
       IA32_DESCRIPTOR           *Idtr
  );










void
__cdecl
InternalX86WriteIdtr (
        const IA32_DESCRIPTOR     *Idtr
  );











void
__cdecl
InternalX86FxSave (
       IA32_FX_BUFFER            *Buffer
  );











void
__cdecl
InternalX86FxRestore (
        const IA32_FX_BUFFER      *Buffer
  );


































void
__cdecl
InternalX86EnablePaging32 (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,  
        void                      *Context2,  
        void                      *NewStack
  );































void
__cdecl
InternalX86DisablePaging32 (
        SWITCH_STACK_ENTRY_POINT  EntryPoint,
        void                      *Context1,  
        void                      *Context2,  
        void                      *NewStack
  );




























void
__cdecl
InternalX86EnablePaging64 (
        UINT16                    Cs,
        UINT64                    EntryPoint,
        UINT64                    Context1,  
        UINT64                    Context2,  
        UINT64                    NewStack
  );



























void
__cdecl
InternalX86DisablePaging64 (
        UINT16                    Cs,
        UINT32                    EntryPoint,
        UINT32                    Context1,  
        UINT32                    Context2,  
        UINT32                    NewStack
  );



























































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1654 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"

#line 1656 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\BaseLibInternals.h"

#line 3 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Library\\BaseLib\\X64\\Thunk16.nasm"

;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2013, Intel Corporation. All rights reserved.<BR>
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
;   Thunk.asm
;
; Abstract:
;
;   Real mode thunk
;
;------------------------------------------------------------------------------

global m16Size
global mThunk16Attr
global m16Gdt
global m16GdtrBase
global mTransition
global m16Start

struc IA32_REGS

  ._EDI:       resd      1
  ._ESI:       resd      1
  ._EBP:       resd      1
  ._ESP:       resd      1
  ._EBX:       resd      1
  ._EDX:       resd      1
  ._ECX:       resd      1
  ._EAX:       resd      1
  ._DS:        resw      1
  ._ES:        resw      1
  ._FS:        resw      1
  ._GS:        resw      1
  ._EFLAGS:    resq      1
  ._EIP:       resd      1
  ._CS:        resw      1
  ._SS:        resw      1
  .size:

endstruc

SECTION .data

;
; These are global constant to convey information to C code.
;
m16Size         DW      InternalAsmThunk16 - m16Start
mThunk16Attr    DW      _BackFromUserCode.ThunkAttrEnd - 4 - m16Start
m16Gdt          DW      _NullSeg - m16Start
m16GdtrBase     DW      _16GdtrBase - m16Start
mTransition     DW      _EntryPoint - m16Start

SECTION .text

m16Start:

SavedGdt:
            dw  0
            dq  0

;------------------------------------------------------------------------------
; _BackFromUserCode() takes control in real mode after 'retf' has been executed
; by user code. It will be shadowed to somewhere in memory below 1MB.
;------------------------------------------------------------------------------
_BackFromUserCode:
    ;
    ; The order of saved registers on the stack matches the order they appears
    ; in IA32_REGS structure. This facilitates wrapper function to extract them
    ; into that structure.
    ;
BITS    16
    push    ss
    push    cs
    ;
    ; Note: We can't use o32 on the next instruction because of a bug
    ; in NASM 2.09.04 through 2.10rc1.
    ;
    call    dword .Base                 ; push eip
.Base:
    push    dword 0                     ; reserved high order 32 bits of EFlags
    pushfd
    cli                                 ; disable interrupts
    push    gs
    push    fs
    push    es
    push    ds
    pushad
    mov     edx, strict dword 0
.ThunkAttrEnd:
    test    dl, 0x00000002
    jz      .1
    mov     ax, 2401h
    int     15h
    cli                                 ; disable interrupts
    jnc     .2
.1:
    test    dl, 0x00000004
    jz      .2
    in      al, 92h
    or      al, 2
    out     92h, al                     ; deactivate A20M#
.2:
    xor     eax, eax
    mov     ax, ss
    lea     ebp, [esp + IA32_REGS.size]
    mov     [bp - IA32_REGS.size + IA32_REGS._ESP], ebp
    mov     ebx, [bp - IA32_REGS.size + IA32_REGS._EIP]
    shl     eax, 4                      ; shl eax, 4
    add     ebp, eax                    ; add ebp, eax
    mov     eax, cs
    shl     eax, 4
    lea     eax, [eax + ebx + (.X64JmpEnd - .Base)]
    mov     [cs:bx + (.X64JmpEnd - 6 - .Base)], eax
    mov     eax, strict dword 0
.SavedCr4End:
    mov     cr4, eax
o32 lgdt [cs:bx + (SavedGdt - .Base)]
    mov     ecx, 0c0000080h
    rdmsr
    or      ah, 1
    wrmsr
    mov     eax, strict dword 0
.SavedCr0End:
    mov     cr0, eax
    jmp     0:strict dword 0
.X64JmpEnd:
BITS    64
    nop
    mov rsp, strict qword 0
.SavedSpEnd:
    nop
    ret

_EntryPoint:
        DD      _ToUserCode - m16Start
        DW      CODE16
_16Gdtr:
        DW      GDT_SIZE - 1
_16GdtrBase:
        DQ      0
_16Idtr:
        DW      (1 << 10) - 1
        DD      0

;------------------------------------------------------------------------------
; _ToUserCode() takes control in real mode before passing control to user code.
; It will be shadowed to somewhere in memory below 1MB.
;------------------------------------------------------------------------------
_ToUserCode:
BITS    16
    mov     ss, dx                      ; set new segment selectors
    mov     ds, dx
    mov     es, dx
    mov     fs, dx
    mov     gs, dx
    mov     ecx, 0c0000080h
    mov     cr0, eax                    ; real mode starts at next instruction
    rdmsr
    and     ah, ~1
    wrmsr
    mov     cr4, ebp
    mov     ss, si                      ; set up 16-bit stack segment
    mov     esp, ebx                    ; set up 16-bit stack pointer
    call    dword .Base                 ; push eip
.Base:
    pop     ebp                         ; ebp <- address of .Base
    push    word [dword esp + IA32_REGS.size + 2]
    lea     ax, [bp + (.RealMode - .Base)]
    push    ax
    retf                                ; execution begins at next instruction
.RealMode:

o32 lidt    [cs:bp + (_16Idtr - .Base)]

    popad
    pop     ds
    pop     es
    pop     fs
    pop     gs
    popfd
    lea     esp, [esp + 4]        ; skip high order 32 bits of EFlags

o32 retf                                ; transfer control to user code

ALIGN   8

CODE16  equ _16Code - $
DATA16  equ _16Data - $
DATA32  equ _32Data - $

_NullSeg    DQ      0
_16Code:
            DW      -1
            DW      0
            DB      0
            DB      9bh
            DB      8fh                 ; 16-bit segment, 4GB limit
            DB      0
_16Data:
            DW      -1
            DW      0
            DB      0
            DB      93h
            DB      8fh                 ; 16-bit segment, 4GB limit
            DB      0
_32Data:
            DW      -1
            DW      0
            DB      0
            DB      93h
            DB      0cfh                ; 16-bit segment, 4GB limit
            DB      0

GDT_SIZE equ $ - _NullSeg

;------------------------------------------------------------------------------
; IA32_REGISTER_SET *
; __cdecl
; InternalAsmThunk16 (
;         IA32_REGISTER_SET         *RegisterSet,
;      void                      *Transition
;   );
;------------------------------------------------------------------------------
global InternalAsmThunk16
InternalAsmThunk16:
BITS    64
    push    rbp
    push    rbx
    push    rsi
    push    rdi
    
    mov     ebx, ds
    push    rbx          ; Save ds segment register on the stack
    mov     ebx, es
    push    rbx          ; Save es segment register on the stack
    mov     ebx, ss
    push    rbx          ; Save ss segment register on the stack
    
    push    fs
    push    gs
    mov     rsi, rcx
    movzx   r8d, word [rsi + IA32_REGS._SS]
    mov     edi, [rsi + IA32_REGS._ESP]
    lea     rdi, [edi - (IA32_REGS.size + 4)]
    imul    eax, r8d, 16                ; eax <- r8d(stack segment) * 16
    mov     ebx, edi                    ; ebx <- stack for 16-bit code
    push    IA32_REGS.size / 4
    add     edi, eax                    ; edi <- linear address of 16-bit stack
    pop     rcx
    rep     movsd                       ; copy RegSet
    lea     ecx, [rdx + (_BackFromUserCode.SavedCr4End - m16Start)]
    mov     eax, edx                    ; eax <- transition code address
    and     edx, 0fh
    shl     eax, 12                     ; segment address in high order 16 bits
    lea     ax, [rdx + (_BackFromUserCode - m16Start)]  ; offset address
    stosd                               ; [edi] <- return address of user code
  
    sgdt    [rsp + 60h]       ; save GDT stack in argument space
    movzx   r10, word [rsp + 60h]   ; r10 <- GDT limit 
    lea     r11, [rcx + (InternalAsmThunk16 - _BackFromUserCode.SavedCr4End) + 0xf]
    and     r11, ~0xf            ; r11 <- 16-byte aligned shadowed GDT table in real mode buffer
    
    mov     [rcx + (SavedGdt - _BackFromUserCode.SavedCr4End)], r10w      ; save the limit of shadowed GDT table
    mov     [rcx + (SavedGdt - _BackFromUserCode.SavedCr4End) + 2], r11  ; save the base address of shadowed GDT table
    
    mov     rsi, [rsp + 62h]  ; rsi <- the original GDT base address
    xchg    rcx, r10                    ; save rcx to r10 and initialize rcx to be the limit of GDT table
    inc     rcx                         ; rcx <- the size of memory to copy
    xchg    rdi, r11                    ; save rdi to r11 and initialize rdi to the base address of shadowed GDT table
    rep     movsb                       ; perform memory copy to shadow GDT table
    mov     rcx, r10                    ; restore the orignal rcx before memory copy
    mov     rdi, r11                    ; restore the original rdi before memory copy
    
    sidt    [rsp + 50h]       ; save IDT stack in argument space
    mov     rax, cr0
    mov     [rcx + (_BackFromUserCode.SavedCr0End - 4 - _BackFromUserCode.SavedCr4End)], eax
    and     eax, 7ffffffeh              ; clear PE, PG bits
    mov     rbp, cr4
    mov     [rcx - 4], ebp              ; save CR4 in _BackFromUserCode.SavedCr4End - 4
    and     ebp, ~30h                ; clear PAE, PSE bits
    mov     esi, r8d                    ; esi <- 16-bit stack segment
    push    DATA32
    pop     rdx                         ; rdx <- 32-bit data segment selector
    lgdt    [rcx + (_16Gdtr - _BackFromUserCode.SavedCr4End)]
    mov     ss, edx
    pushfq
    lea     edx, [rdx + DATA16 - DATA32]
    lea     r8, [REL .RetFromRealMode]
    push    r8
    mov     r8d, cs
    mov     [rcx + (_BackFromUserCode.X64JmpEnd - 2 - _BackFromUserCode.SavedCr4End)], r8w
    mov     [rcx + (_BackFromUserCode.SavedSpEnd - 8 - _BackFromUserCode.SavedCr4End)], rsp
    jmp     dword far [rcx + (_EntryPoint - _BackFromUserCode.SavedCr4End)]
.RetFromRealMode:
    popfq
    lgdt    [rsp + 60h]       ; restore protected mode GDTR
    lidt    [rsp + 50h]       ; restore protected mode IDTR
    lea     eax, [rbp - IA32_REGS.size]
    pop     gs
    pop     fs
    pop     rbx
    mov     ss, ebx
    pop     rbx
    mov     es, ebx
    pop     rbx
    mov     ds, ebx

    pop     rdi
    pop     rsi
    pop     rbx
    pop     rbp

    ret
