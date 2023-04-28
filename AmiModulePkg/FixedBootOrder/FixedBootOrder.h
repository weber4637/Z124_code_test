//***********************************************************************
//*                                                                     *
//*                      Copyright (c) 1985-2021, AMI.                  *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************


/** @file FixedBootOrder.h

    Header file of FixedBootOrder module
*/

#ifndef _FIXED_BOOT_ORDER_H
#define _FIXED_BOOT_ORDER_H

#include <Token.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FIXED_BOOT_ORDER_GUID \
    { 0xc923ca9, 0xdf73, 0x4ac8, { 0xb6, 0xd2, 0x98, 0xdd, 0xc3, 0xd, 0x99, 0xfc } }

#ifndef VFRCOMPILE

#define FIXED_BOOT_ORDER_SETUP_GUID \
    { 0x7e07911a, 0x4807, 0x4b0f, { 0xa4, 0x74, 0xf5, 0x43, 0x1c, 0xa9, 0x07, 0xb4 } }

#define FIXED_BOOT_ORDER_BDS_GUID \
    { 0x9f6c0010, 0xb001, 0x43d4, { 0xa5, 0x26, 0x4c, 0x46, 0x28, 0x50, 0x76, 0x75 } }

#define DEFAULTS_GUID  \
  { 0x4599d26f, 0x1a11, 0x49b8, { 0xb9, 0x1f, 0x85, 0x87, 0x45, 0xcf, 0xf8, 0x24 } }

#define DEFAULT_LEGACY_DEV_ORDER_VARIABLE_GUID  \
  { 0x3c4ead08, 0x45ae, 0x4315, { 0x8d, 0x15, 0xa6, 0x0e, 0xaa, 0x8c, 0xaf, 0x69 } }

#define VARIABLE_ATTRIBUTES \
	(EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS | EFI_VARIABLE_RUNTIME_ACCESS)

#define FBO_BO_TAG_DEVICE_PATH_GUID \
    { 0x5ce8128b, 0x2cec, 0x40f0, { 0x83, 0x72, 0x80, 0x64, 0x0e, 0x3d, 0xc8, 0x58 } }

#define EMA_INDICATION_GUID \
    { 0xeb41d646, 0xf49f, 0x4655, { 0x91, 0x65, 0x21, 0xd1, 0x22, 0x4e, 0x39, 0x32 } }

#ifndef DEFAULT_BOOT_ORDER_VARIABLE_GUID
/// GUID Definition for the Boot Order Variable
#define DEFAULT_BOOT_ORDER_VARIABLE_GUID  \
  { 0x45cf35f6, 0x0d6e, 0x4d04, { 0x85, 0x6a, 0x03, 0x70, 0xa5, 0xb1, 0x6f, 0x53 } }
#endif

#ifndef TSE_MAX_DRIVE_NAME
#define TSE_MAX_DRIVE_NAME 32
#endif

#define BOOT_NV_ATTRIBUTES \
    (EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS)
#pragma pack(1)

typedef struct _FBODevMap {
	UINT16 DevType;
	UINT16 BBSType;
	UINT16 Port;
	UINT8 Attr;
}FBODevMap;

typedef struct _FBOHiiMap {
	UINT16 DevType;
	UINT16 StrToken;
	UINT16 FormID;
	UINT16 Label;
	UINT16 DeviceCountOffset;
}FBOHiiMap;

typedef struct{
	UINT32 Type;
	UINT16 Length;
	UINT16 StrToken[1]; 
}HII_DEVICE_INFO;

typedef struct{
	UINT32 Type;
	UINT16 Length;
	UINT32 Device[1];   // [31:24] contains disable flag (0xff = disabled)
}UEFI_DEVICE_ORDER;

typedef struct _FBO_GROUP_NAME{
  UINTN     LegacyDevType;
  CHAR16*   DeviceName;
} FBO_GROUP_NAME;

typedef struct _FBO_DEVICE_INFORM {
    CHAR16 *DevName;
    UINT16 DevType ;
    UINT16 DevPortNum ;
    UINT32 DevBDF ;
    EFI_DEVICE_PATH_PROTOCOL *DevPath;
    struct _FBO_DEVICE_INFORM *Next ;
} FBO_DEVICE_INFORM ;

