#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\HarrisonvillePkg\\Platform\\SetupDxe\\SetupDxe\\DEBUG\\SetupDxeStrDefs.h"









































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 4715 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\HarrisonvillePkg\\Platform\\SetupDxe\\SetupDxe\\DEBUG\\SetupDxeStrDefs.h"

#line 4717 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\HarrisonvillePkg\\Platform\\SetupDxe\\SetupDxe\\DEBUG\\SetupDxeStrDefs.h"

#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"































#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Configuration.h"





















































































































































































































































































































































































































#line 407 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Configuration.h"

#line 409 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Configuration.h"
#line 33 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\Build\\Harrisonville\\RELEASE_MYTOOLS\\X64\\HarrisonvillePkg\\Platform\\SetupDxe\\SetupDxe\\DEBUG\\SetupDxeStrDefs.h"













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 34 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"






























#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/Guid/SetupVariable.h"














































































#line 80 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/Guid/SetupVariable.h"
#line 32 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"











#line 44 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"
















#line 61 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"










































#line 104 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"























extern EFI_GUID  { 0x6205c3a4, 0x1149, 0x491a, { 0xa6, 0xd6, 0x1e, 0x72, 0x3b, 0x87, 0x83, 0xb1 } };
extern EFI_GUID  { 0xc09c81cb, 0x31e9, 0x4de6, { 0xa9, 0xf9, 0x17, 0xa1, 0x44, 0x35, 0x42, 0x45 } };
extern EFI_GUID  { 0x477e01ae, 0xad79, 0x4992, { 0xa6, 0x77, 0x68, 0x6c, 0x8c, 0x7, 0x1d, 0xfb } };
extern EFI_GUID  { 0x7da45aa9, 0x6dbf, 0x4f1b, { 0xa4, 0x3e, 0x32, 0x87, 0xcb, 0xe5, 0x13, 0x51 } };
extern EFI_GUID  { 0x3a885aae, 0x3e30, 0x42b9, { 0xa9, 0x76, 0x2f, 0x1f, 0x13, 0xbd, 0x70, 0x15 } };
extern EFI_GUID  { 0x3a885eaa, 0x303e, 0xb942, { 0xa9, 0x76, 0x2f, 0x1f, 0x13, 0xbd, 0x70, 0x15 } };







typedef struct {

  
  
  
  UINT8   Numlock;
  
  
  
  
  UINT8   UserPassword[32];
  UINT8   AdminPassword[32];
  UINT8   UserPasswordSalt[32];
  UINT8   AdminPasswordSalt[32];
  UINT8   Access;
  
  
  
  UINT8	  TpmAdmin;
  UINT8   TpmEnable;
  UINT8   TpmState;
  UINT8   MorState;
  
  
  
  UINT8   PowerState;
  
  
  
  UINT8   CoreBGF;
  
  
  
  UINT8   VideoSelect;
  UINT8   EfiWindowsInt10Workaround;
  
  UINT8   SataSelect; 
  
  UINT8   ValidationResetType;
  UINT8   ValidationResetEvent;
  UINT16  ValidationResetCount;
  

  
  UINT8   VgaPallete;           
  UINT8   PerrEnable;           
  UINT8   SerrEnable;           



#line 191 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"



  




  




#line 205 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"
  UINT8   Hecbase;
  
  UINT8   CpuidMaxValue;
  UINT8   ExecuteDisableBit;
  UINT8   EnableDumpCrashLog;               
  UINT8   ProcessorEistEnable;              
  UINT8   TurboModeEnable;                  
  UINT8   TurboMode;                        
  UINT8   iTurboModeValue;                  
  UINT8   BiosRequestFreq;                  
  UINT8   EnableTm1;                        
  UINT8   Tm2ThrottlingType;                
  UINT8   ProcessorCcxEnable;               
  UINT8   C1AutoDemotion;                   
  UINT8   C3AutoDemotion;                   
  UINT8   MaxCState;                        
  UINT8   PackageCState;                    
  UINT8   ProcessorC1eEnable;               
  UINT8   TStateEnable;                     
  UINT8   ProcessorHyperThreadingDisable;   
  UINT8   ProcessorVmxEnable;               
  UINT8   ProcessorSmxEnable;               
  UINT8	  ThreeStrikeTimer;                 
  UINT8   ProcessorBistEnable;              
  UINT8   FastStringEnable;                 
  UINT8   MonitorMwaitEnable;               
  UINT8   L1Prefetcher;                     
  UINT8   L2Prefetcher;                     
  UINT8   MachineCheckEnable;               
  UINT8   PpinControl;                  	
  UINT8   DcaEnable;                        
  UINT8   DcaPrefetchDelayValue;            
  UINT8   MlcStreamerPrefetcherEnable;      
  UINT8   MlcSpatialPrefetcherEnable;       
  UINT8   DCUStreamerPrefetcherEnable;      
  UINT8   DCUIPPrefetcherEnable;            
  UINT8   DCUModeSelection;                 
  UINT8   ProcessorXapic;                   
  UINT8   BspSelection;                     
  UINT8   IedSize;                          
  UINT8   MTRRDefTypeUncachable;            
  UINT8   OnDieThermalThrottling;           
  UINT8   MfgMode;
  UINT8   ActiveCoreCount;
  UINT8   AesEnable;
  UINT8   SmbusSpeed;
  
  
  
  UINT8   WakeOnLanSupport;
  
  
  
  UINT8   WakeOnRTCS5;
  UINT8   RTCWakeupTimeHour;
  UINT8   RTCWakeupTimeMinute;
  UINT8   RTCWakeupTimeSecond;

  UINT8   DfxAdvDebugJumper;
  
  
  
  
  UINT8   PchRootPort;
  UINT8   GpioNumber;
  UINT8   PchTclockdnWA;
  UINT8   ProchotResponse;
  UINT8   ProchotOutputMode;
  UINT8   VrThermAlertDisable;
  UINT8   LockThermInt;
  UINT8   ProchotFreqResponse;

  UINT8   Iqat;        
  UINT8   Iqat_SetFuseCtl;    
  UINT8   Iqat_FuseCtlValue;  
  UINT8   Iqat_Set64BMrrMpl;  
  UINT8   IOComplianceEn;

  UINT16  SMBusController;
  UINT8   SMBusIOSFClockGating;

  UINT8   Hpet;
#line 288 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"
  
  
  
  UINT8   CxPopUpEnable;
  UINT8   C4Exit;
  UINT16  PCIClockRun;
  
  
  
  UINT8   SerialTerminal;
  UINT8   DebugMessages;
  UINT16  VariablePlatId;

  
  
  
  UINT8   PprEnable[8];
  UINT32  Row[8];
  UINT8   Bank[8];
  UINT8   BankGroup[8];
  UINT8   DramDevice[8];
  UINT8   TargetRank[8];
  UINT8   TargetChannel[8];
  UINT8   CommandMode;
  UINT8   FastBoot;
  UINT8   Reserved1[3];
  
  UINT8	  UsbLegacySupport;
  UINT8   UsbXhciSupport;
  UINT8	  UsbEmul6064;
  UINT8	  UsbMassResetDelay;
  UINT8	  UsbEmu1;
  UINT8	  UsbEmu2;
  UINT8	  UsbEmu3;
  UINT8	  UsbEmu4;
  UINT8	  UsbEmu5;
  UINT8	  UsbEmu6;
  UINT8	  UsbEmu7;
  UINT8	  UsbEmu8;
  UINT16  SystemPageSize;
  UINT8	  SvrMngmntFrb2Enable;
  UINT16  SvrMngmntFrb2Timeout;
  UINT8   SvrMngmntFrb2Policy;
  UINT8	  PowerRestorationPolicy;
  UINT8	  ClearSELLog;
  UINT8	  SMEBootDeviceForceOverride;
  UINT8   MdllOffSen;
  UINT8   MpllOffSen;
  
  UINT16  PowerLimit2Power;
  UINT8   TurboPowerLimitLock;
  
  UINT8   EnableThermalMonitor;
  UINT8   EnergyEfficientPState;
  UINT8   CStateUnDemotion;
  
  UINT8   EnableXe;
  
  UINT8	  EnableDTSCalibration;
  UINT32  ClttThermReg[0x4];
  UINT32  ClttEventTrip;
  UINT8   TjTargetOffset;
  UINT8   TcontrolOffset;
  UINT8   TcontrolOffsetSign;
  UINT8   OutOfSpecThreshold;
  UINT8   OutOfSpecInterruptEnable;
  UINT8   LowTempInterrupt;
  UINT8   HighTempInterrupt;
  UINT8   TempThreshold1;
  UINT8   TempThreshold2;
  UINT8   Threshold1InterruptEnable;
  UINT8   Threshold2InterruptEnable;
  UINT8   ProcHotInterruptEnable;
  
  
  
  UINT8   spreadSpectrumEnable;
  
  
  
  UINT8   HideChannel1;
  UINT8   BankXorMapEnable;
  
  
  
  UINT8   ECCSupport;
  
  
  
  UINT8   FaultyPartEnable;
  UINT8   FaultyPartOnCorrectable;
  
  
  
  UINT8   MemoryThermalEnable;
  
  
  
  UINT8   ThermalThrottlingType;
  
  
  
  UINT8   ClttMode;
  
  
  
  UINT8   TempHi;
  UINT8   TempMid;
  UINT8   TempLo;
  
  
  
  UINT8   BwLevelOnThrtCrit;
  UINT8   BwLevelOnThrtHi;
  UINT8   BwLevelOnThrtMid;
  
  
  
  UINT8   OlttThrtBw;
  
  
  
  UINT8   MemHotThrotLvl;
  
  
  
  UINT8   EnMemTrip;
  UINT8   TempMemTrip;
  
  
  
  UINT8 RxSkewCtl;
  UINT8 TxSkewCtl;
  
  
  
  UINT8 PerformanceProfile;
  
  
  
  UINT8   DynamicSelfRefresh;
  
  
  
  UINT8   DynamicPowerModeOpcode;
  
  
  
  UINT16  SelfRefreshDelay;

  
  
  
  UINT8   CkePowerDownDisable;
  
  
  
  UINT8   SelectRefreshRate;
  
  
  
  UINT8  RefreshWaterMark;
  
  
  
  
  
  UINT8   EnableParityCheck;
  
  
  
  UINT8   PatrolSupport;
  UINT8   PatrolPeriod;
  UINT8   DemandScrub;
  UINT16  MaxScrubDebitCount;
  UINT8   MrcRmtSupport;
  UINT8   MrcDebugMsg;
  UINT8   ReadPerBitEnable;
  UINT8   WritePerBitEnable;
  UINT8   Rk2RkEn;
  UINT8   BDebugSelfRefresh;
  UINT16  CorrectErrThreshold;
  UINT8   PerBitMargins;
  UINT8   EnableScrambler;
  UINT8   EnableSlowPowerDownExit;
  UINT8   AbSegToDram;
  UINT8   ESegToDram;
  UINT8   FSegToDram;
  UINT8   OutOfOrderAgingThreshold;
  UINT8   EnableOutOfOrderProcessing;
  UINT8   TwoClkRdPreamble;
  UINT8   TwoClkWrPreamble;
  UINT8   WriteDataEarlyEnable;
  UINT8   EnableNewRequestBypass;
  UINT8   VrefOverrideEnable;
  UINT8   VrefOverrideValue;
  UINT8   MemoryPreservation;
  
  
  
  UINT8   InputFineDdrVoltage;
  UINT8   Suppress125VOption;
  UINT8   MrcRmtCpgcExpLoopCntValue;
  UINT8   MrcRmtCpgcNumBursts;
  
  
  
  UINT8   DebugInterfaceEnable;
  UINT8   DebugInterfaceLockEnable;
  UINT8   DebugDciEnable;
  
  
  
  UINT16  MitigationProbability;
  
  
  
  UINT8   InputPassGateEnabled;
  UINT8   InputPassGateEnableSelfRefresh;
  UINT8   InputPassGateDirection;
  UINT16  InputPassGateRepetitionCountRange;
  UINT16  InputPassGateIterationOnRow;
  UINT8   InputPassGateSwizzle;
  UINT8   InputPassGatePattern;
  UINT8   InputPassGateTargetPattern;
  UINT8   InputSpeedSelected;
  UINT8   InputPassGatePartial;
  UINT32  InputPassGateRowBankMin;
  UINT32  InputPassGateRowBankMax;
  UINT8   InputPassGateMonteCarloEnable;
  UINT8   InputMontecarloMaxFailures;
  UINT16  InputMontecarloStartRepetition;
  UINT16  InputMontecarloDecrement;
  UINT8   HideRankCh0[0x4];
  UINT8   HideRankCh1[0x4];
  UINT8   InputPassGateRankEnableCh0[0x4];
  UINT8   InputPassGateRankEnableCh1[0x4];
  
  
  
  UINT8   PmopPc0;
  UINT8   PmopPcx;
  
  
  
  UINT16  MmioHighSize;
  
  
  
  UINT8   BmcModeEnable;

  
  
  
  UINT8   MmioSize;
  UINT8   MrcMemoryTestLoop;
  UINT16  LoopCount;
  UINT8   MrcHaltSystemOnMemTestError;
  UINT8   MrcResetLoop;
  UINT8   MrcResetLoopCycles;
  UINT8   MrcTrainingCpgcExpLoopCntValue;
  UINT8   MrcTrainingCpgcNumBursts;
  UINT8   BramParityEnable;
  UINT8   InterleaveMode;
  UINT8   EnableSsaClockGating;
  UINT8   ZqcEnable;
  
  
  
  
  
  
  
  
  
  
  UINT8   CapabilityLock[8];
  
  
  
  UINT8   DdrFreq;
  UINT8   DdrChannels;
  UINT8   OpenPolicyTimer;
  UINT8   CMDRate;
  UINT8   EnableParallelTraining;
  
  
  
  UINT8   HalfWidthEnable;
  
  
  
  UINT8   TclIdle;
  
  
  
  UINT8   TCLTiming;
  UINT8   TRCDTiming;
  UINT8   TRPTiming;
  UINT8   TRASTiming;
  UINT8   TRTPTiming;
  UINT8   TRRDTiming;
  UINT8   TFAWTiming;
  UINT8   TCCDTiming;
  UINT8   TWTPTiming;
  UINT8   TWCLTiming;

  
  
  
  UINT8   VtdEnable;
  UINT8   InterruptRemappingSupport;


  UINT8   OverrideCheckpoints;
  UINT8   RtitSupportEnable;
  UINT8   InputEnableBunitPerformance;
  UINT8   SmmSize;

  
  
  
  UINT8   LeakyBucketUnits;
  UINT64  LeakyBucketRateCh0[0x4];
  UINT64  LeakyBucketRateCh1[0x4];
  UINT16  CorrectableErrorThresholdCh0[0x4];
  UINT16  CorrectableErrorThresholdCh1[0x4];
  
  
  
  UINT64  DramRaplTimeWindow;
  UINT32  DramRaplPowerLimit;
  UINT8   DramRaplPowerLimitEnable;
  UINT8   DramRaplLimitLock;
  
  
  
  UINT8   NonVolMemMode;
  UINT8   NonVolMemInterleaving;
  UINT32  NonVolMemSize;
  UINT8   eraseArmNVDIMMS;
  UINT8   restoreNVDIMMS;
  UINT8   NonVolMemCacheFlushing;
  UINT8   NonVolMemAdrStatusSrc;   
  UINT8   NonVolMemC2fLbaLocMethod;
  UINT32  NonVolMemC2fLba;
  UINT8   NonVolMemTestMode;
  
  
  
  UINT8   PmcInternAdrSourcesSet;
  UINT8   PmcInternAdrSources[32];

  
  UINT8   bifurcation[2] ;

  UINT8   EnableMphyMsg;
  
  UINT8   sataControllerEn[0x8];
  UINT8   sata3ControllerEn;
  UINT8   sata3ControllerSpeed;
  
  
  UINT8   RelaxSecConf;
  
  
  
  UINT8   sataExternal[4];
  UINT8   sata3External[4];
  UINT8   sataSpinUp[4];
  UINT8   sata3SpinUp[4];
  UINT8   sataHotPlug[4];
  UINT8   sata3HotPlug[4];
  UINT8   sataMechSw[4];
  UINT8   sata3MechSw[4];
  UINT8   sataPortEn[4];
  UINT8   sata3PortEn[4];
  UINT8   sata3Speed[4];
  UINT8   sataIdeMode;  
  UINT8   sata3IdeMode; 
  UINT8   sataType;     
  UINT8   sata3Type;    
  UINT8   sataSalp;
  UINT8   sata3Salp;
  UINT8   sataLpm;
  UINT8   sata3Lpm;
  UINT8   sataTestMode;
  
  UINT8   SataOverWriteSirEn;
  UINT32  sata_SIR_LBC01;
  UINT32  sata_SIR_LBC23;
  UINT32  sata_SIR_LBC45;
  UINT8   Sata3OverWriteSirEn;
  UINT32  sata3_SIR_LBC01;
  UINT32  sata3_SIR_LBC23;
  UINT32  sata3_SIR_LBC45;
  
  UINT8   LegacyPxeRom;
  UINT8   BoardId;
  UINT8   InspeccmmEn;
  UINT8   InOrderAPIC;
  UINT8   SchedulerLat;
  UINT8   CosCatAgent[16];
  UINT8   BestEffortMaxLat;
  UINT8   PageHitDelay;
  UINT8   IsocBankPrefetch;
  UINT8   BestEffortBankPref;
  UINT8   ProcessorFlexibleRatioOverrideEnable;
  UINT8   ProcessorFlexibleRatio;           
  
  
  
  UINT32  PkgPowerSkuUnit;                  
  UINT16  PackageRaplPowerLevel1;
  UINT16  PackageRaplPowerLevel2;
  UINT32  PackageRaplTimeWindow1;           
  UINT8   RatioLimitsEnable;                
  UINT8   RatioLimit0;                      
  UINT8   RatioLimit1;                      
  UINT8   RatioLimit2;                      
  UINT8   RatioLimit3;                      
  UINT8   RatioLimit4;                      
  UINT8   RatioLimit5;                      
  UINT8   RatioLimit6;                      
  UINT8   RatioLimit7;                      
  UINT8   CoreCount0;                       
  UINT8   CoreCount1;                       
  UINT8   CoreCount2;                       
  UINT8   CoreCount3;                       
  UINT8   CoreCount4;                       
  UINT8   CoreCount5;                       
  UINT8   CoreCount6;                       
  UINT8   CoreCount7;                       
  UINT8   PkgRaplLimitLock;                 
  UINT16  PL3ControlPowerLevel;             
  UINT8   PL3ControlEnable;                 
  UINT8   PL3ControlTimeWindow;             
  UINT8   PL3ControlDutyCycle;              
  UINT16  PL3ControlPmaxPower;              
  UINT8   PL3ControlLock;                   
  
  
  
  UINT8   SystemErrorEn;
  UINT8   ErrorCloakingEnable;
  UINT8   MemoryErrorLog;
  UINT8   MemoryCorrErrorLog;
  UINT8   MemoryUnCorrErrorLog;
  UINT8   PCIeErrorLog;
  UINT8   PCIeCorrErrorLog;
  UINT8   PCIeNFErrorLog;
  UINT8   PCIeFatalErrorLog;
  UINT8   NativeAEREnable;
  UINT8   PCIeSystemErrEnable;
  UINT8   PCIeParityErrEnable;
  
  
  
  UINT8   WheaSupport;
  UINT8   WheaEinj_05Extn;
  UINT8   WheaLogging;
  UINT8   WheaPcieErrInj;
  
  
  
  UINT8   PchTcLockDown;
  UINT8   CyclonePcieSwitchWA;
  UINT8   PchSataExtOverride[6];
  UINT8   GlobalSmiLock;
  UINT8   PchDmiAspmCtrl;
  UINT8   PchSataGCAssel;
  UINT8   PchPmRegisterLock;
  UINT8   PchNandRemapPortConfigCheck;
  
  UINT8   PchSataLtrConfigLock;
  UINT8   PchSataLtrEnable;
  UINT8   PchSataLtrOverride;
  UINT8   PchSataSnoopLatencyOverrideMultiplier;
  UINT16  PchSataSnoopLatencyOverrideValue;
  UINT8   PchDmiTsSuggestSet;
  UINT8   PchDmiTsawEn;
  UINT8   PchTs0Width;
  UINT8   PchTs1Width;
  UINT8   PchTs2Width;
  UINT8   PchTs3Width;
  UINT8   PchSataTsSuggestSet;
  UINT8   PchP0T1M;
  UINT8   PchP0T2M;
  UINT8   PchP0T3M;
  UINT8   PchP0TDisp;
  UINT8   PchP0Tinact;
  UINT8   PchP0TDispFinit;
  UINT8   PchP1T1M;
  UINT8   PchP1T2M;
  UINT8   PchP1T3M;
  UINT8   PchP1TDisp;
  UINT8   PchP1Tinact;
  UINT8   PchP1TDispFinit;
  
  
  
  UINT8   PchMemCloseStateEn;
  UINT8   PchInternalObffEn;
  UINT8   PchExternalObffEn;
  UINT8   PchClientObffEn;
  UINT8   PchCxObffEntryDelay;
  UINT8   PchPcieObffEnable[8];
  UINT8   PchPcieForceLtrOverride[8];
  
  
  
  UINT8   PchConvertUartIntoGpio;
  UINT8   PchAdditionalSerialIoDevices;
  UINT8   PchSerialIoIdleDetection[5];
  UINT8   PchSerialIoChannel[4];
  UINT8   PchSerialIoInterrupts[7];
  UINT8   PchSerialIoAsyncInt;
  UINT8   PchSerialIoAsyncIntOverride;
  UINT32  PchSerialIoMasterDllCrtl;
  UINT32  PchSerialIoMasterDllInit;
  UINT32  PchSerialIoMasterDllSwOverride;
  UINT32  PchSerialIoSlaveDelayDefault;
  UINT32  PchSerialIoSlaveDelaySdr25;
  UINT32  PchSerialIoSlaveDelayDdr50;
  
  
  
  UINT8   EfiNetworkSupport; 
  UINT8   EnableClockSpreadSpec;

  
  
  
  
  








  
  
  
  

  UINT8   SataSpeed[0x8];
  UINT8   SataPort[0x8];
  UINT8   SataInterfaceMode;
  UINT8   SataHotPlug[0x8];
  UINT8   SataMechanicalSw[6];
  UINT8   SataSpinUp[0x8];
  UINT8   SataExternal[0x8];
  UINT8   SataType[0x8];
  UINT8   SataRaidR0;
  UINT8   SataRaidR1;
  UINT8   SataRaidR10;
  UINT8   SataRaidR5;
  UINT8   SataRaidIrrt;
  UINT8   SataRaidOub;
  UINT8   SataHddlk;
  UINT8   SataLedl;
  UINT8   SataRaidIooe;
  UINT8   SataRaidSrt;
  UINT8   SataRaidOromDelay;
  UINT8   SataRstForceForm;
  UINT8   SataAlternateId;
  UINT8   SataSalp;
  UINT8   SataTestMode;
  UINT8   EfiRaid;
  UINT8   HddAcousticPowerManagement;
  UINT8   HddAcousticMode;
  UINT8   PxDevSlp[0x8];
  UINT8   EnableDitoConfig[0x8];
  UINT16  DitoVal[0x8];
  UINT8   DmVal[0x8];

  
  
  
  
  







  
  
  
  
  
  UINT8   RootPortClockGating[8];
  UINT8   RootPortLinkSpeed[8];
  UINT8   RootPortMaxPayload[8];
  UINT8   RootPortMaxReadRequest[8];
  UINT8   RootPortExtTagField[8];
  UINT8   RootPortRelaxedOrdering[8];
  UINT8   RootPortExtSync[8];
  UINT8   RootPortDeEmphasis[8];
  UINT8   RootPortLaneReversal[8];
  UINT8   RootPortRTTO;
  UINT8   RootPortCTO[8];
  UINT8   RootPortCTORange[8];
  UINT8   RootPortStopScream[8];


  UINT8   PcieClockGating[0x8];
  UINT8   VrpClockGating[0x8];

  UINT8   ControlLaneReversal[ 0x8 ] ;
  UINT8   ControlRtto[0x8];
  UINT8   ControlCto[0x8];
  UINT8   CtoRange[0x8];
  UINT8   DeEmphasis[0x8] ;
  UINT8   barAddrRP[ 0x8 ] ;

  UINT8   PcieDmiExtSync;
  UINT8   PcieSBDE;
  UINT8   PcieRootPortSBDE;
  UINT8   PcieSBDEPort;
  UINT8   PcieUsbGlitchWa;
  UINT8   PcieNandRemap;
  UINT8   PcieNandConfigAccessLockDown;
  UINT8   PcieNandRemapPort;
  UINT8   PcieRootPortFunctionSwapping;
  UINT8   PcieRootPortEn[0x8];
  UINT8   PcieRootPortAspm[0x8]; 
  UINT8   PcieRootPortURE[0x8];
  UINT8   PcieRootPortSLD[0x8];
  UINT8   PcieRootPortFEE[0x8];
  UINT8   PcieRootPortNFE[0x8];
  UINT8   PcieRootPortCEE[0x8];
  UINT8   PcieRootPortCTD[0x8];
  UINT8   PcieRootPortPIE[0x8];
  UINT8   PcieRootPortSFE[0x8];
  UINT8   PcieRootPortSNE[0x8];
  UINT8   PcieRootPortSCE[0x8];
  UINT8   PcieRootPortPMCE[0x8];
  UINT8   PcieRootPortHPE[0x8];
  UINT8   PcieRootPortSpeed[0x8];
  UINT8   PcieRootPortTHS[0x8];
  UINT8   PcieRootPortL1SubStates[0x8];



  UINT8   PcieExtraBusRsvd[0x8];
  UINT16  PcieMemRsvd[0x8];
  UINT8   PcieMemRsvdalig[0x8];
  UINT16  PciePFMemRsvd[0x8];
  UINT8   PciePFMemRsvdalig[0x8];
  UINT8   PcieIoRsvd[0x8];

  
  
  
  
  
  UINT8   PchPcieLtrEnable[8];
  UINT8   PchPcieLtrConfigLock[8];
  UINT8   PchPcieSnoopLatencyOverrideMode[8];
  UINT8   PchPcieSnoopLatencyOverrideMultiplier[8];
  UINT8   PchPcieNonSnoopLatencyOverrideMode[8];
  UINT8   PchPcieNonSnoopLatencyOverrideMultiplier[8];
  UINT16  PchPcieSnoopLatencyOverrideValue[8];
  UINT16  PchPcieNonSnoopLatencyOverrideValue[8];

  
  
  
  UINT8   PchGpioIrqRoute;
  UINT8   PchDriverModeTouchPanel;
  UINT8   PchDriverModeTouchPad;
  UINT8   PchDriverModeSensorHub;
  
  
  
  UINT8   PchIoApic24119Entries;
  
  
  
  UINT8   PchCrossThrottling;
  
  
  
  UINT8   MeTimeout;
  UINT8   MeWaitingTimer;    


  UINT8   SpsIccClkSscSettingSupported;
  UINT8   SpsIccClkSscSetting;
  UINT32  SpsAltitude;
  UINT16  SpsMctpBusOwner;
  UINT8   SpsMeShutdown;
#line 987 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"

  UINT8   MeDidEnabled;                
  UINT8   MeDidTimeout;                
  UINT8   MeDidInitStat;               

  UINT8   MeHmrfpoLockEnabled;
  UINT8   MeHmrfpoEnableEnabled;
  UINT8   MeEndOfPostEnabled;
  UINT8   MeGrPromotionEnabled;
  UINT8   MeGrLockEnabled;
  UINT8   MeHeci1Enabled;
  UINT8   MeHeci2Enabled;
  UINT8   MeHeci3Enabled;
  UINT8   MeIderEnabled;
  UINT8   MeKtEnabled;
  UINT8   MeHeci1HideInMe;
  UINT8   MeHeci2HideInMe;
  UINT8   MeHeci3HideInMe;


  UINT8   FiaMuxMessageEnabled;
#line 1009 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"

  UINT8   HsioEnableMessaging;


  UINT8   NmEnabled;
#line 1015 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"
  UINT8   NmPwrOptBootOverride;
  UINT8   NmPwrOptBoot;
  UINT8   NmCores2DisableOverride;
  UINT8   NmCores2Disable;
  UINT8   NmPowerMsmtOverride;
  UINT8   NmPowerMsmtSupport;
  UINT8   NmHwChangeOverride;
  UINT8   NmHwChangeStatus;
  UINT8   NmPtuLoadOverride;
  UINT8   TestDisableD0I3SettingForHeci;
  UINT8   EnableMePreDidReset;
  UINT8   WaitResetWarningAck;


  UINT8         MeSeg;
  UINT8         MeType;
  UINT8         MeFirmwareMode;

























#line 1058 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"
#line 1059 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"


  UINT8   IeHeci1Enabled;
  UINT8   IeHeci2Enabled;
  UINT8   IeHeci3Enabled;
  UINT8   IeIderEnabled;
  UINT8   IeKtEnabled;
  UINT16  SubsystemId;
  UINT8   IeDisabledInSoftStraps;
  UINT8   DfxIe;
#line 1070 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"

  
  
  
  UINT8         SuppressChannelOption;
  UINT8         EnableDdr4Options;
  UINT8         CommandAddressParity;          

  
  
  
  UINT8         MsiRedirAlgorithm;					

  
  
  
  UINT8   NtbBarWidth;
  UINT64  NtbBarSize;

  
  
  
  UINT8   TraceHubEnable;
  UINT8   FWTraceEnable;
  UINT8   FWTraceDestination;
  UINT8   Mem0WrapEnable;
  UINT8   Mem1WrapEnable;
  
  UINT8   ProcTraceEnable;
  UINT8   ProcTraceDestination;
  UINT8   ProcTraceOutputScheme;
  UINT8   ProcTraceMemSize;
  

  UINT8   EnableSLD;
  
  
  
  
  





















  
  UINT8  Sntp4TimeSync;
  UINT8  Sntp4Server;
  UINT8  FiaMuxOverride;
  UINT8  FiaLaneConfig[20];
  UINT8  CoreBiosDoneEnabled;
  
  UINT8  BifCtl[2];
  UINT8  FiaPcieRootPortLinkWidth[0x8];
  
} SYSTEM_CONFIGURATION;


