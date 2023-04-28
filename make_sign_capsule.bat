@echo ----run FWBUILD to build rom map file for this BIOS image
@echo FWBUILD Build\Harrisonville\RELEASE_MYTOOLS\FV\AMIROM.fd -s -m Build\RomLayoutEx.bin
@echo ----sign BIOS image using external rom map
AmiCryptoPkg\Utils\CryptoCon -@ -r Build\RomLayoutEx.bin -y -n -c Keys\FW\priKey -k Keys\FW\priKey -q -f Build\Harrisonville\RELEASE_MYTOOLS\FV\AMIROM.fd -o 0ACHI.BIN
