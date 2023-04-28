include AmiPkg/Configuration/utilities.mak
.PHONY : all
all:

.PHONY : FontFile
all: FontFile
FontFile : 
	FontTool -F 2.1 -C D:/Aptio5321/BuildTools/Fontcfg.ini -IL drawing en-US -T D:/BIOS/Z124-002/Z124-002\Build/Harrisonville/RELEASE_MYTOOLS/font.tmp
	FontTool -F 2.1 -C D:/Aptio5321/BuildTools/Fontcfg.ini -O D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/font.out -T D:/BIOS/Z124-002/Z124-002\Build/Harrisonville/RELEASE_MYTOOLS/font.tmp

.PHONY : IfrDirList
all: IfrDirList
IfrDirList : 
ifneq ('$(wildcard D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/IfrList/*.txt)','')
	D:/Aptio5321/BuildTools/cat D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/IfrList/*.txt > D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/IfrDirList.txt
endif

.PHONY : HpkTool
all: HpkTool
HpkTool :
	gawk -f D:/BIOS/Z124-002/Z124-002/Build/IfrListScript.txt D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/IfrDirList.txt> D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS/IfrList.mak
	make --no-print-directory -s -C D:/BIOS/Z124-002/Z124-002/Build/Harrisonville/RELEASE_MYTOOLS -f D:/BIOS/Z124-002/Z124-002/Build/AmiTseGenFds.mak