typedef struct {

  UINT8   PmcReadDisable;
  UINT8   PchDciEn;
  UINT8   PchDciAutoDetect;
  UINT8   PchRtcLock;
  UINT8   Hpet;
  UINT8   StateAfterG3;
  UINT8   IchPort80Route;
  UINT8   EnhancePort8xhDecoding;
  UINT8   PchSirqMode;
  UINT8   PciePllSsc;

  
  
  
  UINT8   PchUsb20[2];
  UINT8   PchUsbPortDisable;
  UINT8   PchUsbHsPort[4];
  UINT8   PchUsbSsPort[4];
  UINT8   UsbPrecondition;
  UINT8   DisableComplianceMode;
  UINT8   IIL1e;
  UINT8   XhciL1e;
  
  
  
  
  UINT8   PchSata[0x2];
  UINT8   SataSpeedLimit[0x2];
  UINT8   SataInterfaceMode[0x2];
  UINT8   SataPort[16];
  UINT8   SataHotPlug[16];
  UINT8   SataMechanicalSw[16];
  UINT8   SataSpinUp[16];
  UINT8   SataExternal[16];
  UINT8   PxDevSlp[16];
  UINT8   EnableDitoConfig[16];
  UINT8   DmVal[16];
  UINT16  DitoVal[16];
  UINT8   SataType[16];
  UINT8   SataTopology[16];
  UINT8   SataAlternateId[0x2];
  UINT8   SataRaidR0[0x2];
  UINT8   SataRaidR1[0x2];
  UINT8   SataRaidR10[0x2];
  UINT8   SataRaidR5[0x2];
  UINT8   SataRaidIrrt[0x2];
  UINT8   SataRaidOub[0x2];
  UINT8   SataHddlk[0x2];
  UINT8   SataLedl[0x2];
  UINT8   SataRaidIooe[0x2];
  UINT8   SataRaidSrt[0x2];
  UINT8   SataRaidOromDelay[0x2];
  UINT8   SataRstForceForm[0x2];
  UINT8   SataSalp[0x2];
  UINT8   SataLpm[0x2];
  UINT8   SataTestMode[0x2];
  UINT8   PortMultiplierSupported[0x2];

  UINT8   PcieComplianceTestMode;
  UINT8   PcieTopology[16];

  
  
  
  UINT8   PchIoApic24119Entries;

  
  
  
  UINT8   PchCrossThrottling;

  
  
  
  UINT8 HsUartMode[3]; 
  UINT16 HsUartCOM[3]; 





  UINT8 GpioStatus;




  
  
  
  
  
  UINT8   TraceHubEnable;
  UINT8   TraceHubFwEnable;
  UINT8   TraceHubFwDestination;
  UINT32  TraceHubMemBaseRegion0;
  UINT32  TraceHubMemBaseRegion1;
  UINT8   TraceHubPtiMode;
  UINT8   TraceHubPtiTraining;
  UINT8   TraceHubPtiSpeed;
  UINT8   TraceHubMemoryEnabled;
  UINT8   TraceHubEnableMode;
  UINT8   MemRegion0BufferSize;
  UINT8   MemRegion1BufferSize;
  
  
  
  UINT8   PchTtLevelSuggestSet;
  UINT16  PchThrmT0Level;
  UINT16  PchThrmT1Level;
  UINT16  PchThrmT2Level;
  UINT8   PchThrmTtEnable;
  UINT8   PchThrmTtState13Enable;
  UINT8   PchThrmTtLock;

  
  
  
  UINT8   PchDmiTsSuggestSet;
  UINT8   PchTs0Width;
  UINT8   PchTs1Width;
  UINT8   PchTs2Width;
  UINT8   PchTs3Width;
  UINT8   PchDmiTsawEn;
  
  
  
  UINT8   PchSataTsSuggestSet;
  UINT8   PchP0T1M;
  UINT8   PchP0T2M;
  UINT8   PchP0T3M;
  UINT8   PchP0TDisp;
  UINT8   PchP0Tinact;
  UINT8   PchP0TDispFinit;
  UINT8   PchP1T1M;
  UINT8   PchP1T2M;
  UINT8   PchP1T3M;
  UINT8   PchP1TDisp;
  UINT8   PchP1Tinact;
  UINT8   PchP1TDispFinit;

  
  
  

  UINT8   PchPwrOnConfigEnable;
  UINT8   PchNvmSafeMode;
  UINT8   PchGpioSafeMode;
  UINT8   PchDmiSafeMode;
  UINT8   PchSmbusSafeMode;
  UINT8   PchRtcSafeMode;
  UINT8   PchItssSafeMode;
  UINT8   PchP2sbSafeMode;
  UINT8   PchPsthSafeMode;
  UINT8   PchHostPmSafeMode;
  UINT8   PchScsSafeMode;
  UINT8   PchThermalSafeMode;
  UINT8   PchPcieSafeMode;
  UINT8   PchPsfSafeMode;
  UINT8   PchXhciSafeMode;
  UINT8   PchXdciSafeMode;
  UINT8   PchSataSafeMode;
  UINT8   PchFiaSafeMode;
  UINT8   PchLpcSafeMode;
  UINT8   PchIshSafeMode;
  UINT8   PchHdaSafeMode;
  UINT8   PchDciSafeMode;
  UINT8   PchSkyCamSafeMode;
  UINT8   PchSpiSafeMode;
#line 1315 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"

} PCH_SETUP;

extern EFI_GUID  {0xc598db5c, 0x50e7, 0x46f6, { 0xab, 0x16, 0x41, 0x6f, 0x47, 0x23, 0x9c, 0xa9 }};
extern EFI_GUID  gPchSetupVariableGuid;
#line 1321 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include/SetupVariable.h"

#line 35 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Common.hfr"


























































#line 36 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"

formset 
    guid      = { 0xc598db5c, 0x50e7, 0x46f6, 0xab, 0x16, 0x41, 0x6f, 0x47, 0x23, 0x9c, 0xa9 },
    title     = STRING_TOKEN(0x00E1),
    help      = STRING_TOKEN(0x00E2),
    class     = 0x02,
    subclass  = 0,

    efivarstore SYSTEM_CONFIGURATION, attribute = 0x03, name = IntelSetup, guid = { 0xc598db5c, 0x50e7, 0x46f6, 0xab, 0x16, 0x41, 0x6f, 0x47, 0x23, 0x9c, 0xa9 };
    efivarstore PCH_SETUP, attribute = 0x03, name = PchSetup, guid = { 0x4570b7f1, 0xade8, 0x4943, 0x8d, 0xc3, 0x40, 0x64, 0x72, 0x84, 0x23, 0x84 }; 



    form formid = 0x01,

        title = STRING_TOKEN(0x00E1);


	


	
	







    
    
    
    suppressif 1;                       
    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x00DB),
        text  = STRING_TOKEN(0x00DC),
        flags = 0, key = 0;
        
    
    
    
    text 
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00D7),
        text   = STRING_TOKEN(0x00D8),
        flags  = 0, key = 0;
        
    
    
    
    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x00D9),
        text  = STRING_TOKEN(0x00DA),
        flags = 0, key = 0;
        
    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x000A),
        text  = STRING_TOKEN(0x000B),
        flags = 0, key = 0;
    endif;                              

    oneof varid = IntelSetup.RelaxSecConf,
        prompt   = STRING_TOKEN(0x0192),
        help     = STRING_TOKEN(0x0193),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
    
        subtitle text = STRING_TOKEN(0x0150);

        suppressif 1;   
        goto 0x0411,
          prompt = STRING_TOKEN(0x015C),
          help   = STRING_TOKEN(0x015D);        
        endif;                          
         
        
        
        goto 0x02, 
            prompt = STRING_TOKEN(0x0002),
            help   = STRING_TOKEN(0x0003);

         
        
        
        
        suppressif 1;                       
        goto 0x07, 
             prompt = STRING_TOKEN(0x00AA),
             help   = STRING_TOKEN(0x00AB);

        
        
        
        
        




	
	    
        
        
        
        goto 0x09, 
             prompt = STRING_TOKEN(0x01C2),
             help   = STRING_TOKEN(0x01C2);
	     
        
        
        
        
        




	
        
        
        
        
        goto 0x0A, 
             prompt = STRING_TOKEN(0x0123),
             help   = STRING_TOKEN(0x0124);

        
        
        
        goto 0x01A8, 
             prompt = STRING_TOKEN(0x0125),
             help   = STRING_TOKEN(0x0126);          


        goto 0x410,
            prompt = STRING_TOKEN(0x0595),
            help   = STRING_TOKEN(0x0596);
#line 179 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
	    
        
        
        
        goto 0x400,
            prompt = STRING_TOKEN(0x0523),
            help   = STRING_TOKEN(0x0524);

        
        
        
         goto 0x401,
            prompt  = STRING_TOKEN(0x0570),
            help    = STRING_TOKEN(0x0571);

	
        
        
        goto 0x1B, 
            prompt = STRING_TOKEN(0x02B2),
            help   = STRING_TOKEN(0x02B3);
        endif;                          
        











		
		
		
		
		goto 0x0305, 
			prompt = STRING_TOKEN(0x01C5),
			help   = STRING_TOKEN(0x01C5);

		
		
		
		 goto 0x22, 
			  prompt  = STRING_TOKEN(0x01C6),
			  help    = STRING_TOKEN(0x01C7);
		
endform;

    
    
    
    form formid = 0x0A,

        title    = STRING_TOKEN(0x0123);

        subtitle text = STRING_TOKEN(0x0123);
        subtitle text = STRING_TOKEN(0x014F);
        subtitle text = STRING_TOKEN(0x0150);

        
        
        
suppressif TRUE;        
        oneof varid     = IntelSetup.VideoSelect,
            prompt      = STRING_TOKEN(0x0143),
            help        = STRING_TOKEN(0x0144),
            option text = STRING_TOKEN(0x0153),                 value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
            option text = STRING_TOKEN(0x0145), value = 1, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0146),    value = 2, flags = RESET_REQUIRED;
        endoneof;
endif;

        oneof varid     = IntelSetup.CoreBGF,
            prompt      = STRING_TOKEN(0x0141),
            help        = STRING_TOKEN(0x0142),
            option text = STRING_TOKEN(0x0206),               value = 8, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0205),               value = 4, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
            option text = STRING_TOKEN(0x0204),               value = 2, flags = RESET_REQUIRED;
        endoneof;
        
        oneof varid     = IntelSetup.SataSelect,
            prompt      = STRING_TOKEN(0x0147),
            help        = STRING_TOKEN(0x0148),
            option text = STRING_TOKEN(0x0149), value = 0, flags = RESET_REQUIRED | DEFAULT;
            option text = STRING_TOKEN(0x014A),    value = 1, flags = RESET_REQUIRED| MANUFACTURING;
        endoneof;

        
        oneof varid  = IntelSetup.InspeccmmEn,
     	    prompt = STRING_TOKEN(0x014B),
     	    help   = STRING_TOKEN(0x014C),
     	    option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT;
            option text = STRING_TOKEN(0x0151),  value = 1, flags =  RESET_REQUIRED;
        endoneof;


        oneof varid  = IntelSetup.IOComplianceEn,
          prompt = STRING_TOKEN(0x0440 ),
          help = STRING_TOKEN(0x0347),
          option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
          option text = STRING_TOKEN(0x0348),  value = 7, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0349),  value = 3, flags = RESET_REQUIRED;
        endoneof;


        
        
        
        oneof varid     = IntelSetup.EfiWindowsInt10Workaround,
            prompt      = STRING_TOKEN(0x014D),
            help        = STRING_TOKEN(0x014E),
            option text = STRING_TOKEN(0x0152),              value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
            option text = STRING_TOKEN(0x0151),               value = 1, flags = RESET_REQUIRED;
        endoneof;
        
        
        
        
        
        







        
        
        
        
        







































        

	
        
        
        
        

















        
    endform;
  
  


























































































































































  
  form formid = 0x0411,
     title = STRING_TOKEN(0x015E);














    oneof varid = IntelSetup.FiaMuxOverride,
      prompt   = STRING_TOKEN(0x015F),
      help     = STRING_TOKEN(0x0160),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags =  RESET_REQUIRED;
    endoneof;


    grayoutif ideqval IntelSetup.FiaMuxOverride == 0;
      
      
      
      oneof varid = IntelSetup.BifCtl[0],
          prompt = STRING_TOKEN(0x0161),
          help    = STRING_TOKEN(0x0163),
          option text = STRING_TOKEN(0x0165), value = 0x0F, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0166), value = 0x0D, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0167), value = 0x07, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0168), value = 0x05, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0169), value = 0x01, flags = RESET_REQUIRED;
      endoneof;
      
      oneof varid = IntelSetup.BifCtl[1],
          prompt = STRING_TOKEN(0x0162),
          help    = STRING_TOKEN(0x0164),
          option text = STRING_TOKEN(0x0165), value = 0xF0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0166), value = 0xD0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0167), value = 0x70, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0168), value = 0x50, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0169), value = 0x10, flags = RESET_REQUIRED;
      endoneof;
      
      








      oneof varid = IntelSetup.FiaLaneConfig[0],
          prompt = STRING_TOKEN(0x016A),
          help    = STRING_TOKEN(0x018E),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[1],
           prompt = STRING_TOKEN(0x016B),
           help = STRING_TOKEN(0x018E),
           option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
           option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
      endoneof;







      oneof varid = IntelSetup.FiaLaneConfig[2],
            prompt = STRING_TOKEN(0x016C),
            help = STRING_TOKEN(0x018E),
            option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[3],
          prompt = STRING_TOKEN(0x016D),
          help = STRING_TOKEN(0x018E),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
      endoneof;





























      oneof varid = IntelSetup.FiaLaneConfig[4],
          prompt = STRING_TOKEN(0x016E),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[5],
          prompt = STRING_TOKEN(0x016F),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[6],
          prompt = STRING_TOKEN(0x0170),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[7],
          prompt = STRING_TOKEN(0x0171),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;









      oneof varid = IntelSetup.FiaLaneConfig[8],
          prompt = STRING_TOKEN(0x0172),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[9],
          prompt = STRING_TOKEN(0x0173),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;








      oneof varid = IntelSetup.FiaLaneConfig[10],
          prompt = STRING_TOKEN(0x0174),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[11],
          prompt = STRING_TOKEN(0x0175),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;








      oneof varid = IntelSetup.FiaLaneConfig[12],
          prompt = STRING_TOKEN(0x0176),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[13],
          prompt = STRING_TOKEN(0x0177),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[14],
          prompt = STRING_TOKEN(0x0178),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[15],
          prompt = STRING_TOKEN(0x0179),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018B), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
      endoneof;















      oneof varid = IntelSetup.FiaLaneConfig[16],
          prompt = STRING_TOKEN(0x017A),
          help = STRING_TOKEN(0x0190),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018D), value = 3, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[17],
          prompt = STRING_TOKEN(0x017B),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018D), value = 3, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      endoneof;

      oneof varid = IntelSetup.FiaLaneConfig[18],
          prompt = STRING_TOKEN(0x017C),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018D), value = 3, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaLaneConfig[19],
          prompt = STRING_TOKEN(0x017D),
          help = STRING_TOKEN(0x018F),
          option text = STRING_TOKEN(0x018A), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x018C), value = 2, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x018D), value = 3, flags = RESET_REQUIRED;
      endoneof;
      
      
      
      
      
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text = STRING_TOKEN(0x0189);
      
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[0],
          prompt = STRING_TOKEN(0x017E),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[1],
          prompt = STRING_TOKEN(0x017F),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[2],
          prompt = STRING_TOKEN(0x0180),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[3],
          prompt = STRING_TOKEN(0x0181),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[4],
          prompt = STRING_TOKEN(0x0182),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[5],
          prompt = STRING_TOKEN(0x0183),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[6],
          prompt = STRING_TOKEN(0x0184),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      oneof varid = IntelSetup.FiaPcieRootPortLinkWidth[7],
          prompt = STRING_TOKEN(0x0185),
          help = STRING_TOKEN(0x0186),
          option text = STRING_TOKEN(0x0187), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
          option text = STRING_TOKEN(0x0188), value = 0xF, flags = RESET_REQUIRED;
      endoneof;
      
    endif;
  endform;
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorSetup.hfr"































  form formid = 0x02,

    title         = STRING_TOKEN(0x0002);
    subtitle text = STRING_TOKEN(0x0002);
    subtitle text = STRING_TOKEN(0x014F);

    suppressif TRUE;
    checkbox varid    = IntelSetup.Access,
             prompt   = STRING_TOKEN(0x0150),
             help     = STRING_TOKEN(0x0150),
             flags    = 0,
    endcheckbox;
    endif;

    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x0006),
        text  = STRING_TOKEN(0x0007),
        flags = 0, key = 0;

    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x0008),
        text  = STRING_TOKEN(0x0009),
        flags = 0, key = 0;

    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x000C),
        text  = STRING_TOKEN(0x000D),
        flags = 0, key = 0;

    
    
    






    
    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x000E),
        text  = STRING_TOKEN(0x000F),
        flags = 0, key = 0;

    text
        help  = STRING_TOKEN(0x0150),
        text  = STRING_TOKEN(0x0010),
        text  = STRING_TOKEN(0x0011),
        flags = 0, key = 0;








        subtitle text = STRING_TOKEN(0x0043);
        
        subtitle text = STRING_TOKEN(0x0044);


    subtitle text = STRING_TOKEN(0x0150);

      
      
      
    suppressif TRUE;

        oneof varid     = IntelSetup.IedSize,
            prompt      = STRING_TOKEN(0x0017),
            help        = STRING_TOKEN(0x0018),
            option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
            option text = STRING_TOKEN(0x0012),    value = 1,  flags = RESET_REQUIRED;
        endoneof;
    endif;

    
    
    









    oneof varid     = IntelSetup.ProcessorEistEnable,
        prompt      = STRING_TOKEN(0x0023),
        help        = STRING_TOKEN(0x0024),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
    endoneof;


    
    
    
    suppressif 1;       
    oneof varid     = IntelSetup.BiosRequestFreq,
        prompt      = STRING_TOKEN(0x0084),
        help        = STRING_TOKEN(0x0085),




        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
