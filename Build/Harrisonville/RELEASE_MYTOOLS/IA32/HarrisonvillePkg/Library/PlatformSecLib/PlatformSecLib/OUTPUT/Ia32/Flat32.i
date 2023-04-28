#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\Ia32\\Flat32.asm"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib\\DEBUG\\AutoGen.h"















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


#line 17 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\PiPei.h"






















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiBaseType.h"



















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Base.h"








































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiBaseType.h"








typedef GUID                      EFI_GUID;



typedef RETURN_STATUS             EFI_STATUS;



typedef void                      *EFI_HANDLE;



typedef void                      *EFI_EVENT;



typedef UINTN                     EFI_TPL;



typedef UINT64                    EFI_LBA;




typedef UINT64                    EFI_PHYSICAL_ADDRESS;




typedef UINT64                    EFI_VIRTUAL_ADDRESS;












typedef struct {
  UINT16  Year;
  UINT8   Month;
  UINT8   Day;
  UINT8   Hour;
  UINT8   Minute;
  UINT8   Second;
  UINT8   Pad1;
  UINT32  Nanosecond;
  INT16   TimeZone;
  UINT8   Daylight;
  UINT8   Pad2;
} EFI_TIME;





typedef struct {
  UINT8 Addr[4];
} EFI_IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} EFI_IPv6_ADDRESS;




typedef struct {
  UINT8 Addr[32];
} EFI_MAC_ADDRESS;





typedef union {
  UINT32            Addr[4];
  EFI_IPv4_ADDRESS  v4;
  EFI_IPv6_ADDRESS  v6;
} EFI_IP_ADDRESS;
























































































































































































#line 302 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiBaseType.h"

#line 304 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiBaseType.h"
#line 24 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\PiPei.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"





















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiMultiPhase.h"

















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Guid/WinCertificate.h"





























typedef struct {
  
  
  
  
  UINT32  dwLength;
  
  
  
  
  UINT16  wRevision;
  
  
  
  
  
  UINT16  wCertificateType;
  
  
  
  
  
  
} WIN_CERTIFICATE;










typedef struct {
  EFI_GUID  HashType;
  UINT8     PublicKey[256];
  UINT8     Signature[256];
} EFI_CERT_BLOCK_RSA_2048_SHA256;





typedef struct {
  
  
  
  
  WIN_CERTIFICATE   Hdr;
  
  
  
  
  EFI_GUID          CertType;
  
  
  
  
  
  
  UINT8            CertData[1];
} WIN_CERTIFICATE_UEFI_GUID;










typedef struct {
  
  
  
  
  WIN_CERTIFICATE Hdr;
  
  
  
  
  EFI_GUID        HashAlgorithm;
  
  
  
  
  
  
  
  
  
  
} WIN_CERTIFICATE_EFI_PKCS1_15;

extern EFI_GUID gEfiCertTypeRsa2048Sha256Guid;

#line 129 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Guid/WinCertificate.h"
#line 19 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiMultiPhase.h"



typedef enum {
  
  
  
  EfiReservedMemoryType,
  
  
  
  
  EfiLoaderCode,
  
  
  
  
  EfiLoaderData,
  
  
  
  EfiBootServicesCode,
  
  
  
  
  EfiBootServicesData,
  
  
  
  EfiRuntimeServicesCode,
  
  
  
  
  EfiRuntimeServicesData,
  
  
  
  EfiConventionalMemory,
  
  
  
  EfiUnusableMemory,
  
  
  
  EfiACPIReclaimMemory,
  
  
  
  EfiACPIMemoryNVS,
  
  
  
  
  EfiMemoryMappedIO,
  
  
  
  
  EfiMemoryMappedIOPortSpace,
  
  
  
  EfiPalCode,
  
  
  
  
  EfiPersistentMemory,
  EfiMaxMemoryType
} EFI_MEMORY_TYPE;




typedef enum {
  
  
  
  
  
  
  EfiResetCold,
  
  
  
  
  
  EfiResetWarm,
  
  
  
  
  
  EfiResetShutdown,
  
  
  
  
  
  
  
  EfiResetPlatformSpecific
} EFI_RESET_TYPE;




typedef struct {
  
  
  
  
  
  UINT64  Signature;
  
  
  
  
  
  
  UINT32  Revision;
  
  
  
  UINT32  HeaderSize;
  
  
  
  
  UINT32  CRC32;
  
  
  
  UINT32  Reserved;
} EFI_TABLE_HEADER;



































typedef struct {
  
  
  
  
  
  
  UINT64                      MonotonicCount;
  
  
  
  
  
  
  
  
  WIN_CERTIFICATE_UEFI_GUID   AuthInfo;
} EFI_VARIABLE_AUTHENTICATION;









typedef struct {
  
  
  
  
  EFI_TIME                    TimeStamp;
  
  
  
  WIN_CERTIFICATE_UEFI_GUID   AuthInfo;
 } EFI_VARIABLE_AUTHENTICATION_2;

#line 232 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Uefi/UefiMultiPhase.h"
#line 23 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"




















#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiFirmwareVolume.h"























typedef UINT32  EFI_FV_FILE_ATTRIBUTES;











typedef UINT32  EFI_FVB_ATTRIBUTES_2;






















































typedef struct {
  
  
  
  UINT32 NumBlocks;
  
  
  
  UINT32 Length;
} EFI_FV_BLOCK_MAP_ENTRY;




typedef struct {
  
  
  
  
  UINT8                     ZeroVector[16];
  
  
  
  EFI_GUID                  FileSystemGuid;
  
  
  
  UINT64                    FvLength;
  
  
  
  UINT32                    Signature;
  
  
  
  EFI_FVB_ATTRIBUTES_2      Attributes;
  
  
  
  UINT16                    HeaderLength;
  
  
  
  UINT16                    Checksum;
  
  
  
  
  UINT16                    ExtHeaderOffset;
  
  
  
  UINT8                     Reserved[1];
  
  
  
  
  UINT8                     Revision;
  
  
  
  
  EFI_FV_BLOCK_MAP_ENTRY    BlockMap[1];
} EFI_FIRMWARE_VOLUME_HEADER;











typedef struct {
  
  
  
  EFI_GUID  FvName;
  
  
  
  UINT32    ExtHeaderSize;
} EFI_FIRMWARE_VOLUME_EXT_HEADER;




typedef struct {
  
  
  
  UINT16    ExtEntrySize;
  
  
  
  UINT16    ExtEntryType;
} EFI_FIRMWARE_VOLUME_EXT_ENTRY;





typedef struct {
  
  
  
  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;
  
  
  
  
  UINT32    TypeMask;
  
  
  
  
  
} EFI_FIRMWARE_VOLUME_EXT_ENTRY_OEM_TYPE;







typedef struct {
  
  
  
  EFI_FIRMWARE_VOLUME_EXT_ENTRY     Hdr;
  
  
  
  EFI_GUID                          FormatType;
  
  
  
  
  
} EFI_FIRMWARE_VOLUME_EXT_ENTRY_GUID_TYPE;

#line 235 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiFirmwareVolume.h"
#line 22 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiFirmwareFile.h"





















#pragma pack(1)



typedef union {
  struct {
    
    
    
    
    
    UINT8   Header;
    
    
    
    
    
    
    
    
    
    UINT8   File;
  } Checksum;
  
  
  
  UINT16    Checksum16;
} EFI_FFS_INTEGRITY_CHECK;







typedef UINT8 EFI_FV_FILETYPE;
typedef UINT8 EFI_FFS_FILE_ATTRIBUTES;
typedef UINT8 EFI_FFS_FILE_STATE;
















































typedef struct {
  
  
  
  EFI_GUID                Name;
  
  
  
  EFI_FFS_INTEGRITY_CHECK IntegrityCheck;
  
  
  
  EFI_FV_FILETYPE         Type;
  
  
  
  EFI_FFS_FILE_ATTRIBUTES Attributes;
  
  
  
  UINT8                   Size[3];
  
  
  
  EFI_FFS_FILE_STATE      State;
} EFI_FFS_FILE_HEADER;

typedef struct {
  
  
  
  
  
  EFI_GUID                  Name;

  
  
  
  EFI_FFS_INTEGRITY_CHECK   IntegrityCheck;

  
  
  
  EFI_FV_FILETYPE           Type;

  
  
  
  EFI_FFS_FILE_ATTRIBUTES   Attributes;

  
  
  
  
  
  
  
  UINT8                     Size[3];

  
  
  
  EFI_FFS_FILE_STATE        State;

  
  
  
  
  UINT64                    ExtendedSize;
} EFI_FFS_FILE_HEADER2;










typedef UINT8 EFI_SECTION_TYPE;



































typedef struct {
  
  
  
  
  UINT8             Size[3];
  EFI_SECTION_TYPE  Type;
  
  
  
} EFI_COMMON_SECTION_HEADER;

typedef struct {
  
  
  
  
  UINT8             Size[3];

  EFI_SECTION_TYPE  Type;

  
  
  
  
  UINT32            ExtendedSize;
} EFI_COMMON_SECTION_HEADER2;





typedef EFI_COMMON_SECTION_HEADER  EFI_COMPATIBILITY16_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_COMPATIBILITY16_SECTION2;










typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER   CommonHeader;
  
  
  
  UINT32                      UncompressedLength;
  
  
  
  UINT8                       CompressionType;
} EFI_COMPRESSION_SECTION;

typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER2    CommonHeader;
  
  
  
  UINT32                        UncompressedLength;
  
  
  
  UINT8                         CompressionType;
} EFI_COMPRESSION_SECTION2;










typedef EFI_COMMON_SECTION_HEADER   EFI_DISPOSABLE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_DISPOSABLE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_DXE_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_DXE_DEPEX_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_FIRMWARE_VOLUME_IMAGE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_FIRMWARE_VOLUME_IMAGE_SECTION2;




typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER   CommonHeader;
  
  
  
  EFI_GUID                    SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION;

typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER2    CommonHeader;
  
  
  
  EFI_GUID                      SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION2;









typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER   CommonHeader;
  
  
  
  EFI_GUID                    SectionDefinitionGuid;
  
  
  
  UINT16                      DataOffset;
  
  
  
  UINT16                      Attributes;
} EFI_GUID_DEFINED_SECTION;

typedef struct {
  
  
  
  EFI_COMMON_SECTION_HEADER2    CommonHeader;
  
  
  
  EFI_GUID                      SectionDefinitionGuid;
  
  
  
  UINT16                        DataOffset;
  
  
  
  UINT16                        Attributes;
} EFI_GUID_DEFINED_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_PE32_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_PE32_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_PEI_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_PEI_DEPEX_SECTION2;










typedef EFI_COMMON_SECTION_HEADER   EFI_PIC_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_PIC_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_TE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_TE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER   EFI_RAW_SECTION;
typedef EFI_COMMON_SECTION_HEADER2  EFI_RAW_SECTION2;









typedef EFI_COMMON_SECTION_HEADER EFI_SMM_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_SMM_DEPEX_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER   CommonHeader;

  
  
  
  CHAR16                      FileNameString[1];
} EFI_USER_INTERFACE_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2    CommonHeader;
  CHAR16                        FileNameString[1];
} EFI_USER_INTERFACE_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER   CommonHeader;
  UINT16                      BuildNumber;

  
  
  
  CHAR16                      VersionString[1];
} EFI_VERSION_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2    CommonHeader;
  
  
  
  
  UINT16                        BuildNumber;
  CHAR16                        VersionString[1];
} EFI_VERSION_SECTION2;










#pragma pack()

#line 494 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiFirmwareFile.h"

#line 23 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiBootMode.h"























typedef UINT32  EFI_BOOT_MODE;

















#line 43 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiBootMode.h"
#line 24 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiHob.h"








































typedef struct {
  
  
  
  UINT16    HobType;
  
  
  
  UINT16    HobLength;
  
  
  
  UINT32    Reserved;
} EFI_HOB_GENERIC_HEADER;











typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER  Header;
  
  
  
  
  
  UINT32                  Version;
  
  
  
  EFI_BOOT_MODE           BootMode;
  
  
  
  
  EFI_PHYSICAL_ADDRESS    EfiMemoryTop;
  
  
  
  EFI_PHYSICAL_ADDRESS    EfiMemoryBottom;
  
  
  
  
  EFI_PHYSICAL_ADDRESS    EfiFreeMemoryTop;
  
  
  
  EFI_PHYSICAL_ADDRESS    EfiFreeMemoryBottom;
  
  
  
  EFI_PHYSICAL_ADDRESS    EfiEndOfHobList;
} EFI_HOB_HANDOFF_INFO_TABLE;






typedef struct {
  
  
  
  
  
  
  
  EFI_GUID              Name;

  
  
  
  
  
  EFI_PHYSICAL_ADDRESS  MemoryBaseAddress;

  
  
  
  UINT64                MemoryLength;

  
  
  
  
  
  EFI_MEMORY_TYPE       MemoryType;

  
  
  
  UINT8                 Reserved[4];
} EFI_HOB_MEMORY_ALLOCATION_HEADER;






typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER            Header;
  
  
  
  
  EFI_HOB_MEMORY_ALLOCATION_HEADER  AllocDescriptor;
  
  
  
  
} EFI_HOB_MEMORY_ALLOCATION;







typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER            Header;
  
  
  
  
  EFI_HOB_MEMORY_ALLOCATION_HEADER  AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_STACK;







typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER            Header;
  
  
  
  
  EFI_HOB_MEMORY_ALLOCATION_HEADER  AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_BSP_STORE;




typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER            Header;
  
  
  
  
  EFI_HOB_MEMORY_ALLOCATION_HEADER  MemoryAllocationHeader;
  
  
  
  
  EFI_GUID                          ModuleName;
  
  
  
  
  EFI_PHYSICAL_ADDRESS              EntryPoint;
} EFI_HOB_MEMORY_ALLOCATION_MODULE;




typedef UINT32 EFI_RESOURCE_TYPE;
















typedef UINT32 EFI_RESOURCE_ATTRIBUTE_TYPE;































































typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER      Header;
  
  
  
  
  EFI_GUID                    Owner;
  
  
  
  EFI_RESOURCE_TYPE           ResourceType;
  
  
  
  EFI_RESOURCE_ATTRIBUTE_TYPE ResourceAttribute;
  
  
  
  EFI_PHYSICAL_ADDRESS        PhysicalStart;
  
  
  
  UINT64                      ResourceLength;
} EFI_HOB_RESOURCE_DESCRIPTOR;





typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER      Header;
  
  
  
  EFI_GUID                    Name;
  
  
  
} EFI_HOB_GUID_TYPE;




typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER Header;
  
  
  
  EFI_PHYSICAL_ADDRESS   BaseAddress;
  
  
  
  UINT64                 Length;
} EFI_HOB_FIRMWARE_VOLUME;





typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER  Header;
  
  
  
  EFI_PHYSICAL_ADDRESS    BaseAddress;
  
  
  
  UINT64                  Length;
  
  
  
  EFI_GUID                FvName;
  
  
  
  EFI_GUID                FileName;
} EFI_HOB_FIRMWARE_VOLUME2;





typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER  Header;
  
  
  
  UINT8                   SizeOfMemorySpace;
  
  
  
  UINT8                   SizeOfIoSpace;
  
  
  
  UINT8                   Reserved[6];
} EFI_HOB_CPU;





typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER  Header;
} EFI_HOB_MEMORY_POOL;








typedef struct {
  
  
  
  EFI_HOB_GENERIC_HEADER Header;

  
  
  
  
  
  EFI_PHYSICAL_ADDRESS   BaseAddress;
  UINT64                 Length;
} EFI_HOB_UEFI_CAPSULE;




