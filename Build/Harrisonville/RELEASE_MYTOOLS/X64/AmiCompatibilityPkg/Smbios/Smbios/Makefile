#
# DO NOT EDIT
# This file is auto-generated by build utility
#
# Module Name:
#
#   Makefile
#
# Abstract:
#
#   Auto-generated makefile for building modules, libraries or platform
#
    

#
# Platform Macro Definition
#
PLATFORM_NAME = Harrisonville
PLATFORM_GUID = 71ADFF35-5B71-4231-9030-2B7636516D5B
PLATFORM_VERSION = 1
PLATFORM_RELATIVE_DIR = Build
PLATFORM_DIR = d:\bios\z124-002\z124-002\Build
PLATFORM_OUTPUT_DIR = Build\Harrisonville

#
# Module Macro Definition
#
MODULE_NAME = Smbios
MODULE_GUID = B13EDD38-684C-41ed-A305-D7B7E32497DF
MODULE_NAME_GUID = Smbios
MODULE_VERSION = 1.0
MODULE_TYPE = DXE_DRIVER
MODULE_FILE = Smbios.inf
MODULE_FILE_BASE_NAME = Smbios
BASE_NAME = $(MODULE_NAME)
MODULE_RELATIVE_DIR = AmiCompatibilityPkg\Smbios
PACKAGE_RELATIVE_DIR = Smbios
MODULE_DIR = d:\bios\z124-002\z124-002\AmiCompatibilityPkg\Smbios

MODULE_ENTRY_POINT = SmbiosDriverEntryPoint
ARCH_ENTRY_POINT = SmbiosDriverEntryPoint
IMAGE_ENTRY_POINT = _ModuleEntryPoint

INF_VERSION = 0x00010005
BASE_NAME = Smbios
FILE_GUID = B13EDD38-684C-41ed-A305-D7B7E32497DF
MODULE_TYPE = DXE_DRIVER
VERSION_STRING = 1.0

#
# Build Configuration Macro Definition
#
ARCH = X64
TOOLCHAIN = MYTOOLS
TOOLCHAIN_TAG = MYTOOLS
TARGET = RELEASE

#
# Build Directory Macro Definition
#
# PLATFORM_BUILD_DIR = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS
BUILD_DIR = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS
BIN_DIR = $(BUILD_DIR)\X64
LIB_DIR = $(BIN_DIR)
MODULE_BUILD_DIR = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios
OUTPUT_DIR = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT
DEBUG_DIR = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG
DEST_DIR_OUTPUT = $(OUTPUT_DIR)
DEST_DIR_DEBUG = $(DEBUG_DIR)

#
# Shell Command Macro
#
RD = rmdir /s /q
RM = del /f /q
MD = mkdir
CP = copy /y
MV = move /y


#
# Tools definitions specific to this module
#
SYMRENAME = echo
SYMRENAME_FLAGS = Symbol renaming not needed for

CBINDLINK_FLAGS = /nologo /NODEFAULTLIB /NOENTRY /DLL /ALIGN:16 /IGNORE:4108

ASLDLINK = D:\WinDDK\7600.16385.1\bin\x86\amd64\link.exe
ASLDLINK_FLAGS = /nologo /NODEFAULTLIB /ENTRY:ReferenceAcpiTable /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER

DT = D:/Aptio5321/BuildTools/iasl5

VFR = VfrCompile
VFR_FLAGS = -n

PP = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
PP_FLAGS = /nologo /E /TC /FIAutoGen.h $(FLAG_SIMIC) /D CRB_FLAG_ENABLE=TRUE /D WHEA_SUPPORT_FLAG /D ME_SUPPORT_FLAG=1 /D ME_TESTMENU_FLAG=1 /D SPS_SUPPORT=1 /D IE_SUPPORT=1 $(FLAG_TRACEHUB) /D NONVOLATILE_MEM_EN /D HARRISONVILLE /D DENVERTON /D EMMC_DRIVER_ENABLE=TRUE /D PERFORMANCE_ENABLE=FALSE /D S3_ENABLE=TRUE /D SERVER_BIOS_FLAG=TRUE /D PCH_SPT /D PO_FLAG /D PCH_PO_FLAG /D SA_PO_FLAG /D HSUART_MODE=0 /D DTS_SUPPORT=1 $(EDKII_SERIAL_DBG_MSG) /D PCIE_HOTPLUG_SUPPORT=0 /D MAX_EXTRA_BUS_RESERVED_VALUE=7 /D MAX_PCIE_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_PF_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_IO_RESERVED_VALUE=20 /D MEUD_SUPPORT=1 /D CAPSULE_RESERVED_MEMORY_REGION_SIZE=0x4000000 /D DISABLE_MEMTEST_MRC_FB=0 /wd4819