#line 147 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorSetup.hfr"
    endoneof;
    endif;                              

    
    
    















        grayoutif ideqval IntelSetup.ProcessorEistEnable == 0;
            oneof varid     = IntelSetup.TurboModeEnable,
                prompt      = STRING_TOKEN(0x0037),
                help        = STRING_TOKEN(0x0038),




                option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
                option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
#line 179 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorSetup.hfr"
            endoneof;
        endif;


    suppressif 1;       
    oneof varid   = IntelSetup.EnableTm1,
        prompt      = STRING_TOKEN(0x0056),
        help        = STRING_TOKEN(0x0057),
        option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING |DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif  ideqval IntelSetup.ProcessorEistEnable == 0 OR ideqval IntelSetup.EnableTm1 == 0;
        oneof varid   = IntelSetup.Tm2ThrottlingType,
            prompt      = STRING_TOKEN(0x0058),
            help        = STRING_TOKEN(0x0059),
            option text = STRING_TOKEN(0x005A), value = 0, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x005B),  value = 1, flags = MANUFACTURING |DEFAULT | RESET_REQUIRED;
        endoneof;
    endif;

    
    
    
    oneof varid = IntelSetup.DynamicSelfRefresh,
      prompt      = STRING_TOKEN(0x004C),
      help        = STRING_TOKEN(0x004D),
      option text = STRING_TOKEN(0x0152), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid = IntelSetup.DynamicPowerModeOpcode,
      prompt      = STRING_TOKEN(0x0050),
      help        = STRING_TOKEN(0x0051),
      option text = STRING_TOKEN(0x0052), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0053), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    
    
    













    oneof varid     = IntelSetup.ProcessorCcxEnable,
        prompt      = STRING_TOKEN(0x004A),
        help        = STRING_TOKEN(0x004B),




        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
#line 246 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorSetup.hfr"
    endoneof;


    grayoutif ideqval IntelSetup.ProcessorCcxEnable == 00;
      
      
      
      
      
      
      oneof varid     = IntelSetup.PackageCState,
          prompt      = STRING_TOKEN(0x0045),
          help        = STRING_TOKEN(0x0046),
          option text = STRING_TOKEN(0x0047),     value = 0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0048),               value = 1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0049),              value = 2,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
      endoneof;
      
      
      
      
      oneof varid = IntelSetup.MaxCState,
          prompt  = STRING_TOKEN(0x002B),
          help    = STRING_TOKEN(0x002C),
          option text = STRING_TOKEN(0x002D),  value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x002E),  value = 1, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
      endoneof;
      
      
      
      










      grayoutif  ideqval IntelSetup.ProcessorEistEnable == 0;
          oneof varid     = IntelSetup.ProcessorC1eEnable,
              prompt      = STRING_TOKEN(0x0021),
              help        = STRING_TOKEN(0x0022),
              option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
              option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
          endoneof;
      endif;


      
      
      
      oneof varid     = IntelSetup.MonitorMwaitEnable,
          prompt      = STRING_TOKEN(0x0029),
          help        = STRING_TOKEN(0x002A),
          option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED  | MANUFACTURING | DEFAULT;
      endoneof;
    endif;  


    oneof varid = IntelSetup.L1Prefetcher,
         prompt  = STRING_TOKEN(0x002F),
         help    = STRING_TOKEN(0x0030),
         option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED  | MANUFACTURING | DEFAULT;
         option text = STRING_TOKEN(0x0152),   value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.L2Prefetcher,
         prompt  = STRING_TOKEN(0x0031),
         help    = STRING_TOKEN(0x0032),
         option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED  | MANUFACTURING | DEFAULT;
         option text = STRING_TOKEN(0x0152),   value = 0, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.TStateEnable,
        prompt      = STRING_TOKEN(0x0060),
        help        = STRING_TOKEN(0x0061),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    suppressif ideqval IntelSetup.TStateEnable == 0;
      oneof varid   = IntelSetup.OnDieThermalThrottling,
        prompt      = STRING_TOKEN(0x0062),
        help        = STRING_TOKEN(0x0063),
        option text = STRING_TOKEN(0x0064),  value = 0x00, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
        option text = STRING_TOKEN(0x0065),  value = 0x02, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0066),  value = 0x04, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0067),  value = 0x06, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0068),  value = 0x08, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0069),  value = 0x0A, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x006A),  value = 0x0C, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x006B),  value = 0x0E, flags = RESET_REQUIRED;
      endoneof;
	endif;

    
    
    
    oneof varid     = IntelSetup.FastStringEnable,
        prompt      = STRING_TOKEN(0x0033),
        help        = STRING_TOKEN(0x0034),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED  | MANUFACTURING | DEFAULT;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.MachineCheckEnable,
        prompt      = STRING_TOKEN(0x0035),
        help        = STRING_TOKEN(0x0036),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED  | MANUFACTURING | DEFAULT;
    endoneof;


    
    
    
      oneof varid     = IntelSetup.PpinControl,
          prompt      = STRING_TOKEN(0x001D),
          help        = STRING_TOKEN(0x001E),
          option text = STRING_TOKEN(0x0020), value = 0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x001F),  value = 1, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
      endoneof;

    
    endif;                                              

    
    
    
    oneof varid     = IntelSetup.CpuidMaxValue,
        prompt      = STRING_TOKEN(0x0025),
        help        = STRING_TOKEN(0x0026),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.ExecuteDisableBit,
        prompt      = STRING_TOKEN (0x0027),
        help        = STRING_TOKEN (0x0028),
        option text = STRING_TOKEN (0x0152), value = 0, flags = 0;
        option text = STRING_TOKEN (0x0151),  value = 1, flags = MANUFACTURING | DEFAULT;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.ProcessorVmxEnable,
        prompt      = STRING_TOKEN(0x001B),
        help        = STRING_TOKEN(0x001C),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    endoneof;

    
    
    
    suppressif 1;                       
    oneof varid     = IntelSetup.ProcessorBistEnable,
        prompt      = STRING_TOKEN(0x0054),
        help        = STRING_TOKEN(0x0055),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED;
    endoneof;
    endif;                                              

    
    
    
    suppressif ideqval IntelSetup.InterruptRemappingSupport == 0;
     

      oneof varid     = IntelSetup.ProcessorXapic,
	    prompt      = STRING_TOKEN(0x003F),
        help        = STRING_TOKEN(0x0040),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
      endoneof;

     
    endif;

    
    
    
    oneof varid     = IntelSetup.AesEnable,
        prompt      = STRING_TOKEN(0x0041),
        help        = STRING_TOKEN(0x0042),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    endoneof;

    
    
    
    suppressif 1;                       
    grayoutif TRUE;
      numeric varid = IntelSetup.PkgPowerSkuUnit,
          prompt    = STRING_TOKEN(0x006E),
          help      = STRING_TOKEN(0x006F),
          flags     = DISPLAY_UINT_HEX | INTERACTIVE | RESET_REQUIRED,
          minimum   = 0x0,
          maximum   = 0xffffffff,
          step      = 1,
          default   = 0xffffffff,
      endnumeric;
    endif;

    
    
    
    oneof varid     = IntelSetup.PkgRaplLimitLock,
        prompt      = STRING_TOKEN(0x0076),
        help        = STRING_TOKEN(0x0077),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;


    endoneof;

    
    
    
    grayoutif ideqval IntelSetup.PkgRaplLimitLock == 1;
        numeric varid = IntelSetup.PackageRaplTimeWindow1,
            prompt    = STRING_TOKEN(0x0070),
            help      = STRING_TOKEN(0x0071),
            flags     = DISPLAY_UINT_DEC | INTERACTIVE | NUMERIC_SIZE_4 | RESET_REQUIRED,
            minimum   = 0x0,
            maximum   = 0xFFFFFFFF,
            step      = 1,
            default   = 0xFFFFFFFF,
        endnumeric;
        
        numeric varid = IntelSetup.PackageRaplPowerLevel1,
            prompt    = STRING_TOKEN(0x0072),
            help      = STRING_TOKEN(0x0073),
            flags     = DISPLAY_UINT_DEC | INTERACTIVE | NUMERIC_SIZE_2 | RESET_REQUIRED,
            minimum   = 0x0,
            maximum   = 0x7FFF,
            step      = 1,
            default   = 0x0,
        endnumeric;
        
        numeric varid = IntelSetup.PackageRaplPowerLevel2,
            prompt    = STRING_TOKEN(0x0074),
            help      = STRING_TOKEN(0x0075),
            flags     = DISPLAY_UINT_DEC | INTERACTIVE | NUMERIC_SIZE_2 | RESET_REQUIRED,
            minimum   = 0x0,
            maximum   = 0x7FFF,
            step      = 1,
            default   = 0x0,
        endnumeric;
    endif;

    
    
    
    numeric
      name    = ActiveCores,
      varid   = IntelSetup.ActiveCoreCount,
      prompt  = STRING_TOKEN(0x005C),
      help    = STRING_TOKEN(0x005D),
      flags   = 0 | RESET_REQUIRED | INTERACTIVE,
      minimum = 0,
      maximum = 16, 
      step    = 0,                                    
                                                      
      default value = 0,
    endnumeric;

    
    
    
    oneof varid     = IntelSetup.EnableDumpCrashLog,
        prompt      = STRING_TOKEN(0x005E),
        help        = STRING_TOKEN(0x005F),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid     = IntelSetup.ProcessorFlexibleRatioOverrideEnable,
        prompt      = STRING_TOKEN(0x006C),
        help        = STRING_TOKEN(0x006D),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.ProcessorFlexibleRatioOverrideEnable == 0;
        numeric varid = IntelSetup.ProcessorFlexibleRatio,
            prompt  = STRING_TOKEN(0x0019),
            help    = STRING_TOKEN(0x001A),
            flags   = 0 | RESET_REQUIRED,
            minimum = 0, maximum = 100,
            step    = 1, 
                         
            default = 24,
        endnumeric;
    endif;
    oneof varid     = IntelSetup.RatioLimitsEnable,
        prompt      = STRING_TOKEN(0x0086),
        help        = STRING_TOKEN(0x0087),
        option text = STRING_TOKEN(0x0152),  value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.RatioLimitsEnable == 0;
      goto 0x031F,
      prompt  = STRING_TOKEN(0x0088),
      help    = STRING_TOKEN(0x0089);
    endif;    
	
	
    
    
    goto 0x0414, 
        prompt = STRING_TOKEN(0x0004),
        help   = STRING_TOKEN(0x0005);
    endif;                                              
  endform;
  
  form formid = 0x0414,

    title         = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x014F);
    
    
    
    grayoutif ideqval IntelSetup.ProcessorEistEnable == 0;
        oneof varid     = IntelSetup.iTurboModeValue,
            prompt      = STRING_TOKEN(0x0039),
            help        = STRING_TOKEN(0x003A),
            option text = STRING_TOKEN(0x003B),           value = 0,  flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x003C),  value = 4,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
            option text = STRING_TOKEN(0x003D),   value = 8,  flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x003E),      value = 12, flags = RESET_REQUIRED;
        endoneof;
    endif;
    
    
    
    oneof varid     = IntelSetup.PL3ControlLock,
        prompt      = STRING_TOKEN(0x0082),
        help        = STRING_TOKEN(0x0083),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;


    endoneof;

    
    
    
    grayoutif ideqval IntelSetup.PL3ControlLock == 1;
        
        
        
        oneof varid = IntelSetup.PL3ControlTimeWindow,
            prompt    = STRING_TOKEN(0x007C),
            help      = STRING_TOKEN(0x007D),
            option text = STRING_TOKEN(0x0013),  value = 1,  flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0014),  value = 2,  flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0015),  value = 3,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
            option text = STRING_TOKEN(0x0016), value = 4,  flags = RESET_REQUIRED;
        endoneof;

        
        
        
        oneof varid     = IntelSetup.PL3ControlEnable,
            prompt      = STRING_TOKEN(0x007E),
            help        = STRING_TOKEN(0x007F),


            option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        endoneof;

        
        
        
        numeric varid = IntelSetup.PL3ControlPowerLevel,
            prompt    = STRING_TOKEN(0x0080),
            help      = STRING_TOKEN(0x0081),
            flags     = DISPLAY_UINT_DEC | INTERACTIVE | NUMERIC_SIZE_2 | RESET_REQUIRED,
            minimum   = 0x0,
            maximum   = 0x7FFF,
            step      = 1,
            default   = 0x0,
        endnumeric;
        
        
        
        
        numeric varid = IntelSetup.PL3ControlDutyCycle,
            prompt    = STRING_TOKEN(0x007A),
            help      = STRING_TOKEN(0x007B),
            flags     = 0 | RESET_REQUIRED,
            minimum   = 0,
            maximum   = 100,       
            step      = 0,         
                                   
            default   = 25,
        endnumeric;
        
        
        
        
        numeric varid = IntelSetup.PL3ControlPmaxPower,
            prompt    = STRING_TOKEN(0x0078),
            help      = STRING_TOKEN(0x0079),
            flags     = DISPLAY_UINT_DEC | INTERACTIVE | NUMERIC_SIZE_2 | RESET_REQUIRED,
            minimum   = 0x0,
            maximum   = 0x7FFF,
            step      = 1,
            default   = 0x0,
        endnumeric;
    endif;
	
	
    
    
    numeric varid = IntelSetup.SelfRefreshDelay,
      prompt    = STRING_TOKEN(0x004E),
      help      = STRING_TOKEN(0x004F),
      flags     = RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0x514,
      step      = 1,
      default   = 0x01e,
    endnumeric;
   endform;
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorLimitsSetup.hfr"































  
  
  
  form formid = 0x031F,
    title = STRING_TOKEN(0x0088);

    subtitle text = STRING_TOKEN(0x0088);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    
    
    
    numeric varid = IntelSetup.RatioLimit0,
      prompt    = STRING_TOKEN(0x008A),
      help      = STRING_TOKEN(0x008B),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit1,
      prompt    = STRING_TOKEN(0x008C),
      help      = STRING_TOKEN(0x008D),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit2,
      prompt    = STRING_TOKEN(0x008E),
      help      = STRING_TOKEN(0x008F),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit3,
      prompt    = STRING_TOKEN(0x0090),
      help      = STRING_TOKEN(0x0091),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit4,
      prompt    = STRING_TOKEN(0x0092),
      help      = STRING_TOKEN(0x0093),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit5,
      prompt    = STRING_TOKEN(0x0094),
      help      = STRING_TOKEN(0x0095),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit6,
      prompt    = STRING_TOKEN(0x0096),
      help      = STRING_TOKEN(0x0097),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.RatioLimit7,
      prompt    = STRING_TOKEN(0x0098),
      help      = STRING_TOKEN(0x0099),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount0,
      prompt    = STRING_TOKEN(0x009A),
      help      = STRING_TOKEN(0x009B),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount1,
      prompt    = STRING_TOKEN(0x009C),
      help      = STRING_TOKEN(0x009D),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount2,
      prompt    = STRING_TOKEN(0x009E),
      help      = STRING_TOKEN(0x009F),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount3,
      prompt    = STRING_TOKEN(0x00A0),
      help      = STRING_TOKEN(0x00A1),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount4,
      prompt    = STRING_TOKEN(0x00A2),
      help      = STRING_TOKEN(0x00A3),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;
	
    
    
    
    numeric varid = IntelSetup.CoreCount5,
      prompt    = STRING_TOKEN(0x00A4),
      help      = STRING_TOKEN(0x00A5),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;

    
    
    
    numeric varid = IntelSetup.CoreCount6,
      prompt    = STRING_TOKEN(0x00A6),
      help      = STRING_TOKEN(0x00A7),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;
	
    
    
    
    numeric varid = IntelSetup.CoreCount7,
      prompt    = STRING_TOKEN(0x00A8),
      help      = STRING_TOKEN(0x00A9),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_1 | RESET_REQUIRED,
      minimum   = 0x0,
      maximum   = 0xff,
      step      = 1,
      default   = 0x0,
    endnumeric;
	
  endform;

#line 692 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ProcessorSetup.hfr"

#line 871 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  
  
  
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\ThermalConfig.hfr"































  form formid = 0x07,

    title         = STRING_TOKEN(0x00AA);
    subtitle text = STRING_TOKEN(0x00AA);
    subtitle text = STRING_TOKEN(0x014F);

    
    
    
    numeric varid   = IntelSetup.TjTargetOffset,
      prompt  = STRING_TOKEN(0x00B2),
      help    = STRING_TOKEN(0x00B3),
      flags   = 0 | RESET_REQUIRED,
      minimum = 0,
      maximum = 63,       
      step    = 0,        
                          
      default = 0,
    endnumeric;

	
    
    
    numeric varid   = IntelSetup.TcontrolOffset,
      prompt  = STRING_TOKEN(0x00B4),
      help    = STRING_TOKEN(0x00B5),
      flags   = 0 | RESET_REQUIRED,
      minimum = 0,
      maximum = 63,       
      step    = 0,        
                          
      default = 0,
    endnumeric;

    
    
    
    oneof varid   = IntelSetup.TcontrolOffsetSign,
      prompt      = STRING_TOKEN(0x00B6),
      help        = STRING_TOKEN(0x00B7),
      option text = STRING_TOKEN(0x00B0), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x00B1), value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    

    oneof varid   = IntelSetup.EnableTm1,
      prompt      = STRING_TOKEN(0x0056),
      help        = STRING_TOKEN(0x0057),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    suppressif  ideqval IntelSetup.EnableTm1 == 0;
      text
        help  = STRING_TOKEN(0x00D5),
        text  = STRING_TOKEN(0x00D4),
        text  = STRING_TOKEN(0x00AE),
        flags = 0, key = 0;
    endif;

    suppressif  ideqval IntelSetup.EnableTm1 == 1;
      text
        help  = STRING_TOKEN(0x00D5),
        text  = STRING_TOKEN(0x00D4),
        text  = STRING_TOKEN(0x00AF),
        flags = 0, key = 0;
    endif;

    
    
    
    grayoutif  ideqval IntelSetup.ProcessorEistEnable == 0 OR ideqval IntelSetup.EnableTm1 == 0;
        oneof varid   = IntelSetup.Tm2ThrottlingType,
            prompt      = STRING_TOKEN(0x0058),
            help        = STRING_TOKEN(0x0059),
            option text = STRING_TOKEN(0x005A), value = 0, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x005B),  value = 1, flags = MANUFACTURING |DEFAULT | RESET_REQUIRED;
        endoneof;
    endif;
    
    
    
    goto 0x0416, 
        prompt = STRING_TOKEN(0x00AC),
        help   = STRING_TOKEN(0x00AD);
  endform;
  
  form formid = 0x0416,

    title         = STRING_TOKEN(0x00AC);
    subtitle text = STRING_TOKEN(0x00AC);
    subtitle text = STRING_TOKEN(0x014F);
    
    
    
















    
    
    
    oneof varid   = IntelSetup.OutOfSpecInterruptEnable,
      prompt      = STRING_TOKEN(0x00BA),
      help        = STRING_TOKEN(0x00BB),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid   = IntelSetup.LowTempInterrupt,
      prompt      = STRING_TOKEN(0x00BC),
      help        = STRING_TOKEN(0x00BD),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid   = IntelSetup.HighTempInterrupt,
      prompt      = STRING_TOKEN(0x00BE),
      help        = STRING_TOKEN(0x00BF),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    numeric varid   = IntelSetup.TempThreshold1,
      prompt  = STRING_TOKEN(0x00C0),
      help    = STRING_TOKEN(0x00C1),
      flags   = 0 | RESET_REQUIRED,
      minimum = 0,
      maximum = 127,      
      step    = 0,        
                          
      default = 5,
    endnumeric;

    
    
    
    numeric varid   = IntelSetup.TempThreshold2,
      prompt  = STRING_TOKEN(0x00C2),
      help    = STRING_TOKEN(0x00C3),
      flags   = 0 | RESET_REQUIRED,
      minimum = 0,
      maximum = 127,      
      step    = 0,        
                          
      default = 10,
    endnumeric;

    
    
    
    oneof varid   = IntelSetup.Threshold1InterruptEnable,
      prompt      = STRING_TOKEN(0x00C4),
      help        = STRING_TOKEN(0x00C5),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid   = IntelSetup.Threshold2InterruptEnable,
      prompt      = STRING_TOKEN(0x00C6),
      help        = STRING_TOKEN(0x00C7),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    

    oneof varid   = IntelSetup.ProcHotInterruptEnable,
      prompt      = STRING_TOKEN(0x00C8),
      help        = STRING_TOKEN(0x00C9),
      option text = STRING_TOKEN(0x0152), value = 0, flags = MANUFACTURING | DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.ProchotResponse,
        prompt      = STRING_TOKEN(0x00CA),
        help        = STRING_TOKEN(0x00CB),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.ProchotOutputMode,
        prompt      = STRING_TOKEN(0x00CC),
        help        = STRING_TOKEN(0x00CD),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    endoneof;

    
    
    
    oneof varid     = IntelSetup.VrThermAlertDisable,
        prompt      = STRING_TOKEN(0x00D0),
        help        = STRING_TOKEN(0x00D1),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
    endoneof;

    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    oneof varid     = IntelSetup.LockThermInt,
        prompt      = STRING_TOKEN(0x00D2),
        help        = STRING_TOKEN(0x00D3),
        option text = STRING_TOKEN(0x0152),  value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
        option text = STRING_TOKEN(0x0151),   value = 1,  flags = RESET_REQUIRED;
    endoneof;

  endform;  
#line 875 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\CK420Config.hfr"































  form formid = 0x09,

  title       = STRING_TOKEN(0x01C2);
  subtitle text = STRING_TOKEN(0x01C2);
  subtitle text = STRING_TOKEN(0x014F);

  
  
  
  suppressif ideqval IntelSetup.BoardId == 0x6;
       oneof varid	     = IntelSetup.spreadSpectrumEnable,
           prompt        = STRING_TOKEN(0x01C8),
           help          = STRING_TOKEN(0x01C9),
           option text   = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
           option text   = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED|DEFAULT|MANUFACTURING;
       endoneof;
  endif;
  
  
  endform;


#line 876 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  
  
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\WakeFromSx.hfr"































form formid = 0x01A8,
 
title = STRING_TOKEN(0x0125);

    subtitle text = STRING_TOKEN(0x0150);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0125);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    








    oneof varid     = IntelSetup.WakeOnLanSupport,
       prompt      = STRING_TOKEN(0x0125),
       help        = STRING_TOKEN(0x0126),
       option text = STRING_TOKEN(0x0152),	value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x0151),		value = 1, flags = RESET_REQUIRED;
     endoneof;