typedef union {
  EFI_HOB_GENERIC_HEADER              *Header;
  EFI_HOB_HANDOFF_INFO_TABLE          *HandoffInformationTable;
  EFI_HOB_MEMORY_ALLOCATION           *MemoryAllocation;
  EFI_HOB_MEMORY_ALLOCATION_BSP_STORE *MemoryAllocationBspStore;
  EFI_HOB_MEMORY_ALLOCATION_STACK     *MemoryAllocationStack;
  EFI_HOB_MEMORY_ALLOCATION_MODULE    *MemoryAllocationModule;
  EFI_HOB_RESOURCE_DESCRIPTOR         *ResourceDescriptor;
  EFI_HOB_GUID_TYPE                   *Guid;
  EFI_HOB_FIRMWARE_VOLUME             *FirmwareVolume;
  EFI_HOB_FIRMWARE_VOLUME2            *FirmwareVolume2;
  EFI_HOB_CPU                         *Cpu;
  EFI_HOB_MEMORY_POOL                 *Pool;
  EFI_HOB_UEFI_CAPSULE                *Capsule;
  UINT8                               *Raw;
} EFI_PEI_HOB_POINTERS;


#line 480 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiHob.h"
#line 25 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiDependency.h"














































#line 48 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiDependency.h"
#line 26 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiStatusCode.h"
























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Protocol/DebugSupport.h"























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\IndustryStandard/PeImage.h"























































typedef struct {
  UINT16  e_magic;    
  UINT16  e_cblp;     
  UINT16  e_cp;       
  UINT16  e_crlc;     
  UINT16  e_cparhdr;  
  UINT16  e_minalloc; 
  UINT16  e_maxalloc; 
  UINT16  e_ss;       
  UINT16  e_sp;       
  UINT16  e_csum;     
  UINT16  e_ip;       
  UINT16  e_cs;       
  UINT16  e_lfarlc;   
  UINT16  e_ovno;     
  UINT16  e_res[4];   
  UINT16  e_oemid;    
  UINT16  e_oeminfo;  
  UINT16  e_res2[10]; 
  UINT32  e_lfanew;   
} EFI_IMAGE_DOS_HEADER;




typedef struct {
  UINT16  Machine;
  UINT16  NumberOfSections;
  UINT32  TimeDateStamp;
  UINT32  PointerToSymbolTable;
  UINT32  NumberOfSymbols;
  UINT16  SizeOfOptionalHeader;
  UINT16  Characteristics;
} EFI_IMAGE_FILE_HEADER;























typedef struct {
  UINT32  VirtualAddress;
  UINT32  Size;
} EFI_IMAGE_DATA_DIRECTORY;

























          