LZMAF86 = LzmaF86Compress
LZMAF86_GUID =  D42AE6BD-1352-4bfb-909A-CA72A6EAE889

GENFW = GenFw
GENFW_FLAGS = 

DLINK = D:\WinDDK\7600.16385.1\bin\x86\amd64\link.exe
DLINK_FLAGS = /Machine:AMD64 /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D /SECTION:.pdata,D /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO /BASE:0 /DRIVER /MERGE:.rdata=.data /IGNORE:4254

SLINK = D:\WinDDK\7600.16385.1\bin\x86\amd64\link.exe
SLINK_FLAGS = /LIB /nologo /LTCG

ASM = D:\WinDDK\7600.16385.1\bin\x86\amd64\ml64.exe
ASM_FLAGS = /nologo /c /WX /W3 /Cx /Zd

ASL = D:/Aptio5321/BuildTools/iasl
ASL_FLAGS = 
ASL_OUTFLAGS =  -p

NASMB_FLAGS = -f bin

CC = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
CC_FLAGS = -DEFIx64 -DEFIX64 /nologo /c /WX /GS- /Gs32768 /Gy /D UNICODE /GL /FIAutoGen.h /EHs-c- /GR- /GF -D PI_SPECIFICATION_VERSION=0x10028 -D EFI_SPECIFICATION_VERSION=0x2003C /O1ib2 /W3 /wd4091 /wd4311 /wd4312 -DMDEPKG_NDEBUG /D _SMBIOS_ -DOPENSSL_NO_STDIO -DOPENSSL_NO_FP_API -DOPENSSL_NO_TLS1_1 -DOPENSSL_NO_TLS1 -DOPENSSL_NO_TLS1_METHOD -DOPENSSL_NO_TLS1_1_METHOD -D__STDC_NO_ATOMICS__ $(FLAG_SIMIC) /D CRB_FLAG_ENABLE=TRUE /D WHEA_SUPPORT_FLAG /D ME_SUPPORT_FLAG=1 /D ME_TESTMENU_FLAG=1 /D SPS_SUPPORT=1 /D IE_SUPPORT=1 $(FLAG_TRACEHUB) /D NONVOLATILE_MEM_EN /D HARRISONVILLE /D DENVERTON /D EMMC_DRIVER_ENABLE=TRUE /D PERFORMANCE_ENABLE=FALSE /D S3_ENABLE=TRUE /D SERVER_BIOS_FLAG=TRUE /D PCH_SPT /D PO_FLAG /D PCH_PO_FLAG /D SA_PO_FLAG /D HSUART_MODE=0 /D DTS_SUPPORT=1 $(EDKII_SERIAL_DBG_MSG) /D PCIE_HOTPLUG_SUPPORT=0 /D MAX_EXTRA_BUS_RESERVED_VALUE=7 /D MAX_PCIE_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_PF_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_IO_RESERVED_VALUE=20 /D MEUD_SUPPORT=1 /D CAPSULE_RESERVED_MEMORY_REGION_SIZE=0x4000000 /D DISABLE_MEMTEST_MRC_FB=0 /wd4819