typedef struct _FBO_GROUP_OPTION {
    UINT16 StrToken;
    CHAR16 *OrgGroupName ;
    CHAR16 *NewGroupName ;
    struct _FBO_GROUP_OPTION *Next ;
} FBO_GROUP_OPTION ;

typedef struct{
    VENDOR_DEVICE_PATH Header;
    UINT16 BoTag;
}FBO_BO_TAG_DEVICE_PATH;

typedef struct{
    UINT16  Option ;
    CHAR16  OptionName[TSE_MAX_DRIVE_NAME] ;
} OPTION_NAME_LIST;
#pragma pack()

VOID FboHandleAddBootOption(VOID) ;

//FBO Attr
#define F_USB 		0x02
#define F_USBKEY 	0x04
#define F_HDD       0x08

#define FixedBootOrderStratKey	FBO_ITEM_START_KEY
#define LegacyBootItemKey	FixedBootOrderStratKey
#define UefiBootItemKey		(FixedBootOrderStratKey+0x80)
#define DualBootItemKey		(FixedBootOrderStratKey+0x100)
#define LegacyForms_StartKey	(FixedBootOrderStratKey+0x200)
#define UefiForms_StartKey	(LegacyForms_StartKey+FIXED_BOOT_ORDER_TOTAL_DEVICES_MAX_NUM)

#if CORE_COMBINED_VERSION > 0x40280	//4.6.4.1 or Last
#define gBootName L"Boot%04X"
#else
#define gBootName L"Boot%04x"
#endif

// Calculate the number of orders in this group (DevOrder->Type)
#define DEVORDER_COUNT(DevOrder) (DevOrder->Length - sizeof(DevOrder->Length)) / sizeof(DevOrder->Device)
#define HII_TOKEN_COUNT(p) (p->Length - sizeof(p->Length)) / sizeof(p->StrToken)
#define NEXT_HII_DEVICE_INFO(p) (HII_DEVICE_INFO*)((UINT8*)p + p->Length + sizeof(p->Type))
#define NEXT_DEVICE(T, p) (T*)((UINT8*)p + p->Length + sizeof(p->Type))

#define FBO_LEGACY_DISABLED_MASK    0xff00      // LegacyDevOrder disabled flag mask
#define FBO_LEGACY_ORDER_MASK       0x00ff      // LegacyDevOrder valid BBS index mask
#define FBO_LEGACY_INVALID_ORDER    0xffff
#define FBO_UEFI_DISABLED_MASK      0xff000000  // UefiDevOrder disabled flag mask
#define FBO_UEFI_ORDER_MASK         0x0000ffff  // UefiDevOrde valid Boot number mask
#define FBO_UEFI_INVALID_ORDER      0xffffffff

#define FBO_USELESS_PORT_NUMBER 0xff

#define INVALID_FBO_TAG             0xffff

#define FBO_GROUP_TYPE_MAX_NUM      0xFF

#define FBO_CALLBACK_SHOW_HIDE_BBS_PRIORITY_SUBMENU  0x01

typedef EFI_STATUS (EFIAPI *LOAD_DEFAULT_STRING)();
typedef EFI_STATUS (EFIAPI *FBO_CALLBACK)(UINTN Action, VOID *Context);
typedef EFI_STATUS (EFIAPI *LOAD_PREVIOUS_STRING)(VOID *FixedBoot, BOOLEAN LoadedDefaultAndSaved);
typedef VOID (EFIAPI *UPDATE_LEGACY_HII_DEV_STRING)(UINT16 DevType, UINT8 INDEX);
typedef VOID (EFIAPI *UPDATE_UEFI_HII_DEV_STRING)(UINT16 DevType, UINT8 INDEX);
typedef EFI_STATUS (EFIAPI *INITIALIZE_FBO_HII)(VOID);
typedef EFI_STATUS (EFIAPI *SYNC_FIXEDBOOT_PRIORITIES)(VOID *Context);