endform;
#line 879 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\EventLogSetup.hfr"






























  form formid = 0x1B,

    title  = STRING_TOKEN(0x02B2);

    subtitle text = STRING_TOKEN(0x02B2);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    
    
    









    oneof varid = IntelSetup.SystemErrorEn,
      prompt = STRING_TOKEN(0x02B4),
      help        = STRING_TOKEN(0x02B5),
      option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0153),    value = 2, flags = RESET_REQUIRED;      
    endoneof;

    
    
    
    
    suppressif  ideqval IntelSetup.SystemErrorEn == 0x00;
      goto 0x1C, 
        prompt = STRING_TOKEN(0x02B6),
        help   = STRING_TOKEN(0x02B7);
    endif;

    
    
    
    suppressif  ideqval IntelSetup.SystemErrorEn == 0x00;
      goto 0x1D, 
        prompt = STRING_TOKEN(0x02B8),
        help   = STRING_TOKEN(0x02B9);
    endif;
	
    
    
    
    goto 0x1A, 
      prompt = STRING_TOKEN(0x02BA),
      help   = STRING_TOKEN(0x02BB);
	
  endform;

  
  
  
  form formid = 0x1C,

    title  = STRING_TOKEN(0x02B6);

    subtitle text = STRING_TOKEN(0x02B6);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.MemoryErrorLog,
      prompt = STRING_TOKEN(0x02BC),  
      help = STRING_TOKEN(0x02BD),
      option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING ;
    endoneof;

    suppressif  ideqval IntelSetup.MemoryErrorLog == 0x00;
      oneof varid = IntelSetup.EnableParityCheck,
        prompt      = STRING_TOKEN(0x034F),
        help        = STRING_TOKEN(0x0518),
        option text = STRING_TOKEN(0x0151),  value = 1,  flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
        option text = STRING_TOKEN(0x0152), value = 0,  flags = RESET_REQUIRED;
      endoneof;
    endif;

    suppressif  ideqval IntelSetup.MemoryErrorLog == 0x00;
      oneof varid = IntelSetup.MemoryCorrErrorLog,
        prompt = STRING_TOKEN(0x02BE),  
        help = STRING_TOKEN(0x02BF),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      endoneof;
    endif;

    suppressif  ideqval IntelSetup.MemoryErrorLog == 0x00;
      oneof varid = IntelSetup.MemoryUnCorrErrorLog,
        prompt = STRING_TOKEN(0x02C0),  
        help = STRING_TOKEN(0x02C1),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      endoneof;
    endif;
    
  
  
  
  
    oneof varid   = IntelSetup.ErrorCloakingEnable,
      prompt      = STRING_TOKEN(0x0515),  
      help        = STRING_TOKEN(0x0516),
      option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED;
    endoneof;

  endform;
  
  
  
  
  
  form formid = 0x1D,

    title  = STRING_TOKEN(0x02B8);

    subtitle text = STRING_TOKEN(0x02B8);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.PCIeErrorLog,
      prompt = STRING_TOKEN(0x02C2),  
      help = STRING_TOKEN(0x02C3),
      option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif  ideqval IntelSetup.PCIeErrorLog == 0x00;
      oneof varid  = IntelSetup.PCIeFatalErrorLog,
        prompt = STRING_TOKEN(0x02C4),
        help = STRING_TOKEN(0x02C5),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;
    endif;
	
	suppressif  ideqval IntelSetup.PCIeErrorLog == 0x00;
      oneof varid  = IntelSetup.PCIeNFErrorLog,
        prompt = STRING_TOKEN(0x02C6),
        help = STRING_TOKEN(0x02C7),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;
    endif;
	
    suppressif  ideqval IntelSetup.PCIeErrorLog == 0x00;
      oneof varid  = IntelSetup.PCIeCorrErrorLog,
        prompt = STRING_TOKEN(0x02C8),
        help = STRING_TOKEN(0x02C9),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;
    endif;
    
    suppressif  ideqval IntelSetup.PCIeErrorLog == 0x00;
      oneof varid = IntelSetup.PCIeSystemErrEnable,
        prompt      = STRING_TOKEN(0x0350),
        help        = STRING_TOKEN(0x0519),
        option text = STRING_TOKEN(0x0151),  value = 1,  flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
        option text = STRING_TOKEN(0x0152), value = 0,  flags = RESET_REQUIRED;
      endoneof;
    endif;

    suppressif  ideqval IntelSetup.PCIeErrorLog == 0x00;
      oneof varid = IntelSetup.PCIeParityErrEnable,
        prompt      = STRING_TOKEN(0x0351),
        help        = STRING_TOKEN(0x051A),
        option text = STRING_TOKEN(0x0151),  value = 1,  flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
        option text = STRING_TOKEN(0x0152), value = 0,  flags = RESET_REQUIRED;
      endoneof;
    endif;

  endform;

  
  
  
  form formid = 0x1A,

    title  = STRING_TOKEN(0x02BA);

    subtitle text = STRING_TOKEN(0x02BA);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.WheaSupport,
      prompt = STRING_TOKEN(0x02CA),  
      help = STRING_TOKEN(0x02CB),
      option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif  ideqval IntelSetup.WheaSupport == 0x00;
      oneof varid = IntelSetup.WheaEinj_05Extn,
        prompt = STRING_TOKEN(0x02CC),  
        help = STRING_TOKEN(0x02CD),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      endoneof;
    endif;

    suppressif  ideqval IntelSetup.WheaSupport == 0x00;
      oneof varid = IntelSetup.WheaLogging,
        prompt = STRING_TOKEN(0x02CE),  
        help = STRING_TOKEN(0x02CF),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151), value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      endoneof;
    endif;

    
    
    
    suppressif  ideqval IntelSetup.WheaSupport == 0x00;
      oneof varid = IntelSetup.WheaPcieErrInj,
        prompt = STRING_TOKEN(0x0352),
        help        = STRING_TOKEN(0x0517),
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;      
      endoneof;
    endif;

  endform;
#line 880 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"



















#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Configuration.h"
























































































































































































































































































































































































































#line 21 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SetupMisc.h"









































#line 43 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SetupMisc.h"
#line 22 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"


#line 1 "d:\\bios\\z124-002\\z124-002\\DenvertonPkg\\Me\\Include\\Library/MeTypeDefs.h"






































#line 40 "d:\\bios\\z124-002\\z124-002\\DenvertonPkg\\Me\\Include\\Library/MeTypeDefs.h"
#line 25 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\DenvertonPkg\\Me\\Include\\MeSetup.h"
















































#line 50 "d:\\bios\\z124-002\\z124-002\\DenvertonPkg\\Me\\Include\\MeSetup.h"
#line 26 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"






#line 33 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"









#line 43 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"








form formid = 0x400,
  title   = STRING_TOKEN(0x01D4);
  subtitle text = STRING_TOKEN(0x01D5);
  
  
  
  text
    help  = STRING_TOKEN(0x0526),
    text  = STRING_TOKEN(0x0525),
    text  = STRING_TOKEN(0x0527),
    flags = 0,
    key   = 0;

  suppressif NOT ideqval IntelSetup.MeFirmwareMode == 0xFF;
    text help = STRING_TOKEN(0x02A4), text = STRING_TOKEN(0x0544), text = STRING_TOKEN(0x0547), flags = 0, key = 0;
    text help = STRING_TOKEN(0x02A4), text = STRING_TOKEN(0x0544), text = STRING_TOKEN(0x0548), flags = 0, key = 0;
    text help = STRING_TOKEN(0x02A4), text = STRING_TOKEN(0x0544), text = STRING_TOKEN(0x0549), flags = 0, key = 0;
  endif;

  text
    help   = STRING_TOKEN(0x0545),
    text   = STRING_TOKEN(0x0544),
    text   = STRING_TOKEN(0x0546),
    flags  = 0,
    key    = 0;

  suppressif TRUE;
    
    numeric varid   = IntelSetup.MeType,
      prompt  = STRING_TOKEN(0x0359),
      help    = STRING_TOKEN(0x0150),
      flags   = DISPLAY_UINT_HEX | RESET_REQUIRED,
      minimum = 0,
      maximum = 0xFF,
      step    = 0,
      default = 1,
    endnumeric;
  endif; 

































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"
  text
    help  = STRING_TOKEN(0x0529),
    text  = STRING_TOKEN(0x0528),
    text  = STRING_TOKEN(0x052A),
    flags = 0,
    key   = 0;

  text
    help  = STRING_TOKEN(0x052C),
    text  = STRING_TOKEN(0x052B),
    text  = STRING_TOKEN(0x052D),
    flags = 0,
    key   = 0;


  text
    help  = STRING_TOKEN(0x052E),
    text  = STRING_TOKEN(0x052F),
    text  = STRING_TOKEN(0x0530),
    flags = 0,
    key   = 0;
#line 145 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"
  
  
  
  text
    help  = STRING_TOKEN(0x0531),
    text  = STRING_TOKEN(0x0532),
    text  = STRING_TOKEN(0x0533),
    flags = 0,
    key   = 0;

  text
    help  = STRING_TOKEN(0x0534),
    text  = STRING_TOKEN(0x0535),
    text  = STRING_TOKEN(0x0536),
    flags = 0,
    key   = 0;

  text
    help  = STRING_TOKEN(0x0537),
    text  = STRING_TOKEN(0x0538),
    text  = STRING_TOKEN(0x0539),
    flags = 0,
    key   = 0;

  text
    help  = STRING_TOKEN(0x053A),
    text  = STRING_TOKEN(0x053B),
    text  = STRING_TOKEN(0x053C),
    flags = 0,
    key   = 0;


  
  numeric varid = IntelSetup.SpsAltitude,
    prompt      = STRING_TOKEN(0x035A),
    help        = STRING_TOKEN(0x053D),
    flags       = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum     = 0,
    maximum     = 0xFFFFFFFF,
    step        = 0,          
    default     = 0x80000000,
  endnumeric;

  numeric varid   = IntelSetup.SpsMctpBusOwner,
    prompt  = STRING_TOKEN(0x035B),
    help    = STRING_TOKEN(0x053E),
    flags   = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum = 0,
    maximum = 0xFFFF,
    step    = 0,
    default = 0,
  endnumeric;
  
  oneof varid   = IntelSetup.SpsMeShutdown,
    prompt      = STRING_TOKEN(0x03CD),
    help        = STRING_TOKEN(0x0575),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
  endoneof;

  
  suppressif ideqval IntelSetup.SpsIccClkSscSettingSupported == 0;
    oneof varid   = IntelSetup.SpsIccClkSscSetting,
      prompt      = STRING_TOKEN(0x040E),
      help        = STRING_TOKEN(0x053F),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
  endif; 

#line 217 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"














#line 232 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"
endform;















































































































































































































































#line 473 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"

form formid = 0x401,
  title     = STRING_TOKEN(0x01D6);

  goto 0x11,
    prompt = STRING_TOKEN(0x01D7),
    help   = STRING_TOKEN(0x01D8);


  suppressif NOT ideqval IntelSetup.MeType == 1;
    grayoutif ideqval IntelSetup.NmEnabled == 0;
      goto 0x12,
        prompt = STRING_TOKEN(0x01D9),
        help   = STRING_TOKEN(0x01DA);
    endif; 
   endif; 
#line 490 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"


endform;

form formid = 0x11,
  title     = STRING_TOKEN(0x0572);

  numeric varid = IntelSetup.MeTimeout,
    prompt      = STRING_TOKEN(0x0373),
    help        = STRING_TOKEN(0x0590),
    flags       = 0 | RESET_REQUIRED,
    minimum     = 0,
    maximum     = 12,
    step        = 1,
    default     = 2,
  endnumeric;

  oneof varid   = IntelSetup.HsioEnableMessaging,
    prompt   = STRING_TOKEN(0x0405),
    help     = STRING_TOKEN(0x0593),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0 | DEFAULT | MANUFACTURING;
  endoneof;
  

  oneof varid   = IntelSetup.FiaMuxMessageEnabled,
    prompt      = STRING_TOKEN(0x040B),
    help        = STRING_TOKEN(0x0594),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;
#line 522 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"

  checkbox varid = IntelSetup.MeDidEnabled,
    prompt       = STRING_TOKEN(0x0374),
    help         = STRING_TOKEN(0x0581),
    
    
    flags        = CHECKBOX_DEFAULT | RESET_REQUIRED,
    key          = 0,
  endcheckbox;

  grayoutif ideqval IntelSetup.MeDidEnabled == 0;
    checkbox varid = IntelSetup.MeDidTimeout,
      prompt       = STRING_TOKEN(0x0375),
      help         = STRING_TOKEN(0x0582),
      
      
      flags        = CHECKBOX_DEFAULT | RESET_REQUIRED,
      key          = 0,
    endcheckbox;

    oneof varid   = IntelSetup.MeDidInitStat,
      prompt      = STRING_TOKEN(0x0376),
      help        = STRING_TOKEN(0x0583),
      option text = STRING_TOKEN(0x0584), value = 0, flags = DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0585), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0586), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0587), value = 3, flags = RESET_REQUIRED;
    endoneof;
  endif;


  oneof varid   = IntelSetup.MeHmrfpoLockEnabled,
    prompt      = STRING_TOKEN(0x0377),
    help        = STRING_TOKEN(0x0573),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0 | DEFAULT;
  endoneof;

  grayoutif ideqval IntelSetup.MeHmrfpoLockEnabled == 0;
    oneof varid   = IntelSetup.MeHmrfpoEnableEnabled,
      prompt      = STRING_TOKEN(0x0378),
      help        = STRING_TOKEN(0x0574),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    endoneof;
  endif;
#line 569 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"


  oneof varid   = IntelSetup.MeEndOfPostEnabled,
    prompt      = STRING_TOKEN(0x01DB),
    help        = STRING_TOKEN(0x01DC),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0 | DEFAULT;
  endoneof;















#line 593 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"


  oneof varid   = IntelSetup.MeGrPromotionEnabled,
    prompt      = STRING_TOKEN(0x037A),
    help        = STRING_TOKEN(0x0577),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
  endoneof;
#line 602 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"

  oneof varid   = IntelSetup.MeGrLockEnabled,
    prompt      = STRING_TOKEN(0x037B),
    help        = STRING_TOKEN(0x0576),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0 | DEFAULT;
  endoneof;

  oneof varid   = IntelSetup.MeHeci1Enabled,
    prompt      = STRING_TOKEN(0x037C),
    help        = STRING_TOKEN(0x0588),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

  oneof varid   = IntelSetup.MeHeci2Enabled,
    prompt      = STRING_TOKEN(0x037D),
    help        = STRING_TOKEN(0x0589),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

  oneof varid   = IntelSetup.MeHeci3Enabled,
    prompt      = STRING_TOKEN(0x03CE),
    help        = STRING_TOKEN(0x058A),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

  oneof varid   = IntelSetup.MeIderEnabled,
    prompt      = STRING_TOKEN(0x037E),
    help        = STRING_TOKEN(0x058B),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

  oneof varid   = IntelSetup.MeKtEnabled,
    prompt      = STRING_TOKEN(0x037F),
    help        = STRING_TOKEN(0x058C),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = 0;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
    option text = STRING_TOKEN(0x0153),     value = 2, flags = 0 | DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;


  
  
  
  
  suppressif NOT ideqval IntelSetup.MeType == 1;
    grayoutif ideqval IntelSetup.MeHmrfpoLockEnabled == 0;

      grayoutif ideqval IntelSetup.MeHeci1Enabled == 0;
        oneof varid   = IntelSetup.MeHeci1HideInMe,
          prompt      = STRING_TOKEN(0x0406),
          help        = STRING_TOKEN(0x058D),
          option text = STRING_TOKEN(0x0154),     value = 0, flags = 0 | RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x0191),    value = 1, flags = 0;
          option text = STRING_TOKEN(0x0152), value = 2, flags = 0;
        endoneof;
      endif; 

      grayoutif ideqval IntelSetup.MeHeci2Enabled == 0;
        oneof varid   = IntelSetup.MeHeci2HideInMe,
          prompt      = STRING_TOKEN(0x0407),
          help        = STRING_TOKEN(0x058E),
          option text = STRING_TOKEN(0x0154),     value = 0, flags = 0 | RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x0191),    value = 1, flags = 0;
          option text = STRING_TOKEN(0x0152), value = 2, flags = 0;
        endoneof;
      endif; 

      grayoutif ideqval IntelSetup.MeHeci3Enabled == 0;
        oneof varid   = IntelSetup.MeHeci3HideInMe,
          prompt      = STRING_TOKEN(0x0408),
          help        = STRING_TOKEN(0x058F),
          option text = STRING_TOKEN(0x0154),     value = 0, flags = 0 | RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x0191),    value = 1, flags = 0;
          option text = STRING_TOKEN(0x0152), value = 2, flags = 0;
        endoneof;
      endif; 

    endif; 
  endif; 
#line 691 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"



  oneof varid   = IntelSetup.CoreBiosDoneEnabled,
    prompt      = STRING_TOKEN(0x0591),
    help        = STRING_TOKEN(0x0592),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;
#line 701 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"

endform;

form formid = 0x12,
  title     = STRING_TOKEN(0x01DE);

  checkbox varid   = IntelSetup.NmPwrOptBootOverride,
    prompt      = STRING_TOKEN(0x0380),
    help        = STRING_TOKEN(0x0578),
    flags       = 0 | RESET_REQUIRED,
    key         = 0,
  endcheckbox;

  grayoutif ideqval IntelSetup.NmPwrOptBootOverride == 0;
    oneof varid   = IntelSetup.NmPwrOptBoot,
      prompt      = STRING_TOKEN(0x0381),
      help        = STRING_TOKEN(0x0579),
      option text = STRING_TOKEN(0x057A),  value = 0, flags = RESET_REQUIRED | DEFAULT;
      option text = STRING_TOKEN(0x01DD), value = 1, flags = RESET_REQUIRED;
    endoneof;
  endif;

  checkbox varid   = IntelSetup.NmCores2DisableOverride,
    prompt      = STRING_TOKEN(0x0382),
    help        = STRING_TOKEN(0x057B),
    flags       = 0 | RESET_REQUIRED,
    key         = 0,
  endcheckbox;

  grayoutif ideqval IntelSetup.NmCores2DisableOverride == 0;
    numeric varid   = IntelSetup.NmCores2Disable,
      prompt  = STRING_TOKEN(0x0383),
      help    = STRING_TOKEN(0x057C),
      flags   = 0 | RESET_REQUIRED | DISPLAY_UINT_HEX,
      minimum = 0,
      maximum = 0x7F,
      step    = 1,
      default = 0,
    endnumeric;
  endif;

  checkbox varid   = IntelSetup.NmPowerMsmtOverride,
    prompt      = STRING_TOKEN(0x0384),
    help        = STRING_TOKEN(0x057D),
    flags       = 0 | RESET_REQUIRED,
    key         = 0,
  endcheckbox;

  grayoutif ideqval IntelSetup.NmPowerMsmtOverride == 0;
    oneof varid   = IntelSetup.NmPowerMsmtSupport,
      prompt      = STRING_TOKEN(0x0385),
      help        = STRING_TOKEN(0x057E),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | RESET_REQUIRED | DEFAULT;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0 | RESET_REQUIRED;
    endoneof;
  endif;

  checkbox varid   = IntelSetup.NmHwChangeOverride,
    prompt      = STRING_TOKEN(0x0386),
    help        = STRING_TOKEN(0x057F),
    flags       = 0 | RESET_REQUIRED,
    key         = 0,
  endcheckbox;

  grayoutif ideqval IntelSetup.NmHwChangeOverride == 0;
    oneof varid   = IntelSetup.NmHwChangeStatus,
      prompt      = STRING_TOKEN(0x0387),
      help        = STRING_TOKEN(0x0580),
      option text = STRING_TOKEN(0x01CA),  value = 0, flags = 0 | RESET_REQUIRED | DEFAULT;
      option text = STRING_TOKEN(0x01CB), value = 1, flags = 0 | RESET_REQUIRED;
    endoneof;
  endif;

endform;

#line 777 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\MeConfigData.hfr"

#line 881 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\IeConfig.hfr"





















#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\Configuration.h"
























































































































































































































































































































































































































#line 23 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\IeConfig.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SetupMisc.h"










































#line 24 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\IeConfig.hfr"








form formid = 0x410,
  title   = STRING_TOKEN(0x0597);
  subtitle text = STRING_TOKEN(0x0598);

  suppressif TRUE;
    checkbox varid  = IntelSetup.IeDisabledInSoftStraps,
      prompt   = STRING_TOKEN(0x02A4),
      help     = STRING_TOKEN(0x02A4),
      
      
      flags        = CHECKBOX_DEFAULT | CHECKBOX_DEFAULT_MFG | RESET_REQUIRED,
      key          = 0,
    endcheckbox;
    checkbox varid  = IntelSetup.DfxIe,
      prompt   = STRING_TOKEN(0x02A4),
      help     = STRING_TOKEN(0x02A4),
      
      
      flags        = 0 | RESET_REQUIRED,
      key          = 0,
    endcheckbox;
  endif; 

  suppressif NOT ideqval IntelSetup.IeDisabledInSoftStraps == 0;
    subtitle text = STRING_TOKEN(0x0150);
    subtitle text = STRING_TOKEN(0x0150);
    subtitle text = STRING_TOKEN(0x05A5);
  endif; 

  suppressif ideqval IntelSetup.IeDisabledInSoftStraps == 0;

    
    
    
    text
      help  = STRING_TOKEN(0x0599),
      text  = STRING_TOKEN(0x059A),
      text  = STRING_TOKEN(0x059B),
      flags = 0,
      key   = 0;

    text
      help  = STRING_TOKEN(0x059C),
      text  = STRING_TOKEN(0x059D),
      text  = STRING_TOKEN(0x059E),
      flags = 0,
      key   = 0;

    suppressif ideqval IntelSetup.DfxIe == 0;
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text = STRING_TOKEN(0x05A6);
    endif; 

    grayoutif ideqval IntelSetup.DfxIe == 1;
      oneof varid   = IntelSetup.IeHeci1Enabled,
        prompt      = STRING_TOKEN(0x0353),
        help        = STRING_TOKEN(0x059F),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
      endoneof;

      oneof varid   = IntelSetup.IeHeci2Enabled,
        prompt      = STRING_TOKEN(0x0354),
        help        = STRING_TOKEN(0x05A0),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
      endoneof;

      oneof varid   = IntelSetup.IeHeci3Enabled,
        prompt      = STRING_TOKEN(0x0355),
        help        = STRING_TOKEN(0x05A1),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
      endoneof;

      oneof varid   = IntelSetup.IeIderEnabled,
        prompt      = STRING_TOKEN(0x0356),
        help        = STRING_TOKEN(0x05A2),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
      endoneof;

      oneof varid   = IntelSetup.IeKtEnabled,
        prompt      = STRING_TOKEN(0x0357),
        help        = STRING_TOKEN(0x05A3),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = 0 | DEFAULT;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = 0;
      endoneof;
    endif; 

    numeric varid = IntelSetup.SubsystemId,
      prompt      = STRING_TOKEN(0x0358),
      help        = STRING_TOKEN(0x05A4),
      flags       = 0 | RESET_REQUIRED | DISPLAY_UINT_HEX,
      minimum     = 0,
      maximum     = 0xFFFF,
      step        = 1,
      default     = 0x8086,
    endnumeric;
  endif; 

endform;

#line 137 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\IeConfig.hfr"
#line 884 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
#line 885 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"






























#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"









































form formid = 0x0339,
    title     = STRING_TOKEN(0x05F7);

    goto 0x0642,
          prompt  = STRING_TOKEN(0x05FE),
          help    = STRING_TOKEN(0x05FF);

    goto 0x0643,
          prompt  = STRING_TOKEN(0x0600),
          help    = STRING_TOKEN(0x0601);

    suppressif 1;                 
    oneof varid   = PCH_SETUP.UsbPrecondition,
      prompt      = STRING_TOKEN(0x01A7),
      help        = STRING_TOKEN(0x01A8),
      option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;

    oneof varid     = PCH_SETUP.IIL1e,
        prompt      = STRING_TOKEN(0x01B7),
        help        = STRING_TOKEN(0x01B8),
        option text = STRING_TOKEN(0x00AF),    value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01B9),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BA),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BB), value = 3, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BC), value = 4, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BD), value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BE), value = 6, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
        option text = STRING_TOKEN(0x01BF), value = 7, flags = RESET_REQUIRED;
     endoneof;

    oneof varid     = PCH_SETUP.XhciL1e,
        prompt      = STRING_TOKEN(0x01C0),
        help        = STRING_TOKEN(0x01C1),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;

    oneof varid   = PCH_SETUP.DisableComplianceMode,
      prompt      = STRING_TOKEN(0x03F4),
      help        = STRING_TOKEN(0x0602),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
    endoneof;
    endif;                                              