VFRPP = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
VFRPP_FLAGS = /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h -D PI_SPECIFICATION_VERSION=0x10028 -D EFI_SPECIFICATION_VERSION=0x2003C /O1ib2 /W3 /wd4091 /wd4311 /wd4312 -DMDEPKG_NDEBUG $(FLAG_SIMIC) /D CRB_FLAG_ENABLE=TRUE /D WHEA_SUPPORT_FLAG /D ME_SUPPORT_FLAG=1 /D ME_TESTMENU_FLAG=1 /D SPS_SUPPORT=1 /D IE_SUPPORT=1 $(FLAG_TRACEHUB) /D NONVOLATILE_MEM_EN /D HARRISONVILLE /D DENVERTON /D EMMC_DRIVER_ENABLE=TRUE /D PERFORMANCE_ENABLE=FALSE /D S3_ENABLE=TRUE /D SERVER_BIOS_FLAG=TRUE /D PCH_SPT /D PO_FLAG /D PCH_PO_FLAG /D SA_PO_FLAG /D HSUART_MODE=0 /D DTS_SUPPORT=1 $(EDKII_SERIAL_DBG_MSG) /D PCIE_HOTPLUG_SUPPORT=0 /D MAX_EXTRA_BUS_RESERVED_VALUE=7 /D MAX_PCIE_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_PF_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_IO_RESERVED_VALUE=20 /D MEUD_SUPPORT=1 /D CAPSULE_RESERVED_MEMORY_REGION_SIZE=0x4000000 /D DISABLE_MEMTEST_MRC_FB=0 /wd4819

LZMA = LzmaCompress
LZMA_GUID =  EE4E5898-3914-4259-9D6E-DC7BD79403CF

ASM16 = ml.exe

ASLCC = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
ASLCC_FLAGS = /nologo /c /TC /FIAutoGen.h /Dmain=ReferenceAcpiTable

CBINCC_FLAGS = /nologo /c /TC /Os /FIAutoGen.h

APP = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
APP_FLAGS = /nologo /E /TC

OPTROM = EfiRom
OPTROM_FLAGS = -e

TIANO = TianoCompress
TIANO_GUID =  A31280AD-481E-41B6-95E8-127F4C984779

VPDTOOL = BPDG
VPDTOOL_GUID =  8C3D856A-9BE6-468E-850A-24F7A8D38E08

ASLPP = D:\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
ASLPP_FLAGS = /nologo /E /TC -D SIO_PTS=\_SB.PCI0.SBRG.SIO1.SIOS -D SIO_WAK=\_SB.PCI0.SBRG.SIO1.SIOW /D LPC0=SBRG $(FLAG_SIMIC) /D CRB_FLAG_ENABLE=TRUE /D WHEA_SUPPORT_FLAG /D ME_SUPPORT_FLAG=1 /D ME_TESTMENU_FLAG=1 /D SPS_SUPPORT=1 /D IE_SUPPORT=1 $(FLAG_TRACEHUB) /D NONVOLATILE_MEM_EN /D HARRISONVILLE /D DENVERTON /D EMMC_DRIVER_ENABLE=TRUE /D PERFORMANCE_ENABLE=FALSE /D S3_ENABLE=TRUE /D SERVER_BIOS_FLAG=TRUE /D PCH_SPT /D PO_FLAG /D PCH_PO_FLAG /D SA_PO_FLAG /D HSUART_MODE=0 /D DTS_SUPPORT=1 $(EDKII_SERIAL_DBG_MSG) /D PCIE_HOTPLUG_SUPPORT=0 /D MAX_EXTRA_BUS_RESERVED_VALUE=7 /D MAX_PCIE_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_PF_MEM_RESERVED_VALUE=1200 /D MAX_PCIE_IO_RESERVED_VALUE=20 /D MEUD_SUPPORT=1 /D CAPSULE_RESERVED_MEMORY_REGION_SIZE=0x4000000 /D DISABLE_MEMTEST_MRC_FB=0 /wd4819

OBJCOPY = echo
OBJCOPY_FLAGS = objcopy not needed for

MAKE = nmake.exe

ASMLINK = link16.exe
ASMLINK_FLAGS = /nologo /tiny

NASM = nasm
NASM_FLAGS = -Ox -f win64


MAKE_FILE = $(MODULE_BUILD_DIR)\Makefile

#
# Build Macro
#
OBJECT_FILES =  \
    $(OUTPUT_DIR)\Smbios.obj \
    $(OUTPUT_DIR)\AutoGen.obj

