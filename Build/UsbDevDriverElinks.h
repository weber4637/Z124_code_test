// Don't delete this line
#define USB_DEV_EFI_DRIVER UsbBusInit, UsbHidInit, UsbMassInit,
#define USB_DEV_DELAYED_DRIVER USBHIDFillDriverEntries, USBMassFillDriverEntries,
#define USB_DEV_DRIVER USBHubFillDriverEntries, BusFillDriverEntries, USBHIDFillDriverEntries, USBMassFillDriverEntries,
#define KBD_BUFFER_CHECK_ELINK_LIST 
#define USB_HID_TYPE_CHECK_ELINK_LIST 
#define USB_HID_BUFFER_CHECK_ELINK_LIST 
#define EHCI_GET_ROOT_HUB_PORT_SPEED_ELINK_LIST 
// Don't delete this line