endform;



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbSsController\\UsbSsController.hfr"



















form formid = 0x0642,
title = STRING_TOKEN(0x05FE);
    
    
    

    
    
    
    goto 0x0648, 
        prompt  = STRING_TOKEN(0x05F9),
        help    = STRING_TOKEN(0x05FD);

    goto 0x0649, 
        prompt  = STRING_TOKEN(0x05FA),
        help    = STRING_TOKEN(0x05FD);


    suppressif 1;               
    goto 0x064A, 
        prompt  = STRING_TOKEN(0x05FB),
        help    = STRING_TOKEN(0x05FD);
    endif;                                      

    suppressif 1;                 
    goto 0x064B, 
        prompt  = STRING_TOKEN(0x05FC),
        help    = STRING_TOKEN(0x05FD);
    endif;                                      


endform;

#line 93 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbSsController\\Port\\UsbSsPortConfiguration.hfr"



















form formid = 0x0648,

  title = STRING_TOKEN(0x05F9);

  oneof varid  = PCH_SETUP.PchUsbSsPort[0],
    prompt   = STRING_TOKEN(0x03F6),
    help     = STRING_TOKEN(0x01B3),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

endform;


#line 96 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbSsController\\Port\\UsbSsPortConfiguration.hfr"



















form formid = 0x0649,

  title = STRING_TOKEN(0x05FA);

  oneof varid  = PCH_SETUP.PchUsbSsPort[1],
    prompt   = STRING_TOKEN(0x03F6),
    help     = STRING_TOKEN(0x01B3),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

endform;


#line 99 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbSsController\\Port\\UsbSsPortConfiguration.hfr"



















form formid = 0x064A,

  title = STRING_TOKEN(0x05FB);

  oneof varid  = PCH_SETUP.PchUsbSsPort[2],
    prompt   = STRING_TOKEN(0x03F6),
    help     = STRING_TOKEN(0x01B3),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

endform;


#line 102 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbSsController\\Port\\UsbSsPortConfiguration.hfr"



















form formid = 0x064B,

  title = STRING_TOKEN(0x05FC);

  oneof varid  = PCH_SETUP.PchUsbSsPort[3],
    prompt   = STRING_TOKEN(0x03F6),
    help     = STRING_TOKEN(0x01B3),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;

endform;


#line 105 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbHsController\\UsbHsController.hfr"



















form formid = 0x0643,
    title = STRING_TOKEN(0x0600);
    
    
    

    goto 0x0644, 
        prompt  = STRING_TOKEN(0x05F9),
        help    = STRING_TOKEN(0x05FD);

    goto 0x0645, 
        prompt  = STRING_TOKEN(0x05FA),
        help    = STRING_TOKEN(0x05FD);

    goto 0x0646, 
        prompt  = STRING_TOKEN(0x05FB),
        help    = STRING_TOKEN(0x05FD);

    goto 0x0647, 
        prompt  = STRING_TOKEN(0x05FC),
        help    = STRING_TOKEN(0x05FD);



endform;

#line 109 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbHsController\\Port\\UsbHsPortConfiguration.hfr"



















form formid = 0x0644,

    title = STRING_TOKEN(0x05F9);

    oneof varid  = PCH_SETUP.PchUsbHsPort[0],
      prompt   = STRING_TOKEN(0x03F5),
      help     = STRING_TOKEN(0x01B3),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
endform;


#line 112 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbHsController\\Port\\UsbHsPortConfiguration.hfr"



















form formid = 0x0645,

    title = STRING_TOKEN(0x05FA);

    oneof varid  = PCH_SETUP.PchUsbHsPort[1],
      prompt   = STRING_TOKEN(0x03F5),
      help     = STRING_TOKEN(0x01B3),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
endform;


#line 115 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbHsController\\Port\\UsbHsPortConfiguration.hfr"



















form formid = 0x0646,

    title = STRING_TOKEN(0x05FB);

    oneof varid  = PCH_SETUP.PchUsbHsPort[2],
      prompt   = STRING_TOKEN(0x03F5),
      help     = STRING_TOKEN(0x01B3),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
endform;


#line 118 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"

    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbHsController\\Port\\UsbHsPortConfiguration.hfr"



















form formid = 0x0647,

    title = STRING_TOKEN(0x05FC);

    oneof varid  = PCH_SETUP.PchUsbHsPort[3],
      prompt   = STRING_TOKEN(0x03F5),
      help     = STRING_TOKEN(0x01B3),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
endform;


#line 121 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UsbSetup\\UsbConfig.hfr"


#line 32 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"



































form formid = 0x031C,
    title     = STRING_TOKEN(0x0290);

    suppressif 1;               
    goto 0x0630,
          prompt  = STRING_TOKEN(0x05DD),
          help    = STRING_TOKEN(0x0291);
    endif;                                      
          

    goto 0x0631,
          prompt  = STRING_TOKEN(0x05DE),
          help    = STRING_TOKEN(0x0291);

endform;



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/SataController.hfr"



















form formid = 0x0630,
    title = STRING_TOKEN(0x05DD);

    oneof varid = PCH_SETUP.PchSata[0],
        prompt   = STRING_TOKEN(0x029E),
        help     = STRING_TOKEN(0x029F),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    suppressif ideqval PCH_SETUP.PchSata[0] == 0;
      suppressif 1;               
      oneof varid       = PCH_SETUP.SataTestMode[0],
          prompt   = STRING_TOKEN(0x033C),
          help     = STRING_TOKEN(0x033D),
          option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;
      endif;                                      
      suppressif ideqvallist  PCH_SETUP.SataTestMode[0] ==  1;
        suppressif 1;               
        oneof varid = PCH_SETUP.SataLpm[0],
            prompt   = STRING_TOKEN(0x033E),
            help     = STRING_TOKEN(0x033F),
            option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED|MANUFACTURING;
            option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED;
        endoneof;
        endif;                                      

        suppressif 1;               
        suppressif ideqval PCH_SETUP.SataLpm[0] == 0x0;
            oneof varid = PCH_SETUP.SataSalp[0],
                prompt   = STRING_TOKEN(0x0340),
                help     = STRING_TOKEN(0x0341),
                option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
                option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
            endoneof;
        endif;
        endif;                                      
      endif;

      oneof varid = PCH_SETUP.SataSpeedLimit[0],
        prompt   = STRING_TOKEN(0x03F0),
        help     = STRING_TOKEN(0x05E9),
        option text = STRING_TOKEN(0x05EA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05EB), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05EC), value = 3, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;

      suppressif 1;               
      oneof varid = PCH_SETUP.PortMultiplierSupported[0],
        prompt   = STRING_TOKEN(0x03F1),
        help     = STRING_TOKEN(0x05ED),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
      endoneof;
      endif;                                      

      
      
      

      goto 0x0632,
          prompt  = STRING_TOKEN(0x05DF),
          help    = STRING_TOKEN(0x05E7);


      suppressif 1;               
      goto 0x0633,
          prompt  = STRING_TOKEN(0x05E0),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x0634,
          prompt  = STRING_TOKEN(0x05E1),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x0635,
          prompt  = STRING_TOKEN(0x05E2),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x0636,
          prompt  = STRING_TOKEN(0x05E3),
          help    = STRING_TOKEN(0x05E7);

      goto 0x0637,
          prompt  = STRING_TOKEN(0x05E4),
          help    = STRING_TOKEN(0x05E7);

      goto 0x0638,
          prompt  = STRING_TOKEN(0x05E5),
          help    = STRING_TOKEN(0x05E7);

      goto 0x0639,
          prompt  = STRING_TOKEN(0x05E6),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      
    endif;
endform;

#line 55 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"
    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0632,

    title = STRING_TOKEN(0x05DF);




    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E8);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00E9);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00EA);















#line 56 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[0],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[0],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[0],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[0],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 58 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0633,

    title = STRING_TOKEN(0x05E0);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00EB);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00EC);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00ED);















#line 89 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[1],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[1],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[1],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[1],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 63 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0634,

    title = STRING_TOKEN(0x05E1);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00EE);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00EF);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00F0);















#line 122 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[2],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[2],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[2],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[2],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 67 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0635,

    title = STRING_TOKEN(0x05E2);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00F1);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00F2);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00F3);















#line 155 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[3],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[3],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[3],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[3],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 71 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0636,

    title = STRING_TOKEN(0x05E3);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00F4);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00F5);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00F6);















#line 188 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[4],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[4],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[4],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[4],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 75 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0637,

    title = STRING_TOKEN(0x05E4);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00F7);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00F8);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00F9);















#line 221 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[5],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[5],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[5],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[5],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 79 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0638,

    title = STRING_TOKEN(0x05E5);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00FA);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00FB);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00FC);















#line 254 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[6],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[6],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[6],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[6],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 83 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

    
    
      #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0639,

    title = STRING_TOKEN(0x05E6);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00FD);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x00FE);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x00FF);















#line 287 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[7],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[0] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[7],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[7],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[7],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 87 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/SataController.hfr"



















form formid = 0x0631,
    title = STRING_TOKEN(0x05DE);

    oneof varid = PCH_SETUP.PchSata[1],
        prompt   = STRING_TOKEN(0x029E),
        help     = STRING_TOKEN(0x029F),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    
    
    
    suppressif ideqval PCH_SETUP.PchSata[1] == 0;
      suppressif 1;               
      oneof varid       = PCH_SETUP.SataTestMode[1],
          prompt   = STRING_TOKEN(0x033C),
          help     = STRING_TOKEN(0x033D),
          option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;
      endif;                                      
      suppressif ideqvallist  PCH_SETUP.SataTestMode[1] ==  1;
        suppressif 1;               
        oneof varid = PCH_SETUP.SataLpm[1],
            prompt   = STRING_TOKEN(0x033E),
            help     = STRING_TOKEN(0x033F),
            option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED|MANUFACTURING;
            option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED;
        endoneof;
        endif;                                      

        suppressif 1;               
        suppressif ideqval PCH_SETUP.SataLpm[1] == 0x0;
            oneof varid = PCH_SETUP.SataSalp[1],
                prompt   = STRING_TOKEN(0x0340),
                help     = STRING_TOKEN(0x0341),
                option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
                option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
            endoneof;
        endif;
        endif;                                      
      endif;

      oneof varid = PCH_SETUP.SataSpeedLimit[1],
        prompt   = STRING_TOKEN(0x03F0),
        help     = STRING_TOKEN(0x05E9),
        option text = STRING_TOKEN(0x05EA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05EB), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05EC), value = 3, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;

      suppressif 1;               
      oneof varid = PCH_SETUP.PortMultiplierSupported[1],
        prompt   = STRING_TOKEN(0x03F1),
        help     = STRING_TOKEN(0x05ED),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x0152), value = 0, flags = RESET_REQUIRED;
      endoneof;
      endif;                                      

      
      
      

      goto 0x063A,
          prompt  = STRING_TOKEN(0x05DF),
          help    = STRING_TOKEN(0x05E7);


      suppressif 1;               
      goto 0x063B,
          prompt  = STRING_TOKEN(0x05E0),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x063C,
          prompt  = STRING_TOKEN(0x05E1),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x063D,
          prompt  = STRING_TOKEN(0x05E2),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      

      suppressif 1;               
      goto 0x063E,
          prompt  = STRING_TOKEN(0x05E3),
          help    = STRING_TOKEN(0x05E7);

      goto 0x063F,
          prompt  = STRING_TOKEN(0x05E4),
          help    = STRING_TOKEN(0x05E7);

      goto 0x0640,
          prompt  = STRING_TOKEN(0x05E5),
          help    = STRING_TOKEN(0x05E7);

      goto 0x0641,
          prompt  = STRING_TOKEN(0x05E6),
          help    = STRING_TOKEN(0x05E7);
      endif;                                      
    endif;
endform;

#line 91 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"
  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063A,

    title = STRING_TOKEN(0x05DF);


















#line 42 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0100);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0101);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0102);
#line 56 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[8],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[8],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[8],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[8],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 94 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063B,

    title = STRING_TOKEN(0x05E0);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 75 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0103);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0104);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0105);
#line 89 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[9],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[9],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[9],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[9],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 98 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063C,

    title = STRING_TOKEN(0x05E1);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 108 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0106);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0107);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0108);
#line 122 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[10],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[10],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[10],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[10],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 102 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063D,

    title = STRING_TOKEN(0x05E2);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 141 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0109);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x010A);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x010B);
#line 155 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[11],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[11],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[11],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[11],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 106 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063E,

    title = STRING_TOKEN(0x05E3);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 174 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x010C);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x010D);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x010E);
#line 188 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[12],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[12],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[12],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[12],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 110 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x063F,

    title = STRING_TOKEN(0x05E4);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 207 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x010F);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0110);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0111);
#line 221 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[13],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[13],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[13],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[13],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 114 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0640,

    title = STRING_TOKEN(0x05E5);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0112);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0113);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0114);
#line 254 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[14],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[14],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[14],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[14],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 118 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"

  
  
    #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"



















form formid = 0x0641,

    title = STRING_TOKEN(0x05E6);

































#line 57 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 90 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 123 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 156 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 189 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 222 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
































#line 255 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"

















#line 273 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x0115);
    
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E6),
        text   = STRING_TOKEN(0x0116);
        
    text
        help   = STRING_TOKEN(0x0150),
        text   = STRING_TOKEN(0x00E7),
        text   = STRING_TOKEN(0x0117);
#line 287 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"
#line 288 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"


    oneof varid = PCH_SETUP.SataPort[15],
        prompt   = STRING_TOKEN(0x03F2),
        help     = STRING_TOKEN(0x05E8),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;








#line 305 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\satasetup\\SataController/Port/SataPortConfiguration.hfr"











suppressif 1;               
suppressif ideqval PCH_SETUP.SataLpm[1] == 0x1;
    oneof varid = PCH_SETUP.SataHotPlug[15],
        prompt   = STRING_TOKEN(0x02AD),
        help     = STRING_TOKEN(0x02AD),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
endif;

    
    oneof varid = PCH_SETUP.SataSpinUp[15],
        prompt   = STRING_TOKEN(0x02AC),
        help     = STRING_TOKEN(0x02AC),
        option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = PCH_SETUP.SataTopology[15],
       prompt = STRING_TOKEN(0x03D5),
       help = STRING_TOKEN(0x05F1),
       option text = STRING_TOKEN(0x05F2), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F3), value = 1, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F4), value = 2, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F5), value = 3, flags = RESET_REQUIRED;
       option text = STRING_TOKEN(0x05F6), value = 4, flags = RESET_REQUIRED;
    endoneof;
    endif;                                      
    
endform;



#line 122 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SataSetup\\SataConfig.hfr"




#line 33 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"









































form formid = 0x87,
    title     = STRING_TOKEN(0x05D4);

    
    grayoutif ideqval IntelSetup.FiaMuxOverride == 1;
    oneof varid  = PCH_SETUP.PcieTopology[0],
        prompt = STRING_TOKEN(0x03D6 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[1],
        prompt = STRING_TOKEN(0x03D7 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[2],
        prompt = STRING_TOKEN(0x03D8 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[3],
        prompt = STRING_TOKEN(0x03D9 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[4],
        prompt = STRING_TOKEN(0x03DA ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[5],
        prompt = STRING_TOKEN(0x03DB ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;
    
    oneof varid  = PCH_SETUP.PcieTopology[6],
        prompt = STRING_TOKEN(0x03DC ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[7],
        prompt = STRING_TOKEN(0x03DD ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[8],
        prompt = STRING_TOKEN(0x03DE ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[9],
        prompt = STRING_TOKEN(0x03DF ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[10],
        prompt = STRING_TOKEN(0x03E0 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[11],
        prompt = STRING_TOKEN(0x03E1 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[12],
        prompt = STRING_TOKEN(0x03E2 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[13],
        prompt = STRING_TOKEN(0x03E3 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[14],
        prompt = STRING_TOKEN(0x03E4 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;

    oneof varid  = PCH_SETUP.PcieTopology[15],
        prompt = STRING_TOKEN(0x03E5 ),
        help = STRING_TOKEN(0x05D6),
        option text = STRING_TOKEN(0x05DA)    , value = 5, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DC)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05DB)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D9)  , value = 2   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x05D8)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05D7), value = 0   , flags = RESET_REQUIRED; 
    endoneof;
    endif; 

endform;




































































































































form formid = 0x52,
    title     = STRING_TOKEN(0x05A7);












    grayoutif ideqval IntelSetup.FiaMuxOverride == 1;
    oneof varid  = IntelSetup.bifurcation[0],
        prompt = STRING_TOKEN(0x05A9 ),
        help = STRING_TOKEN(0x02A5),
        option text = STRING_TOKEN(0x0153)    , value = 0xff, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01CD)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01CC)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0417)  , value = 2   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0418)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0419), value = 0   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING; 
    endoneof;













    oneof varid  = IntelSetup.bifurcation[1],
        prompt = STRING_TOKEN(0x05AA ),
        help = STRING_TOKEN(0x02A5),
        option text = STRING_TOKEN(0x0153)    , value = 0xff, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01CD)      , value = 4   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01CC)    , value = 3   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0417)  , value = 2   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0418)  , value = 1   , flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0419), value = 0   , flags = RESET_REQUIRED | DEFAULT | MANUFACTURING; 
    endoneof;

    endif; 
    
    
    oneof varid   = PCH_SETUP.PcieComplianceTestMode,
      prompt      = STRING_TOKEN(0x03D4),
      help        = STRING_TOKEN(0x05D2),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
    endoneof;
        
     numeric  varid  = IntelSetup.RootPortRTTO,
      prompt = STRING_TOKEN(0x03CA),
      help = STRING_TOKEN(0x05CF),
      minimum = 0 ,
      maximum = 63,
      step    = 1,
      default = 3,
    endnumeric;    
     

    goto 0x62,
          prompt  = STRING_TOKEN(0x05B9),
          help    = STRING_TOKEN(0x05C1);
          
    goto 0x63,
          prompt  = STRING_TOKEN(0x05BA),
          help    = STRING_TOKEN(0x05C1);

    goto 0x64,
          prompt  = STRING_TOKEN(0x05BB),
          help    = STRING_TOKEN(0x05C1);
          
    goto 0x65,
          prompt  = STRING_TOKEN(0x05BC),
          help    = STRING_TOKEN(0x05C1);

    goto 0x66,
          prompt  = STRING_TOKEN(0x05BD),
          help    = STRING_TOKEN(0x05C1);
          
    goto 0x67,
          prompt  = STRING_TOKEN(0x05BE),
          help    = STRING_TOKEN(0x05C1);

    goto 0x102,
          prompt  = STRING_TOKEN(0x05BF),
          help    = STRING_TOKEN(0x05C1);
          
    goto 0x103,
          prompt  = STRING_TOKEN(0x05C0),
          help    = STRING_TOKEN(0x05C1);






    
  goto 0x87,
    prompt = STRING_TOKEN(0x05D4),
    help = STRING_TOKEN(0x05D5);

endform;



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x62,
    title = STRING_TOKEN(0x05B9);


    oneof varid = IntelSetup.RootPortLinkSpeed[0],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[0],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[0],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[0],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[0],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[0],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[0],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[0],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[0],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[0],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[0],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[0],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[0],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[0] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[0] == 1;
      oneof varid = IntelSetup.RootPortCTORange[0],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 473 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x63,
    title = STRING_TOKEN(0x05BA);


    oneof varid = IntelSetup.RootPortLinkSpeed[1],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[1],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[1],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[1],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[1],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[1],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[1],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[1],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[1],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[1],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[1],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[1],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[1],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[1] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[1] == 1;
      oneof varid = IntelSetup.RootPortCTORange[1],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 477 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x64,
    title = STRING_TOKEN(0x05BB);


    oneof varid = IntelSetup.RootPortLinkSpeed[2],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[2],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[2],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[2],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[2],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[2],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[2],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[2],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[2],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[2],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[2],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[2],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[2],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[2] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[2] == 1;
      oneof varid = IntelSetup.RootPortCTORange[2],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 481 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x65,
    title = STRING_TOKEN(0x05BC);


    oneof varid = IntelSetup.RootPortLinkSpeed[3],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[3],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[3],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[3],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[3],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[3],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[3],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[3],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[3],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[3],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[3],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[3],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[3],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[3] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[3] == 1;
      oneof varid = IntelSetup.RootPortCTORange[3],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 485 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x66,
    title = STRING_TOKEN(0x05BD);


    oneof varid = IntelSetup.RootPortLinkSpeed[4],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[4],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[4],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[4],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[4],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[4],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[4],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[4],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[4],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[4],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[4],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[4],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[4],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[4] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[4] == 1;
      oneof varid = IntelSetup.RootPortCTORange[4],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 489 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x67,
    title = STRING_TOKEN(0x05BE);


    oneof varid = IntelSetup.RootPortLinkSpeed[5],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[5],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[5],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[5],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[5],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[5],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[5],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[5],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[5],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[5],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[5],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[5],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[5],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[5] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[5] == 1;
      oneof varid = IntelSetup.RootPortCTORange[5],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 493 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x102,
    title = STRING_TOKEN(0x05BF);


    oneof varid = IntelSetup.RootPortLinkSpeed[6],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[6],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[6],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[6],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[6],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[6],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[6],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[6],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[6],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[6],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[6],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[6],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[6],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[6] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[6] == 1;
      oneof varid = IntelSetup.RootPortCTORange[6],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 497 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"



  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"































form formid = 0x103,
    title = STRING_TOKEN(0x05C0);


    oneof varid = IntelSetup.RootPortLinkSpeed[7],
        prompt   = STRING_TOKEN(0x03C1),
        help     = STRING_TOKEN(0x05C2),
        option text = STRING_TOKEN(0x0442), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0443), value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0444), value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;
    
    oneof varid = IntelSetup.RootPortClockGating[7],
        prompt   = STRING_TOKEN(0x03C2),
        help     = STRING_TOKEN(0x05C3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.RootPortMaxPayload[7],
        prompt   = STRING_TOKEN(0x03C3),
        help     = STRING_TOKEN(0x05C4),
        option text = STRING_TOKEN(0x0196), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0197), value = 1,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0198), value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199),  value = 3, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x019A),  value = 4, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B),  value = 5, flags = RESET_REQUIRED;
    endoneof;
    

    oneof varid = IntelSetup.RootPortMaxReadRequest[7],
        prompt   = STRING_TOKEN(0x03C4),
        help     = STRING_TOKEN(0x05C5),
		option text = STRING_TOKEN(0x0153),   value = 55, flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0196),  value = 0,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0197),  value = 1,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
		option text = STRING_TOKEN(0x0198),  value = 2,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x0199), value = 3,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019A), value = 4,  flags = RESET_REQUIRED;
		option text = STRING_TOKEN(0x019B), value = 5,  flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortExtTagField[7],
        prompt   = STRING_TOKEN(0x03C5),
        help     = STRING_TOKEN(0x05C6),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortRelaxedOrdering[7],
        prompt   = STRING_TOKEN(0x03C6),
        help     = STRING_TOKEN(0x05C7),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortExtSync[7],
        prompt   = STRING_TOKEN(0x03C7),
        help     = STRING_TOKEN(0x05C8),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortDeEmphasis[7],
        prompt   = STRING_TOKEN(0x03C8),
        help     = STRING_TOKEN(0x05C9),
        option text = STRING_TOKEN(0x05CA), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x05CB), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.RootPortStopScream[7],
        prompt   = STRING_TOKEN(0x03E7),
        help     = STRING_TOKEN(0x05CD),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;


    oneof varid = IntelSetup.PcieRootPortAspm[7],
        prompt   = STRING_TOKEN(0x02A0),
        help     = STRING_TOKEN(0x02A1),
        option text = STRING_TOKEN(0x019C),  value = 2, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PcieRootPortSLD[7],
        prompt   = STRING_TOKEN(0x0404),
        help     = STRING_TOKEN(0x05D3),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.CapabilityLock[7],
      prompt = STRING_TOKEN(0x03E8),
      help = STRING_TOKEN(0x05CC),
      option text = STRING_TOKEN(0x02A2), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
      option text = STRING_TOKEN(0x02A3),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RootPortLaneReversal[7],
        prompt   = STRING_TOKEN(0x03C9),
        help     = STRING_TOKEN(0x05CE),
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
       
    oneof varid  = IntelSetup.RootPortCTO[7] ,
      prompt       = STRING_TOKEN(0x03CB),
      help         = STRING_TOKEN(0x05D0),
      option text  = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
      option text  = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.RootPortCTO[7] == 1;
      oneof varid = IntelSetup.RootPortCTORange[7],
          prompt  = STRING_TOKEN(0x03CC),
          help    = STRING_TOKEN(0x05D1),
          option text = STRING_TOKEN(0x01DF),     value = 0x0,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0343),   value = 0x1,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0344),  value = 0x2,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x0345),    value = 0x3,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CE),   value = 0x4,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01CF),  value = 0x5,  flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
          option text = STRING_TOKEN(0x01D0), value = 0x6,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D1),     value = 0x7,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D2),      value = 0x8,  flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01D3),     value = 0x9,  flags = RESET_REQUIRED;
      endoneof;
    endif;
   











































