STATIC_LIBRARY_FILES =  \
    $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\OUTPUT\UefiBootServicesTableLib.lib \
    $(BIN_DIR)\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib\OUTPUT\BaseDebugPrintErrorLevelLib.lib \
    $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\OUTPUT\BaseMemoryLibRepStr.lib \
    $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\OUTPUT\DxePcdLib.lib \
    $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\OUTPUT\BaseLib.lib \
    $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\OUTPUT\DxeAmiDebugLib.lib \
    $(BIN_DIR)\MdePkg\Library\BaseIoLibIntrinsic\BaseIoLibIntrinsic\OUTPUT\BaseIoLibIntrinsic.lib \
    $(BIN_DIR)\MdePkg\Library\BasePciExpressLib\BasePciExpressLib\OUTPUT\BasePciExpressLib.lib \
    $(BIN_DIR)\MdePkg\Library\BasePostCodeLibPort80\BasePostCodeLibPort80\OUTPUT\BasePostCodeLibPort80.lib \
    $(BIN_DIR)\MdeModulePkg\Library\DxePerformanceLib\DxePerformanceLib\OUTPUT\DxePerformanceLib.lib \
    $(BIN_DIR)\MdePkg\Library\BasePciLibPciExpress\BasePciLibPciExpress\OUTPUT\BasePciLibPciExpress.lib \
    $(BIN_DIR)\AmiCompatibilityPkg\Library\AmiDxeLib\OUTPUT\AmiDxeLib.lib \
    $(BIN_DIR)\Build\AmiCspLibDxe\OUTPUT\AmiCspLibDxe.lib \
    $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\OUTPUT\UefiDriverEntryPoint.lib \
    $(OUTPUT_DIR)\Smbios.lib

INC =  \
    /I$(WORKSPACE)\AmiCompatibilityPkg\Smbios \
    /I$(DEBUG_DIR) \
    /I$(WORKSPACE)\AmiModulePkg \
    /I$(WORKSPACE)\AmiModulePkg\Include \
    /I$(WORKSPACE)\Build \
    /I$(WORKSPACE)\MdePkg \
    /I$(WORKSPACE)\MdePkg\Include \
    /I$(WORKSPACE)\MdePkg\Include\X64 \
    /I$(WORKSPACE)\IntelFrameworkPkg \
    /I$(WORKSPACE)\IntelFrameworkPkg\Include \
    /I$(WORKSPACE)\AmiCompatibilityPkg \
    /I$(WORKSPACE)\AmiCompatibilityPkg\Include \
    /I$(WORKSPACE) \
    /I$(WORKSPACE)\MdeModulePkg\Include \
    /I$(WORKSPACE)\IntelFrameworkModulePkg\Include \
    /I$(WORKSPACE)\AmiTsePkg\Include \
    /I$(WORKSPACE)\MdeModulePkg

OBJECT_FILES_LIST = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT\object_files.lst
STATIC_LIBRARY_FILES_LIST = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT\static_library_files.lst


