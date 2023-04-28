//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file FboSceTse.c

    Support Sce Tool With FixedBootOrder module.
**/

#include <AmiDxeLib.h>
#include <../FixedBootOrder.h>
#include <FboSce.h>
#include <Library/DebugLib.h>

//
//  EXTERNAL VARIABLE
//
extern FBODevMap *pFBOUefiDevMap;
extern FBODevMap *pFBOLegacyDevMap;
//
//  EXTERN FUNCTION
//
extern UINT16 SearchDevMapByType(FBODevMap* pFBODevMap, UINT32 DevType);


/**
    Save changes with Sce varialbe of Fbo.

    @param  SceVar   contains info to save.
**/    
VOID FboSceSaveVariable(FBO_SCE_VAR *SceVar)
{
    if(!SceVar) return;

    if(SceVar->FixedBoot 
            && SceVar->FixedBootSize)
    {
        if(SceVar->SceOrder
                && SceVar->SceOrderSize >= sizeof(FBO_SCE_ORDER))
        {
            UINTN       i;
            UINT16      Len = 0;
            UINTN       Offset;
            UINT8*      Index = SceVar->IsUefi ? SceVar->FixedBoot->UefiDevice : SceVar->FixedBoot->LegacyDevice;
            FBODevMap*  DevMap = SceVar->IsUefi ? pFBOUefiDevMap : pFBOLegacyDevMap;
            FBO_SCE_ORDER* SceWalker = SceVar->SceOrder;

            for(; Len < SceVar->SceOrderSize; )
            {
                if(SearchDevMapByType(DevMap, SceWalker->Header.Type) == 0xFFFF){
                    Len += SceWalker->Header.Length;
                    continue;
                }
                Offset = FIXED_BOOT_ORDER_SUBMENU_MAX_NUM * SearchDevMapByType(DevMap, SceWalker->Header.Type);
                for(i = 0; i < SCEORDER_COUNT(SceWalker); i++)
                    SceWalker->Index[i] = Index[Offset+i];

#ifdef EFI_DEBUG
                DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "FboSceSaveVariable\n"));
                for(i = 0; i < SCEORDER_COUNT(SceWalker); i++)
                    DEBUG((FBO_TRACE_LEVEL | DEBUG_VERBOSE, "SceWalker->Index[%X](%X) : Index[%X](%X)\n", i, SceWalker->Index[i], Offset+i, Index[Offset+i]));
#endif

                Len += SceWalker->Header.Length;
                SceWalker = (FBO_SCE_ORDER*)&SceWalker->Index[i];
            }
        }
    }
}

/**
    Elink to Save changes for Sce detection.
**/
VOID FboSceSaves()
{
    EFI_STATUS        Status;
    FBO_SCE_VAR       SceVar = {NULL, sizeof(FIXED_BOOT_SETUP), NULL, 0, 0};
    FIXED_BOOT_SETUP  FixedBoot;
    EFI_GUID FixedBootOrderGuid = FIXED_BOOT_ORDER_GUID;
    EFI_GUID FboGroupFormFormSetGuid = FBO_GROUP_FORM_FORM_SET_GUID ;
    
    Status = pRS->GetVariable( L"FixedBoot", &FboGroupFormFormSetGuid, NULL, &SceVar.FixedBootSize, (VOID*)&FixedBoot);
    if(!EFI_ERROR(Status))
    {
        SceVar.FixedBoot = &FixedBoot;

#if CSM_SUPPORT
        Status = GetEfiVariable( L"FboLegacySceOrder", &FixedBootOrderGuid, NULL, &SceVar.SceOrderSize, (VOID**)&SceVar.SceOrder);
        if(!EFI_ERROR(Status))
        {
            FboSceSaveVariable(&SceVar);
            pRS->SetVariable(L"FboLegacySceOrder", &FixedBootOrderGuid, VARIABLE_ATTRIBUTES, SceVar.SceOrderSize, (VOID*)SceVar.SceOrder);
            pBS->FreePool((VOID*)SceVar.SceOrder);
            SceVar.SceOrder = NULL;
        }
#endif

        Status = GetEfiVariable( L"FboUefiSceOrder", &FixedBootOrderGuid, NULL, &SceVar.SceOrderSize, (VOID**)&SceVar.SceOrder);
        if(!EFI_ERROR(Status))
        {
            SceVar.IsUefi = 1;
            FboSceSaveVariable(&SceVar);
            pRS->SetVariable(L"FboUefiSceOrder", &FixedBootOrderGuid, VARIABLE_ATTRIBUTES, SceVar.SceOrderSize, (VOID*)SceVar.SceOrder);
            pBS->FreePool((VOID*)SceVar.SceOrder);
            SceVar.SceOrder = NULL;
        }
    }
}