#line 240 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\pcieipsetup\\PcieIpRootPort/PcieIpRootPort.hfr"

endform;

#line 501 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PcieIpSetup\\PcieIp.hfr"


    
#line 34 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\UartController\\UartConfig.hfr"























  form formid = 0x1E,

    title     = STRING_TOKEN(0x0603);





















      


      subtitle text =  STRING_TOKEN(0x0609);








      oneof varid = PCH_SETUP.HsUartMode[0],
          prompt   = STRING_TOKEN(0x0409),
          help     = STRING_TOKEN(0x0605),
          option text = STRING_TOKEN(0x0606),   value = 0, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0607), value = 1, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0608),   value = 2, flags =  DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;

      suppressif NOT ideqval PCH_SETUP.HsUartMode[0] == 1;
        oneof varid = PCH_SETUP.HsUartCOM[0],
            prompt   = STRING_TOKEN(0x040A),
            help     = STRING_TOKEN(0x060C),
            option text = STRING_TOKEN(0x060D), value = 0x3f8, flags =  DEFAULT | MANUFACTURING |RESET_REQUIRED;
            option text = STRING_TOKEN(0x060E), value = 0x2f8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x060F), value = 0x3e8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x0610), value = 0x2e8, flags =  RESET_REQUIRED;
        endoneof;
      endif;


      subtitle text =  STRING_TOKEN(0x060A);








      oneof varid = PCH_SETUP.HsUartMode[1],
          prompt   = STRING_TOKEN(0x0409),
          help     = STRING_TOKEN(0x0605),
          option text = STRING_TOKEN(0x0606),   value = 0, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0607), value = 1, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0608),   value = 2, flags =  DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;

      suppressif NOT ideqval PCH_SETUP.HsUartMode[1] == 1;
        oneof varid = PCH_SETUP.HsUartCOM[1],
            prompt   = STRING_TOKEN(0x040A),
            help     = STRING_TOKEN(0x060C),
            option text = STRING_TOKEN(0x060D), value = 0x3f8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x060E), value = 0x2f8, flags =  DEFAULT | MANUFACTURING |RESET_REQUIRED;
            option text = STRING_TOKEN(0x060F), value = 0x3e8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x0610), value = 0x2e8, flags =  RESET_REQUIRED;
        endoneof;
      endif;



      subtitle text =  STRING_TOKEN(0x060B);








      oneof varid = PCH_SETUP.HsUartMode[2],
          prompt   = STRING_TOKEN(0x0409),
          help     = STRING_TOKEN(0x0605),
          option text = STRING_TOKEN(0x0606),   value = 0, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0607), value = 1, flags =  RESET_REQUIRED;
          option text = STRING_TOKEN(0x0608),   value = 2, flags =  DEFAULT | MANUFACTURING | RESET_REQUIRED;
      endoneof;

      suppressif NOT ideqval PCH_SETUP.HsUartMode[2] == 1;
        oneof varid = PCH_SETUP.HsUartCOM[2],
            prompt   = STRING_TOKEN(0x040A),
            help     = STRING_TOKEN(0x060C),
            option text = STRING_TOKEN(0x060D), value = 0x3f8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x060E), value = 0x2f8, flags =  RESET_REQUIRED;
            option text = STRING_TOKEN(0x060F), value = 0x3e8, flags =  DEFAULT | MANUFACTURING |RESET_REQUIRED;
            option text = STRING_TOKEN(0x0610), value = 0x2e8, flags =  RESET_REQUIRED;
        endoneof;
      endif;
      

  endform; 
#line 35 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"
#line 1 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include\\PlatformBoardId.h"

















































































#line 83 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Include\\PlatformBoardId.h"

#line 36 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"




form formid = 0x22,
  title         = STRING_TOKEN(0x01C6);
  subtitle text = STRING_TOKEN(0x0150);
  subtitle text = STRING_TOKEN(0x014F);
  subtitle text = STRING_TOKEN(0x01C6);
  subtitle text = STRING_TOKEN(0x014F);
  subtitle text = STRING_TOKEN(0x0150);
  








  goto 0x031C,
    prompt = STRING_TOKEN(0x0290),
    help   = STRING_TOKEN(0x0291);

  goto 0x0339,
    prompt = STRING_TOKEN(0x05F7),
    help   = STRING_TOKEN(0x05F8);









  suppressif 1;                 
  goto 0x52,
    prompt = STRING_TOKEN(0x05A7),
    help = STRING_TOKEN(0x05A8);

  goto 0x24,
    prompt = STRING_TOKEN(0x0292),
    help   = STRING_TOKEN(0x0293);
  endif;                                        
    

  goto 0x031D,
    prompt  = STRING_TOKEN(0x028A),
    help    = STRING_TOKEN(0x028B);














  oneof varid  = PCH_SETUP.StateAfterG3,
      prompt   = STRING_TOKEN(0x0400),
      help     = STRING_TOKEN(0x041A),
      option text = STRING_TOKEN(0x041B), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x041C), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x041D), value = 2, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
  endoneof;


  suppressif 1;                 




  suppressif 1;
  oneof varid = PCH_SETUP.PchDciEn,
    prompt   = STRING_TOKEN(0x03D1),
    help     = STRING_TOKEN(0x0445),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
  endoneof;

  suppressif ideqval PCH_SETUP.PchDciEn == 1 OR ideqval PCH_SETUP.PchDciEn == 0;
  oneof varid = PCH_SETUP.PchDciAutoDetect,
    prompt   = STRING_TOKEN(0x03D2),
    help     = STRING_TOKEN(0x0446),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = RESET_REQUIRED;
  endoneof;
  endif;
  endif;


  oneof varid = IntelSetup.SMBusController,
    prompt      = STRING_TOKEN(0x028C),
    help        = STRING_TOKEN(0x028D),
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
  endoneof;

  oneof varid = IntelSetup.SMBusIOSFClockGating,
    prompt      = STRING_TOKEN(0x033B),
    help        = STRING_TOKEN(0x033B),
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
  endoneof;

  oneof varid = IntelSetup.SmbusSpeed,
    prompt      = STRING_TOKEN(0x02A6),
    help        = STRING_TOKEN(0x02A7),
    option text = STRING_TOKEN(0x02A8),      value = 0, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    option text = STRING_TOKEN(0x02A9),     value = 1, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x02AA),    value = 2, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x02AB), value = 3, flags = RESET_REQUIRED;
  endoneof;

  oneof varid   = PCH_SETUP.PchIoApic24119Entries,
    prompt      = STRING_TOKEN(0x03D3),
    help        = STRING_TOKEN(0x046C),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE), value = 1, flags = MANUFACTURING | RESET_REQUIRED;
  endoneof;
  

  oneof varid = PCH_SETUP.GpioStatus, 
    prompt   = STRING_TOKEN(0x046D),
    help     = STRING_TOKEN(0x046E),
    option text = STRING_TOKEN(0x00AF),  value = 0, flags =  DEFAULT | MANUFACTURING | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags =  RESET_REQUIRED;
  endoneof;
	


    
    
    
    
    suppressif 1;
    oneof varid = PCH_SETUP.Hpet, 
      prompt   = STRING_TOKEN(0x028E),
      help     = STRING_TOKEN(0x028F),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE), value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
    endif;
#line 186 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\SouthBridge.hfr"
  
  
  
  goto 0x0415,
    prompt = STRING_TOKEN(0x0413),
    help   = STRING_TOKEN(0x0414);
  endif;                                        
endform; 

form formid = 0x0415,

  title         = STRING_TOKEN(0x0413);
  subtitle text = STRING_TOKEN(0x0413);
  subtitle text = STRING_TOKEN(0x014F);

  goto 0x031D,
    prompt  = STRING_TOKEN(0x028A),
    help    = STRING_TOKEN(0x028B);





 
endform;





form formid = 0x24,
  title = STRING_TOKEN(0x0292);









  oneof varid = IntelSetup.CxPopUpEnable,
    prompt      = STRING_TOKEN(0x0294),
    help        = STRING_TOKEN(0x0295),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
  endoneof;


endform; 






form formid = 0x031D,
  title = STRING_TOKEN(0x028A);

  oneof varid = IntelSetup.Iqat,
    prompt      = STRING_TOKEN(0x0296),
    help        = STRING_TOKEN(0x0297),
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
  endoneof;

  oneof varid = IntelSetup.Iqat_SetFuseCtl,
    prompt      = STRING_TOKEN(0x0298),
    help        = STRING_TOKEN(0x0299),
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
  endoneof;

  suppressif ideqval IntelSetup.Iqat_SetFuseCtl == 0x0;
    oneof varid  = IntelSetup.Iqat_FuseCtlValue,
      prompt      = STRING_TOKEN(0x03BB),
      help        = STRING_TOKEN(0x029A),
      option text = STRING_TOKEN(0x029B), value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x029C), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x029D), value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0415), value = 4, flags = RESET_REQUIRED;
    endoneof;
  endif;

  oneof varid = IntelSetup.Iqat_Set64BMrrMpl,
    prompt      = STRING_TOKEN(0x03BC),
    help        = STRING_TOKEN(0x0416),
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
  endoneof;

endform; 




form formid = 0x176,
  title = STRING_TOKEN(0x0447);


  
  
  
  oneof varid  = IntelSetup.TraceHubEnable,
    prompt   = STRING_TOKEN(0x03E6),
    help     = STRING_TOKEN(0x0449),
    option text = STRING_TOKEN(0x0450),  value = 0, flags = RESET_REQUIRED;
    option text = STRING_TOKEN(0x0451),   value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    option text = STRING_TOKEN(0x0452), value = 2, flags = RESET_REQUIRED;
  endoneof;

  suppressif NOT ideqval IntelSetup.TraceHubEnable == 1;
    
    
    
    oneof varid  = PCH_SETUP.TraceHubFwEnable,
      prompt   = STRING_TOKEN(0x03BE),
      help     = STRING_TOKEN(0x044A),
      option text = STRING_TOKEN(0x0450),  value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0451),   value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
    
    
    
    oneof varid  = PCH_SETUP.MemRegion0BufferSize,
      prompt   = STRING_TOKEN(0x03BF),
      help     = STRING_TOKEN(0x044B),
      option text = STRING_TOKEN(0x0453),  value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0454),   value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0455),   value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0456),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0457), value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0458), value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0459), value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x045A),   value = 7, flags = RESET_REQUIRED;
    endoneof;
    
    
    
    oneof varid  = PCH_SETUP.MemRegion1BufferSize,
      prompt   = STRING_TOKEN(0x03C0),
      help     = STRING_TOKEN(0x044C),
      option text = STRING_TOKEN(0x0453),  value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0454),   value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0455),   value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0456),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0457), value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0458), value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0459), value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x045A),   value = 7, flags = RESET_REQUIRED;
    endoneof;
    
    
    
    oneof varid  = PCH_SETUP.TraceHubPtiMode,
      prompt   = STRING_TOKEN(0x0401),
      help     = STRING_TOKEN(0x044D),
      option text = STRING_TOKEN(0x045B),  value = 1,  flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x045C),  value = 2,  flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x045D), value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x045E), value = 8, flags = RESET_REQUIRED;
    endoneof;

    oneof varid  = PCH_SETUP.TraceHubPtiTraining,
      prompt   = STRING_TOKEN(0x0402),
      help     = STRING_TOKEN(0x044E),
      option text = STRING_TOKEN(0x045F), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0460),   value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0461),   value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0462),   value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0463),   value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0464),   value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0465),   value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0466),   value = 7, flags = RESET_REQUIRED;
    endoneof;

    oneof varid  = PCH_SETUP.TraceHubPtiSpeed,
      prompt   = STRING_TOKEN(0x0403),
      help     = STRING_TOKEN(0x044F),
      option text = STRING_TOKEN(0x0469),   value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0468),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0467),  value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
    oneof varid  = PCH_SETUP.TraceHubMemoryEnabled,
      prompt   = STRING_TOKEN(0x0411),
      help     = STRING_TOKEN(0x046A),
      option text = STRING_TOKEN(0x0450),  value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x0451),   value = 1, flags = RESET_REQUIRED;
    endoneof;
  endif;

endform; 

#line 886 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"





































  form formid = 0x0305,

  title       = STRING_TOKEN(0x01C5);
  subtitle text = STRING_TOKEN(0x01C5);
  subtitle text = STRING_TOKEN(0x014F);

  subtitle text = STRING_TOKEN(0x0150);
  subtitle text = STRING_TOKEN(0x01E0);

    suppressif 1;                       
    text
      help   = STRING_TOKEN(0x01E1),
      text   = STRING_TOKEN(0x01E2),
      text   = STRING_TOKEN(0x01E3),
      flags  = 0,
      key    = 0;
    endif;                                              

    text
      help   = STRING_TOKEN(0x01E4),
      text   = STRING_TOKEN(0x01E5),
      text   = STRING_TOKEN(0x01E6),
      flags  = 0,
      key    = 0;

    text
      help   = STRING_TOKEN(0x01E7),
      text   = STRING_TOKEN(0x01E8),
      text   = STRING_TOKEN(0x01E9),
      flags  = 0,
      key    = 0;

    suppressif 1;                       
    subtitle text = STRING_TOKEN(0x0150);

    goto 0x0324,
      prompt  = STRING_TOKEN(0x02D0),
      help    = STRING_TOKEN(0x02D1);

    goto 0x032A,
      prompt  = STRING_TOKEN(0x04AC),
      help    = STRING_TOKEN(0x04AD);

    goto 0x0325,
      prompt  = STRING_TOKEN(0x04B4),
      help    = STRING_TOKEN(0x04B5);


    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.FastBoot,
        prompt  = STRING_TOKEN(0x02D2),
        help    = STRING_TOKEN(0x02D3),
        option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;   
    endoneof;


    oneof varid = IntelSetup.CommandMode,
        prompt  = STRING_TOKEN(0x023F),
        help    = STRING_TOKEN(0x0240),
        option text = STRING_TOKEN(0x01DF),         value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
        option text = STRING_TOKEN(0x0470), value = 1, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0471), value = 2, flags = RESET_REQUIRED;
    endoneof;

    
    
    oneof varid = IntelSetup.SmmSize,
      prompt      = STRING_TOKEN(0x0202),
      help        = STRING_TOKEN(0x0203),
      option text = STRING_TOKEN(0x0204),  value = 2,  flags = RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0205),  value = 4,  flags = DEFAULT|RESET_REQUIRED;
      option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
    endoneof;
    


    
    
    
    grayoutif ideqval IntelSetup.EnableDdr4Options == 0;
      oneof varid = IntelSetup.CommandAddressParity,
        prompt        = STRING_TOKEN(0x0389),
        help          = STRING_TOKEN(0x049D),
        option text   = STRING_TOKEN(0x049E), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
        option text   = STRING_TOKEN(0x049F), value = 1, flags = RESET_REQUIRED;
      endoneof;
    endif;
    endif;                                              

    
    
    
    
    oneof varid = IntelSetup.DdrFreq,
      prompt      = STRING_TOKEN(0x01E8),
      help        = STRING_TOKEN(0x01E7),

      option text = STRING_TOKEN(0x0496), value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0497), value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0498), value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0499), value = 6, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;