typedef struct {
  
  
  
  UINT16                    Magic;
  UINT8                     MajorLinkerVersion;
  UINT8                     MinorLinkerVersion;
  UINT32                    SizeOfCode;
  UINT32                    SizeOfInitializedData;
  UINT32                    SizeOfUninitializedData;
  UINT32                    AddressOfEntryPoint;
  UINT32                    BaseOfCode;
  UINT32                    BaseOfData;  
  
  
  
  UINT32                    ImageBase;
  UINT32                    SectionAlignment;
  UINT32                    FileAlignment;
  UINT16                    MajorOperatingSystemVersion;
  UINT16                    MinorOperatingSystemVersion;
  UINT16                    MajorImageVersion;
  UINT16                    MinorImageVersion;
  UINT16                    MajorSubsystemVersion;
  UINT16                    MinorSubsystemVersion;
  UINT32                    Win32VersionValue;
  UINT32                    SizeOfImage;
  UINT32                    SizeOfHeaders;
  UINT32                    CheckSum;
  UINT16                    Subsystem;
  UINT16                    DllCharacteristics;
  UINT32                    SizeOfStackReserve;
  UINT32                    SizeOfStackCommit;
  UINT32                    SizeOfHeapReserve;
  UINT32                    SizeOfHeapCommit;
  UINT32                    LoaderFlags;
  UINT32                    NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY  DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER32;












typedef struct {
  
  
  
  UINT16                    Magic;
  UINT8                     MajorLinkerVersion;
  UINT8                     MinorLinkerVersion;
  UINT32                    SizeOfCode;
  UINT32                    SizeOfInitializedData;
  UINT32                    SizeOfUninitializedData;
  UINT32                    AddressOfEntryPoint;
  UINT32                    BaseOfCode;
  
  
  
  UINT64                    ImageBase;
  UINT32                    SectionAlignment;
  UINT32                    FileAlignment;
  UINT16                    MajorOperatingSystemVersion;
  UINT16                    MinorOperatingSystemVersion;
  UINT16                    MajorImageVersion;
  UINT16                    MinorImageVersion;
  UINT16                    MajorSubsystemVersion;
  UINT16                    MinorSubsystemVersion;
  UINT32                    Win32VersionValue;
  UINT32                    SizeOfImage;
  UINT32                    SizeOfHeaders;
  UINT32                    CheckSum;
  UINT16                    Subsystem;
  UINT16                    DllCharacteristics;
  UINT64                    SizeOfStackReserve;
  UINT64                    SizeOfStackCommit;
  UINT64                    SizeOfHeapReserve;
  UINT64                    SizeOfHeapCommit;
  UINT32                    LoaderFlags;
  UINT32                    NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY  DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER64;






typedef struct {
  UINT32                      Signature;
  EFI_IMAGE_FILE_HEADER       FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} EFI_IMAGE_NT_HEADERS32;







typedef struct {
  UINT32                      Signature;
  EFI_IMAGE_FILE_HEADER       FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} EFI_IMAGE_NT_HEADERS64;





















typedef struct {
  UINT8 Name[8];
  union {
    UINT32  PhysicalAddress;
    UINT32  VirtualSize;
  } Misc;
  UINT32  VirtualAddress;
  UINT32  SizeOfRawData;
  UINT32  PointerToRawData;
  UINT32  PointerToRelocations;
  UINT32  PointerToLinenumbers;
  UINT16  NumberOfRelocations;
  UINT16  NumberOfLinenumbers;
  UINT32  Characteristics;
} EFI_IMAGE_SECTION_HEADER;





         







                                                   




                                                   







                                              

































































































                                       










typedef struct {
  UINT32  VirtualAddress;
  UINT32  SymbolTableIndex;
  UINT16  Type;
} EFI_IMAGE_RELOCATION;











































typedef struct {
  UINT32  VirtualAddress;
  UINT32  SizeOfBlock;
} EFI_IMAGE_BASE_RELOCATION;
























typedef struct {
  union {
    UINT32  SymbolTableIndex; 
    UINT32  VirtualAddress;   
  } Type;
  UINT16  Linenumber;         
} EFI_IMAGE_LINENUMBER;



















typedef struct {
  UINT8 Name[16];     
  UINT8 Date[12];     
  UINT8 UserID[6];    
  UINT8 GroupID[6];   
  UINT8 Mode[8];      
  UINT8 Size[10];     
  UINT8 EndHeader[2]; 
} EFI_IMAGE_ARCHIVE_MEMBER_HEADER;














typedef struct {
  UINT32  Characteristics;
  UINT32  TimeDateStamp;
  UINT16  MajorVersion;
  UINT16  MinorVersion;
  UINT32  Name;
  UINT32  Base;
  UINT32  NumberOfFunctions;
  UINT32  NumberOfNames;
  UINT32  AddressOfFunctions;
  UINT32  AddressOfNames;
  UINT32  AddressOfNameOrdinals;
} EFI_IMAGE_EXPORT_DIRECTORY;




typedef struct {
  UINT16  Hint;
  UINT8   Name[1];
} EFI_IMAGE_IMPORT_BY_NAME;




typedef struct {
  union {
    UINT32                    Function;
    UINT32                    Ordinal;
    EFI_IMAGE_IMPORT_BY_NAME  *AddressOfData;
  } u1;
} EFI_IMAGE_THUNK_DATA;








typedef struct {
  UINT32                Characteristics;
  UINT32                TimeDateStamp;
  UINT32                ForwarderChain;
  UINT32                Name;
  EFI_IMAGE_THUNK_DATA  *FirstThunk;
} EFI_IMAGE_IMPORT_DESCRIPTOR;





typedef struct {
  UINT32  Characteristics;
  UINT32  TimeDateStamp;
  UINT16  MajorVersion;
  UINT16  MinorVersion;
  UINT32  Type;
  UINT32  SizeOfData;
  UINT32  RVA;           
  UINT32  FileOffset;    
} EFI_IMAGE_DEBUG_DIRECTORY_ENTRY;







typedef struct {
  UINT32  Signature;                        
  UINT32  Unknown;
  UINT32  Unknown2;
  UINT32  Unknown3;
  
  
  
} EFI_IMAGE_DEBUG_CODEVIEW_NB10_ENTRY;





typedef struct {
  UINT32  Signature;                        
  UINT32  Unknown;
  UINT32  Unknown2;
  UINT32  Unknown3;
  UINT32  Unknown4;
  UINT32  Unknown5;
  
  
  
} EFI_IMAGE_DEBUG_CODEVIEW_RSDS_ENTRY;






typedef struct {
  UINT32    Signature;                       
  GUID      MachOUuid;
  
  
  
} EFI_IMAGE_DEBUG_CODEVIEW_MTOC_ENTRY;




typedef struct {
  UINT32  Characteristics;
  UINT32  TimeDateStamp;
  UINT16  MajorVersion;
  UINT16  MinorVersion;
  UINT16  NumberOfNamedEntries;
  UINT16  NumberOfIdEntries;
  
  
  
} EFI_IMAGE_RESOURCE_DIRECTORY;




typedef struct {
  union {
    struct {
      UINT32  NameOffset:31;
      UINT32  NameIsString:1;
    } s;
    UINT32  Id;
  } u1;
  union {
    UINT32  OffsetToData;
    struct {
      UINT32  OffsetToDirectory:31;
      UINT32  DataIsDirectory:1;
    } s;
  } u2;
} EFI_IMAGE_RESOURCE_DIRECTORY_ENTRY;




typedef struct {
  UINT16  Length;
  CHAR16  String[1];
} EFI_IMAGE_RESOURCE_DIRECTORY_STRING;




typedef struct {
  UINT32  OffsetToData;
  UINT32  Size;
  UINT32  CodePage;
  UINT32  Reserved;
} EFI_IMAGE_RESOURCE_DATA_ENTRY;




typedef struct {
  UINT16                    Signature;            
  UINT16                    Machine;              
  UINT8                     NumberOfSections;     
  UINT8                     Subsystem;            
  UINT16                    StrippedSize;         
  UINT32                    AddressOfEntryPoint;  
  UINT32                    BaseOfCode;           
  UINT64                    ImageBase;            
  EFI_IMAGE_DATA_DIRECTORY  DataDirectory[2];     
} EFI_TE_IMAGE_HEADER;














typedef union {
  EFI_IMAGE_NT_HEADERS32   Pe32;
  EFI_IMAGE_NT_HEADERS64   Pe32Plus;
  EFI_TE_IMAGE_HEADER      Te;
} EFI_IMAGE_OPTIONAL_HEADER_UNION;

typedef union {
  EFI_IMAGE_NT_HEADERS32            *Pe32;
  EFI_IMAGE_NT_HEADERS64            *Pe32Plus;
  EFI_TE_IMAGE_HEADER               *Te;
  EFI_IMAGE_OPTIONAL_HEADER_UNION   *Union;
} EFI_IMAGE_OPTIONAL_HEADER_PTR_UNION;

#line 757 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\IndustryStandard/PeImage.h"
#line 25 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Protocol/DebugSupport.h"

typedef struct _EFI_DEBUG_SUPPORT_PROTOCOL EFI_DEBUG_SUPPORT_PROTOCOL;













typedef INTN  EFI_EXCEPTION_TYPE;


























typedef struct {
  UINT16  Fcw;
  UINT16  Fsw;
  UINT16  Ftw;
  UINT16  Opcode;
  UINT32  Eip;
  UINT16  Cs;
  UINT16  Reserved1;
  UINT32  DataOffset;
  UINT16  Ds;
  UINT8   Reserved2[10];
  UINT8   St0Mm0[10], Reserved3[6];
  UINT8   St1Mm1[10], Reserved4[6];
  UINT8   St2Mm2[10], Reserved5[6];
  UINT8   St3Mm3[10], Reserved6[6];
  UINT8   St4Mm4[10], Reserved7[6];
  UINT8   St5Mm5[10], Reserved8[6];
  UINT8   St6Mm6[10], Reserved9[6];
  UINT8   St7Mm7[10], Reserved10[6];
  UINT8   Xmm0[16];
  UINT8   Xmm1[16];
  UINT8   Xmm2[16];
  UINT8   Xmm3[16];
  UINT8   Xmm4[16];
  UINT8   Xmm5[16];
  UINT8   Xmm6[16];
  UINT8   Xmm7[16];
  UINT8   Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_IA32;




typedef struct {
  UINT32                 ExceptionData;
  EFI_FX_SAVE_STATE_IA32 FxSaveState;
  UINT32                 Dr0;
  UINT32                 Dr1;
  UINT32                 Dr2;
  UINT32                 Dr3;
  UINT32                 Dr6;
  UINT32                 Dr7;
  UINT32                 Cr0;
  UINT32                 Cr1;  
  UINT32                 Cr2;
  UINT32                 Cr3;
  UINT32                 Cr4;
  UINT32                 Eflags;
  UINT32                 Ldtr;
  UINT32                 Tr;
  UINT32                 Gdtr[2];
  UINT32                 Idtr[2];
  UINT32                 Eip;
  UINT32                 Gs;
  UINT32                 Fs;
  UINT32                 Es;
  UINT32                 Ds;
  UINT32                 Cs;
  UINT32                 Ss;
  UINT32                 Edi;
  UINT32                 Esi;
  UINT32                 Ebp;
  UINT32                 Esp;
  UINT32                 Ebx;
  UINT32                 Edx;
  UINT32                 Ecx;
  UINT32                 Eax;
} EFI_SYSTEM_CONTEXT_IA32;


























typedef struct {
  UINT16  Fcw;
  UINT16  Fsw;
  UINT16  Ftw;
  UINT16  Opcode;
  UINT64  Rip;
  UINT64  DataOffset;
  UINT8   Reserved1[8];
  UINT8   St0Mm0[10], Reserved2[6];
  UINT8   St1Mm1[10], Reserved3[6];
  UINT8   St2Mm2[10], Reserved4[6];
  UINT8   St3Mm3[10], Reserved5[6];
  UINT8   St4Mm4[10], Reserved6[6];
  UINT8   St5Mm5[10], Reserved7[6];
  UINT8   St6Mm6[10], Reserved8[6];
  UINT8   St7Mm7[10], Reserved9[6];
  UINT8   Xmm0[16];
  UINT8   Xmm1[16];
  UINT8   Xmm2[16];
  UINT8   Xmm3[16];
  UINT8   Xmm4[16];
  UINT8   Xmm5[16];
  UINT8   Xmm6[16];
  UINT8   Xmm7[16];
  
  
  
  UINT8   Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_X64;




typedef struct {
  UINT64                ExceptionData;
  EFI_FX_SAVE_STATE_X64 FxSaveState;
  UINT64                Dr0;
  UINT64                Dr1;
  UINT64                Dr2;
  UINT64                Dr3;
  UINT64                Dr6;
  UINT64                Dr7;
  UINT64                Cr0;
  UINT64                Cr1;  
  UINT64                Cr2;
  UINT64                Cr3;
  UINT64                Cr4;
  UINT64                Cr8;
  UINT64                Rflags;
  UINT64                Ldtr;
  UINT64                Tr;
  UINT64                Gdtr[2];
  UINT64                Idtr[2];
  UINT64                Rip;
  UINT64                Gs;
  UINT64                Fs;
  UINT64                Es;
  UINT64                Ds;
  UINT64                Cs;
  UINT64                Ss;
  UINT64                Rdi;
  UINT64                Rsi;
  UINT64                Rbp;
  UINT64                Rsp;
  UINT64                Rbx;
  UINT64                Rdx;
  UINT64                Rcx;
  UINT64                Rax;
  UINT64                R8;
  UINT64                R9;
  UINT64                R10;
  UINT64                R11;
  UINT64                R12;
  UINT64                R13;
  UINT64                R14;
  UINT64                R15;
} EFI_SYSTEM_CONTEXT_X64;

















































typedef struct {
  
  
  
  
  UINT64  Reserved;
  UINT64  R1;
  UINT64  R2;
  UINT64  R3;
  UINT64  R4;
  UINT64  R5;
  UINT64  R6;
  UINT64  R7;
  UINT64  R8;
  UINT64  R9;
  UINT64  R10;
  UINT64  R11;
  UINT64  R12;
  UINT64  R13;
  UINT64  R14;
  UINT64  R15;
  UINT64  R16;
  UINT64  R17;
  UINT64  R18;
  UINT64  R19;
  UINT64  R20;
  UINT64  R21;
  UINT64  R22;
  UINT64  R23;
  UINT64  R24;
  UINT64  R25;
  UINT64  R26;
  UINT64  R27;
  UINT64  R28;
  UINT64  R29;
  UINT64  R30;
  UINT64  R31;

  UINT64  F2[2];
  UINT64  F3[2];
  UINT64  F4[2];
  UINT64  F5[2];
  UINT64  F6[2];
  UINT64  F7[2];
  UINT64  F8[2];
  UINT64  F9[2];
  UINT64  F10[2];
  UINT64  F11[2];
  UINT64  F12[2];
  UINT64  F13[2];
  UINT64  F14[2];
  UINT64  F15[2];
  UINT64  F16[2];
  UINT64  F17[2];
  UINT64  F18[2];
  UINT64  F19[2];
  UINT64  F20[2];
  UINT64  F21[2];
  UINT64  F22[2];
  UINT64  F23[2];
  UINT64  F24[2];
  UINT64  F25[2];
  UINT64  F26[2];
  UINT64  F27[2];
  UINT64  F28[2];
  UINT64  F29[2];
  UINT64  F30[2];
  UINT64  F31[2];

  UINT64  Pr;

  UINT64  B0;
  UINT64  B1;
  UINT64  B2;
  UINT64  B3;
  UINT64  B4;
  UINT64  B5;
  UINT64  B6;
  UINT64  B7;

  
  
  
  UINT64  ArRsc;
  UINT64  ArBsp;
  UINT64  ArBspstore;
  UINT64  ArRnat;

  UINT64  ArFcr;

  UINT64  ArEflag;
  UINT64  ArCsd;
  UINT64  ArSsd;
  UINT64  ArCflg;
  UINT64  ArFsr;
  UINT64  ArFir;
  UINT64  ArFdr;

  UINT64  ArCcv;

  UINT64  ArUnat;

  UINT64  ArFpsr;

  UINT64  ArPfs;
  UINT64  ArLc;
  UINT64  ArEc;

  
  
  
  UINT64  CrDcr;
  UINT64  CrItm;
  UINT64  CrIva;
  UINT64  CrPta;
  UINT64  CrIpsr;
  UINT64  CrIsr;
  UINT64  CrIip;
  UINT64  CrIfa;
  UINT64  CrItir;
  UINT64  CrIipa;
  UINT64  CrIfs;
  UINT64  CrIim;
  UINT64  CrIha;

  
  
  
  UINT64  Dbr0;
  UINT64  Dbr1;
  UINT64  Dbr2;
  UINT64  Dbr3;
  UINT64  Dbr4;
  UINT64  Dbr5;
  UINT64  Dbr6;
  UINT64  Dbr7;

  UINT64  Ibr0;
  UINT64  Ibr1;
  UINT64  Ibr2;
  UINT64  Ibr3;
  UINT64  Ibr4;
  UINT64  Ibr5;
  UINT64  Ibr6;
  UINT64  Ibr7;

  
  
  
  UINT64  IntNat;

} EFI_SYSTEM_CONTEXT_IPF;























typedef struct {
  UINT64  R0;
  UINT64  R1;
  UINT64  R2;
  UINT64  R3;
  UINT64  R4;
  UINT64  R5;
  UINT64  R6;
  UINT64  R7;
  UINT64  Flags;
  UINT64  ControlFlags;
  UINT64  Ip;
} EFI_SYSTEM_CONTEXT_EBC;























typedef struct {
  UINT32  R0;
  UINT32  R1;
  UINT32  R2;
  UINT32  R3;
  UINT32  R4;
  UINT32  R5;
  UINT32  R6;
  UINT32  R7;
  UINT32  R8;
  UINT32  R9;
  UINT32  R10;
  UINT32  R11;
  UINT32  R12;
  UINT32  SP;
  UINT32  LR;
  UINT32  PC;
  UINT32  CPSR;
  UINT32  DFSR;
  UINT32  DFAR;
  UINT32  IFSR;
  UINT32  IFAR;
} EFI_SYSTEM_CONTEXT_ARM;















typedef struct {
  
  UINT64  X0;
  UINT64  X1;
  UINT64  X2;
  UINT64  X3;
  UINT64  X4;
  UINT64  X5;
  UINT64  X6;
  UINT64  X7;
  UINT64  X8;
  UINT64  X9;
  UINT64  X10;
  UINT64  X11;
  UINT64  X12;
  UINT64  X13;
  UINT64  X14;
  UINT64  X15;
  UINT64  X16;
  UINT64  X17;
  UINT64  X18;
  UINT64  X19;
  UINT64  X20;
  UINT64  X21;
  UINT64  X22;
  UINT64  X23;
  UINT64  X24;
  UINT64  X25;
  UINT64  X26;
  UINT64  X27;
  UINT64  X28;
  UINT64  FP;   
  UINT64  LR;   
  UINT64  SP;   

  
  UINT64  V0[2];
  UINT64  V1[2];
  UINT64  V2[2];
  UINT64  V3[2];
  UINT64  V4[2];
  UINT64  V5[2];
  UINT64  V6[2];
  UINT64  V7[2];
  UINT64  V8[2];
  UINT64  V9[2];
  UINT64  V10[2];
  UINT64  V11[2];
  UINT64  V12[2];
  UINT64  V13[2];
  UINT64  V14[2];
  UINT64  V15[2];
  UINT64  V16[2];
  UINT64  V17[2];
  UINT64  V18[2];
  UINT64  V19[2];
  UINT64  V20[2];
  UINT64  V21[2];
  UINT64  V22[2];
  UINT64  V23[2];
  UINT64  V24[2];
  UINT64  V25[2];
  UINT64  V26[2];
  UINT64  V27[2];
  UINT64  V28[2];
  UINT64  V29[2];
  UINT64  V30[2];
  UINT64  V31[2];

  UINT64  ELR;  
  UINT64  SPSR; 
  UINT64  FPSR; 
  UINT64  ESR;  
  UINT64  FAR;  
} EFI_SYSTEM_CONTEXT_AARCH64;





typedef union {
  EFI_SYSTEM_CONTEXT_EBC  *SystemContextEbc;
  EFI_SYSTEM_CONTEXT_IA32 *SystemContextIa32;
  EFI_SYSTEM_CONTEXT_X64  *SystemContextX64;
  EFI_SYSTEM_CONTEXT_IPF  *SystemContextIpf;
  EFI_SYSTEM_CONTEXT_ARM  *SystemContextArm;
  EFI_SYSTEM_CONTEXT_AARCH64  *SystemContextAArch64;
} EFI_SYSTEM_CONTEXT;












typedef
void
(__cdecl *EFI_EXCEPTION_CALLBACK)(
       EFI_EXCEPTION_TYPE               ExceptionType,
    EFI_SYSTEM_CONTEXT               SystemContext
  );







typedef
void
(__cdecl *EFI_PERIODIC_CALLBACK)(
    EFI_SYSTEM_CONTEXT               SystemContext
  );




typedef enum {
  IsaIa32 = 0x014c,           
  IsaX64  = 0x8664,            
  IsaIpf  = 0x0200,           
  IsaEbc  = 0x0EBC,            
  IsaArm  = 0x01c2, 
  IsaAArch64  = 0xAA64       
} EFI_INSTRUCTION_SET_ARCHITECTURE;

















typedef
EFI_STATUS
(__cdecl *EFI_GET_MAXIMUM_PROCESSOR_INDEX)(
   EFI_DEBUG_SUPPORT_PROTOCOL          *This,
   UINTN                              *MaxProcessorIndex
  );
















typedef
EFI_STATUS
(__cdecl *EFI_REGISTER_PERIODIC_CALLBACK)(
   EFI_DEBUG_SUPPORT_PROTOCOL          *This,
   UINTN                               ProcessorIndex,
   EFI_PERIODIC_CALLBACK               PeriodicCallback
  );

















typedef
EFI_STATUS
(__cdecl *EFI_REGISTER_EXCEPTION_CALLBACK)(
   EFI_DEBUG_SUPPORT_PROTOCOL          *This,
   UINTN                               ProcessorIndex,
   EFI_EXCEPTION_CALLBACK              ExceptionCallback,
   EFI_EXCEPTION_TYPE                  ExceptionType
  );














typedef
EFI_STATUS
(__cdecl *EFI_INVALIDATE_INSTRUCTION_CACHE)(
   EFI_DEBUG_SUPPORT_PROTOCOL          *This,
   UINTN                               ProcessorIndex,
   void                                *Start,
   UINT64                              Length
  );






struct _EFI_DEBUG_SUPPORT_PROTOCOL {
  
  
  
  EFI_INSTRUCTION_SET_ARCHITECTURE  Isa;
  EFI_GET_MAXIMUM_PROCESSOR_INDEX   GetMaximumProcessorIndex;
  EFI_REGISTER_PERIODIC_CALLBACK    RegisterPeriodicCallback;
  EFI_REGISTER_EXCEPTION_CALLBACK   RegisterExceptionCallback;
  EFI_INVALIDATE_INSTRUCTION_CACHE  InvalidateInstructionCache;
};

extern EFI_GUID gEfiDebugSupportProtocolGuid;

#line 779 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Protocol/DebugSupport.h"
#line 26 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiStatusCode.h"




typedef UINT32  EFI_STATUS_CODE_TYPE;










































typedef UINT32 EFI_STATUS_CODE_VALUE;
















typedef struct {
  
  
  
  UINT16    HeaderSize;
  
  
  
  UINT16    Size;
  
  
  
  EFI_GUID  Type;
} EFI_STATUS_CODE_DATA;







































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1200 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiStatusCode.h"

#line 27 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiS3BootScript.h"










































typedef enum {
  EfiBootScriptWidthUint8,
  EfiBootScriptWidthUint16,
  EfiBootScriptWidthUint32,
  EfiBootScriptWidthUint64,
  EfiBootScriptWidthFifoUint8,
  EfiBootScriptWidthFifoUint16,
  EfiBootScriptWidthFifoUint32,
  EfiBootScriptWidthFifoUint64,
  EfiBootScriptWidthFillUint8,
  EfiBootScriptWidthFillUint16,
  EfiBootScriptWidthFillUint32,
  EfiBootScriptWidthFillUint64,
  EfiBootScriptWidthMaximum
} EFI_BOOT_SCRIPT_WIDTH;

#line 60 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiS3BootScript.h"
#line 28 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"



















































































typedef struct {
  
  
  
  
  
  EFI_PHYSICAL_ADDRESS  PhysicalStart;
  
  
  
  
  EFI_PHYSICAL_ADDRESS  CpuStart;       
  
  
  
  UINT64                PhysicalSize;
  
  
  
  
  
  
  UINT64                RegionState;
} EFI_SMRAM_DESCRIPTOR;

typedef enum {
  EFI_PCD_TYPE_8,
  EFI_PCD_TYPE_16,
  EFI_PCD_TYPE_32,
  EFI_PCD_TYPE_64,
  EFI_PCD_TYPE_BOOL,
  EFI_PCD_TYPE_PTR
} EFI_PCD_TYPE;

typedef struct {
  
  
  
  
  EFI_PCD_TYPE      PcdType;
  
  
  
  
  UINTN             PcdSize;
  
  
  
  
  
  
  CHAR8             *PcdName;
} EFI_PCD_INFO;









typedef
void
(__cdecl *EFI_AP_PROCEDURE)(
    void  *Buffer
  );

#line 180 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiMultiPhase.h"
#line 24 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"




typedef void    *EFI_PEI_FV_HANDLE;




typedef void    *EFI_PEI_FILE_HANDLE;




typedef struct _EFI_PEI_SERVICES          EFI_PEI_SERVICES;




typedef struct _EFI_PEI_NOTIFY_DESCRIPTOR EFI_PEI_NOTIFY_DESCRIPTOR;


#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/CpuIo.h"
























typedef struct _EFI_PEI_CPU_IO_PPI  EFI_PEI_CPU_IO_PPI;




typedef enum {
  EfiPeiCpuIoWidthUint8,
  EfiPeiCpuIoWidthUint16,
  EfiPeiCpuIoWidthUint32,
  EfiPeiCpuIoWidthUint64,
  EfiPeiCpuIoWidthFifoUint8,
  EfiPeiCpuIoWidthFifoUint16,
  EfiPeiCpuIoWidthFifoUint32,
  EfiPeiCpuIoWidthFifoUint64,
  EfiPeiCpuIoWidthFillUint8,
  EfiPeiCpuIoWidthFillUint16,
  EfiPeiCpuIoWidthFillUint32,
  EfiPeiCpuIoWidthFillUint64,
  EfiPeiCpuIoWidthMaximum
} EFI_PEI_CPU_IO_PPI_WIDTH;
















typedef
EFI_STATUS
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_MEM)(
       const EFI_PEI_SERVICES    **PeiServices,
       const EFI_PEI_CPU_IO_PPI  *This,
       EFI_PEI_CPU_IO_PPI_WIDTH  Width,
       UINT64                    Address,
       UINTN                     Count,
    void                      *Buffer
  );




typedef struct {
  
  
  
  EFI_PEI_CPU_IO_PPI_IO_MEM  Read;
  
  
  
  EFI_PEI_CPU_IO_PPI_IO_MEM  Write;
} EFI_PEI_CPU_IO_PPI_ACCESS;












typedef
UINT8
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_READ8)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT16
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_READ16)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT32
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_READ32)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT64
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_READ64)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_WRITE8)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT8                     Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_WRITE16)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT16                    Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_WRITE32)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT32                    Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_IO_WRITE64)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT64                    Data
  );












typedef
UINT8
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_READ8)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT16
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_READ16)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT32
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_READ32)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );












typedef
UINT64
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_READ64)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_WRITE8)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT8                     Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_WRITE16)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT16                    Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_WRITE32)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT32                    Data
  );











typedef
void
(__cdecl *EFI_PEI_CPU_IO_PPI_MEM_WRITE64)(
    const EFI_PEI_SERVICES    **PeiServices,
    const EFI_PEI_CPU_IO_PPI  *This,
    UINT64                    Address,
    UINT64                    Data
  );






struct _EFI_PEI_CPU_IO_PPI {
  
  
  
  EFI_PEI_CPU_IO_PPI_ACCESS       Mem;
  
  
  
  EFI_PEI_CPU_IO_PPI_ACCESS       Io;

