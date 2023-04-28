
//--------------------------------------------------------------------------- 
// Constant and Variables declarations 
//--------------------------------------------------------------------------- 
typedef enum { 
//    BoTagLegacyXxx 
//    BoTagUefiXxx 
//    BoTagXxx 
//--standard device type don't modify--// 
    BoTagLegacyFloppy = 1,	//1 
    BoTagLegacyHardDisk,	//2 
    BoTagLegacyCdrom,		//3 
    BoTagLegacyPcmcia,		//4 
    BoTagLegacyUsb,		    //5 
    BoTagLegacyEmbedNetwork,	//6 
    BoTagLegacyBevDevice = 0x80,//7 
//--standard device type don't modify--// end 
    BoTagLegacyUSBFloppy = 8, 
    BoTagLegacyUSBHardDisk, 
    BoTagLegacyUSBCdrom, 
    BoTagLegacyUSBKey, 
    BoTagLegacyUSBLan, 
    BoTagLegacyHardDisk1, 
    BoTagLegacyHardDisk2, 
    BoTagLegacyHardDisk3, 
    BoTagLegacyHardDisk4, 
    BoTagLegacyHardDisk5, 
    BoTagLegacySd, 
    BoTagLegacyNvme, 
    BoTagLegacyOther, 
    BoTagUefiUsbFloppy,				//(EIP96232+) 
    BoTagUefiHardDisk, 
    BoTagUefiHardDisk1, 
    BoTagUefiHardDisk2, 
    BoTagUefiHardDisk3, 
    BoTagUefiHardDisk4, 
    BoTagUefiHardDisk5, 
    BoTagUefiCdrom, 
    BoTagUefiUsbHardDisk, 
    BoTagUefiUsbKey, 
    BoTagUefiUsbLan, 
    BoTagUefiUsb, 
#if SHELL_GROUP_SUPPORT 
    BoTagUefiApplication,			//(EIP115686+) 
#endif 
    BoTagUefiUsbCdrom, 
    BoTagUefiNetWork, 
    BoTagUefiSd, 
    BoTagUefiNvme, 
    BoTagUefiOther, 
    BoTagUefi, 
    BoTagEmbeddedShell 
} FIXED_BOOT_OPTION_TAG; 
#define FBO_CHANGE_DEVICE_NAME_FUNCS 
#define FBO_UEFI_DEVICE UEFI_HDD  UEFI_NVME  UEFI_ODD  UEFI_SD  UEFI_USBHDD  UEFI_USBODD  UEFI_USBKEY  UEFI_USBFDD  UEFI_USBLAN  UEFI_NETWORK 
#define FBO_LEGACY_DEVICE HDD  NVME  ODD  SD  USBHDD  USBODD  USBKEY  USBFDD  USBLAN  NETWORK 
#define FBO_DUAL_DEVICE UEFI_HDD  UEFI_NVME  UEFI_ODD  UEFI_SD  UEFI_USBHDD  UEFI_USBODD  UEFI_USBKEY  UEFI_USBFDD  UEFI_USBLAN  UEFI_NETWORK  HDD  NVME  ODD  SD  USBHDD  USBODD  USBKEY  USBFDD  USBLAN  NETWORK 
#if CSM_SUPPORT 
#define FBO_LEGACY_DEVICE_TYPE_NUM 10 
#else
#define FBO_LEGACY_DEVICE_TYPE_NUM 0 
#endif
#define FBO_UEFI_DEVICE_TYPE_NUM 10 
#define FBO_DUAL_DEVICE_TYPE_NUM 20 