#line 150 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"
    endoneof;
    
    
    
    suppressif 1;                       
    oneof varid = IntelSetup.HalfWidthEnable,
      prompt      = STRING_TOKEN(0x040F),
      help        = STRING_TOKEN(0x04A0),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x01C3),  value = 1, flags = RESET_REQUIRED;
    endoneof;
    
    
    
    oneof varid = IntelSetup.TclIdle,
      prompt      = STRING_TOKEN(0x0410),
      help        = STRING_TOKEN(0x04A1),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),  value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
    
    
    
    
    oneof varid = IntelSetup.EnableParallelTraining,
      prompt      = STRING_TOKEN(0x038A),
      help        = STRING_TOKEN(0x04A2),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x01C3),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.SuppressChannelOption == 1;
      oneof varid = IntelSetup.DdrChannels,
        prompt      = STRING_TOKEN(0x02D4),
        help        = STRING_TOKEN(0x02D5),
        option text = STRING_TOKEN(0x049B), value = 2, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
        option text = STRING_TOKEN(0x049C), value = 1, flags = RESET_REQUIRED;
      endoneof;
    endif;

    oneof varid = IntelSetup.MrcDebugMsg,
      prompt      = STRING_TOKEN(0x0209),
      help        = STRING_TOKEN(0x020A),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x020B), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x020C), value = 2, flags = DEFAULT|RESET_REQUIRED;
      option text = STRING_TOKEN(0x020D), value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x012D), value = 4, flags = RESET_REQUIRED;	
    endoneof;

    
    oneof varid = IntelSetup.MemoryPreservation,
      prompt      = STRING_TOKEN(0x038B),
      help        = STRING_TOKEN(0x0509),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),  value = 1, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;
    

    numeric varid = IntelSetup.InputFineDdrVoltage,
      prompt    = STRING_TOKEN(0x02D6),
      help      = STRING_TOKEN(0x02D7),
      flags     = RESET_REQUIRED,
      minimum   = 0,
      maximum   = 200,
      step      = 5,
      default   = 100,
      option text = STRING_TOKEN(0x0412), value = 100, flags = MANUFACTURING;
    endnumeric;

    oneof varid = IntelSetup.ReadPerBitEnable,
      prompt      = STRING_TOKEN(0x03F7),
      help        = STRING_TOKEN(0x04A3),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.WritePerBitEnable,
      prompt      = STRING_TOKEN(0x03F8),
      help        = STRING_TOKEN(0x04A4),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.ECCSupport,
      prompt      = STRING_TOKEN(0x0216),
      help        = STRING_TOKEN(0x0217),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.FaultyPartEnable,
      prompt      = STRING_TOKEN(0x02DC),
      help        = STRING_TOKEN(0x02DD),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.FaultyPartEnable == 0;
      oneof varid = IntelSetup.FaultyPartOnCorrectable,
        prompt      = STRING_TOKEN(0x02DE),
        help        = STRING_TOKEN(0x02DF),
        option text = STRING_TOKEN(0x02E0), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        option text = STRING_TOKEN(0x046F ), value = 1, flags = RESET_REQUIRED;
      endoneof;
    endif;


    oneof varid = IntelSetup.PatrolSupport,
      prompt      = STRING_TOKEN(0x0218),
      help        = STRING_TOKEN(0x0219),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.PatrolPeriod,
      prompt      = STRING_TOKEN(0x021A),
      help        = STRING_TOKEN(0x021B),
      option text = STRING_TOKEN(0x021C), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x021D), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x021E),  value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x021F),  value = 3, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.DemandScrub,
      prompt      = STRING_TOKEN(0x0220),
      help        = STRING_TOKEN(0x0221),
      option text = STRING_TOKEN(0x01C4 ), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),   value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.AbSegToDram,
      prompt      = STRING_TOKEN(0x0222),
      help        = STRING_TOKEN(0x0223),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.ESegToDram,
      prompt      = STRING_TOKEN(0x0224),
      help        = STRING_TOKEN(0x0225),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.FSegToDram,
      prompt      = STRING_TOKEN(0x0226),
      help        = STRING_TOKEN(0x0227),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.ZqcEnable,
      prompt      = STRING_TOKEN(0x022A),
      help        = STRING_TOKEN(0x022B),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.MrcRmtSupport,
      prompt      = STRING_TOKEN(0x0228),
      help        = STRING_TOKEN(0x0229),
      option text = STRING_TOKEN(0x01C4 ), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.MrcRmtCpgcExpLoopCntValue,
      prompt      = STRING_TOKEN(0x02E1),
      help        = STRING_TOKEN(0x02E2),
      option text = STRING_TOKEN(0x0230),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0231),  value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0232),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0233),  value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0234),  value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0235),  value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0236),  value = 7, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0237),  value = 8, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0238),  value = 9, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0239),  value = 10, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023A),  value = 11, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023B),  value = 12, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x023C),  value = 13, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023D),  value = 14, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023E),  value = 15, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.MrcRmtCpgcNumBursts,
      prompt      = STRING_TOKEN(0x034A),
      help        = STRING_TOKEN(0x034B),
      option text = STRING_TOKEN(0x0230),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0231),  value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0232),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0233),  value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0234),  value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0235),  value = 6, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0236),  value = 7, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0237),  value = 8, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0238),  value = 9, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0239),  value = 10, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023A),  value = 11, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023B),  value = 12, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023C),  value = 13, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023D),  value = 14, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023E),  value = 15, flags = RESET_REQUIRED;
    endoneof;


    oneof varid = IntelSetup.EnableOutOfOrderProcessing,
      prompt      = STRING_TOKEN(0x02E3),
      help        = STRING_TOKEN(0x02E4),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.TwoClkRdPreamble,
      prompt      = STRING_TOKEN(0x03FA),
      help        = STRING_TOKEN(0x04FB),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.TwoClkWrPreamble,
      prompt      = STRING_TOKEN(0x03FB),
      help        = STRING_TOKEN(0x04FC),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.WriteDataEarlyEnable,
      prompt      = STRING_TOKEN(0x03FC),
      help        = STRING_TOKEN(0x04FD),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.OutOfOrderAgingThreshold,
      prompt    = STRING_TOKEN(0x02E5),
      help      = STRING_TOKEN(0x02E6),
      minimum   = 0x0,
      maximum   = 0x1f,
      step      = 1,
      default   = 0x8,
    endnumeric;

    oneof varid = IntelSetup.EnableNewRequestBypass,
      prompt      = STRING_TOKEN(0x02E7),
      help        = STRING_TOKEN(0x02E8),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.SelectRefreshRate,
      prompt      = STRING_TOKEN(0x038F),
      help        = STRING_TOKEN(0x04DD),
      option text = STRING_TOKEN(0x04DE),  value = 2, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x04DF),  value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04E0),  value = 4, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.RefreshWaterMark,
      prompt      = STRING_TOKEN(0x04E1),
      help        = STRING_TOKEN(0x04E2),
      option text = STRING_TOKEN(0x04E3),  value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x04E4),   value = 1, flags = RESET_REQUIRED;
    endoneof;
    
    oneof varid = IntelSetup.CkePowerDownDisable,
      prompt      = STRING_TOKEN(0x02DA),
      help        = STRING_TOKEN(0x02DB),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x0494), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0495), value = 2, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.DramRaplTimeWindow,
      prompt    = STRING_TOKEN(0x0390),
      help      = STRING_TOKEN(0x04E5),
      flags     = RESET_REQUIRED,
      minimum   = 0,
      maximum   = 0x1C0000000,
      step      = 1,
      default   = 0,
    endnumeric;

    oneof varid = IntelSetup.DramRaplPowerLimitEnable,
      prompt      = STRING_TOKEN(0x0391),
      help        = STRING_TOKEN(0x04E6),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.DramRaplPowerLimit,
      prompt    = STRING_TOKEN(0x0392),
      help      = STRING_TOKEN(0x04E7),
      flags     = RESET_REQUIRED,
      minimum   = 0,
      maximum   = 4095875,
      step      = 1,
      default   = 2047875,
    endnumeric;

    oneof varid     = IntelSetup.DramRaplLimitLock,
        prompt      = STRING_TOKEN(0x0393),
        help        = STRING_TOKEN(0x04B3),
        option text = STRING_TOKEN(0x0152), value = 0,  flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x0151), value = 1,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    endoneof;

    numeric varid = IntelSetup.PmopPc0,
      prompt    = STRING_TOKEN(0x02E9),
      help      = STRING_TOKEN(0x02EA),
      flags     = RESET_REQUIRED,
      minimum   = 0x1,
      maximum   = 0x9,
      step      = 1,
      default   = 0x4,
    endnumeric;

    numeric varid = IntelSetup.PmopPcx,
      prompt    = STRING_TOKEN(0x02EB),
      help      = STRING_TOKEN(0x02EC),
      flags     = RESET_REQUIRED,
      minimum   = 0x1,
      maximum   = 0x9,
      step      = 1,
      default   = 0x7,
    endnumeric;

    oneof varid = IntelSetup.OpenPolicyTimer,
      prompt      = STRING_TOKEN(0x0241),
      help        = STRING_TOKEN(0x0242),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT| RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0243), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0244), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0245), value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0246), value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0247), value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0248), value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0249), value = 7, flags = RESET_REQUIRED;
    endoneof;


    oneof varid = IntelSetup.MemoryThermalEnable,
      prompt      = STRING_TOKEN(0x024A),
      help        = STRING_TOKEN(0x024B),
      option text = STRING_TOKEN(0x0208), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C4 ), value = 0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
    endoneof;

    suppressif ideqval IntelSetup.MemoryThermalEnable == 0;
      oneof varid = IntelSetup.ThermalThrottlingType,
      prompt      = STRING_TOKEN(0x0394),
      help        = STRING_TOKEN(0x04E8),
      option text = STRING_TOKEN(0x04E9 ), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x04EA), value = 1, flags = RESET_REQUIRED;
      endoneof;

      suppressif ideqval IntelSetup.ThermalThrottlingType == 1;
        oneof varid = IntelSetup.ClttMode,
        prompt      = STRING_TOKEN(0x0395),
        help        = STRING_TOKEN(0x04EB),
        option text = STRING_TOKEN(0x04EC ), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
        option text = STRING_TOKEN(0x04ED), value = 1, flags = RESET_REQUIRED;
        endoneof;

        numeric varid = IntelSetup.TempHi,  
        prompt    = STRING_TOKEN(0x0396),
        help      = STRING_TOKEN(0x04EE),
        flags     = RESET_REQUIRED,
        minimum   = 105,
        maximum   = 255,
        step      = 1,
        default   = 105,
        endnumeric;

        numeric varid = IntelSetup.TempMid, 
        prompt    = STRING_TOKEN(0x0397),
        help      = STRING_TOKEN(0x04EF),
        flags     = RESET_REQUIRED,
        minimum   = 85,
        maximum   = 104,
        step      = 1,
        default   = 85,
        endnumeric;

        numeric varid = IntelSetup.TempLo, 
        prompt    = STRING_TOKEN(0x0398),
        help      = STRING_TOKEN(0x04F0),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 84,
        step      = 1,
        default   = 82,
        endnumeric;

        numeric varid = IntelSetup.BwLevelOnThrtCrit,   
        prompt    = STRING_TOKEN(0x0399),
        help      = STRING_TOKEN(0x04F1),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 9,
        step      = 1,
        default   = 3,
        endnumeric;

        numeric varid = IntelSetup.BwLevelOnThrtHi,   
        prompt    = STRING_TOKEN(0x039A),
        help      = STRING_TOKEN(0x04F2),
        flags     = RESET_REQUIRED,
        minimum   = 10,
        maximum   = 50,
        step      = 1,
        default   = 10,
        endnumeric;

        numeric varid = IntelSetup.BwLevelOnThrtMid,   
        prompt    = STRING_TOKEN(0x039B),
        help      = STRING_TOKEN(0x04F3),
        flags     = RESET_REQUIRED,
        minimum   = 51,
        maximum   = 100,
        step      = 1,
        default   = 100,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.ThermalThrottlingType == 0;
        numeric varid = IntelSetup.OlttThrtBw,   
        prompt    = STRING_TOKEN(0x039C),
        help      = STRING_TOKEN(0x04F4),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 100,
        step      = 1,
        default   = 90,
        endnumeric;
      endif;
    endif;


    oneof varid     = IntelSetup.MemHotThrotLvl,
      prompt      = STRING_TOKEN(0x039D),
      help        = STRING_TOKEN(0x04F5),
      option text = STRING_TOKEN(0x01C4),          value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
      option text = STRING_TOKEN(0x04F6),   value = 1,  flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04F7),    value = 2,  flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04F8),  value = 3,  flags = RESET_REQUIRED;
    endoneof;

    suppressif ideqval IntelSetup.MemoryThermalEnable == 0;
      suppressif ideqval IntelSetup.ThermalThrottlingType == 1;
        oneof varid     = IntelSetup.EnMemTrip,
          prompt      = STRING_TOKEN(0x039E),
          help        = STRING_TOKEN(0x04F9),
          option text = STRING_TOKEN(0x01C4), value = 0,  flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
          option text = STRING_TOKEN(0x01C3),  value = 1,  flags = RESET_REQUIRED;
        endoneof;

        suppressif ideqval IntelSetup.EnMemTrip == 0;
          numeric varid = IntelSetup.TempMemTrip,
          prompt    = STRING_TOKEN(0x039F),
          help      = STRING_TOKEN(0x04FA),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 255,
          step      = 1,
          default   = 105,
          endnumeric;
        endif;
      endif;
    endif;

    oneof varid = IntelSetup.RxSkewCtl,
      prompt      = STRING_TOKEN(0x03FD),
      help        = STRING_TOKEN(0x04FE),
      option text = STRING_TOKEN(0x0504 ), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0505), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0506), value = 2, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.TxSkewCtl,
      prompt      = STRING_TOKEN(0x03FE),
      help        = STRING_TOKEN(0x0503),
      option text = STRING_TOKEN(0x0504 ), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0505), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0506), value = 2, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.PerformanceProfile,
      prompt      = STRING_TOKEN(0x03FF),
      help        = STRING_TOKEN(0x04FF),
      option text = STRING_TOKEN(0x0500 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0501), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0502), value = 3, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.OverrideCheckpoints,
      prompt      = STRING_TOKEN(0x024C),
      help        = STRING_TOKEN(0x024D),
      option text = STRING_TOKEN(0x0208), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C4), value = 2, flags = RESET_REQUIRED;
    endoneof;


    oneof varid = IntelSetup.EnableScrambler,
      prompt      = STRING_TOKEN(0x024E),
      help        = STRING_TOKEN(0x024F),
      option text = STRING_TOKEN(0x01C4 ), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.EnableSlowPowerDownExit,
      prompt      = STRING_TOKEN(0x0250),
      help        = STRING_TOKEN(0x0251),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    subtitle text = STRING_TOKEN(0x0150);

    goto 0x031B,
      prompt  = STRING_TOKEN(0x0256),
      help    = STRING_TOKEN(0x0257);
    endif;                                              


    subtitle text = STRING_TOKEN(0x0150);

    goto 0x0323,
      prompt  = STRING_TOKEN(0x02F1),
      help    = STRING_TOKEN(0x0150);

    suppressif 1;                       
    goto 0x0412,
      prompt  = STRING_TOKEN(0x050E),
      help    = STRING_TOKEN(0x0150);
    endif;                                              
    endform;
	
    form formid = 0x0412,

    title         = STRING_TOKEN(0x050E);
    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x014F);
	
    text
      help   = STRING_TOKEN(0x01EA),
      text   = STRING_TOKEN(0x01EB),
      text   = STRING_TOKEN(0x01EC),
      flags  = 0,
      key    = 0;

    text
      help   = STRING_TOKEN(0x01ED),
      text   = STRING_TOKEN(0x01EE),
      text   = STRING_TOKEN(0x01EF),
      flags  = 0,
      key    = 0;

    text
      help   = STRING_TOKEN(0x01F0),
      text   = STRING_TOKEN(0x01F1),
      text   = STRING_TOKEN(0x01F2),
      flags  = 0,
      key    = 0;

    text
      help   = STRING_TOKEN(0x01F3),
      text   = STRING_TOKEN(0x01F4),
      text   = STRING_TOKEN(0x01F5),
      flags  = 0,
      key    = 0;

    suppressif ideqval IntelSetup.HideChannel1 == 1;

      subtitle text = STRING_TOKEN(0x0150);

      text
        help   = STRING_TOKEN(0x01F6),
        text   = STRING_TOKEN(0x01F7),
        text   = STRING_TOKEN(0x01F8),
        flags  = 0,
        key    = 0;

      text
        help   = STRING_TOKEN(0x01F9),
        text   = STRING_TOKEN(0x01FA),
        text   = STRING_TOKEN(0x01FB),
        flags  = 0,
        key    = 0;

      text
        help   = STRING_TOKEN(0x01FC),
        text   = STRING_TOKEN(0x01FD),
        text   = STRING_TOKEN(0x01FE),
        flags  = 0,
        key    = 0;

      text
        help   = STRING_TOKEN(0x01FF),
        text   = STRING_TOKEN(0x0200),
        text   = STRING_TOKEN(0x0201),
        flags  = 0,
        key    = 0;
    endif;
	
    goto 0x0331,
      prompt  = STRING_TOKEN(0x047E),
      help    = STRING_TOKEN(0x0486);

    goto 0x0332,
      prompt  = STRING_TOKEN(0x047F),
      help    = STRING_TOKEN(0x0486);

     goto 0x0333,
      prompt  = STRING_TOKEN(0x0480),
      help    = STRING_TOKEN(0x0486);

    goto 0x0334,
      prompt  = STRING_TOKEN(0x0481),
      help    = STRING_TOKEN(0x0486);

    goto 0x0335,
      prompt  = STRING_TOKEN(0x0482),
      help    = STRING_TOKEN(0x0486);

    goto 0x0336,
      prompt  = STRING_TOKEN(0x0483),
      help    = STRING_TOKEN(0x0486);

    goto 0x0337,
      prompt  = STRING_TOKEN(0x0484),
      help    = STRING_TOKEN(0x0486);

    goto 0x0338,
      prompt  = STRING_TOKEN(0x0485),
      help    = STRING_TOKEN(0x0486);


    
    
    
    oneof varid = IntelSetup.BankXorMapEnable,
      prompt      = STRING_TOKEN(0x0388),
      help        = STRING_TOKEN(0x0512),
      option text = STRING_TOKEN(0x0514), value = 0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x0513),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.CorrectErrThreshold,
      prompt    = STRING_TOKEN(0x03F9),
      help      = STRING_TOKEN(0x048E),
      flags     = RESET_REQUIRED,
      minimum   = 1,
      maximum   = 32768,
      step      = 1,
      default   = 16384,
    endnumeric;
    
    oneof varid = IntelSetup.Rk2RkEn,
      prompt      = STRING_TOKEN(0x02B0),
      help        = STRING_TOKEN(0x02B1),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT| RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.MrcMemoryTestLoop,
      prompt      = STRING_TOKEN(0x020E),
      help        = STRING_TOKEN(0x020F),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.LoopCount,
      prompt    = STRING_TOKEN(0x0210),
      help      = STRING_TOKEN(0x0211),
      minimum   = 0x1,
      maximum   = 0xffff,
      step      = 1,
      default   = 0x1,
    endnumeric;

    suppressif 1;
    oneof varid = IntelSetup.InputEnableBunitPerformance,
      prompt      = STRING_TOKEN(0x02D8),
      help        = STRING_TOKEN(0x02D9),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;
    endif;

    oneof varid = IntelSetup.InterleaveMode,
      prompt      = STRING_TOKEN(0x038C),
      help        = STRING_TOKEN(0x048F),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0490), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0491), value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0492), value = 3, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x0493), value = 4, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.MrcHaltSystemOnMemTestError,
      prompt      = STRING_TOKEN(0x0212),
      help        = STRING_TOKEN(0x0213),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.MrcResetLoop,
      prompt      = STRING_TOKEN(0x0214),
      help        = STRING_TOKEN(0x0215),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3 ), value = 1, flags = RESET_REQUIRED;
    endoneof;

    suppressif ideqval IntelSetup.MrcResetLoop == 0;
      numeric varid = IntelSetup.MrcResetLoopCycles,
        prompt    = STRING_TOKEN(0x038D),
        help      = STRING_TOKEN(0x0507),
        flags     = RESET_REQUIRED,
        minimum   = 0x0,
        maximum   = 0xFF,
        step      = 1,
        default   = 0x1,
      endnumeric;
    endif;

    numeric varid = IntelSetup.MaxScrubDebitCount,
      prompt    = STRING_TOKEN(0x038E),
      help      = STRING_TOKEN(0x0508),
      minimum   = 0x0,
      maximum   = 0xffff,
      step      = 1,
      default   = 0x0,
    endnumeric;
    oneof varid = IntelSetup.BramParityEnable,
      prompt      = STRING_TOKEN(0x022C),
      help        = STRING_TOKEN(0x022D),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = RESET_REQUIRED;      
      option text = STRING_TOKEN(0x0153 ),           value = 2, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;



    oneof varid = IntelSetup.MrcTrainingCpgcExpLoopCntValue,
      prompt      = STRING_TOKEN(0x022E),
      help        = STRING_TOKEN(0x022F),
      option text = STRING_TOKEN(0x0230),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0231),  value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0232),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0233),  value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0234),  value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0235),  value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0236),  value = 7, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0237),  value = 8, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0238),  value = 9, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0239),  value = 10, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x023A),  value = 11, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023B),  value = 12, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023C),  value = 13, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023D),  value = 14, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023E),  value = 15, flags = RESET_REQUIRED;
    endoneof;



    oneof varid = IntelSetup.MrcTrainingCpgcNumBursts,
      prompt      = STRING_TOKEN(0x02AE),
      help        = STRING_TOKEN(0x02AF),
      option text = STRING_TOKEN(0x0230),  value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0231),  value = 2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0232),  value = 3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0233),  value = 4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0234),  value = 5, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0235),  value = 6, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0236),  value = 7, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0237),  value = 8, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0238),  value = 9, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0239),  value = 10, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023A),  value = 11, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023B),  value = 12, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023C),  value = 13, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023D),  value = 14, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x023E),  value = 15, flags = RESET_REQUIRED;
    endoneof;


    subtitle text = STRING_TOKEN(0x0150);
    oneof varid = IntelSetup.VrefOverrideEnable,
      prompt      = STRING_TOKEN(0x02ED),
      help        = STRING_TOKEN(0x02EE),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    suppressif ideqval IntelSetup.VrefOverrideEnable == 0;
    numeric varid = IntelSetup.VrefOverrideValue,
      prompt    = STRING_TOKEN(0x02EF),
      help      = STRING_TOKEN(0x02F0),
      flags     = RESET_REQUIRED,
      minimum   = 0,
      maximum   = 126,
      step      = 3,
      default   = 65,
    endnumeric;
    endif;



    oneof varid = IntelSetup.MeSeg,
      prompt      = STRING_TOKEN(0x03A0),
      help        = STRING_TOKEN(0x050A),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;
#line 967 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"
    oneof varid = IntelSetup.MmioSize,
      prompt      = STRING_TOKEN(0x0252),
      help        = STRING_TOKEN(0x0253),
      option text = STRING_TOKEN(0x0153), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x0254), value = 1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0255), value = 2, flags = RESET_REQUIRED;
    endoneof;
	
    oneof varid = IntelSetup.BDebugSelfRefresh,
      prompt      = STRING_TOKEN(0x034C),
      help        = STRING_TOKEN(0x034D),
      option text = STRING_TOKEN(0x01C4), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value = 1, flags = RESET_REQUIRED;
    endoneof;

    endform;


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0331,
  title = STRING_TOKEN(0x047E);

  oneof varid = IntelSetup.PprEnable[0],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[0],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[0],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[0],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[0],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[0],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[0],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 986 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0332,
  title = STRING_TOKEN(0x047F);

  oneof varid = IntelSetup.PprEnable[1],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[1],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[1],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[1],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[1],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[1],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[1],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 989 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0333,
  title = STRING_TOKEN(0x0480);

  oneof varid = IntelSetup.PprEnable[2],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[2],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[2],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[2],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[2],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[2],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[2],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 992 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0334,
  title = STRING_TOKEN(0x0481);

  oneof varid = IntelSetup.PprEnable[3],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[3],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[3],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[3],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[3],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[3],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[3],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 995 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0335,
  title = STRING_TOKEN(0x0482);

  oneof varid = IntelSetup.PprEnable[4],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[4],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[4],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[4],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[4],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[4],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[4],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 998 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0336,
  title = STRING_TOKEN(0x0483);

  oneof varid = IntelSetup.PprEnable[5],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[5],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[5],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[5],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[5],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[5],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[5],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 1001 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0337,
  title = STRING_TOKEN(0x0484);

  oneof varid = IntelSetup.PprEnable[6],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[6],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[6],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[6],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[6],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[6],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[6],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 1004 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  #line 1 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\PprOption/PprOption.hfr"































form formid = 0x0338,
  title = STRING_TOKEN(0x0485);

  oneof varid = IntelSetup.PprEnable[7],
    prompt  = STRING_TOKEN(0x03E9),
    help    = STRING_TOKEN(0x0487),
    option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED | DEFAULT | MANUFACTURING;
    option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED ;
  endoneof;  

  numeric varid = IntelSetup.Row[7],
    prompt    = STRING_TOKEN(0x03EA),
    help      = STRING_TOKEN(0x0488),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 0x3FFF,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.Bank[7],
    prompt    = STRING_TOKEN(0x03EB),
    help      = STRING_TOKEN(0x0489),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.BankGroup[7],
    prompt    = STRING_TOKEN(0x03EC),
    help      = STRING_TOKEN(0x048A),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.DramDevice[7],
    prompt    = STRING_TOKEN(0x03ED),
    help      = STRING_TOKEN(0x048B),
    flags     = RESET_REQUIRED,
    minimum   = 0,
    maximum   = 16,
    step      = 1,
    default   = 0,
  endnumeric;
  
  numeric varid = IntelSetup.TargetRank[7],
    prompt    = STRING_TOKEN(0x03EE),
    help      = STRING_TOKEN(0x048C),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 3,
    step      = 1,
    default   = 0,
  endnumeric;

  numeric varid = IntelSetup.TargetChannel[7],
    prompt    = STRING_TOKEN(0x03EF),
    help      = STRING_TOKEN(0x048D),
    flags     = DISPLAY_UINT_HEX | RESET_REQUIRED,
    minimum   = 0,
    maximum   = 1,
    step      = 1,
    default   = 0,
  endnumeric;
  
endform;

#line 1007 "d:\\bios\\z124-002\\z124-002\\harrisonvillepkg\\platform\\setupdxe\\NorthBridgeConfig.hfr"


  form formid = 0x031B,

    title       = STRING_TOKEN(0x0256);
    subtitle text = STRING_TOKEN(0x0256);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);

        oneof varid = IntelSetup.TCLTiming,
           prompt      = STRING_TOKEN(0x0258),
           help        = STRING_TOKEN(0x0259),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025F), value = 11, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0260), value = 12, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0261), value = 13, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0268), value = 14, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0269), value = 15, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026A), value = 17, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026B), value = 18, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026C), value = 19, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026D), value = 20, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TRCDTiming,
           prompt      = STRING_TOKEN(0x0262),
           help        = STRING_TOKEN(0x0263),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025F), value = 11, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0260), value = 12, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0261), value = 13, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0268), value = 14, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0269), value = 15, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026A), value = 17, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026B), value = 18, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026D), value = 20, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TRPTiming,
           prompt      = STRING_TOKEN(0x0264),
           help        = STRING_TOKEN(0x0265),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025F), value = 11, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0260), value = 12, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0261), value = 13, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0268), value = 14, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0269), value = 15, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026A), value = 17, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026B), value = 18, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026D), value = 20, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TRASTiming,
           prompt      = STRING_TOKEN(0x0266),
           help        = STRING_TOKEN(0x0267),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x0271), value = 24, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0272), value = 25, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0273), value = 26, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0274), value = 27, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0275), value = 28, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0276), value = 29, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0277), value = 30, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0278), value = 31, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0279), value = 32, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x027A), value = 33, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x027B), value = 34, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0282), value = 35, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0283), value = 36, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0472), value = 37, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0473), value = 38, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0474), value = 39, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0475), value = 40, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0476), value = 41, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0477), value = 42, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0478), value = 43, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0479), value = 44, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TRTPTiming,
           prompt      = STRING_TOKEN(0x027C),
           help        = STRING_TOKEN(0x027D),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x025B),  value = 6,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TRRDTiming,
           prompt      = STRING_TOKEN(0x027E),
           help        = STRING_TOKEN(0x027F),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x0205),  value = 4,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025A),  value = 5,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025B),  value = 6,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TFAWTiming,
           prompt      = STRING_TOKEN(0x0280),
           help        = STRING_TOKEN(0x0281),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026D), value = 20, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026F), value = 22, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0270), value = 23, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0271), value = 24, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0273), value = 26, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0274), value = 27, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0277), value = 30, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0279), value = 32, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x027A), value = 33, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TCCDTiming,
           prompt      = STRING_TOKEN(0x0284),
           help        = STRING_TOKEN(0x0285),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x0205),  value = 4,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025A),  value = 5,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025B),  value = 6,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TWTPTiming,
           prompt      = STRING_TOKEN(0x0286),
           help        = STRING_TOKEN(0x0287),
           option text = STRING_TOKEN(0x0208), value = 0, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x0269), value = 1, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0207), value = 2, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026A), value = 3, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026B), value = 4, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026C), value = 5, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026D), value = 6, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026E), value = 7, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026F), value = 8, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0270), value = 9, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0271), value = 10, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0272), value = 11, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0273), value = 12, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0274), value = 13, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0275), value = 14, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0276), value = 15, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0277), value = 16, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.TWCLTiming,
           prompt      = STRING_TOKEN(0x0288),
           help        = STRING_TOKEN(0x0289),
           option text = STRING_TOKEN(0x0208),     value = 0,  flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
           option text = STRING_TOKEN(0x025C),  value = 7,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0206),  value = 8,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025D),  value = 9,  flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025E), value = 10, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x025F), value = 11, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0260), value = 12, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0268), value = 14, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x0207), value = 16, flags = RESET_REQUIRED;
           option text = STRING_TOKEN(0x026B), value = 18, flags = RESET_REQUIRED;
        endoneof;
  endform;