  EFI_PEI_CPU_IO_PPI_IO_READ8     IoRead8;
  EFI_PEI_CPU_IO_PPI_IO_READ16    IoRead16;
  EFI_PEI_CPU_IO_PPI_IO_READ32    IoRead32;
  EFI_PEI_CPU_IO_PPI_IO_READ64    IoRead64;

  EFI_PEI_CPU_IO_PPI_IO_WRITE8    IoWrite8;
  EFI_PEI_CPU_IO_PPI_IO_WRITE16   IoWrite16;
  EFI_PEI_CPU_IO_PPI_IO_WRITE32   IoWrite32;
  EFI_PEI_CPU_IO_PPI_IO_WRITE64   IoWrite64;

  EFI_PEI_CPU_IO_PPI_MEM_READ8    MemRead8;
  EFI_PEI_CPU_IO_PPI_MEM_READ16   MemRead16;
  EFI_PEI_CPU_IO_PPI_MEM_READ32   MemRead32;
  EFI_PEI_CPU_IO_PPI_MEM_READ64   MemRead64;

  EFI_PEI_CPU_IO_PPI_MEM_WRITE8   MemWrite8;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE16  MemWrite16;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE32  MemWrite32;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE64  MemWrite64;
};

extern EFI_GUID gEfiPeiCpuIoPpiInstalledGuid;

#line 429 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/CpuIo.h"
#line 47 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/PciCfg2.h"























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"


























typedef struct {
  UINT32                            Ebx;
  UINT32                            Esi;
  UINT32                            Edi;
  UINT32                            Ebp;
  UINT32                            Esp;
  UINT32                            Eip;
} BASE_LIBRARY_JUMP_BUFFER;



#line 39 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"

















































#line 89 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"






















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












typedef union {
  struct {
    UINT32  OffsetLow:16;   
    UINT32  Selector:16;    
    UINT32  Reserved_0:8;   
    UINT32  GateType:8;     
    UINT32  OffsetHigh:16;  
  } Bits;
  UINT64  Uint64;
} IA32_IDT_GATE_DESCRIPTOR;

#line 5554 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"





















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



#line 25 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/PciCfg2.h"




typedef struct _EFI_PEI_PCI_CFG2_PPI   EFI_PEI_PCI_CFG2_PPI;











typedef enum {
  
  
  
  EfiPeiPciCfgWidthUint8  = 0,
  
  
  
  EfiPeiPciCfgWidthUint16 = 1,
  
  
  
  EfiPeiPciCfgWidthUint32 = 2,
  
  
  
  EfiPeiPciCfgWidthUint64 = 3,
  EfiPeiPciCfgWidthMaximum
} EFI_PEI_PCI_CFG_PPI_WIDTH;




typedef struct {
  
  
  
  
  UINT8   Register;
  
  
  
  
  UINT8   Function;
  
  
  
  UINT8   Device;
  
  
  
  UINT8   Bus;
  
  
  
  
  
  UINT32  ExtendedRegister;
} EFI_PEI_PCI_CFG_PPI_PCI_ADDRESS;

























typedef
EFI_STATUS
(__cdecl *EFI_PEI_PCI_CFG2_PPI_IO)(
   const  EFI_PEI_SERVICES          **PeiServices,
   const  EFI_PEI_PCI_CFG2_PPI      *This,
          EFI_PEI_PCI_CFG_PPI_WIDTH Width,
          UINT64                    Address,
       void                      *Buffer
);
































typedef
EFI_STATUS
(__cdecl *EFI_PEI_PCI_CFG2_PPI_RW)(
   const  EFI_PEI_SERVICES          **PeiServices,
   const  EFI_PEI_PCI_CFG2_PPI      *This,
          EFI_PEI_PCI_CFG_PPI_WIDTH Width,
          UINT64                    Address,
          void                      *SetBits,
          void                      *ClearBits
);





struct _EFI_PEI_PCI_CFG2_PPI {
  EFI_PEI_PCI_CFG2_PPI_IO  Read;
  EFI_PEI_PCI_CFG2_PPI_IO  Write;
  EFI_PEI_PCI_CFG2_PPI_RW  Modify;
  
  
  
  UINT16                  Segment;
};


extern EFI_GUID gEfiPciCfg2PpiGuid;

#line 185 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/PciCfg2.h"
#line 48 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"













typedef
EFI_STATUS
(__cdecl *EFI_PEIM_ENTRY_POINT2)(
   EFI_PEI_FILE_HANDLE             FileHandle,
   const EFI_PEI_SERVICES          **PeiServices
  );











typedef
EFI_STATUS
(__cdecl *EFI_PEIM_NOTIFY_ENTRY_POINT)(
   EFI_PEI_SERVICES           **PeiServices,
   EFI_PEI_NOTIFY_DESCRIPTOR  *NotifyDescriptor,
   void                       *Ppi
  );














typedef struct {
  
  
  
  
  UINTN     Flags;
  
  
  
  EFI_GUID  *Guid;
  
  
  
  void      *Ppi;
} EFI_PEI_PPI_DESCRIPTOR;





struct _EFI_PEI_NOTIFY_DESCRIPTOR {
  
  
  
  UINTN                       Flags;
  
  
  
  EFI_GUID                    *Guid;
  
  
  
  EFI_PEIM_NOTIFY_ENTRY_POINT Notify;
};





typedef union {
  
  
  
  EFI_PEI_NOTIFY_DESCRIPTOR   Notify;
  
  
  
  EFI_PEI_PPI_DESCRIPTOR      Ppi;
} EFI_PEI_DESCRIPTOR;


















typedef
EFI_STATUS
(__cdecl *EFI_PEI_INSTALL_PPI)(
   const EFI_PEI_SERVICES            **PeiServices,
   const EFI_PEI_PPI_DESCRIPTOR      *PpiList
  );



















typedef
EFI_STATUS
(__cdecl *EFI_PEI_REINSTALL_PPI)(
   const EFI_PEI_SERVICES                **PeiServices,
   const EFI_PEI_PPI_DESCRIPTOR          *OldPpi,
   const EFI_PEI_PPI_DESCRIPTOR          *NewPpi
  );














typedef
EFI_STATUS
(__cdecl *EFI_PEI_LOCATE_PPI)(
   const EFI_PEI_SERVICES            **PeiServices,
   const EFI_GUID                    *Guid,
   UINTN                             Instance,
      EFI_PEI_PPI_DESCRIPTOR      **PpiDescriptor ,
      void                        **Ppi
  );
















typedef
EFI_STATUS
(__cdecl *EFI_PEI_NOTIFY_PPI)(
   const EFI_PEI_SERVICES                **PeiServices,
   const EFI_PEI_NOTIFY_DESCRIPTOR       *NotifyList
  );










typedef
EFI_STATUS
(__cdecl *EFI_PEI_GET_BOOT_MODE)(
   const EFI_PEI_SERVICES            **PeiServices,
   EFI_BOOT_MODE                    *BootMode
  );










typedef
EFI_STATUS
(__cdecl *EFI_PEI_SET_BOOT_MODE)(
   const EFI_PEI_SERVICES            **PeiServices,
   EFI_BOOT_MODE                     BootMode
  );











typedef
EFI_STATUS
(__cdecl *EFI_PEI_GET_HOB_LIST)(
   const EFI_PEI_SERVICES        **PeiServices,
   void                         **HobList
  );













typedef
EFI_STATUS
(__cdecl *EFI_PEI_CREATE_HOB)(
   const EFI_PEI_SERVICES            **PeiServices,
   UINT16                            Type,
   UINT16                            Length,
    void                          **Hob
  );




















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_FIND_NEXT_VOLUME2)(
   const EFI_PEI_SERVICES                **PeiServices,
   UINTN                                 Instance,
   EFI_PEI_FV_HANDLE                    *VolumeHandle
  );






















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_FIND_NEXT_FILE2)(
   const EFI_PEI_SERVICES                **PeiServices,
   EFI_FV_FILETYPE                       SearchType,
   const EFI_PEI_FV_HANDLE               FvHandle,
    EFI_PEI_FILE_HANDLE               *FileHandle
  );




















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_FIND_SECTION_DATA2)(
   const EFI_PEI_SERVICES            **PeiServices,
   EFI_SECTION_TYPE                  SectionType,
   EFI_PEI_FILE_HANDLE               FileHandle,
   void                             **SectionData
  );






















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_FIND_SECTION_DATA3)(
   const EFI_PEI_SERVICES            **PeiServices,
   EFI_SECTION_TYPE                  SectionType,
   UINTN                             SectionInstance,
   EFI_PEI_FILE_HANDLE               FileHandle,
   void                             **SectionData,
   UINT32                           *AuthenticationStatus
  );













typedef
EFI_STATUS
(__cdecl *EFI_PEI_INSTALL_PEI_MEMORY)(
   const EFI_PEI_SERVICES     **PeiServices,
   EFI_PHYSICAL_ADDRESS       MemoryBegin,
   UINT64                     MemoryLength
  );


















typedef
EFI_STATUS
(__cdecl *EFI_PEI_ALLOCATE_PAGES)(
   const EFI_PEI_SERVICES     **PeiServices,
   EFI_MEMORY_TYPE            MemoryType,
   UINTN                      Pages,
   EFI_PHYSICAL_ADDRESS      *Memory
  );













typedef
EFI_STATUS
(__cdecl *EFI_PEI_ALLOCATE_POOL)(
   const EFI_PEI_SERVICES     **PeiServices,
   UINTN                      Size,
   void                      **Buffer
  );









typedef
void
(__cdecl *EFI_PEI_COPY_MEM)(
   void                       *Destination,
   void                       *Source,
   UINTN                      Length
  );









typedef
void
(__cdecl *EFI_PEI_SET_MEM)(
   void                       *Buffer,
   UINTN                      Size,
   UINT8                      Value
  );






























typedef
EFI_STATUS
(__cdecl *EFI_PEI_REPORT_STATUS_CODE)(
   const EFI_PEI_SERVICES         **PeiServices,
   EFI_STATUS_CODE_TYPE           Type,
   EFI_STATUS_CODE_VALUE          Value,
   UINT32                         Instance,
   const EFI_GUID                 *CallerId ,
   const EFI_STATUS_CODE_DATA     *Data 
  );














typedef
EFI_STATUS
(__cdecl *EFI_PEI_RESET_SYSTEM)(
   const EFI_PEI_SERVICES   **PeiServices
  );
















typedef
void
(__cdecl *EFI_PEI_RESET2_SYSTEM) (
   EFI_RESET_TYPE     ResetType,
   EFI_STATUS         ResetStatus,
   UINTN              DataSize,
   void               *ResetData 
  );





















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_FIND_BY_NAME)(
    const  EFI_GUID            *FileName,
    EFI_PEI_FV_HANDLE          VolumeHandle,
   EFI_PEI_FILE_HANDLE        *FileHandle
  );




typedef struct {
  
  
  
  EFI_GUID                FileName;
  
  
  
  EFI_FV_FILETYPE         FileType;
  
  
  
  EFI_FV_FILE_ATTRIBUTES  FileAttributes;
  
  
  
  
  
  void                    *Buffer;
  
  
  
  UINT32                  BufferSize;
} EFI_FV_FILE_INFO;




typedef struct {
  
  
  
  EFI_GUID                FileName;
  
  
  
  EFI_FV_FILETYPE         FileType;
  
  
  
  EFI_FV_FILE_ATTRIBUTES  FileAttributes;
  
  
  
  
  
  void                    *Buffer;
  
  
  
  UINT32                  BufferSize;
  
  
  
  UINT32                  AuthenticationStatus;
} EFI_FV_FILE_INFO2;



















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_GET_FILE_INFO)(
    EFI_PEI_FILE_HANDLE         FileHandle,
   EFI_FV_FILE_INFO            *FileInfo
  );


















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_GET_FILE_INFO2)(
    EFI_PEI_FILE_HANDLE         FileHandle,
   EFI_FV_FILE_INFO2           *FileInfo
  );




typedef struct {
  
  
  
  EFI_FVB_ATTRIBUTES_2  FvAttributes;
  
  
  
  EFI_GUID              FvFormat;
  
  
  
  EFI_GUID              FvName;
  
  
  
  
  
  void                  *FvStart;
  
  
  
  UINT64                FvSize;
} EFI_FV_INFO;


















typedef
EFI_STATUS
(__cdecl *EFI_PEI_FFS_GET_VOLUME_INFO)(
    EFI_PEI_FV_HANDLE       VolumeHandle,
   EFI_FV_INFO             *VolumeInfo
  );

























typedef
EFI_STATUS
(__cdecl *EFI_PEI_REGISTER_FOR_SHADOW)(
    EFI_PEI_FILE_HANDLE FileHandle
  );

































struct _EFI_PEI_SERVICES {
  
  
  
  EFI_TABLE_HEADER                Hdr;

  
  
  
  EFI_PEI_INSTALL_PPI             InstallPpi;
  EFI_PEI_REINSTALL_PPI           ReInstallPpi;
  EFI_PEI_LOCATE_PPI              LocatePpi;
  EFI_PEI_NOTIFY_PPI              NotifyPpi;

  
  
  
  EFI_PEI_GET_BOOT_MODE           GetBootMode;
  EFI_PEI_SET_BOOT_MODE           SetBootMode;

  
  
  
  EFI_PEI_GET_HOB_LIST            GetHobList;
  EFI_PEI_CREATE_HOB              CreateHob;

  
  
  
  EFI_PEI_FFS_FIND_NEXT_VOLUME2   FfsFindNextVolume;
  EFI_PEI_FFS_FIND_NEXT_FILE2     FfsFindNextFile;
  EFI_PEI_FFS_FIND_SECTION_DATA2  FfsFindSectionData;

  
  
  
  EFI_PEI_INSTALL_PEI_MEMORY      InstallPeiMemory;
  EFI_PEI_ALLOCATE_PAGES          AllocatePages;
  EFI_PEI_ALLOCATE_POOL           AllocatePool;
  EFI_PEI_COPY_MEM                CopyMem;
  EFI_PEI_SET_MEM                 SetMem;

  
  
  
  EFI_PEI_REPORT_STATUS_CODE      ReportStatusCode;

  
  
  
  EFI_PEI_RESET_SYSTEM            ResetSystem;

  
  
  
  
  EFI_PEI_CPU_IO_PPI              *CpuIo;
  EFI_PEI_PCI_CFG2_PPI            *PciCfg;

  
  
  
  EFI_PEI_FFS_FIND_BY_NAME        FfsFindFileByName;
  EFI_PEI_FFS_GET_FILE_INFO       FfsGetFileInfo;
  EFI_PEI_FFS_GET_VOLUME_INFO     FfsGetVolumeInfo;
  EFI_PEI_REGISTER_FOR_SHADOW     RegisterForShadow;
  EFI_PEI_FFS_FIND_SECTION_DATA3  FindSectionData3;
  EFI_PEI_FFS_GET_FILE_INFO2      FfsGetFileInfo2;
  EFI_PEI_RESET2_SYSTEM           ResetSystem2;
};







typedef struct _EFI_SEC_PEI_HAND_OFF {
  
  
  
  UINT16  DataSize;

  
  
  
  
  
  void    *BootFirmwareVolumeBase;

  
  
  
  UINTN   BootFirmwareVolumeSize;

  
  
  
  void    *TemporaryRamBase;

  
  
  
  UINTN   TemporaryRamSize;

  
  
  
  
  
  
  
  
  
  void    *PeiTemporaryRamBase;

  
  
  
  
  UINTN   PeiTemporaryRamSize;

  
  
  
  
  
  
  void    *StackBase;

  
  
  
  UINTN   StackSize;
} EFI_SEC_PEI_HAND_OFF;





