COMMON_DEPS = $(WORKSPACE)\AmiCompatibilityPkg\Include\StatusCodes.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\HiiString.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverDiagnostics.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\CpuIo.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Pci.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\HiiImage.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiSpec.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi51.h \
              $(WORKSPACE)\Build\GenericSetupDataDefinition.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseMemoryLib.h \
              $(WORKSPACE)\MdeModulePkg\Include\Library\HiiLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextInEx.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\PciRootBridgeIo.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiSmmCis.h \
              $(WORKSPACE)\AmiModulePkg\FixedBootOrder\FixedBootOrder.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Pci22.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SmmCpuIo2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Smbios.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\HiiUtilities.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\BootInRecoveryMode.h \
              $(WORKSPACE)\IntelFrameworkModulePkg\Include\Guid\DataHubStatusCodeRecord.h \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeBus.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\AmiHobs.h \
              $(WORKSPACE)\MdePkg\Include\Library\DebugLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextIn.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Setup\AmiBiosInfo.sd \
              $(WORKSPACE)\MdePkg\Include\Guid\Apriori.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Hob.h \
              $(WORKSPACE)\AmiModulePkg\IO\NCT6683D\NCT6683DSetup.sd \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Pci23.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\AmiDxeLib.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Framework\SmmCis.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Pei.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\LegacyBiosPlatform.h \
              $(WORKSPACE)\AmiModulePkg\Include\TerminalSetupVar.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SmmControl2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverConfiguration.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi40.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\VariableWrite.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiHob.h \
              $(WORKSPACE)\MdeModulePkg\Include\Protocol\VariableLock.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi50.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\LegacyRegion.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Guid\DataHubRecords.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\EndOfPeiPhase.h \
              $(WORKSPACE)\AmiModulePkg\BootSectorWriteProtect\BootSectorWriteProtect.sd \
              $(WORKSPACE)\MdePkg\Include\Guid\FileSystemVolumeLabelInfo.h \
              $(WORKSPACE)\AmiModulePkg\Include\Protocol\LegacyBiosExt.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiBootMode.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\PciIo.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\HiiFont.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Setup.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SmmBase2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SerialIo.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi60.h \
              $(WORKSPACE)\AmiModulePkg\Include\Protocol\AmiBlockIoWriteProtection.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextOut.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiGpt.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\SmbiosDynamicData.h \
              $(WORKSPACE)\MdePkg\Include\Guid\Mps.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiPxe.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\AcpiAml.h \
              $(WORKSPACE)\AmiTsePkg\Include\AMIVfr.h \
              $(WORKSPACE)\AmiModulePkg\Terminal\Terminal.sd \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\SmBios.h \
              $(WORKSPACE)\MdeModulePkg\Include\Guid\MdeModuleHii.h \
              $(WORKSPACE)\AmiModulePkg\Include\Protocol\AmiNvmeController.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SmbusHc.h \
              $(WORKSPACE)\AmiModulePkg\IO\NCT6683D\NCT6683DSetup.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Setup\AmiTse.sd \
              $(WORKSPACE)\MdePkg\Include\Library\PerformanceLib.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi10.h \
              $(WORKSPACE)\Build\ErrorLevelTokens.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\BootScriptSave.h \
              $(WORKSPACE)\MdePkg\Include\Guid\HiiFormMapMethodGuid.h \
              $(WORKSPACE)\MdePkg\Include\Guid\HiiKeyBoardLayout.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\AmiStatusCodes.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\PeImage.h \
              $(WORKSPACE)\Build\TimeStamp.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi30.h \
              $(WORKSPACE)\AmiModulePkg\PCI\PciStaticSetup.sd \
              $(WORKSPACE)\MdePkg\Include\Protocol\UnicodeCollation.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\FormBrowser2.h \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeDynamicSetup\NvmeDynamicSetup.h \
              $(WORKSPACE)\AmiModulePkg\Usb\Setup\Usb.sd \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\AmiLib.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi20.h \
              $(WORKSPACE)\MdePkg\Include\Guid\HobList.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\UefiHii.h \
              $(WORKSPACE)\Build\SetupDataDefinition.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Dxe.h \
              $(WORKSPACE)\Build\NvmeControllerNameElink.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ComponentName2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\BlockIo.h \
              $(WORKSPACE)\Build\FixedBootOrderSetupData.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\KeyboardCommonDefinitions.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Ffs.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ComponentName.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Ppi\PciCfg.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiInternalFormRepresentation.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\MemoryDiscovered.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\SmmBase.h \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeIncludes.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\NetworkStackSetupScreen\NetworkStackSetupScreen.sd \
              $(WORKSPACE)\MdePkg\Include\Guid\MemoryAllocationHob.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\HiiConfigAccess.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi.h \
              $(WORKSPACE)\Build\Token.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseLib.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\SmBus.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Framework\FrameworkInternalFormRepresentation.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverConfiguration2.h \
              $(WORKSPACE)\MdePkg\Include\Guid\FileSystemInfo.h \
              $(WORKSPACE)\Build\DefaultFixedBootOrder.sd \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Guid\FirmwareFileSystem.h \
              $(WORKSPACE)\MdePkg\Include\Guid\WinCertificate.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\DxeIpl.h \
              $(WORKSPACE)\MdePkg\Include\Library\IoLib.h \
              $(WORKSPACE)\Build\SetupDefinitions.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverDiagnostics2.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiLib.h \
              $(WORKSPACE)\AmiModulePkg\FixedBootOrder\DefaultFixedBootOrder\FboSetupPages.sd \
              $(WORKSPACE)\MdePkg\Include\Library\ReportStatusCodeLib.h \
              $(WORKSPACE)\MdePkg\Include\Guid\Acpi.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\SmBus.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\PciCfg2.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiDxeCis.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverBinding.h \
              $(WORKSPACE)\AmiModulePkg\Include\Protocol\AmiNvmePassThru.h \
              $(WORKSPACE)\MdePkg\Include\Guid\HiiPlatformSetupFormset.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\PciCodeId.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiDependency.h \
              $(WORKSPACE)\MdePkg\Include\Guid\SmBios.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\NvmExpressPassthru.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareFile.h \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeController.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Bluetooth.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\LegacyBios.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DevicePath.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\MasterBootMode.h \
              $(WORKSPACE)\AmiModulePkg\Include\AmiTcg\TcgSetupBoard.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\UsbPolicy.h \
              $(WORKSPACE)\Build\ControlDefinitions.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SmmCommunication.h \
              $(WORKSPACE)\MdePkg\Include\Guid\FileInfo.h \
              $(WORKSPACE)\MdePkg\Include\Guid\GlobalVariable.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\FirmwareVolume.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiMultiPhase.h \
              $(WORKSPACE)\MdePkg\Include\Uefi.h \
              $(WORKSPACE)\MdePkg\Include\PiDxe.h \
              $(WORKSPACE)\AmiModulePkg\TCG2\Common\Setup\TcgSetup.sd \
              $(WORKSPACE)\MdePkg\Include\Protocol\StorageSecurityCommand.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\SmbiosGetFlashDataProtocol.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiMultiPhase.h \
              $(WORKSPACE)\AmiTsePkg\EDK\MiniSetup\TseAdvanced\AddDelBootDrvOpts.sd \
              $(WORKSPACE)\MdePkg\Include\Protocol\LegacyRegion2.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiBaseType.h \
              $(WORKSPACE)\AmiModulePkg\Include\Protocol\AmiNvmeLegacy.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Pci30.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\StatusCode.h \
              $(WORKSPACE)\MdePkg\Include\Library\TimerLib.h \
              $(WORKSPACE)\AmiModulePkg\Include\Library\AmiHiiUpdateLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DebugSupport.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiBootServicesTableLib.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Protocol\SmmCpuIo.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DebugPort.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Protocol\AmiSmbios.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DiskInfo.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\PciExpress21.h \
              $(WORKSPACE)\AmiChipsetModulePkg\NB\NbSetup\Nb.sd \
              $(WORKSPACE)\MdePkg\Include\Guid\SalSystemTable.h \
              $(WORKSPACE)\AmiModulePkg\DbgTables\DebugPortTables.sd \
              $(WORKSPACE)\MdePkg\Include\Guid\FirmwareFileSystem2.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiPeiCis.h \
              $(WORKSPACE)\AmiModulePkg\RtcWake\RTCWakeup.sd \
              $(WORKSPACE)\AmiModulePkg\GenericSio\SioStaticSetup.sd \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeInt13\NvmeInt13.h \
              $(WORKSPACE)\MdePkg\Include\Guid\EventGroup.h \
              $(DEBUG_DIR)\AutoGen.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Smbios\SmbiosDmiEdit\SmbiosDmiEdit.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\FirmwareVolume2.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\AmiProtocol.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Setup\DynamicPages.sd \
              $(WORKSPACE)\MdePkg\Include\Base.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\DataHubSubClass.h \
              $(WORKSPACE)\MdePkg\Include\Guid\EventLegacyBios.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi61.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiS3BootScript.h \
              $(WORKSPACE)\AmiModulePkg\CSM\CsmPolicy\Csm.sd \
              $(WORKSPACE)\MdePkg\Include\Protocol\S3SaveState.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiAcpiDataTable.h \
              $(WORKSPACE)\AmiModulePkg\ACPI\ACPI.sd \
              $(WORKSPACE)\Build\AutoId.h \
              $(WORKSPACE)\MdePkg\Include\Library\DevicePathLib.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiRuntimeServicesTableLib.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareVolume.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\GraphicsOutput.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiStatusCode.h \
              $(WORKSPACE)\MdePkg\Include\Guid\DxeServices.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\PciExpress30.h \
              $(WORKSPACE)\MdePkg\Include\Guid\PcAnsi.h \
              $(WORKSPACE)\MdePkg\Include\Guid\StatusCodeDataTypeId.h \
              $(WORKSPACE)\IntelFrameworkPkg\Include\Framework\StatusCode.h \
              $(WORKSPACE)\AmiCompatibilityPkg\Include\Efi.h \
              $(WORKSPACE)\AmiModulePkg\IO\NCT6683D\NCT6683DHwmSetup.sd \
              $(WORKSPACE)\AmiModulePkg\Nvme\NvmeDynamicSetup\NvmeDynamicSetup.sd \
              $(WORKSPACE)\AmiModulePkg\Include\SioSetup.h \
              $(WORKSPACE)\MdePkg\Include\X64\ProcessorBind.h \
              