form formid = 0x032A,
    title           = STRING_TOKEN(0x04AC);
    subtitle text   = STRING_TOKEN(0x04AC);
    subtitle text   = STRING_TOKEN(0x014F);

    subtitle text   = STRING_TOKEN(0x0150);
    subtitle text   = STRING_TOKEN(0x030A);

    oneof varid = IntelSetup.LeakyBucketUnits,
      prompt      = STRING_TOKEN(0x03A1),
      help        = STRING_TOKEN(0x04AE),
      option text = STRING_TOKEN(0x04AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04B0 ), value = 1, flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
    endoneof;

    subtitle text   = STRING_TOKEN(0x0150);
    subtitle text   = STRING_TOKEN(0x04B2);

    suppressif ideqval IntelSetup.HideRankCh0[0] == 1;
      numeric varid = IntelSetup.LeakyBucketRateCh0[0],
        prompt    = STRING_TOKEN(0x030B),
        help      = STRING_TOKEN(0x030C),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFFFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[1] == 1;
      numeric varid = IntelSetup.LeakyBucketRateCh0[1],
        prompt    = STRING_TOKEN(0x030D),
        help      = STRING_TOKEN(0x030E),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFFFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[2] == 1;
      numeric varid = IntelSetup.LeakyBucketRateCh0[2],
        prompt    = STRING_TOKEN(0x030F),
        help      = STRING_TOKEN(0x0310),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFFFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[3] == 1;
      numeric varid = IntelSetup.LeakyBucketRateCh0[3],
        prompt    = STRING_TOKEN(0x0311),
        help      = STRING_TOKEN(0x0312),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFFFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideChannel1 == 1;
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text   = STRING_TOKEN(0x0313);

      suppressif ideqval IntelSetup.HideRankCh0[0] == 1;
        numeric varid = IntelSetup.LeakyBucketRateCh1[0],
          prompt    = STRING_TOKEN(0x030B),
          help      = STRING_TOKEN(0x030C),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFFFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[1] == 1;
        numeric varid = IntelSetup.LeakyBucketRateCh1[1],
          prompt    = STRING_TOKEN(0x030D),
          help      = STRING_TOKEN(0x030E),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFFFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[2] == 1;
        numeric varid = IntelSetup.LeakyBucketRateCh1[2],
          prompt    = STRING_TOKEN(0x030F),
          help      = STRING_TOKEN(0x0310),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFFFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[3] == 1;
        numeric varid = IntelSetup.LeakyBucketRateCh1[3],
          prompt    = STRING_TOKEN(0x0311),
          help      = STRING_TOKEN(0x0312),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFFFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;
    endif;

    subtitle text   = STRING_TOKEN(0x0150);
    subtitle text   = STRING_TOKEN(0x04B1);

    suppressif ideqval IntelSetup.HideRankCh0[0] == 1;
      numeric varid = IntelSetup.CorrectableErrorThresholdCh0[0],
        prompt    = STRING_TOKEN(0x030B),
        help      = STRING_TOKEN(0x030C),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[1] == 1;
      numeric varid = IntelSetup.CorrectableErrorThresholdCh0[1],
        prompt    = STRING_TOKEN(0x030D),
        help      = STRING_TOKEN(0x030E),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[2] == 1;
      numeric varid = IntelSetup.CorrectableErrorThresholdCh0[2],
        prompt    = STRING_TOKEN(0x030F),
        help      = STRING_TOKEN(0x0310),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[3] == 1;
      numeric varid = IntelSetup.CorrectableErrorThresholdCh0[3],
        prompt    = STRING_TOKEN(0x0311),
        help      = STRING_TOKEN(0x0312),
        flags     = RESET_REQUIRED,
        minimum   = 0,
        maximum   = 0xFFFF,
        step      = 1,
        default   = 0,
      endnumeric;
    endif;

    suppressif ideqval IntelSetup.HideChannel1 == 1;
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text   = STRING_TOKEN(0x0313);

      suppressif ideqval IntelSetup.HideRankCh0[0] == 1;
        numeric varid = IntelSetup.CorrectableErrorThresholdCh1[0],
          prompt    = STRING_TOKEN(0x030B),
          help      = STRING_TOKEN(0x030C),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[1] == 1;
        numeric varid = IntelSetup.CorrectableErrorThresholdCh1[1],
          prompt    = STRING_TOKEN(0x030D),
          help      = STRING_TOKEN(0x030E),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[2] == 1;
        numeric varid = IntelSetup.CorrectableErrorThresholdCh1[2],
          prompt    = STRING_TOKEN(0x030F),
          help      = STRING_TOKEN(0x0310),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

      suppressif ideqval IntelSetup.HideRankCh0[3] == 1;
        numeric varid = IntelSetup.CorrectableErrorThresholdCh1[3],
          prompt    = STRING_TOKEN(0x0311),
          help      = STRING_TOKEN(0x0312),
          flags     = RESET_REQUIRED,
          minimum   = 0,
          maximum   = 0xFFFF,
          step      = 1,
          default   = 0,
        endnumeric;
      endif;

    endif;
endform;

form formid = 0x0324,

    title           = STRING_TOKEN(0x02D0);
    subtitle text   = STRING_TOKEN(0x02D0);
    subtitle text   = STRING_TOKEN(0x014F);
    subtitle text   = STRING_TOKEN(0x0150);

    subtitle text   = STRING_TOKEN(0x04A5);
    grayoutif ideqval IntelSetup.EnableDdr4Options == 1;
      oneof varid = IntelSetup.MitigationProbability,
        prompt        = STRING_TOKEN(0x03A2),
        help          = STRING_TOKEN(0x04A6),
        option text   = STRING_TOKEN(0x01C4   ), value = 0,     flags = DEFAULT|RESET_REQUIRED| MANUFACTURING;
        option text   = STRING_TOKEN(0x047A ), value = 2048,  flags = RESET_REQUIRED;
        option text   = STRING_TOKEN(0x047B ), value = 4096,  flags = RESET_REQUIRED;
        option text   = STRING_TOKEN(0x047C ), value = 8192,  flags = RESET_REQUIRED;
        option text   = STRING_TOKEN(0x047D), value = 16384, flags = RESET_REQUIRED;
      endoneof;
    endif;

    subtitle text   = STRING_TOKEN(0x0150);
    subtitle text   = STRING_TOKEN(0x02F2);

    oneof varid = IntelSetup.InputPassGateEnabled,
      prompt      = STRING_TOKEN(0x02F3),
      help        = STRING_TOKEN(0x02F4),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.InputPassGateDirection,
      prompt      = STRING_TOKEN(0x02F5),
      help        = STRING_TOKEN(0x02F6),
      option text = STRING_TOKEN(0x02F7), value =  0, flags = DEFAULT | RESET_REQUIRED | MANUFACTURING;
      option text = STRING_TOKEN(0x02F8), value =  1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.InputPassGateMonteCarloEnable == 1;
        numeric varid = IntelSetup.InputPassGateRepetitionCountRange,
          prompt    = STRING_TOKEN(0x02F9),
          help      = STRING_TOKEN(0x02FA),
          flags     = RESET_REQUIRED,
          minimum   = 100,
          maximum   = 2000,
          step      = 50,
          default   = 900,
        endnumeric;
    endif;

    numeric varid = IntelSetup.InputPassGateIterationOnRow,
      prompt    = STRING_TOKEN(0x02FB),
      help      = STRING_TOKEN(0x02FC),
      flags     = RESET_REQUIRED,
      minimum   = 1,
      maximum   = 300,
      step      = 1,
      default   = 1,
    endnumeric;

    oneof varid = IntelSetup.InputPassGateSwizzle,
      prompt      = STRING_TOKEN(0x02FD),
      help        = STRING_TOKEN(0x02FE),
      option text = STRING_TOKEN(0x0208),    value =  0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x01C3), value =  1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.InputPassGatePattern,
      prompt      = STRING_TOKEN(0x02FF),
      help        = STRING_TOKEN(0x0300),
      option text = STRING_TOKEN(0x0301), value =  0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x0302), value =  1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.InputPassGateTargetPattern,
      prompt      = STRING_TOKEN(0x0303),
      help        = STRING_TOKEN(0x0304),
      option text = STRING_TOKEN(0x0301), value =  0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x0302), value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;

    oneof varid = IntelSetup.InputSpeedSelected,
      prompt      = STRING_TOKEN(0x0305),
      help        = STRING_TOKEN(0x0306),
      option text = STRING_TOKEN(0x0307),     value =  1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04A7),     value =  2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04A8),     value =  4, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04A9),     value =  8, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
    endoneof;


    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.InputPassGatePartial,
      prompt      = STRING_TOKEN(0x0308),
      help        = STRING_TOKEN(0x0309),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.InputPassGateRowBankMin,
      prompt    = STRING_TOKEN(0x03A3),
      help      = STRING_TOKEN(0x04AA),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | RESET_REQUIRED,
      minimum   = 0,
      maximum   = 0x3FFFF,
      step      = 8,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.InputPassGateRowBankMax,
      prompt    = STRING_TOKEN(0x03A4),
      help      = STRING_TOKEN(0x04AB),
      flags     = DISPLAY_UINT_HEX | INTERACTIVE | RESET_REQUIRED,
      minimum   = 8,
      maximum   = 0x3FFFF,
      step      = 8,
      default   = 8,
    endnumeric;

    subtitle text = STRING_TOKEN(0x0150);
    subtitle text   = STRING_TOKEN(0x030A);

    suppressif ideqval IntelSetup.HideRankCh0[0] == 1;
      oneof varid = IntelSetup.InputPassGateRankEnableCh0[0],
        prompt      = STRING_TOKEN(0x030B),
        help        = STRING_TOKEN(0x030C),
        option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[1] == 1;
      oneof varid = IntelSetup.InputPassGateRankEnableCh0[1],
        prompt      = STRING_TOKEN(0x030D),
        help        = STRING_TOKEN(0x030E),
        option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[2] == 1;
      oneof varid = IntelSetup.InputPassGateRankEnableCh0[2],
        prompt      = STRING_TOKEN(0x030F),
        help        = STRING_TOKEN(0x0310),
        option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;
    endif;

    suppressif ideqval IntelSetup.HideRankCh0[3] == 1;
      oneof varid = IntelSetup.InputPassGateRankEnableCh0[3],
        prompt      = STRING_TOKEN(0x0311),
        help        = STRING_TOKEN(0x0312),
        option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
        option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      endoneof;
    endif;

    suppressif ideqval IntelSetup.HideChannel1 == 1;
      subtitle text = STRING_TOKEN(0x0150);
      subtitle text   = STRING_TOKEN(0x0313);

      suppressif ideqval IntelSetup.HideRankCh1[0] == 1;
        oneof varid = IntelSetup.InputPassGateRankEnableCh1[0],
          prompt      = STRING_TOKEN(0x030B),
          help        = STRING_TOKEN(0x030C),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        endoneof;
      endif;

      suppressif ideqval IntelSetup.HideRankCh1[1] == 1;
        oneof varid = IntelSetup.InputPassGateRankEnableCh1[1],
          prompt      = STRING_TOKEN(0x030D),
          help        = STRING_TOKEN(0x030E),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        endoneof;
      endif;

      suppressif ideqval IntelSetup.HideRankCh1[2] == 1;
        oneof varid = IntelSetup.InputPassGateRankEnableCh1[2],
          prompt      = STRING_TOKEN(0x030F),
          help        = STRING_TOKEN(0x0310),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        endoneof;
      endif;

      suppressif ideqval IntelSetup.HideRankCh1[3] == 1;
        oneof varid = IntelSetup.InputPassGateRankEnableCh1[3],
          prompt      = STRING_TOKEN(0x0311),
          help        = STRING_TOKEN(0x0312),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
        endoneof;
      endif;
    endif;
    subtitle text = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.InputPassGateMonteCarloEnable,
      prompt      = STRING_TOKEN(0x0314),
      help        = STRING_TOKEN(0x0315),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|RESET_REQUIRED|MANUFACTURING;
      option text = STRING_TOKEN(0x01C3),  value =  1, flags = RESET_REQUIRED;
    endoneof;

    grayoutif ideqval IntelSetup.InputPassGateMonteCarloEnable == 0;
        numeric varid = IntelSetup.InputMontecarloMaxFailures,
          prompt    = STRING_TOKEN(0x0316),
          help      = STRING_TOKEN(0x0317),
          flags     = RESET_REQUIRED,
          minimum   = 1,
          maximum   = 50,
          step      = 1,
          default   = 50,
        endnumeric;

        numeric varid = IntelSetup.InputMontecarloStartRepetition,
          prompt    = STRING_TOKEN(0x0318),
          help      = STRING_TOKEN(0x0319),
          flags     = RESET_REQUIRED,
          minimum   = 300,
          maximum   = 2000,
          step      = 50,
          default   = 900,
        endnumeric;

        numeric varid = IntelSetup.InputMontecarloDecrement,
          prompt    = STRING_TOKEN(0x031A),
          help      = STRING_TOKEN(0x031B),
          flags     = RESET_REQUIRED,
          minimum   = 1,
          maximum   = 100,
          step      = 1,
          default   = 10,
        endnumeric;
    endif;

endform;




  form formid = 0x0325,

    title           = STRING_TOKEN(0x04B4);
    subtitle text   = STRING_TOKEN(0x0150);

    oneof varid = IntelSetup.NonVolMemMode,
      prompt      = STRING_TOKEN(0x03A5),
      help        = STRING_TOKEN(0x04B6),
      option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
      option text = STRING_TOKEN(0x04B7),      value =  1, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04B8),      value =  2, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04BA),  value =  3, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x04B9),   value =  4, flags = RESET_REQUIRED;
    endoneof;

    subtitle text   = STRING_TOKEN(0x0150);

    grayoutif ideqval IntelSetup.NonVolMemMode == 0;
        checkbox varid = IntelSetup.PmcInternAdrSources[0],
		  prompt = STRING_TOKEN(0x03A6),
		  help   = STRING_TOKEN(0x04D2),
		  flags  = RESET_REQUIRED,
		  key    = 0,
		endcheckbox;

	      oneof varid = IntelSetup.NonVolMemCacheFlushing,
	        prompt      = STRING_TOKEN(0x03A7),
	        help        = STRING_TOKEN(0x04BB),
	        option text = STRING_TOKEN(0x04BC),  value =  0, flags = DEFAULT|RESET_REQUIRED;
	        option text = STRING_TOKEN(0x04BD),  value =  1, flags = RESET_REQUIRED;
	      endoneof;

	      oneof varid = IntelSetup.NonVolMemAdrStatusSrc,
	        prompt      = STRING_TOKEN(0x03A8),
	        help        = STRING_TOKEN(0x04BE),
	        option text = STRING_TOKEN(0x04C0),  value =  0, flags = DEFAULT|RESET_REQUIRED;
	        option text = STRING_TOKEN(0x04BF),  value =  1, flags = RESET_REQUIRED;
	      endoneof;

		  goto 0x0330,
		    prompt  = STRING_TOKEN(0x04D0),
		    help    = STRING_TOKEN(0x04D1);

	    subtitle text   = STRING_TOKEN(0x0150);

      suppressif ideqval IntelSetup.NonVolMemMode > 0 AND ideqval IntelSetup.NonVolMemMode < 4;
        
        
        
        oneof varid = IntelSetup.NonVolMemInterleaving,
          prompt      = STRING_TOKEN(0x03A9),
          help        = STRING_TOKEN(0x04C1),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.restoreNVDIMMS,
          prompt      = STRING_TOKEN(0x03AA),
          help        = STRING_TOKEN(0x04C3),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
        endoneof;

        oneof varid = IntelSetup.eraseArmNVDIMMS,
          prompt      = STRING_TOKEN(0x03AB),
          help        = STRING_TOKEN(0x04C2),
          option text = STRING_TOKEN(0x01C4), value =  0, flags = RESET_REQUIRED;
          option text = STRING_TOKEN(0x01C3),  value =  1, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
        endoneof;

        text
          help   = STRING_TOKEN(0x04C5),
          text   = STRING_TOKEN(0x04C4),
          text   = STRING_TOKEN(0x04C6),
          flags  = 0,
          key    = 0;

      endif;

      suppressif ideqval IntelSetup.NonVolMemMode == 4;
      	  
      	  
      	  
          grayoutif ideqval IntelSetup.NonVolMemMode < 2 OR ideqval IntelSetup.NonVolMemMode > 3;
			  oneof varid = IntelSetup.NonVolMemC2fLbaLocMethod,
			    prompt      = STRING_TOKEN(0x03AC),
			    help        = STRING_TOKEN(0x04C7),
			    option text = STRING_TOKEN(0x04C8), value =  0, flags = MANUFACTURING|RESET_REQUIRED;
			    
			  endoneof;

          	grayoutif ideqval IntelSetup.NonVolMemC2fLbaLocMethod == 1;
	          numeric varid = IntelSetup.NonVolMemC2fLba,
	            prompt    = STRING_TOKEN (0x03AD),
	            help      = STRING_TOKEN (0x04CA),
	            flags     = RESET_REQUIRED,
		        minimum   = 0,
		        maximum   = 0xFFFFFFFF,
		        step      = 1,
		        default   = 0,
	          endnumeric;
	      	endif;
	      endif;

          
          
          
          numeric varid = IntelSetup.NonVolMemSize,
            prompt    = STRING_TOKEN (0x03CF),
            help      = STRING_TOKEN (0x04CB),
            flags     = RESET_REQUIRED,
            minimum   = 512,
            maximum   = 8128,
            step      = 64,
            default   = 1024,
          endnumeric;
      endif;

	  oneof varid = IntelSetup.NonVolMemTestMode,
	    prompt      = STRING_TOKEN(0x03AE),
	    help        = STRING_TOKEN(0x04CC),
	    option text = STRING_TOKEN(0x01C4), value =  0, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
	    option text = STRING_TOKEN(0x04CD), value =  1, flags = RESET_REQUIRED;
	    option text = STRING_TOKEN(0x04CE),     value =  2, flags = RESET_REQUIRED;
	    option text = STRING_TOKEN(0x04CF),  value =  3, flags = RESET_REQUIRED;
	  endoneof;
    endif;
endform;




form formid = 0x0330,
    title           = STRING_TOKEN(0x04D0);
    subtitle text   = STRING_TOKEN(0x0150);

    grayoutif ideqval IntelSetup.PmcInternAdrSources[0] == 0 OR ideqval IntelSetup.PmcInternAdrSources[0] == 1;
		
		
		
		checkbox varid = IntelSetup.PmcInternAdrSources[0],
		  prompt = STRING_TOKEN(0x03A6),
		  help   = STRING_TOKEN(0x04D2),
		  flags  = RESET_REQUIRED,
		  key    = 0,
		endcheckbox;
    endif;

    checkbox varid = IntelSetup.PmcInternAdrSources[2],
      prompt = STRING_TOKEN(0x03AF),
      help   = STRING_TOKEN(0x04D3),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[5],
      prompt = STRING_TOKEN(0x03B0),
      help   = STRING_TOKEN(0x04D4),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[6],
      prompt = STRING_TOKEN(0x03B1),
      help   = STRING_TOKEN(0x04D5),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[7],
      prompt = STRING_TOKEN(0x03B2),
      help   = STRING_TOKEN(0x04D6),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[8],
      prompt = STRING_TOKEN(0x03B3),
      help   = STRING_TOKEN(0x04D7),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[10],
      prompt = STRING_TOKEN(0x03B4),
      help   = STRING_TOKEN(0x04D8),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[11],
      prompt = STRING_TOKEN(0x03B5),
      help   = STRING_TOKEN(0x04D9),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[12],
      prompt = STRING_TOKEN(0x03B6),
      help   = STRING_TOKEN(0x04DA),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[14],
      prompt = STRING_TOKEN(0x03B7),
      help   = STRING_TOKEN(0x04DB),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

    checkbox varid = IntelSetup.PmcInternAdrSources[29],
      prompt = STRING_TOKEN(0x03B8),
      help   = STRING_TOKEN(0x04DC),
      flags  = RESET_REQUIRED,
      key    = 0,
    endcheckbox;

endform;

  form formid = 0x0323,

    title       = STRING_TOKEN(0x02F1);
    subtitle text = STRING_TOKEN(0x02F1);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);


    oneof varid = IntelSetup.VtdEnable,
      prompt      = STRING_TOKEN(0x03B9),
      help        = STRING_TOKEN(0x050C),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    suppressif 1;                       
    oneof varid = IntelSetup.InterruptRemappingSupport,
      prompt      = STRING_TOKEN(0x03D0),
      help        = STRING_TOKEN(0x050D),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
	
    goto 0x0417,
      prompt  = STRING_TOKEN(0x050B),
      help    = STRING_TOKEN(0x0150);
    endif;                                              


  endform; 

 form formid = 0x0417,

    title       = STRING_TOKEN(0x050B);
    subtitle text = STRING_TOKEN(0x050B);
    subtitle text = STRING_TOKEN(0x014F);
    subtitle text = STRING_TOKEN(0x0150);
	
    oneof varid = IntelSetup.EnableSsaClockGating,
      prompt      = STRING_TOKEN(0x031C),
      help        = STRING_TOKEN(0x031D),
      option text = STRING_TOKEN(0x00AF), value = 0, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE),  value = 1, flags = RESET_REQUIRED;
    endoneof;

    oneof varid = IntelSetup.InOrderAPIC,
      prompt      = STRING_TOKEN(0x031E),
      help        = STRING_TOKEN(0x031F),
      option text = STRING_TOKEN(0x00AF),  value = 0, flags = DEFAULT|MANUFACTURING|RESET_REQUIRED;
      option text = STRING_TOKEN(0x00AE),   value = 1, flags = RESET_REQUIRED;
    endoneof;

    numeric varid = IntelSetup.SchedulerLat,
      prompt      = STRING_TOKEN(0x0320),
      help        = STRING_TOKEN(0x0321),
      minimum   = 0,
      maximum   = 15,
      step      = 1,
      default   = 0x8,
    endnumeric;
  
  
  
  oneof varid     = IntelSetup.MsiRedirAlgorithm,
    prompt      = STRING_TOKEN(0x03BA),
    help        = STRING_TOKEN(0x050F),
    option text = STRING_TOKEN(0x0510),  value = 0, flags = RESET_REQUIRED | MANUFACTURING | DEFAULT;
    option text = STRING_TOKEN(0x0511),   value = 1, flags = RESET_REQUIRED;
  endoneof;

    numeric varid = IntelSetup.CosCatAgent[0],
      prompt      = STRING_TOKEN(0x0322),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[1],
      prompt      = STRING_TOKEN(0x0324),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[2],
      prompt      = STRING_TOKEN(0x0325),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[3],
      prompt      = STRING_TOKEN(0x0326),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[4],
      prompt      = STRING_TOKEN(0x0327),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[5],
      prompt      = STRING_TOKEN(0x0328),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[6],
      prompt      = STRING_TOKEN(0x0329),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[7],
      prompt      = STRING_TOKEN(0x032A),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[8],
      prompt      = STRING_TOKEN(0x032B),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[9],
      prompt      = STRING_TOKEN(0x032C),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[10],
      prompt      = STRING_TOKEN(0x032D),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[11],
      prompt      = STRING_TOKEN(0x032E),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[12],
      prompt      = STRING_TOKEN(0x032F),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[13],
      prompt      = STRING_TOKEN(0x0330),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[14],
      prompt      = STRING_TOKEN(0x0331),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.CosCatAgent[15],
      prompt      = STRING_TOKEN(0x0332),
      help        = STRING_TOKEN(0x0323),
      minimum   = 0,
      maximum   = 3,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.BestEffortMaxLat,
      prompt      = STRING_TOKEN(0x0333),
      help        = STRING_TOKEN(0x0334),
      minimum   = 0,
      maximum   = 255,
      step      = 0,
      default   = 0x3f,
    endnumeric;

    numeric varid = IntelSetup.PageHitDelay,
      prompt      = STRING_TOKEN(0x0335),
      help        = STRING_TOKEN(0x0336),
      minimum   = 0,
      maximum   = 7,
      step      = 1,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.IsocBankPrefetch,
      prompt      = STRING_TOKEN(0x0337),
      help        = STRING_TOKEN(0x0338),
      minimum   = 0,
      maximum   = 127,
      step      = 0,
      default   = 0,
    endnumeric;

    numeric varid = IntelSetup.BestEffortBankPref,
      prompt      = STRING_TOKEN(0x0339),
      help        = STRING_TOKEN(0x033A),
      minimum   = 0,
      maximum   = 127,
      step      = 0,
      default   = 0x20,
    endnumeric;
endform;

#line 887 "d:\\bios\\z124-002\\z124-002\\HarrisonvillePkg\\Platform\\SetupDxe\\IntelRcSetup.vfr"
  
 endformset;

