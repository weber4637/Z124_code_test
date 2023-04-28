//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2014, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

//**********************************************************************
//<AMI_FHDR_START>
//
// Name:	ReFlash.txt
//
// Description:	
//
//<AMI_FHDR_END>
//**********************************************************************

#ifdef  REFLASH_DEFINITIONS_SUPPORT
 

#endif

#ifndef VFRCOMPILE

#define REFLASH_FUNCTION_LIST 
 

typedef VOID (OEM_FLASH_UPDATE_CALLBACK) (VOID);
VOID ReflashBeforeUpdateHook(VOID);
VOID RecoveryClearTpmBeforeFlash(VOID);
VOID FlashSmiPrologueHook(VOID);
VOID FlashSmiEpilogueHook(VOID);
VOID ReflashAfterUpdateHook(VOID);

OEM_FLASH_UPDATE_CALLBACK *OemBeforeFlashCallbackList[] = {
   ReflashBeforeUpdateHook,
   RecoveryClearTpmBeforeFlash,
   FlashSmiPrologueHook,
   NULL
};
OEM_FLASH_UPDATE_CALLBACK *OemAfterFlashCallbackList[] = {
   FlashSmiEpilogueHook,
   ReflashAfterUpdateHook,
   NULL
};

#include <Token.h>

#if PRESERVE_FFS
EFI_GUID FfsToPreserveGuidList[] = {

};
UINT32 FfsToPreserveGuidListSize = sizeof (FfsToPreserveGuidList) / sizeof (EFI_GUID);
#else
EFI_GUID *FfsToPreserveGuidList = NULL;
UINT32 FfsToPreserveGuidListSize = 0;
#endif

#endif

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2014, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************