#
# Overridable Target Macro Definitions
#
FORCE_REBUILD = force_build
INIT_TARGET = init
PCH_TARGET =
BC_TARGET = 
CODA_TARGET = d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.efi \
              

#
# Default target, which will build dependent libraries in addition to source files
#

all: mbuild


#
# Target used when called from platform makefile, which will bypass the build of dependent libraries
#

pbuild: $(INIT_TARGET) $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# ModuleTarget
#

mbuild: $(INIT_TARGET) $(BC_TARGET) gen_libs $(PCH_TARGET) $(CODA_TARGET)

#
# Build Target used in multi-thread build mode, which will bypass the init and gen_libs targets
#

tbuild: $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# Phony target which is used to force executing commands for a target
#
force_build:
	-@

#
# Target to update the FD
#

fds: mbuild gen_fds

#
# Initialization target: print build information and create necessary directories
#
init: info dirs

info:
	-@echo Building ... $(MODULE_DIR)\$(MODULE_FILE) [$(ARCH)]

dirs:
	-@if not exist $(DEBUG_DIR) $(MD) $(DEBUG_DIR)
	-@if not exist $(OUTPUT_DIR) $(MD) $(OUTPUT_DIR)


strdefs:
	-@$(CP) $(DEBUG_DIR)\AutoGen.h $(DEBUG_DIR)\$(MODULE_NAME)StrDefs.h

