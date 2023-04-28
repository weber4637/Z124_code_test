//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**             5555 Oakbrook Pkwy, Norcross, GA 30093               **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
/** @file
  AmiNvramPeiPlatformHooks.h is generated by AMISDL from AmiNvramPeiPlatformHooksTemplate.h
  This header file defines NVRAM PEI platform hooks.
  AMISDL replaces @@elink commands below with the content of the corresponding eLink.
  
  Do not include this header in your source file. It is a private header of the NvramPei module.
**/

/* ************************************************************************************* */
// PeiGetVariableHook hooks
/* ************************************************************************************* */
#define PEI_GET_VARIABLE_HOOK_PARAMS\
    IN CONST EFI_PEI_READ_ONLY_VARIABLE2_PPI *This,\
    IN CONST CHAR16 *VariableName, IN CONST EFI_GUID *VendorGuid,\
    OUT UINT32 *Attributes, IN OUT UINTN *DataSize, OUT VOID *Data

typedef EFI_STATUS (PEI_HOOK_GET_VARIABLE)(PEI_GET_VARIABLE_HOOK_PARAMS);
@elink(PeiGetVariableHook,
"EFI_STATUS @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN))(PEI_GET_VARIABLE_HOOK_PARAMS);", "%n" ,"")

PEI_HOOK_GET_VARIABLE *PeiGetVariableHookList[] = {
@elink(PeiGetVariableHook,
"    @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN)),", "%n" ,"%n    NULL")
};

/* ************************************************************************************* */
// PeiGetNextVariableNameHook hooks
/* ************************************************************************************* */
#define PEI_GET_NEXT_VARIABLE_NAME_HOOK_PARAMS\
    IN CONST EFI_PEI_READ_ONLY_VARIABLE2_PPI *This,\
    IN OUT UINTN *VariableNameSize,\
    IN OUT CHAR16 *VariableName, IN OUT EFI_GUID *VendorGuid

typedef EFI_STATUS (PEI_HOOK_GET_NEXT_VARIABLE_NAME)(PEI_GET_NEXT_VARIABLE_NAME_HOOK_PARAMS);
@elink(PeiGetNextVariableNameHook,
"EFI_STATUS @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN))(PEI_GET_VARIABLE_HOOK_PARAMS);", "%n" ,"")

PEI_HOOK_GET_NEXT_VARIABLE_NAME *PeiGetNextVarNameHookList[] = {
@elink(PeiGetNextVariableNameHook,
"    @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN)),", "%n" ,"%n    NULL")
};

/* ************************************************************************************* */
// NVRAM mode detection hooks
/* ************************************************************************************* */
#define IS_MFG_MODE_LIST @elink(IsMfgMode, "@Child"," " ,"" )
#define IS_RESET_CONFIG_MODE_LIST @elink(IsResetConfigMode, "@Child"," " ,"" )
#define IS_DEFAULT_CONFIG_MODE_LIST @elink(IsDefaultConfigMode, "@Child"," " ,"" )

#define NVRAM_MODE_DETECTION_FUNCTION_PARAMS IN EFI_PEI_SERVICES **PeiServices, IN CONST VOID *ReadVariablePpi

typedef BOOLEAN (NVRAM_MODE_DETECTION_FUNCTION)(NVRAM_MODE_DETECTION_FUNCTION_PARAMS);
@elink(IsMfgMode,
"BOOLEAN @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN))(NVRAM_MODE_DETECTION_FUNCTION_PARAMS);", "%n" ,"")
@elink(IsResetConfigMode,
"BOOLEAN @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN))(NVRAM_MODE_DETECTION_FUNCTION_PARAMS);", "%n" ,"")
@elink(IsDefaultConfigMode,
"BOOLEAN @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN))(NVRAM_MODE_DETECTION_FUNCTION_PARAMS);", "%n" ,"")

NVRAM_MODE_DETECTION_FUNCTION *IsMfgModeList[] = {
@elink(IsMfgMode,
"    @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN)),", "%n" ,"%n    NULL")
};
NVRAM_MODE_DETECTION_FUNCTION *IsResetConfigModeList[] = {
@elink(IsResetConfigMode,
"    @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN)),", "%n" ,"%n    NULL")
};
NVRAM_MODE_DETECTION_FUNCTION *IsDefaultConfigModeList[] = {
@elink(IsDefaultConfigMode,
"    @replace(@child,@token(NVRAM_SDL_TEMPLATE_COMMA),@token(NON_EXISTENT_TOKEN)),", "%n" ,"%n    NULL")
};

/* ************************************************************************************* */
// PEI_NVRAM_COMPATIBILITY_CHECKER
/* ************************************************************************************* */
typedef BOOLEAN (*PEI_NVRAM_COMPATIBILITY_CHECKER_TYPE)(
    IN CONST EFI_PEI_SERVICES **PeiServices,
    IN CONST EFI_PEI_READ_ONLY_VARIABLE2_PPI *ReadVariablePpi
);

// Checker declaration
BOOLEAN @token(PEI_NVRAM_COMPATIBILITY_CHECKER)(
    IN CONST EFI_PEI_SERVICES **PeiServices,
    IN CONST EFI_PEI_READ_ONLY_VARIABLE2_PPI *ReadVariablePpi
);
//Checker variable
PEI_NVRAM_COMPATIBILITY_CHECKER_TYPE CompatibilityChecker = @token(PEI_NVRAM_COMPATIBILITY_CHECKER);

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**             5555 Oakbrook Pkwy, Norcross, GA 30093               **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
