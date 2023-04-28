#define EfiOsFilePathMaps {L"\\EFI\\Microsoft\\Boot\\bootmgfw.efi", L"Windows Boot Manager"}, {L"\\EFI\\Suse\\elilo.efi", L"Suse Boot Manager"}, {L"\\EFI\\Ubuntu\\shimx64.efi", L"ubuntu"}, {L"\\EFI\\Redhat\\elilo.efi", L"RedHat Boot Manager"}, {L"\\EFI\\Redhat\\grub.efi", L"RedHat Boot Manager"}, {L"\\EFI\\Redhat\\shim.efi", L"RedHat Boot Manager"}, {L"\\EFI\\Fedora\\shimx64.efi", L"Fedora"}, {L"\\EFI\\Centos\\shimx64.efi", L"CentOS"}, {L"\\EFI\\opensuse\\grubx64.efi", L"opensuse"}, {L"\\EFI\\debian\\grubx64.efi", L"debian"},   
#define EfiOsFilePathPriorityMaps {{{L"\\EFI\\sles12\\shim.efi", L"sles12-secureboot"}, {L"\\EFI\\sles12\\grubx64.efi", L"sles12"}}},   
#define CREATE_EFI_OS_BOOT_OPTION_FUNCTIONS CreateBootOptionsByMap, CreateBootOptionsByPriorityMap,
#define ADJUST_EFI_OS_BOOT_ORDER_FUNCTIONS RemoveBootOptionByPriorityMap,
#define CHECK_UEFI_OS_BOOT_OPTION_FUNCTIONS CheckUefiOsBootOptionByMap, CheckUefiOsBootOptionByUefiBootFile, CheckUefiOsBootOptionByPriorityMap,