#
# GenLibsTarget
#
gen_libs:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseIoLibIntrinsic\BaseIoLibIntrinsic\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePciExpressLib\BasePciExpressLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePostCodeLibPort80\BasePostCodeLibPort80\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxePerformanceLib\DxePerformanceLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePciLibPciExpress\BasePciLibPciExpress\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiCompatibilityPkg\Library\AmiDxeLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\Build\AmiCspLibDxe\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile
	@cd $(MODULE_BUILD_DIR)

#
# Build Flash Device Image
#
gen_fds:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BUILD_DIR)\Makefile fds
	@cd $(MODULE_BUILD_DIR)

#
# Individual Object Build Targets
#
$(DEBUG_DIR)\Smbios.efi : $(DEBUG_DIR)\Smbios.dll
	"$(GENFW)" -e $(MODULE_TYPE) -o d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.efi d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.dll $(GENFW_FLAGS)
	$(CP) d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.efi $(OUTPUT_DIR)
	$(CP) d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.efi $(BIN_DIR)
	-$(CP) $(DEBUG_DIR)\*.map $(OUTPUT_DIR)
	-$(CP) $(DEBUG_DIR)\*.pdb $(OUTPUT_DIR)

$(OUTPUT_DIR)\Smbios.lib : $(OBJECT_FILES)
	"$(SLINK)" $(SLINK_FLAGS) /OUT:d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT\Smbios.lib @$(OBJECT_FILES_LIST)

