//***********************************************************************
//*                                                                     *
//*                  Copyright (c) 1985-2022, AMI.                      *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************
#ifndef _FIXED_BOOT_ORDER_SYNC_H
#define _FIXED_BOOT_ORDER_SYNC_H
#ifdef __cplusplus
extern "C" {
#endif

// {25e31bfc-3c17-4565-aa1b-81b5bfc1aa82} 
#define FIXED_BOOT_ORDER_SYNC_GUID \
  { 0x25e31bfc, 0x3c17, 0x4565, {0xaa, 0x1b, 0x81, 0xb5, 0xbf, 0xc1, 0xaa, 0x82} }

typedef EFI_STATUS (EFIAPI *FBO_SYNC_BOOT_ORDER)();
typedef EFI_STATUS (EFIAPI *EFI_FBO_CONFIG_SET_DATA)();
typedef EFI_STATUS (EFIAPI *EFI_FBO_CONFIG_GET_DATA)();
typedef EFI_STATUS (EFIAPI *FBO_SYNC_TBD)();

typedef struct _EFI_FIXED_BOOT_ORDER_SYNC_PROTOCOL EFI_FIXED_BOOT_ORDER_SYNC_PROTOCOL;

#pragma pack(1)
typedef struct _FBO_CONFIG_OPTION_DATA
{
    UINT16          BootOptionNumber;
    UINTN           LoadOptionSize;
    EFI_LOAD_OPTION *LoadOption;
} FBO_CONFIG_OPTION_DATA;
#pragma pack()

typedef EFI_STATUS
(EFIAPI *EFI_FBO_CONFIG_SET_DATA) (
    IN UINT8      					*FboConfigOptionData,
    IN UINTN                        OptionSize,
    IN UINT16                       *FboConfigOrderData,
    IN UINTN                        OrderSize
) ;

typedef EFI_STATUS
(EFIAPI *EFI_FBO_CONFIG_GET_DATA) (
    OUT UINT8     					**FboConfigOptionData,
    OUT UINTN                       *OptionSize,
    OUT UINT16                      **FboConfigOrderData,
    OUT UINTN                       *OrderSize
) ;


struct _EFI_FIXED_BOOT_ORDER_SYNC_PROTOCOL {
    UINTN                           Version;
    FBO_SYNC_BOOT_ORDER             SyncFBOwithBootOrderAndOption;
    EFI_FBO_CONFIG_SET_DATA         SetData;
    EFI_FBO_CONFIG_GET_DATA         GetData;
};



/****** DO NOT WRITE BELOW THIS LINE *******/
#ifdef __cplusplus
}
#endif
#endif