typedef
void
(__cdecl *EFI_PEI_CORE_ENTRY_POINT)(
   const  EFI_SEC_PEI_HAND_OFF    *SecCoreData,
   const  EFI_PEI_PPI_DESCRIPTOR  *PpiList
);

#line 1043 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"

#line 25 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\PiPei.h"

#line 27 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\PiPei.h"

#line 18 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib\\DEBUG\\AutoGen.h"
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

#line 19 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;



extern const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheBase;






extern const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheSize;






extern const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamBase;






extern const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamSize;






extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress;






extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize;






extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;






RETURN_STATUS
__cdecl
PlatformSecLibConstructor (
  void
  );






#line 92 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\IA32\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\Ia32\\Flat32.asm"
#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"

























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\PiPei.h"



























#line 27 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"

#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/SecPlatformInformation.h"

























#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Pi/PiPeiCis.h"



















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 27 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/SecPlatformInformation.h"






typedef struct _EFI_SEC_PLATFORM_INFORMATION_PPI EFI_SEC_PLATFORM_INFORMATION_PPI;







typedef union {
  struct {
    
    
    
    UINT32   Status                   : 2;
    
    
    
    
    
    UINT32   Tested                   : 1;
    
    
    
    UINT32   Reserved1                :13;
    
    
    
    
    UINT32   VirtualMemoryUnavailable : 1;
    
    
    
    
    UINT32   Ia32ExecutionUnavailable : 1;
    
    
    
    
    UINT32   FloatingPointUnavailable : 1;
    
    
    
    
    
    
    
    
    UINT32   MiscFeaturesUnavailable  : 1;
    
    
    
    UINT32   Reserved2                :12;
  } Bits;
  UINT32     Uint32;
} EFI_HEALTH_FLAGS;




typedef EFI_HEALTH_FLAGS X64_HANDOFF_STATUS;
typedef EFI_HEALTH_FLAGS IA32_HANDOFF_STATUS;



typedef struct {
  
  
  
  
  UINT8 BootPhase;
  
  
  
  UINT8 FWStatus;
  UINT16 Reserved1;
  UINT32 Reserved2;
  
  
  
  UINT16 ProcId;
  UINT16 Reserved3;
  UINT8  IdMask;
  UINT8  EidMask;
  UINT16 Reserved4;
  
  
  
  UINT64 PalCallAddress;
  
  
  
  
  
  UINT64 PalSpecialAddress;
  
  
  
  UINT64 SelfTestStatus;
  
  
  
  UINT64 SelfTestControl;
  UINT64 MemoryBufferRequired;
} ITANIUM_HANDOFF_STATUS;




typedef union {
  IA32_HANDOFF_STATUS    IA32HealthFlags;
  X64_HANDOFF_STATUS     x64HealthFlags;
  ITANIUM_HANDOFF_STATUS ItaniumHealthFlags;
} EFI_SEC_PLATFORM_INFORMATION_RECORD;





















typedef
EFI_STATUS
(__cdecl *EFI_SEC_PLATFORM_INFORMATION)(
   const  EFI_PEI_SERVICES                    **PeiServices,
       UINT64                              *StructureSize,
         EFI_SEC_PLATFORM_INFORMATION_RECORD *PlatformInformationRecord
);







struct _EFI_SEC_PLATFORM_INFORMATION_PPI {
  EFI_SEC_PLATFORM_INFORMATION  PlatformInformation;
};


extern EFI_GUID gEfiSecPlatformInformationPpiGuid;

#line 189 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/SecPlatformInformation.h"
#line 29 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/TemporaryRamSupport.h"













































typedef
EFI_STATUS
(__cdecl * TEMPORARY_RAM_MIGRATION)(
   const EFI_PEI_SERVICES   **PeiServices,
   EFI_PHYSICAL_ADDRESS     TemporaryMemoryBase,
   EFI_PHYSICAL_ADDRESS     PermanentMemoryBase,
   UINTN                    CopySize
);






typedef struct {
  TEMPORARY_RAM_MIGRATION   TemporaryRamMigration;
} EFI_PEI_TEMPORARY_RAM_SUPPORT_PPI;

extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;

#line 67 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Ppi/TemporaryRamSupport.h"
#line 30 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"

#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/BaseLib.h"




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 32 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PcdLib.h"





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 33 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"
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
#line 34 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PerformanceLib.h"











































RETURN_STATUS
__cdecl
StartPerformanceMeasurement (
   const void   *Handle,  
   const CHAR8  *Token,   
   const CHAR8  *Module,  
   UINT64       TimeStamp
  );
























RETURN_STATUS
__cdecl
EndPerformanceMeasurement (
   const void   *Handle,  
   const CHAR8  *Token,   
   const CHAR8  *Module,  
   UINT64       TimeStamp
  );








































UINTN
__cdecl
GetPerformanceMeasurement (
    UINTN       LogEntryKey, 
   const void  **Handle,
   const CHAR8 **Token,
   const CHAR8 **Module,
   UINT64      *StartTimeStamp,
   UINT64      *EndTimeStamp
  );
























RETURN_STATUS
__cdecl
StartPerformanceMeasurementEx (
   const void   *Handle,  
   const CHAR8  *Token,   
   const CHAR8  *Module,  
   UINT64       TimeStamp,
   UINT32       Identifier
  );


























RETURN_STATUS
__cdecl
EndPerformanceMeasurementEx (
   const void   *Handle,  
   const CHAR8  *Token,   
   const CHAR8  *Module,  
   UINT64       TimeStamp,
   UINT32       Identifier
  );










































UINTN
__cdecl
GetPerformanceMeasurementEx (
    UINTN       LogEntryKey, 
   const void  **Handle,
   const CHAR8 **Token,
   const CHAR8 **Module,
   UINT64      *StartTimeStamp,
   UINT64      *EndTimeStamp,
   UINT32      *Identifier
  );













BOOLEAN
__cdecl
PerformanceMeasurementEnabled (
  void
  );





























































































#line 367 "d:\\bios\\z124-002\\z124-002\\MdePkg\\Include\\Library/PerformanceLib.h"
#line 35 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"
#line 1 "d:\\bios\\z124-002\\z124-002\\UefiCpuPkg\\Include\\Library/LocalApicLib.h"





























UINTN
__cdecl
GetLocalApicBaseAddress (
  void
  );









void
__cdecl
SetLocalApicBaseAddress (
   UINTN                BaseAddress
  );









UINTN
__cdecl
GetApicMode (
  void
  );












void
__cdecl
SetApicMode (
   UINTN  ApicMode
  );










UINT32
__cdecl
GetInitialApicId (
  void
  );






UINT32
__cdecl
GetApicId (
  void
  );






UINT32
__cdecl
GetApicVersion (
  void
  );









void
__cdecl
SendFixedIpi (
   UINT32          ApicId,
   UINT8           Vector
  );








void
__cdecl
SendFixedIpiAllExcludingSelf (
   UINT8           Vector
  );








void
__cdecl
SendSmiIpi (
   UINT32          ApicId
  );






void
__cdecl
SendSmiIpiAllExcludingSelf (
  void
  );








void
__cdecl
SendInitIpi (
   UINT32          ApicId
  );






void
__cdecl
SendInitIpiAllExcludingSelf (
  void
  );













void
__cdecl
SendInitSipiSipi (
   UINT32          ApicId,
   UINT32          StartupRoutine
  );












void
__cdecl
SendInitSipiSipiAllExcludingSelf (
   UINT32          StartupRoutine
  );









void
__cdecl
InitializeLocalApicSoftwareEnable (
   BOOLEAN  Enable
  );









void
__cdecl
ProgramVirtualWireMode (
  void
  );






void
__cdecl
DisableLvtInterrupts (
  void
  );






UINT32
__cdecl
GetApicTimerInitCount (
  void
  );






UINT32
__cdecl
GetApicTimerCurrentCount (
  void
  );












void
__cdecl
InitializeApicTimer (
   UINTN   DivideValue,
   UINT32  InitCount,
   BOOLEAN PeriodicMode,
   UINT8   Vector
  );








void
__cdecl
GetApicTimerState (
   UINTN    *DivideValue  ,
   BOOLEAN  *PeriodicMode  ,
   UINT8    *Vector  
  );




void
__cdecl
EnableApicTimerInterrupt (
  void
  );




void
__cdecl
DisableApicTimerInterrupt (
  void
  );







BOOLEAN
__cdecl
GetApicTimerInterruptState (
  void
  );




void
__cdecl
SendApicEoi (
  void
  );







UINT32
__cdecl    
GetApicMsiAddress (
  void
  );
    




























UINT64
__cdecl    
GetApicMsiValue (
   UINT8    Vector,
   UINTN    DeliveryMode,
   BOOLEAN  LevelTriggered,
   BOOLEAN  AssertionLevel
  );
  
#line 415 "d:\\bios\\z124-002\\z124-002\\UefiCpuPkg\\Include\\Library/LocalApicLib.h"

#line 36 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"



extern UINT32                        *TopOfCar;

#line 42 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\PlatformSecLib.h"







#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Library\\PlatformSecLib\\Ia32\\Flat32.asm"
;
; This file contains an 'Intel Peripheral Driver' and is      
; licensed for Intel CPUs and chipsets under the terms of your
; license agreement with Intel or your vendor.  This file may 
; be modified by the user, subject to additional terms of the 
; license agreement                                           
;
;------------------------------------------------------------------------------
;
; Copyright (c) 1999 - 2017, Intel Corporation. All rights reserved.<BR>
; This software and associated documentation (if any) is furnished
; under a license and may only be used or copied in accordance
; with the terms of the license. Except as permitted by such
; license, no part of this software or documentation may be
; reproduced, stored in a retrieval system, or transmitted in any
; form or by any means without the express written consent of
; Intel Corporation.
;
; Module Name:
;
;  Flat32.asm
;
; Abstract:
;
;  This is the code that goes from real-mode to protected mode.
;  It consumes the reset vector.
;
;------------------------------------------------------------------------------
  INCLUDE Platform.inc
  INCLUDE Ia32.inc
  INCLUDE Chipset.inc
  INCLUDE SecCore.inc
  
  include token.equ	; Denverton AptioV Override - EIP#303338

.686p
.xmm
.model small, c

;PUBLIC  TopOfCar
EXTRN   SecStartup:NEAR
;EXTRN   MicrocodeStart:DWORD
;EXTRN   MicrocodeEnd:DWORD

EXTRN   _gPcd_FixedAtBuild_PcdNemCodeCacheBase:DWORD
EXTRN   _gPcd_FixedAtBuild_PcdNemCodeCacheSize:DWORD
EXTRN   _gPcd_FixedAtBuild_PcdTemporaryRamBase:DWORD
EXTRN   _gPcd_FixedAtBuild_PcdTemporaryRamSize:DWORD
EXTRN   _gPcd_FixedAtBuild_PcdPciExpressBaseAddress:QWORD
EXTRN   _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress:QWORD
EXTRN   _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize:QWORD

; Denverton AptioV Override Start - EIP#303338
FV_LENGTH		EQU (16 + 16)
FV_SIGNATURE    EQU (FV_LENGTH + 8)
FV_HDR_LENGTH	EQU (FV_SIGNATURE + 4 + 4)
FV_EXT_HDR_OFFSET EQU (FV_HDR_LENGTH + 2 + 2)

FV_EXT_HDR_SIZE EQU 16

FFS_TYPE        EQU (16 + 2)
FFS_LENGTH      EQU (FFS_TYPE + 1 + 1)
FFS_HDR_LENGTH	EQU (FFS_LENGTH + 3 + 1)

uCODE_CPU_SIGNATURE	EQU 12
uCODE_CPU_FLAGS		EQU	24
uCODE_DATA_SIZE		EQU	28
uCODE_TOTAL_SIZE	EQU	32
; Denverton AptioV Override End - EIP#303338

_TEXT_REALMODE      SEGMENT PARA PUBLIC USE16 'CODE'
                    ASSUME  CS:_TEXT_REALMODE, DS:_TEXT_REALMODE

;------------------------------------------------------------------------------
;
;  SEC "Security" Code module.
;
;  Transition to non-paged flat-model protected mode from a
;  hard-coded GDT that provides exactly two descriptors.
;  This is a bare bones transition to protected mode only
;  used for while in PEI and possibly DXE.
;
;  IA32 specific cache as RAM modules
;
;  After enabling protected mode, a far jump is executed to
;  TransferToPEI using the newly loaded GDT.
;  This code also enables the Cache-as-RAM
;
;  RETURNS:    none
;
;  MMX Usage:
;              MM0 = BIST State
;              MM1 = Current Package Physical Info
;                    [7:0]   = Cluster ID
;                    [15:8]  = Total Prossor pacakge detected in system
;                    [16] = BAD CMOS Flag
;                    [17] = AuburnDale or ClarksField
;                           [0] = AuburnDale
;                           [1] = ClarksField
;                    [18] = Contain SEC reset flag
;                           CPU Only Reset Flag
;                    [19] = Contain SEC reset flag
;                           Power Good Reset Flag
;                    [23:20] = Reserved
;                    [31:24] = Reserved
;              MM2 = store common MAX & MIN ratio
;              MM3 = Patch Revision
;              MM4 = Patch Pointer
;              MM5 = Reserved
;              MM6 = Reserved
;              MM7 = Used in CALL_MMX & RET_ESI micaro
;
;------------------------------------------------------------------------------

; Nehalem Reset Boot Flow Start