$(DEBUG_DIR)\Smbios.dll : $(MAKE_FILE)
$(DEBUG_DIR)\Smbios.dll : $(STATIC_LIBRARY_FILES)
	"$(DLINK)" /OUT:d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\Smbios.dll $(DLINK_FLAGS) $(DLINK_SPATH) @$(STATIC_LIBRARY_FILES_LIST)

$(OUTPUT_DIR)\Smbios.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\Smbios.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\Smbios.obj : $(WORKSPACE)\AmiCompatibilityPkg\Smbios\Smbios.c
	"$(CC)" /Fod:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT\.\Smbios.obj $(CC_FLAGS) -DDXE_BUILD $(INC) d:\bios\z124-002\z124-002\AmiCompatibilityPkg\Smbios\Smbios.c

$(OUTPUT_DIR)\AutoGen.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiMultiPhase.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\PeImage.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiBootMode.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiBaseType.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\X64\ProcessorBind.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextIn.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiSpec.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi60.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\DebugSupport.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiGpt.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\UefiBootServicesTableLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiPxe.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\AcpiAml.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextInEx.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\WinCertificate.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi10.h
$(OUTPUT_DIR)\AutoGen.obj : $(DEBUG_DIR)\AutoGen.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\DebugLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiDxeCis.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Base.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi30.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\HiiFormMapMethodGuid.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiS3BootScript.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareVolume.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareFile.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Bluetooth.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\DevicePath.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi20.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiDependency.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiInternalFormRepresentation.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiStatusCode.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\PcAnsi.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\BaseLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi40.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextOut.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiHob.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\UefiDriverEntryPoint.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi51.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Pi\PiMultiPhase.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\IndustryStandard\Acpi50.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\PiDxe.h
$(OUTPUT_DIR)\AutoGen.obj : $(DEBUG_DIR)\AutoGen.c
	"$(CC)" /Fod:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\OUTPUT\.\AutoGen.obj $(CC_FLAGS) -DDXE_BUILD $(INC) d:\bios\z124-002\z124-002\Build\Harrisonville\RELEASE_MYTOOLS\X64\AmiCompatibilityPkg\Smbios\Smbios\DEBUG\AutoGen.c



#
# clean all intermediate files
#
clean:
	if exist $(OUTPUT_DIR) $(RD) $(OUTPUT_DIR)
		$(RM) AutoGenTimeStamp

#
# clean all generated files
#
cleanall:
	if exist $(DEBUG_DIR) $(RD) $(DEBUG_DIR)
	if exist $(OUTPUT_DIR) $(RD) $(OUTPUT_DIR)
	$(RM) *.pdb *.idb > NUL 2>&1
	$(RM) $(BIN_DIR)\$(MODULE_NAME).efi
	$(RM) AutoGenTimeStamp

#
# clean all dependent libraries built
#
cleanlib:
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile cleanall
	-@if exist $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseIoLibIntrinsic\BaseIoLibIntrinsic\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseIoLibIntrinsic\BaseIoLibIntrinsic\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BasePciExpressLib\BasePciExpressLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePciExpressLib\BasePciExpressLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BasePostCodeLibPort80\BasePostCodeLibPort80\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePostCodeLibPort80\BasePostCodeLibPort80\Makefile cleanall
	-@if exist $(BIN_DIR)\MdeModulePkg\Library\DxePerformanceLib\DxePerformanceLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxePerformanceLib\DxePerformanceLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BasePciLibPciExpress\BasePciLibPciExpress\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePciLibPciExpress\BasePciLibPciExpress\Makefile cleanall
	-@if exist $(BIN_DIR)\AmiCompatibilityPkg\Library\AmiDxeLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiCompatibilityPkg\Library\AmiDxeLib\Makefile cleanall
	-@if exist $(BIN_DIR)\Build\AmiCspLibDxe\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\Build\AmiCspLibDxe\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile cleanall
	@cd $(MODULE_BUILD_DIR)

