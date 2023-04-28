#define SMIFLASH_IN_SMM_LIST 
#define SMIFLASH_NOT_IN_SMM_LIST 
#define SMIFLASH_END_UPDATE_LIST RestoreVariables, EnableUSBKBD, RestoreFboVariables,
#define SMIFLASH_PRE_UPDATE_LIST PreserveVariables, DisableUSBKBD, PreserveFboVariables,
#define SMIFLASH_PRE_HANDLER_LIST 
#define SMIFLASH_END_HANDLER_LIST BiosLockEnableSmiFlashHook, OemActivationUpdateBlockTypeId,
#define SMIFLASH_SAVE_VARS_LIST {L"BootOrder", {0x8BE4DF61, 0x93CA, 0x11d2, 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C}, FALSE, NULL}, {L"LegacyDevOrder", {0xA56074DB, 0x65FE, 0x45F7, 0xBD, 0x21, 0x2D, 0x2B, 0xDD, 0x8E, 0x96, 0x52}, FALSE, NULL},
#define SMIFLASH_SAVE_GUIDS_LIST { 0x77FA9ABD, 0x0359, 0x4D32, 0xBD, 0x60, 0x28, 0xF4, 0xE7, 0x8F, 0x78, 0x4B },