align 4
_ModuleEntryPoint PROC NEAR C PUBLIC
  ;
  ; Save BIST state in MM0
  ;
  ;jmp $
  nop
  nop
  nop
  
  fninit                                ; clear any pending Floating point exceptions
  movd    mm0, eax
  cli

  ;
  ; Enter Protected mode.
  ; 
  STATUS_CODE (01h)                     ; BSP_PROTECTED_MODE_START,  BXT - CHECKPOINT: 01 (0 milliseconds)
  ;jmp $
  nop
  nop
  nop
  
  mov     esi,  OFFSET GdtDesc
  DB      66h
  lgdt    fword ptr cs:[si]
  mov     eax, cr0                      ; Get control register 0
  or      eax, 00000003h                ; Set PE bit (bit #0) & MP bit (bit #1)
  mov     cr0, eax                      ; Activate protected mode
  mov     eax, cr4                      ; Get control register 4
  or      eax, 00000600h                ; Set OSFXSR bit (bit #9) & OSXMMEXCPT bit (bit #10)
  mov     cr4, eax

  ;
  ; Now we're in Protected16
  ; Set up the selectors for protected mode entry
  ;
  mov     ax, SYS_DATA_SEL
  mov     ds, ax
  mov     es, ax
  mov     fs, ax
  mov     gs, ax
  mov     ss, ax

  ;
  ; Go to Protected32
  ;
  mov     esi, offset NemInitLinearAddress
  jmp     fword ptr cs:[si]

TightLoop:
  cli
  hlt
  jmp     TightLoop

_ModuleEntryPoint ENDP
_TEXT_REALMODE      ENDS

_TEXT_PROTECTED_MODE      SEGMENT PARA PUBLIC USE32 'CODE'
                          ASSUME  CS:_TEXT_PROTECTED_MODE, DS:_TEXT_PROTECTED_MODE

; Denverton AptioV Override Start - EIP#303338
MICOCODE_FFS_GUID label dword
	dd	17088572h
	dw	377Fh
	dw	44efh
	db	8Fh,4Eh,0B0h,9Fh,0FFh,46h,0A0h,70h
; Denverton AptioV Override End - EIP#303338

CALL_MMX macro   RoutineLabel

  local   ReturnAddress
  mov     esi, offset ReturnAddress
  movd    mm7, esi                      ; save ReturnAddress into MM7
  jmp     RoutineLabel
ReturnAddress:

endm

RET_ESI  macro

  movd    esi, mm7                      ; restore ESP from MM7
  jmp     esi

endm

CALL_EBP macro   RoutineLabel

  local   ReturnAddress
  mov     ebp, offset ReturnAddress
  jmp     RoutineLabel
ReturnAddress:

endm

RET_EBP  macro

  jmp     ebp                           ; restore ESP from EBP

endm

align 4
ProtectedModeSECStart PROC NEAR PUBLIC

  STATUS_CODE (02h)
  STATUS_CODE (03h)

  CALL_MMX  PlatformInitialization
  STATUS_CODE (04h)

  STATUS_CODE (09h)
  CALL_MMX  InitializeNEM

  STATUS_CODE (0Ah)
  CALL_MMX  EstablishStack         ; For CPU SV

  STATUS_CODE (0Bh)
  
  jmp  CallPeiCoreEntryPoint

ProtectedModeSECStart ENDP

ProtectedModeEntryPoint PROC NEAR PUBLIC

  RET_ESI

ProtectedModeEntryPoint  ENDP

; Denverton AptioV Override Start - EIP#303338
FindMicrocode proc
IF  MKF_MICROCODE_SPLIT_BB_UPDATE
    mov     ebx, MKF_FV_MICROCODE_UPDATE_BASE
FindMicrocodeFv:
ELSE
    mov     ebx, MKF_FV_MICROCODE_BASE
ENDIF
	mov		edx, ebx
    cmp     dword ptr [edx + FV_SIGNATURE], 'HVF_'
    jne     Microcode_Not_Found             ;Corrupt FV?
	mov		eax, [edx + FV_HDR_LENGTH]
	and		eax, 0ffffh		;Get 16 bit FV header length
	add		ebx,  eax		;ebx = start of FFS
    jc      Microcode_Not_Found             ;Corrupt FV?

	movzx   eax, word ptr [edx + FV_EXT_HDR_OFFSET]	;Optional Header
    cmp ax, 0								;Optional exteneded header ?
	je  @f
	lea eax, [edx + eax]					;eax = extended header

	mov ecx, [eax + FV_EXT_HDR_SIZE]		;ecx = extended header size
	mov ebx, eax
	add ebx, ecx
	jc  Microcode_Not_Found                 ;Corrupt FV?
@@:

	add		ebx, 7							;Align to 8-bytes for FFs
	and		ebx, not 7

	add		edx, [edx + FV_LENGTH]			;edx = end of FV.
    jz      @f                              ;zf if Boot Block
    jc      Microcode_Not_Found             ;Corrupt FV?
@@:
    dec     edx                             ;edx = End of FFS

;---Find File ---
;ebx = Start of FFS
;edx = End of FFS
Get_Next_File:
    cmp     byte ptr [ebx + FFS_TYPE], 0f0h ;iqnore guid for pad type
    je  @f
	cmp		dword ptr [ebx], -1		;Is in end of files, but not firmware volume.
	je		File_not_found
@@:
	mov		ecx, 4
	mov		esi, ebx
	mov		edi, offset MICOCODE_FFS_GUID
	;compare file guid
	repe 	cmpsd
	je		Found_File
;---get next file--
	;get file length and add to ebx
	mov		eax, [ebx + FFS_LENGTH]
	and		eax, 0ffffffh			;eax = File length (24 bits)
	add		ebx, eax				;next file
	;align file
	add		ebx, 7
    jc      Microcode_Not_Found     ;Check for wrap-around if bad data.
	and		ebx, not 7

    mov     eax, ebx
    add     eax, FFS_HDR_LENGTH     ;eax is microcode data
    cmp     eax, edx                ;Is end of firmware volume?
	jb		Get_Next_File
File_not_found:
    jmp     Microcode_Not_Found
;---Found File---
Found_File:
;ebx = Start of Microcode FFS
;edx = End of FFS + 1

;---Search micocode for match.---
	mov		edi, ebx

	mov		eax, [ebx + FFS_LENGTH]
	and		eax, 0ffffffh			;eax = File length (24 bits)
	add		edi, eax				;edi = end of file
    jc      Microcode_Not_Found     ;Check for wrap-around if bad data.

IF MKF_MPDTable_CREATED
    movzx   eax, word ptr [edi-2]           ;eax = MPDT length
    sub     edi, eax                        ;edi = end of microcodes.
ENDIF

	add		ebx, FFS_HDR_LENGTH
    jc      Microcode_Not_Found     ;Check for wrap-around if bad data.

	mov		esi, ebx

    mov     eax, 1
    cpuid
    mov		ebx, eax	;ebx = CPU signature

	mov		ecx, 17h
	rdmsr				;read CPUS flags

	shr		edx, 18
	and		dl, 7		;dl = CPU FLAG
	mov		cl, dl
	mov		dl, 1
	shl		dl, cl		;dl = bit set for CPU flag

    xchg    ebx, esi    ;ebx = ptr, esi = signature
Next_Microcode:
	cmp		ebx, edi                ;Check to see if microcode at end of FFS File.
	jae		Microcode_Not_Found

	cmp		dword ptr [ebx], 1 ;Check if correct header revision
	jne		Microcode_Not_Found

	mov		ecx, 2048	;total size if data size in field = 0.
	cmp		dword ptr [ebx + uCODE_DATA_SIZE], 0
	jz		@f
	mov		ecx, [ebx + uCODE_TOTAL_SIZE]	;Get total size.
@@:

	cmp		esi, [ebx + uCODE_CPU_SIGNATURE]
	jne		Find_Next_Microcode  ;Extended signature check not required

        mov     eax, ebx                        ;Store uC addr in eax, so if jnz succeeds.
	test	dl, [ebx + uCODE_CPU_FLAGS]     ;uC flags match?
	jnz		Exit_Find_Microcode
Find_Next_Microcode:
    ;align to next block size
IF MKF_PACK_MICROCODE
    add     ecx, 15
    and     ecx, 0fffffff0h
ELSE
    add     ecx, MKF_MICROCODE_BLOCK_SIZE - 1
    and     ecx, NOT (MKF_MICROCODE_BLOCK_SIZE - 1)
ENDIF
	add		ebx, ecx
    jc      Microcode_Not_Found             ;Overflow - bad data.
	jmp		Next_Microcode

Microcode_Not_Found:
IF  MKF_MICROCODE_SPLIT_BB_UPDATE
    cmp     ebx, MKF_FV_MICROCODE_BASE
    jae     @f
    mov     ebx, MKF_FV_MICROCODE_BASE
    jmp     FindMicrocodeFv
@@:
ENDIF
	xor		eax, eax
Exit_Find_Microcode:
jmp FindMicrocodeEnd
FindMicrocode endp
; Denverton AptioV Override End - EIP#303338


UpdateMicrocode    PROC    NEAR    PRIVATE

; Find and Load the microcode update

; Denverton AptioV Override Start - EIP#249361

; Use "Intel Microcode" of AMI, to place microcode inside FV_MAIN/FV_BB and load from there, dynamically.

  ;
  ; Get the PLATFORM_ID[52:50] (i.e., MSR 17, bits 52:50) 
  ;
;  mov     ecx, IA32_PLATFORM_ID         ; Load the platform ID
;  rdmsr
;  shr     edx, (50-32)                  ; We are only looking for bits 52:50
;  and     edx, 07h                      ; Mask the platform ID bits
;  mov     esi, 0
;  bts     esi, edx                      ; Processor Flag bit (i.e., 1 << PLATFORM_ID) to test against
 
;  mov     eax, 1
;  cpuid
;  and     eax, 0FFF3FFFh                ; Save Processor Signature (i.e., CPUID) in eax

;  assume  edi:near ptr UpdateHeaderStruc
  
;  mov     edi, DWORD PTR _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress  ; edi = Start address of ucode region

;FindUcodeMatch:

  ;
  ; Check the Microcode Update Header Version, should be 0x00000001
  ;
;  cmp     DWORD PTR [edi].dHeaderVersion, 1
;  jnz     InvalidHeaderVersion
  
  ;
  ; Check if the Processor Signature (i.e., CPUID) matches
  ;
;  cmp     eax, DWORD PTR [edi].dProcessorSignature 
;  jnz     NoUcodeMatch

  ;
  ; Check if the platform ID bit matches
  ;
;  and     esi, DWORD PTR [edi].dProcessorFlags
;  jnz     LoadUcode

;NoUcodeMatch:
;  mov     ebx, DWORD PTR [edi].dTotalSize
;  cmp     ebx, 0                        ; Use dTotalSize if it was specified
;  jne     NextMicrocodeUpdate
;  mov     ebx, 2048                     ; Use the legacy size of 2048 when dTotalSize is not specified
;  jmp     NextMicrocodeUpdate  

;InvalidHeaderVersion:
;  mov     ebx, 1024                     ; No valid Header Version, scan on the next 1K offset for a microcode update.
  
;NextMicrocodeUpdate:
;  add     edi, ebx
;  mov     ebx, DWORD PTR _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress
;  add     ebx, DWORD PTR _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize
;  cmp     edi, ebx
;  jae     EndUcodeLoad                  ;Jif address is outside of ucode region

;  jmp     FindUcodeMatch
  
;LoadUcode:  
;  mov     esi, DWORD PTR [edi].dUpdateRevision     

  ;
  ; Find and Load the microcode update
  ;

  jmp     FindMicrocode             ; Denverton AptioV Override - EIP#336766

FindMicrocodeEnd::
  ;
  ; Check if microcode is found
  ;
    or     eax, eax
    jz     EndUcodeLoad             ;No microcode found

FoundMicrocode: 
; Denverton AptioV Override End - EIP#249361

; Denverton AptioV Override Start - EIP#293996

  ; Store UpdateRevision of the microcode found, to check after update
  mov    esi, [eax + uCODE_UPDATE_REVISION] 
  
; Denverton AptioV Override End - EIP#293996
      
  ;
  ; Update the microcode
  ;
  mov     ecx, IA32_BIOS_UPDT_TRIG
;  mov     eax, edi		; Denverton AptioV Override - EIP#249361
  add     eax, sizeof UpdateHeaderStruc 
  xor     edx, edx
  wrmsr                                 ; Execute the uCode update load
  
  ;
  ; Check whether the update is successful
  ;        
  mov     ecx, IA32_BIOS_SIGN_ID
  xor     eax, eax
  xor     edx, edx
  wrmsr                                 ; Clear the uCode signature
  
  mov     eax, 1
  cpuid                                 ; Executing CPUID.(EAX=1) forces the uCode signature to be reloaded
  
  mov     ecx, IA32_BIOS_SIGN_ID
  rdmsr
  cmp     edx, esi                      ; if the equal, the microcode successfully loaded.
  jz      EndUcodeLoad
  
  ;
  ; Update failed
  ; 
  mov     al,  0EEh
  out     080h, al
;  jmp     $                            ; Indicate failure, but NEVER halt the system because Microcode fails to load!

EndUcodeLoad:
  assume  edi:nothing

  RET_EBP

UpdateMicrocode  ENDP

PlatformInitialization    PROC    NEAR    PRIVATE

  ;
  ; Program PCIEXBAR and enable it in 0/0/0 
  ; Lo - Offset 0x60
  ; Hi - Offset 0x64
  ;
  
  mov      eax, 080000060h
  mov      dx,  0CF8h
  out      dx,  eax
  mov      eax, DWORD PTR _gPcd_FixedAtBuild_PcdPciExpressBaseAddress 
  add      eax, CPU_HEC_EN     
  mov      dx,  0CFCh
  out      dx,  eax

  ;
  ; Program and enable MCH base address.
  ;
  mov     edi, R_MCH_BASE
  mov     Dword Ptr [edi], MCH_BASE_ADDRESS + B_MCH_BASE_ADDRESS_EN

  ;
  ;   WA for Ax steppings.
  ;   Unset bit B_CR_BMCMODE_LOW.MC_SIGNAL_MODE (MCHBAR + 0x6E48[0]).
  ;   This will allow for the NEM setup loop to complete without hanging.
  ;

  ;
  ;   Test for Ax stepping first
  ;
  mov    eax, R_CUNIT_MANID
  mov    ebx, DWORD PTR [eax]
  and    ebx, CUNIT_MANID_MSID_MASK
  cmp    ebx, V_CUNIT_MANID_MSID_B_STEPPING
  jge    @F

  ;
  ;   Unset BMCMODE.MC_SIGNAL_MODE bit
  ;
  mov    edi, MCH_BASE_ADDRESS + R_MCH_BMCMODE
  mov    eax, DWORD PTR [edi]
  and    eax, NOT (B_MCH_BMCMODE_MC_SIGNAL)
  mov    DWORD PTR [edi], eax

@@:
  ;
  ; Update the microcode on the BSP.
  ;

  CALL_EBP UpdateMicrocode

  ;
  ; Program and enable all known base addresses
  ;

  ;
  ; Program and enable SPI base address.
  ;
  mov     edi, R_PCH_LPC_SPI_BASE
  mov     Dword Ptr [edi], SPI_BASE_ADDRESS

  mov     edi, SPI_CFG_BASE + R_PCI_CMD
  mov     Byte Ptr [edi], B_PCI_CMD_MSE
  ;
  ; Program and enable PMC base address.
  ;
  mov     edi, R_PCH_LPC_PMC_BASE
  mov     Dword Ptr [edi], PMC_BASE_ADDRESS

  mov     edi, R_PCH_LPC_PMC_ACTL
  or      Dword Ptr [edi], B_PCH_PMC_ACTL_BASE_EN

  ;
  ; Program and enable SBREG base address.
  ;
  mov     edi, R_P2SB_SBREG_BASE
  mov     Dword Ptr [edi], SBREG_BASE_ADDRESS

  mov     edi, P2SB_CFG_BASE + R_PCI_CMD
  mov     Byte Ptr [edi], B_PCI_CMD_MSE
  ;
  ; Program and enable ACPI base address.
  ;
  mov     edi, R_PCH_LPC_ACPI_BASE
  mov     Dword Ptr [edi], ACPI_BASE_ADDRESS

  mov     edi, R_PCH_LPC_PMC_ACTL
  or      Dword Ptr [edi], B_PCH_PMC_ACTL_ACPI_EN
  
  ;
  ; Program SMBus IO base address.
  ;
  mov     edi, R_PCH_SMBUS_BASE
  mov     Word Ptr [edi], SMBUS_BASE_ADDRESS

  ;
  ; Enable SMBus IO space.
  ;
  mov     edi, SMBUS_CFG_BASE + R_PCI_CMD
  mov     Byte Ptr [edi], B_PCI_CMD_IOSE

  ;
  ; End program and enable all known base addresses
  ;

  ;
  ; HPET memory address enable
  ;

  mov     edi, R_PCH_P2SB_HPTC
  mov     Byte Ptr [edi], HPTC_AE
	
  ;
  ; Check SUS Well Power Failure and General Reset Status to take right boot path
  ;
  mov     edi, PMC_CFG_BASE + R_PCH_PMC_GEN_PMCON_B        ; PMC_BASE_ADDRESS + R_PCH_PMC_GEN_PMCON_B
  mov     ax,  WORD PTR [edi]
  and     ax,  NOT (B_PCH_PMC_GEN_PMCON_B_PWR_FLR)
  mov     WORD PTR [edi], ax                               ; clear B_PCH_PMC_GEN_PMCON_SUS_PWR_FLR and B_PCH_PMC_GEN_PMCON_HOST_RST_STS
  mov     cx, ax                                           ; Save
  test    ax,  4000h                                       ; B_PCH_PMC_GEN_PMCON_SUS_PWR_FLR
  jnz     force_cold_boot_path		
  test    ax,  0200h                                       ; B_PCH_PMC_GEN_PMCON_GEN_RST_STS							
  jz      check_RTC_PWR_STS
  
  mov     edi, PMC_CFG_BASE + R_PCH_PMC_GEN_PMCON_A        ; PMC_BASE_ADDRESS + R_PCH_PMC_GEN_PMCON_A
  mov     eax,  DWORD PTR [edi]               
  test    eax,  00800000h                                  ; B_PCH_PMC_GEN_PMCON_DRAM_INIT
  jnz     check_RTC_PWR_STS                                ; DRAM initialization in progress

force_cold_boot_path:
  mov     dx, ACPI_BASE_ADDRESS + R_PCH_ACPI_PM1_CNT       ; ACPI_BASE_ADDRESS + R_PCH_ACPI_PM1_CNT
  in      ax, dx
  and     ax, NOT (01C00h)                                 ; V_PCH_ACPI_PM1_CNT_S5 ; Clear sleep type field SLP_TYP [12:10]
  out     dx, ax

check_RTC_PWR_STS:
  mov     ax, cx                                           ; restore
  test    ax, 004h                                         ; B_PCH_PMC_GEN_PMCON_RTC_PWR_STS
  jz      no_RTC_pwr_failure
    
  ;
  ; According to BIOS Specification, the following sequence must be programmed
  ; in order to ensure RTC state has been initialized.
  ;
  ; The System BIOS should execute the sequence below if the RTC_PWR_STS bit is set before memory initialization.
  ; This will ensure that the RTC state machine has been initialized.
  ;  1. If the RTC_PWR_STS bit is set, steps 2 through 9 should be executed.
  ;  2. Set RTC register A to 0x70.
  ;  3. Set RTC register B to 0x80.
  ;  4. Set RTC register A to 0x20.
  ;  5. Set RTC register B to 0x0 once Time/Date set..
  ;  6. Set RTC register D to 0x0.
  ;  7. Clear INTRUDER status in TCO2_STS register.
  ;  8. Set RTC CONFIG register(SBREG+0x3400) to 0x80000004.
  ;  9. Set BUC register(SBREG+0x3414) to 0001000Sb, S=top swap strap.
    
init_RTC_state_machine:
    
  ;
  ; 2. Set RTC register A to 0x70
  ;
  mov     al, 0Ah
  out     070h, al
  nop                  ; Delay
  nop                  ; Delay
  mov     al, 076h     ; Denverton AptioV override - EIP#_571057
  out     071h, al
  nop                  ; Delay
  nop                  ; Delay

  ;
  ; 3. Set RTC register B to 0x80.
  ;
  mov     al, 0Bh
  out     070h, al
  nop                  ; Delay
  nop                  ; Delay
  in      al, 071h
  nop                  ; Delay
  nop                  ; Delay
  or      al, 080h
  out     071h, al
  nop                  ; Delay
  nop                  ; Delay

  ;
  ; 4. Set RTC register A to 0x20.
  ;
  mov     al, 0Ah
  out     070h, al
  nop                  ; Delay
  nop                  ; Delay
  mov     al, 026h
  out     071h, al
  nop                  ; Delay
  nop                  ; Delay

  ;
  ; 5. Set RTC register B to 0x0 once Time/Date set.
  ;
  mov     al, 0Bh
  out     070h, al
  nop                  ; Delay
  nop                  ; Delay
  in      al, 071h
  nop                  ; Delay
  nop                  ; Delay
  mov     al, 0h       ; Denverton AptioV override - EIP#_571057
  out     071h, al
  nop                  ; Delay
  nop                  ; Delay

;
; Denverton AptioV override start - EIP#523116
;
  ;
  ; Set RTC register D to 0x0.
  ;
  mov     al, 0Dh
  out     070h, al 
  nop                  ; Delay
  nop                  ; Delay
  mov     al, 00h
  out     071h, al
  nop                  ; Delay
  nop                  ; Delay
  
  ;
  ; Clear INTRUDER status in TCO2_STS register.
  ;
  mov     dx, PCH_TCO_BASE_ADDRESS + R_PCH_TCO2_STS
  in      ax, dx
  or      ax, 01h
  out     dx, ax
  
  ;
  ; Set RTC CONFIG register(SBREG+0x3400) to 0x80000004
  ;
  mov     edi, PCH_PCR_BASE_ADDRESS + PID_RTC + R_PCH_PCR_RTC_CONF
  and     Dword Ptr [edi], 00000000h
  or      Dword Ptr [edi], 80000004h
  
  ;
  ; Set BUC register(SBREG+0x3414) to 0001000Sb, S=top swap strap.
  ;
  mov     edi, LPC_CFG_BASE + R_PCH_LPC_BC
  mov     eax, Dword Ptr [edi]
  and     eax, 00000010h
  cmp     eax, 00000010h
  jne     no_TS_Enabled
  mov     edi, PCH_PCR_BASE_ADDRESS + PID_RTC + R_PCH_PCR_RTC_BUC
  and     Byte Ptr [edi], 00h 
  or      Byte Ptr [edi], 11h
  jmp     no_RTC_pwr_failure
  
no_TS_Enabled:
  
  mov     edi, PCH_PCR_BASE_ADDRESS + PID_RTC + R_PCH_PCR_RTC_BUC
  and     Byte Ptr [edi], 00h
  or      Byte Ptr [edi], 10h
  
;
; Denverton AptioV override end - EIP#523116
;
no_RTC_pwr_failure:
  ;
  ; Enable SPI Prefetch
  ;
  mov   	edi, SPI_CFG_BASE + R_PCH_SPI_BCR           ; SPI_BASE_ADDRESS BIOS Control Register
  or    	Dword Ptr [edi], 08h		            ; Bits [3:2] = '10' - enable prefetching and caching.

  ;
  ; Program 8259 Interrupt Controller to disable all interrupts
  ;
  mov     al, 0FFh
  out     21h, al     ; Mask off all interrupts in master 8259
  out     0a1h, al    ; Mask off all interrupts in slave 8259

  ;;; DNV_TODO: TCO registers are not in the spec.
  ;
  ; Halt TCO Timer
  ;
  ;mov     edi, ACPI_BASE_ADDRESS + R_PCH_TCO_CNT
  ;mov     ax,  WORD PTR [edi]
  ;or      ax, B_PCH_TCO_CNT_TMR_HLT
  ;mov     WORD PTR [edi], ax

  ;
  ; Clear the Second Timeout Status bit by writing 1
  ;
  ;mov     edi, ACPI_BASE_ADDRESS + R_PCH_TCO_STS
  ;mov     eax,  DWORD PTR [edi]
  ;or      eax, B_PCH_TCO_STS_SECOND_TO
  ;mov     DWORD PTR [edi], eax

  ;
  ; Enable SMBUS Host Controller and SPD write disable
  ;
  mov     edi, SMBUS_CFG_BASE + R_PCH_SMBUS_HOSTC
;G160-012(2)  mov     al,  011h                                        ; B_PCH_SMBUS_HOSTC_HST_EN | R_PCH_SMBUS_HOSTC[4]
  mov     al,  001h                                        ;G160-012(2) B_PCH_SMBUS_HOSTC_HST_EN
  mov     Byte Ptr [edi], al

  mov     dx,  SMBUS_BASE_ADDRESS + R_PCH_SMBUS_AUXC
  xor     al,  al
  out     dx,  al

  ;
  ; Check to see if 0xCF9 Global Reset bit is set. if set clear it.
  ;
  mov     edi, PMC_CFG_BASE + R_PCH_PMC_ETR3
  mov     eax, DWORD PTR [edi]
  test    eax, B_PCH_PMC_ETR3_CF9GR                        ; B_PCH_PMC_PMIR_CF9GR  ; Check whether 0xCF9 Global Reset bit is set
  jz      GlobalresetClear                                 ; If no, continue
  and     eax, NOT (B_PCH_PMC_ETR3_CF9GR)                  ; B_PCH_PMC_PMIR_CF9GR  ; Clear 0xCF9 Global Reset bit
  mov     DWORD PTR [edi], eax

GlobalresetClear:
  ;
  ; Clear HPET Timer 0 Lower and Upper Comparator Value.
  ;

  xor     eax, eax
  mov     esi, HPET_COMP_1
  mov     Dword Ptr [esi], eax
  mov     esi, HPET_COMP_2
  mov     Dword ptr [esi], eax

  ;
  ; Enable Devices
  ;
  mov	dx,0cf8h
  mov	eax,80000054h
  out	dx,eax
  add	dx,4
  mov	eax,0ffffffffh
  out	dx,eax

  RET_ESI

PlatformInitialization    ENDP

;  STATUS_CODE (07h)
VeryEarlyMicrocodeUpdate    PROC    NEAR    PRIVATE

    RET_EBP
    
VeryEarlyMicrocodeUpdate    ENDP


;  STATUS_CODE (09h)
;************************************************************
; Description:
;
;   This function initializes the Cache for Data, Stack, and Code
;   as specified in the  BIOS Writer's Guide.
;************************************************************
InitializeNEM    PROC    NEAR    PRIVATE

  ;
  ;  Enable cache for use as stack and for caching code
  ;  The algorithm is specified in the processor BIOS writer's guide
  ;

  ;
  ;  Ensure that the system is in flat 32 bit protected mode. 
  ;
  ;  Platform Specific - configured earlier
  ;
  ;  Ensure that only one logical processor in the system is the BSP.
  ;  (Required step for clustered systems).
  ;
  ;  Platform Specific - configured earlier
  
  ;  Ensure all APs are in the Wait for SIPI state.
  ;  This includes all other logical processors in the same physical processor
  ;  as the BSP and all logical processors in other physical processors.
  ;  If any APs are awake, the BIOS must put them back into the Wait for
  ;  SIPI state by issuing a broadcast INIT IPI to all excluding self.
  ;
  mov     edi, APIC_ICR_LO               ; 0FEE00300h - Send INIT IPI to all excluding self 
  mov     eax, ORAllButSelf + ORSelfINIT ; 0000C4500h
  mov     [edi], eax

@@:
  mov     eax, [edi]
  bt      eax, 12                       ; Check if send is in progress
  jc      @B                            ; Loop until idle

  ;
  ;   Load microcode update into BSP.
  ;
  ;   Ensure that all variable-range MTRR valid flags are clear and 
  ;   IA32_MTRR_DEF_TYPE MSR E flag is clear.  Note: This is the default state
  ;   after hardware reset.
  ;
  ;   Platform Specific - MTRR are usually in default state.
  ;

  ;
  ;   Initialize all fixed-range and variable-range MTRR register fields to 0.
  ;
   mov   ecx, IA32_MTRR_CAP         ; get variable MTRR support
   rdmsr
   movzx ebx, al                    ; EBX = number of variable MTRR pairs
   shl   ebx, 2                     ; *4 for Base/Mask pair and WORD size
   add   ebx, MtrrCountFixed * 2    ; EBX = size of  Fixed and Variable MTRRs

   xor   eax, eax                       ; Clear the low dword to write
   xor   edx, edx                       ; Clear the high dword to write
   ;mov    ebx, MtrrCount * 2            ; ebx <- sizeof MtrrInitTable
InitMtrrLoop:
   add   ebx, -2
   movzx ecx, WORD PTR cs:MtrrInitTable[ebx]  ; ecx <- address of mtrr to zero
   wrmsr
   jnz   InitMtrrLoop                   ; loop through the whole table
  
  ;
  ;   Configure the default memory type to un-cacheable (UC) in the 
  ;   IA32_MTRR_DEF_TYPE MSR.
  ;
  mov     ecx, MTRR_DEF_TYPE            ; Load the MTRR default type index
  rdmsr
  and     eax, NOT (00000CFFh)          ; Clear the enable bits and def type UC.
  wrmsr
  
  ;
  ; Configure MTRR_PHYS_MASK_HIGH for proper addressing above 4GB
  ; based on the physical address size supported for this processor
  ; This is based on read from CPUID EAX = 080000008h, EAX bits [7:0]
  ; 
  ; Examples: 
  ;  MTRR_PHYS_MASK_HIGH = 00000000Fh  For 36 bit addressing
  ;  MTRR_PHYS_MASK_HIGH = 0000000FFh  For 40 bit addressing
  ;
  mov   eax, 80000008h                  ; Address sizes leaf
  cpuid  
  sub   al, 32
  movzx eax, al
  xor   esi, esi
  bts   esi, eax
  dec   esi                             ; esi <- MTRR_PHYS_MASK_HIGH

  ;   
  ;   Configure the DataStack region as write-back (WB) cacheable memory type
  ;   using the variable range MTRRs.
  ;

  ;
  ; Set the base address of the DataStack cache range
  ;
  mov     eax, _gPcd_FixedAtBuild_PcdTemporaryRamBase
  or      eax, MTRR_MEMORY_TYPE_WB
                                        ; Load the write-back cache value
  xor     edx, edx                      ; clear upper dword
  mov     ecx, MTRR_PHYS_BASE_0         ; Load the MTRR index
  wrmsr                                 ; the value in MTRR_PHYS_BASE_0
  
  ;
  ; Set the mask for the DataStack cache range
  ; Compute MTRR mask value:  Mask = NOT (Size - 1)
  ;
  mov  eax, _gPcd_FixedAtBuild_PcdTemporaryRamSize
  dec  eax
  not  eax
  or   eax, MTRR_PHYS_MASK_VALID
                                        ; turn on the Valid flag
  mov  edx, esi                         ; edx <- MTRR_PHYS_MASK_HIGH
  mov  ecx, MTRR_PHYS_MASK_0            ; For proper addressing above 4GB
  wrmsr                                 ; the value in MTRR_PHYS_BASE_0

  ;
  ;   Configure the BIOS code region as write-protected (WP) cacheable 
  ;   memory type using a single variable range MTRR.
  ;
  ;   Platform Specific - ensure region to cache meets MTRR requirements for 
  ;   size and alignment.
  ;

  ;
  ; Set the base address of the CodeRegion cache range
  ;
  mov     eax, _gPcd_FixedAtBuild_PcdNemCodeCacheSize
  mov     edi, _gPcd_FixedAtBuild_PcdNemCodeCacheBase

  ;
  ; Round up to page size
  ;
  mov     ecx, eax                      ; Save
  and     ecx, 0FFFF0000h               ; Number of pages in 64K
  and     eax, 0FFFFh                   ; Number of "less-than-page" bytes
  jz      Rounded
  mov     eax, 10000h                   ; Add the whole page size

Rounded:
  add     eax, ecx                      ; eax - rounded up code cache size

  ;
  ; Define "local" vars for this routine
  ; Note that mm0 is used to store BIST result for BSP,
  ; mm1 is used to store the number of processor and BSP APIC ID,
  ; mm2 is used to store common MAX & MIN ratio
  ;
  CODE_SIZE_TO_CACHE    TEXTEQU  <mm3>
  CODE_BASE_TO_CACHE    TEXTEQU  <mm4>
  NEXT_MTRR_INDEX       TEXTEQU  <mm5>
  NEXT_MTRR_SIZE        TEXTEQU  <mm6>
  ;
  ; Initialize "locals"
  ;
  sub     ecx, ecx
  movd    NEXT_MTRR_INDEX, ecx          ; Count from 0 but start from MTRR_PHYS_BASE_1

  ;
  ; Save remaining size to cache
  ;
  movd    CODE_SIZE_TO_CACHE, eax       ; Size of code cache region that must be cached
  movd    CODE_BASE_TO_CACHE, edi       ; Base code cache address

NextMtrr:
  ;
  ; Get remaining size to cache
  ;
  movd    eax, CODE_SIZE_TO_CACHE
  and     eax, eax
  jz      CodeRegionMtrrdone            ; If no left size - we are done
  ;
  ; Determine next size to cache.
  ; We start from bottom up. Use the following algorythm:
  ; 1. Get our own alignment. Max size we can cache equals to our alignment
  ; 2. Determine what is bigger - alignment or remaining size to cache.
  ;    If aligment is bigger - cache it.
  ;      Adjust remaing size to cache and base address
  ;      Loop to 1.
  ;    If remaining size to cache is bigger
  ;      Determine the biggest 2^N part of it and cache it.
  ;      Adjust remaing size to cache and base address
  ;      Loop to 1.
  ; 3. End when there is no left size to cache or no left MTRRs
  ;
  movd    edi, CODE_BASE_TO_CACHE
  bsf     ecx, edi                      ; Get index of lowest bit set in base address
  ;
  ; Convert index into size to be cached by next MTRR
  ;
  mov     edx, 1h
  shl     edx, cl                       ; Alignment is in edx
  cmp     edx, eax                      ; What is bigger, alignment or remaining size?
  jbe     gotSize                       ; JIf aligment is less
  ;
  ; Remaining size is bigger. Get the biggest part of it, 2^N in size
  ;
  bsr     ecx, eax                      ; Get index of highest set bit
  ;
  ; Convert index into size to be cached by next MTRR
  ;
  mov     edx, 1
  shl     edx, cl                       ; Size to cache

GotSize:
  mov     eax, edx
  movd    NEXT_MTRR_SIZE, eax           ; Save

  ;
  ; Compute MTRR mask value:  Mask = NOT (Size - 1)
  ;
  dec     eax                           ; eax - size to cache less one byte
  not     eax                           ; eax contains low 32 bits of mask
  or      eax, MTRR_PHYS_MASK_VALID     ; Set valid bit

  ;
  ; Program mask register
  ;
  mov     ecx, MTRR_PHYS_MASK_1         ; setup variable mtrr
  movd    ebx, NEXT_MTRR_INDEX
  add     ecx, ebx

  mov     edx, esi                      ; edx <- MTRR_PHYS_MASK_HIGH
  wrmsr
  ;
  ; Program base register
  ;
  sub     edx, edx
  mov     ecx, MTRR_PHYS_BASE_1         ; setup variable mtrr
  add     ecx, ebx                      ; ebx is still NEXT_MTRR_INDEX

  movd    eax, CODE_BASE_TO_CACHE
  or      eax, MTRR_MEMORY_TYPE_WP      ; set type to write protect
  wrmsr
  ;
  ; Advance and loop
  ; Reduce remaining size to cache
  ;
  movd    ebx, CODE_SIZE_TO_CACHE
  movd    eax, NEXT_MTRR_SIZE
  sub     ebx, eax
  movd    CODE_SIZE_TO_CACHE, ebx

  ;
  ; Increment MTRR index
  ;
  movd    ebx, NEXT_MTRR_INDEX
  add     ebx, 2
  movd    NEXT_MTRR_INDEX, ebx
  ;
  ; Increment base address to cache
  ;
  movd    ebx, CODE_BASE_TO_CACHE 
  movd    eax, NEXT_MTRR_SIZE
  add     ebx, eax
  movd    CODE_BASE_TO_CACHE, ebx 

  jmp     NextMtrr

CodeRegionMtrrdone:
;  ; Program the variable MTRR's MASK register for WDB
;  ; (Write Data Buffer, used in MRC, must be WC type)
;  ;
;  mov     ecx, MTRR_PHYS_MASK_1
;  movd    ebx, NEXT_MTRR_INDEX
;  add     ecx, ebx
;  mov     edx, esi                                          ; edx <- MTRR_PHYS_MASK_HIGH
;  mov     eax, WDB_REGION_SIZE_MASK OR MTRR_PHYS_MASK_VALID ; turn on the Valid flag
;  wrmsr

;  ;
;  ; Program the variable MTRR's BASE register for WDB
;  ;
;  dec     ecx
;  xor     edx, edx
;  mov     eax, WDB_REGION_BASE_ADDRESS OR MTRR_MEMORY_TYPE_WC
;  wrmsr

  ;
  ; Enable the MTRRs by setting the IA32_MTRR_DEF_TYPE MSR E flag.
  ;
  mov     ecx, MTRR_DEF_TYPE            ; Load the MTRR default type index
  rdmsr
  or      eax, MTRR_DEF_TYPE_E          ; Enable variable range MTRRs
  wrmsr

  ;
  ;   Enable the logical processor's (BSP) cache: execute INVD and set 
  ;   CR0.CD = 0, CR0.NW = 0.
  ;
  mov     eax, cr0
  and     eax, NOT (CR0_CACHE_DISABLE + CR0_NO_WRITE)
  invd
  mov     cr0, eax
  ;
  ;   Enable No-Eviction Mode Setup State by setting
  ;   NO_EVICT_MODE  MSR 2E0h bit [0] = '1'.
  ;
  mov     ecx, NO_EVICT_MODE 
  rdmsr
  or      eax, 1
  wrmsr

  ;
  ;   One location in each 64-byte cache line of the DataStack region
  ;   must be written to set all cache values to the modified state.
  ;
  mov     edi, _gPcd_FixedAtBuild_PcdTemporaryRamBase
  mov     ecx, _gPcd_FixedAtBuild_PcdTemporaryRamSize
  shr     ecx, 6
  mov     eax, CACHE_INIT_VALUE
@@:
  mov  [edi], eax
  sfence
  add  edi, 64
  loopd  @b

  ;
  ;   Enable No-Eviction Mode Run State by setting
  ;   NO_EVICT_MODE MSR 2E0h bit [1] = '1'.
  ;
  mov     ecx, NO_EVICT_MODE
  rdmsr
  or      eax, 2
  wrmsr

  ;
  ; Finished with cache configuration
  ;
  
  ;
  ; Optionally Test the Region...
  ;  
  
  ;
  ; Test area by writing and reading
  ;
  cld
  mov     edi, _gPcd_FixedAtBuild_PcdTemporaryRamBase
  mov     ecx, _gPcd_FixedAtBuild_PcdTemporaryRamSize 
  shr     ecx, 2
  mov     eax, CACHE_TEST_VALUE
TestDataStackArea:
  stosd
  cmp     eax, DWORD PTR [edi-4]
  jnz     DataStackTestFail
  loop    TestDataStackArea 
  jmp     DataStackTestPass

  ;
  ; Cache test failed
  ;
DataStackTestFail:
  STATUS_CODE (0D0h)
  jmp     $

  ;
  ; Configuration test failed
  ;
ConfigurationTestFailed:
  STATUS_CODE (0D1h)
  jmp     $

DataStackTestPass:

  ;
  ; At this point you may continue normal execution.  Typically this would include 
  ; reserving stack, initializing the stack pointer, etc.
  ;

  ;
  ; After memory initialization is complete, please follow the algorithm in the BIOS
  ; Writer's Guide to properly transition to a normal system configuration.
  ; The algorithm covers the required sequence to properly exit this mode.
  ;

  RET_ESI

InitializeNEM    ENDP

;  STATUS_CODE (09h)
EstablishStack    PROC    NEAR    PRIVATE

  ;
  ; Enable STACK
  ;
  ; To be programmed...
If 0     ; equate not defined
  mov     esp, _gPcd_FixedAtBuild_PcdTemporaryRamBase
  add     esp, _gPcd_FixedAtBuild_PcdTemporaryRamSize
  sub     esp, 4

  ; Pass NEM address into the PEI Core
  ;  push    PhysBase

  push    _gPcd_FixedAtBuild_PcdTemporaryRamBase

  ; Dispatch table

  push  -(LAST_ADDRESS - offset MICROCODE_DISPATCH_DESCRIPTOR)

  ; Pass stack size into the PEI Core
  push    _gPcd_FixedAtBuild_PcdTemporaryRamSize
endif
  RET_ESI

EstablishStack    ENDP

;  STATUS_CODE (0Bh)
CallPeiCoreEntryPoint   PROC    NEAR    PRIVATE
  ;
  ; Set stack top pointer
  ;
  mov     esp, _gPcd_FixedAtBuild_PcdTemporaryRamBase
  add     esp, _gPcd_FixedAtBuild_PcdTemporaryRamSize

  ;
  ; Push CPU count to stack first, then AP's (if there is one)
  ; BIST status, and then BSP's
  ;

  ;
  ; Here work around for BIST
  ; mm1 is not updated with correct BSP count.
  ; setting BSP count to 1.
  ;
  ;movd    ecx, mm1
  mov     ecx, 1

  ; Save number of BSPs
  push  ecx

GetSBSPBist:
  ; Save SBSP BIST 
  movd  eax, mm0 
  push  eax

  ; Save SBSP APIC ID
  movd  eax, mm1 
  shr   eax, BSPApicIDSaveStart               ; Resume APIC ID 
  push  eax

TransferToSecStartup:


  ; Switch to "C" code
  STATUS_CODE (0Ch)
  ;jmp $

  ;
  ; Pass entry point of the PEI core
  ;
  mov     edi, PEI_CORE_ENTRY_BASE      ; 0FFFFFFE0h
  push    DWORD PTR ds:[edi]

  ;
  ; Pass BFV into the PEI Core
  ;
  mov     edi, FV_MAIN_BASE             ; 0FFFFFFFCh
  push    DWORD PTR ds:[edi]

  ; ECPoverride: SecStartup entry point needs 4 parameters
  push    _gPcd_FixedAtBuild_PcdTemporaryRamBase

  ;
  ; Pass stack size into the PEI Core
  ;
  push    _gPcd_FixedAtBuild_PcdTemporaryRamSize

  ;
  ; Pass Control into the PEI Core
  ;
  call SecStartup
CallPeiCoreEntryPoint   ENDP

StartUpAp       PROC    NEAR

  mov     esi, HPET_COMP_2
  lock    inc  byte ptr [esi]

  DISABLE_CACHE
;
; Halt the AP and wait for the next SIPI
;
Ap_Halt:
  cli
@@:
  hlt
  jmp     @B
  ret
StartUpAp       ENDP

    
CheckValidCMOS    PROC    NEAR    PRIVATE
  ;
  ; Check CMOS Status
  ;
  mov     edi, PMC_CFG_BASE + R_PCH_PMC_GEN_PMCON_B
  mov     ax,  WORD PTR [edi]
  
  ; check PWR_FLR and RTC_PWR_STS status 
  and     ax, 0x00000004
   
  RET_EBP
CheckValidCMOS    ENDP

MtrrInitTable   LABEL BYTE
    DW  MTRR_DEF_TYPE
    DW  MTRR_FIX_64K_00000
    DW  MTRR_FIX_16K_80000
    DW  MTRR_FIX_16K_A0000
    DW  MTRR_FIX_4K_C0000
    DW  MTRR_FIX_4K_C8000
    DW  MTRR_FIX_4K_D0000
    DW  MTRR_FIX_4K_D8000
    DW  MTRR_FIX_4K_E0000
    DW  MTRR_FIX_4K_E8000
    DW  MTRR_FIX_4K_F0000
    DW  MTRR_FIX_4K_F8000

MtrrCountFixed EQU (($ - MtrrInitTable) / 2)

    DW  MTRR_PHYS_BASE_0
    DW  MTRR_PHYS_MASK_0
    DW  MTRR_PHYS_BASE_1
    DW  MTRR_PHYS_MASK_1
    DW  MTRR_PHYS_BASE_2
    DW  MTRR_PHYS_MASK_2
    DW  MTRR_PHYS_BASE_3
    DW  MTRR_PHYS_MASK_3
    DW  MTRR_PHYS_BASE_4
    DW  MTRR_PHYS_MASK_4
    DW  MTRR_PHYS_BASE_5
    DW  MTRR_PHYS_MASK_5
    DW  MTRR_PHYS_BASE_6
    DW  MTRR_PHYS_MASK_6
    DW  MTRR_PHYS_BASE_7
    DW  MTRR_PHYS_MASK_7
    DW  MTRR_PHYS_BASE_8
    DW  MTRR_PHYS_MASK_8
    DW  MTRR_PHYS_BASE_9
    DW  MTRR_PHYS_MASK_9
MtrrCount      EQU (($ - MtrrInitTable) / 2)

align 10h
PUBLIC  BootGDTtable

;
; GDT[0]: 0x00: Null entry, never used.
;
NULL_SEL        EQU $ - GDT_BASE        ; Selector [0]
GDT_BASE:
BootGDTtable        DD  0
                    DD  0
;
; Linear data segment descriptor
;
LINEAR_SEL      EQU $ - GDT_BASE        ; Selector [0x8]
    DW  0FFFFh                          ; limit 0xFFFFF
    DW  0                               ; base 0
    DB  0
    DB  092h                            ; present, ring 0, data, expand-up, writable
    DB  0CFh                            ; page-granular, 32-bit
    DB  0
;
; Linear code segment descriptor
;
LINEAR_CODE_SEL EQU $ - GDT_BASE        ; Selector [0x10]
    DW  0FFFFh                          ; limit 0xFFFFF
    DW  0                               ; base 0
    DB  0
    DB  09Bh                            ; present, ring 0, data, expand-up, not-writable
    DB  0CFh                            ; page-granular, 32-bit
    DB  0
;
; System data segment descriptor
;
SYS_DATA_SEL    EQU $ - GDT_BASE        ; Selector [0x18]
    DW  0FFFFh                          ; limit 0xFFFFF
    DW  0                               ; base 0
    DB  0
    DB  093h                            ; present, ring 0, data, expand-up, not-writable
    DB  0CFh                            ; page-granular, 32-bit
    DB  0

;
; System code segment descriptor
;
SYS_CODE_SEL    EQU $ - GDT_BASE        ; Selector [0x20]
    DW  0FFFFh                          ; limit 0xFFFFF
    DW  0                               ; base 0
    DB  0
    DB  09Ah                            ; present, ring 0, data, expand-up, writable
    DB  0CFh                            ; page-granular, 32-bit
    DB  0
;
; Spare segment descriptor
;
SYS16_CODE_SEL  EQU $ - GDT_BASE        ; Selector [0x28]
    DW  0FFFFh                          ; limit 0xFFFFF
    DW  0                               ; base 0
    DB  0Eh                             ; Changed from F000 to E000.
    DB  09Bh                            ; present, ring 0, code, expand-up, writable
    DB  00h                             ; byte-granular, 16-bit
    DB  0
;
; Spare segment descriptor
;
SYS16_DATA_SEL  EQU $ - GDT_BASE        ; Selector [0x30]
    DW  0FFFFh                          ; limit 0xFFFF
    DW  0                               ; base 0
    DB  0
    DB  093h                            ; present, ring 0, data, expand-up, not-writable
    DB  00h                             ; byte-granular, 16-bit
    DB  0

;
; Spare segment descriptor
;
SPARE5_SEL      EQU $ - GDT_BASE        ; Selector [0x38]
    DW  0                               ; limit 0
    DW  0                               ; base 0
    DB  0
    DB  0                               ; present, ring 0, data, expand-up, writable
    DB  0                               ; page-granular, 32-bit
    DB  0
GDT_SIZE        EQU $ - BootGDTtable    ; Size, in bytes

GdtDesc:                                ; GDT descriptor
OffsetGDTDesc   EQU $ - _ModuleEntryPoint
    DW  GDT_SIZE - 1                    ; GDT limit
    DD  OFFSET BootGDTtable             ; GDT base address

NemInitLinearAddress   LABEL   FWORD
NemInitLinearOffset    LABEL   DWORD
    DD  OFFSET ProtectedModeSECStart    ; Offset of our 32 bit code
    DW  LINEAR_CODE_SEL

;TopOfCar  DD  DATA_STACK_BASE_ADDRESS + DATA_STACK_SIZE

_TEXT_PROTECTED_MODE    ENDS
END

