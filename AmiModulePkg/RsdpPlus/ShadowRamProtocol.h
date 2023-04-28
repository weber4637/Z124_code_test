//****************************************************************************
//****************************************************************************
//**                                                                        **
//**             (C)Copyright 1985-2012, American Megatrends, Inc.          **
//**                                                                        **
//**                          All Rights Reserved.                          **
//**                                                                        **
//**                 5555 Oakbrook Pkwy, Norcross, GA 30093                 **
//**                                                                        **
//**                          Phone (770)-246-8600                          **
//**                                                                        **
//****************************************************************************
//****************************************************************************

//****************************************************************************
// $Header: $
//
// $Revision: $
//
// $Date: $
//****************************************************************************

//<AMI_FHDR_START>
//-----------------------------------------------------------------------------
//
//  Name:           ShdowRamProtocol.h
//
//  Description:    Defined Shadow ram protocol GUID and functions.
//
//-----------------------------------------------------------------------------
//<AMI_FHDR_END>

#ifndef _SHADOW_RAM_PROTOCOL_H__
#define _SHADOW_RAM_PROTOCOL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define	SHADOW_RAM_PROTOCOL_GUID	\
	{0xa33319b5, 0x8ee1, 0x45e0, 0x8c, 0x9f, 0x80, 0x9f, 0x5b, 0x9, 0x2, 0xcc}

typedef
VOID
(EFIAPI *UPDATE_SHADOW) (
	IN	VOID
);

typedef
VOID
(EFIAPI *ERASE_SHADOW) (
	IN	VOID
);

typedef struct {
	UPDATE_SHADOW	UpdateShadowBeforEfiBoot;
	ERASE_SHADOW	EraseShadowAfterEfiBoot;
} SHADOW_RAM_PROTOCOL;

/****** DO NOT WRITE BELOW THIS LINE *******/
#ifdef __cplusplus
}
#endif
#endif

//****************************************************************************
//****************************************************************************
//**                                                                        **
//**             (C)Copyright 1985-2012, American Megatrends, Inc.          **
//**                                                                        **
//**                          All Rights Reserved.                          **
//**                                                                        **
//**                 5555 Oakbrook Pkwy, Norcross, GA 30093                 **
//**                                                                        **
//**                          Phone (770)-246-8600                          **
//**                                                                        **
//****************************************************************************
//****************************************************************************