typedef struct _EFI_FIXED_BOOT_ORDER_SETUP_PROTOCOL {
	LOAD_DEFAULT_STRING             load_default_string;
	LOAD_PREVIOUS_STRING            load_previous_string;
    FBO_CALLBACK                    Callback;
	UPDATE_LEGACY_HII_DEV_STRING    UpdateLegacyHiiDevString;
	UPDATE_UEFI_HII_DEV_STRING      UpdateUefiHiiDevString;
	INITIALIZE_FBO_HII              InitializeFboHii;
	SYNC_FIXEDBOOT_PRIORITIES       SyncFixedBootPriorities;
} EFI_FIXED_BOOT_ORDER_SETUP_PROTOCOL;


typedef EFI_STATUS (EFIAPI *FBOSetDevMap)(IN FBODevMap *p);
typedef EFI_STATUS (EFIAPI *FBOSetHiiMap)(IN FBOHiiMap *p);
typedef FBODevMap *(EFIAPI *FBOGetDevMap)(IN VOID);
typedef FBOHiiMap *(EFIAPI *FBOGetHiiMap)(IN VOID);
typedef EFI_STATUS (EFIAPI *FBOSetNewDescription)(IN FBO_DEVICE_INFORM *p);
typedef FBO_DEVICE_INFORM* (EFIAPI *FBOGetNewDescription)(IN VOID);

typedef struct _EFI_FIXED_BOOT_ORDER_PROTOCOL {
	FBOSetDevMap SetLegacyDevMap;
	FBOSetDevMap SetUefiDevMap;
	FBOSetDevMap SetDualDevMap;	
	FBOSetHiiMap SetHiiMap;
    FBOSetNewDescription SetNewDescription;
	FBOGetDevMap GetLegacyDevMap;
	FBOGetDevMap GetUefiDevMap;
	FBOGetDevMap GetDualDevMap;
	FBOGetHiiMap GetHiiMap;
    FBOGetNewDescription GetNewDescription;
} EFI_FIXED_BOOT_ORDER_PROTOCOL;

typedef UINT16 (EFIAPI *FBO_GET_LEGACY_TAG)(IN UINT16 BbsIdx);
typedef UINT32 (EFIAPI *FBO_GET_UEFI_TAG)(IN EFI_DEVICE_PATH_PROTOCOL *Dp);

typedef struct _EFI_FIXED_BOOT_ORDER_BDS_PROTOCOL {
    FBO_GET_LEGACY_TAG  GetLegacyTag;
    FBO_GET_UEFI_TAG    GetUefiTag;
} EFI_FIXED_BOOT_ORDER_BDS_PROTOCOL;

#endif	//#ifndef VFRCOMPILE

#define FBO_GROUP_FORM_FORM_SET_GUID \
    { 0xde8ab926, 0xefda, 0x4c23, 0xbb, 0xc4, 0x98, 0xfd, 0x29, 0xaa, 0x0, 0x69 }
#define FBO_GROUP_FORM_FORM_SET_CLASS 0x10

#pragma pack(1)
//This structure is used for FixedBootOrder Group priorities.
typedef struct {
#define FIXED_BOOT_ORDER_PRIORITIES_DATA
#include <Build/FixedBootOrderSetupData.h>
#undef FIXED_BOOT_ORDER_PRIORITIES_DATA
} FIXED_BOOT_PRIORITIES;

//This structure is used for setup.
typedef struct {
#define FIXED_BOOT_ORDER_SETUP_DATA
#include <Build/FixedBootOrderSetupData.h>
#undef FIXED_BOOT_ORDER_SETUP_DATA
} FIXED_BOOT_SETUP;

//This structure is used for FixedBootOrder Group control.
typedef struct {
#define FIXED_BOOT_ORDER_SETUP_GROUP_DATA
#include <Build/FixedBootOrderSetupData.h>
#undef FIXED_BOOT_ORDER_SETUP_GROUP_DATA
} FIXED_BOOT_GROUP;

//This structure is also used for FixedBootOrder Group control, 
//but it is used show / hide the submenu exclusively.
typedef struct {
#define FIXED_BOOT_ORDER_SETUP_GROUP_DATA
#include <Build/FixedBootOrderSetupData.h>
#undef FIXED_BOOT_ORDER_SETUP_GROUP_DATA
} FBO_SUBMENU_SHOW;
#pragma pack()

#ifdef __cplusplus
}
#endif


#endif  //#ifndef _FIXED_BOOT_ORDER_H
