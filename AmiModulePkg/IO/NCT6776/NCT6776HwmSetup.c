//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2013, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************
//*************************************************************************
//<AMI_FHDR_START>
//
// Name:  <NCT6776HwmSetup.c>
//
// Description: This is related to individual HHM devices.
//
//<AMI_FHDR_END>
//*************************************************************************
//-------------------------------------------------------------------------
// Include Files
//-------------------------------------------------------------------------
#include <AmiDxeLib.h>
#include <Setup.h>
#include <SioSetup.h>
//G160-002(8) - start
#include <Protocol\Smbus.h>
static EFI_GUID gEfiSmbusHcProtocolGuid	= EFI_SMBUS_HC_PROTOCOL_GUID;
EFI_SMBUS_HC_PROTOCOL   *SmbusProtocol;
EFI_SMBUS_DEVICE_ADDRESS SlaveAddress;
//G160-002(8) - end
//-------------------------------------------------------------------------
// Constants, Macros and Type Definitions
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//Variable, Prototype, and External Declarations
//-------------------------------------------------------------------------

//////////////////////////////////////////////////////////////////////////////
////////////OEM PORTING REQUIRED/////////////OEM PORTING REQUIRED/////////////
//////////////////////////////////////////////////////////////////////////////
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     TEMP_DECIMAL_TO_INTEGER
//
// Description:
//  Get the register value form HWM space register.
//
// Input:
//    IN UINTN Int_Data---integer part data
//    IN UINTN Dec_Data---decimal part data
//    IN UINTN Dec_Point---the count of decimal unit point
// Output:
//  UINTN   Data---output the translation data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
UINTN TEMP_DECIMAL_TO_INTEGER (
    IN UINTN Int_Data,
    IN UINTN Dec_Data,
    IN UINTN Dec_Point//when 0.5,it is 1,when 0.25 it is 2,when 0.125,it is 3
)
{
    UINTN       OutBuffer=0;
    INTN        InData=0;
    UINTN       Dec_Unit=1;

    InData = (INTN)(Int_Data);

    if(InData < 0) {
      Dec_Unit=-1;
    }
    while(Dec_Point) {
        Int_Data=Int_Data*10;
        Dec_Unit=Dec_Unit*5;
        Dec_Point--;
    }
    OutBuffer=Int_Data+Dec_Data*Dec_Unit;

    return OutBuffer;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     VOL_DIVISOR_CALCULATE
//
// Description:
//  Get the register value form HWM voltage space register.
//
// Input:
//    IN UINTN Vol_Value---voltage parameter
//    IN UINTN Vol_Unit---voltage lsb unit
//    IN UINTN R_B---divisor bigger resitor
//    IN UINTN R_S---divisor smaller resitor
// Output:
//  UINTN   Data---output the voltage value
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
UINTN VOL_DIVISOR_CALCULATE (
    IN UINTN Vol_Value,
    IN UINTN Vol_Unit,
    IN UINTN R_B,
    IN UINTN R_S
)
{
    UINTN       OutBuffer=0;
    if((R_B!=0) && (R_S!=0)){//it use resistor divisor
      OutBuffer = Vol_Value * Vol_Unit * (R_B + R_S)/R_S;
    }else {//it don't use resistor divisor
      OutBuffer = Vol_Value * Vol_Unit;
    }

    return OutBuffer;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetValueWithIO
//
// Description:
//  Get the register value form HWM space register.
//
// Input:
//  UINT8   BankNo,
//  UINT8   Register -> Register who content the wanted value
//  UINTN   *Value   -> Register value
//
// Output:
//  UINTN   *Value
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetValueWithIO (
    IN UINT8 BankNo,
    IN UINT8 Register,
    OUT UINTN *Value
)
{
    UINT8       temp;

    // Enter Bank NO!
    IoWrite8(NCT6776_HWM_INDEX_PORT, 0x4E); 
    temp = IoRead8(NCT6776_HWM_DATA_PORT);
    temp &= 0xF8 ;
    IoWrite8(NCT6776_HWM_DATA_PORT, (temp | BankNo));

    //Read the data from register
    IoWrite8(NCT6776_HWM_INDEX_PORT, Register); 
    *Value = IoRead8(NCT6776_HWM_DATA_PORT);
    return;
}
//-------------------------------------------------------------------------
//Variable, Prototype, and External Declarations
//-------------------------------------------------------------------------
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetSystemTemp1
//
// Description:
//  Get the first System temperature value in HWM space register and update to HII.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetSystemTemp1(
    IN OUT HWM_DATA * Data
)
{
/*      //G160-002(8)
    UINTN       T1, offset;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP1_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x00,0x73,&T1); // Bank0 Register 0x73.
    GetValueWithIO(0x04,0x54,&offset); // Bank4 Register 0x54
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData = (UINTN)(INTN)(INT16)(T1 + offset);
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)(INTN)T1;
*///G160-002(8)

//G160-002(8) - start
	UINT8   Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3
    	UINT8   Reg=0;
    	UINTN   Length = 0x01;
    	UINT8   Tmpdata ;
    	EFI_STATUS  Status;
    	UINT8   TMP75_SLAVEADDRESS = 0x9E;
    	    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP1_VALUE);
    	    Data->Type = TEMPERATURE;
    	    Data->OddPos = Unit_Point_Count;
    	SlaveAddress.SmbusDeviceAddress = (TMP75_SLAVEADDRESS>>1);
        Status=SmbusProtocol->Execute(SmbusProtocol, SlaveAddress, Reg ,EfiSmbusReadByte,FALSE,&Length, &Tmpdata );
        Data->Value = (UINT16)Tmpdata;
//G160-002(8) - end

    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetSystemTemp2
//
// Description:
//  Get the first System temperature value in HWM space register and update to HII.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetSystemTemp2(
    IN OUT HWM_DATA * Data
)
{
/*      //G160-002(8)
    UINTN       T1, offset;
    UINTN       IntData=0,IntData1=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP2_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x00,0x75,&T1); // Bank0 Register 0x75.
    GetValueWithIO(0x04,0x55,&offset); // Bank4 Register 0x55
    //Get Demical Data,AMI_TODO:

    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData = (UINTN)(INTN)(INT16)(T1 + offset);
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)(INTN)T1;
*/      //G160-002(8)

//G160-002(8) - start
	UINT8   Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3
    	UINT8   Reg=0;
    	UINTN   Length = 0x01;
    	UINT8   Tmpdata ;
    	EFI_STATUS  Status;
    	UINT8   TMP75_SLAVEADDRESS = 0x94;
    	    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP2_VALUE);
    	    Data->Type = TEMPERATURE;
    	    Data->OddPos = Unit_Point_Count;
    	SlaveAddress.SmbusDeviceAddress = (TMP75_SLAVEADDRESS>>1);
        Status=SmbusProtocol->Execute(SmbusProtocol, SlaveAddress, Reg ,EfiSmbusReadByte,FALSE,&Length, &Tmpdata );
        Data->Value = (UINT16)Tmpdata;
//G160-002(8) - end

    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetSystemTemp3
//
// Description:
//  Get the first System temperature value in HWM space register and update to HII.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetSystemTemp3(
    IN OUT HWM_DATA * Data
)
{
    UINTN       T1, offset;
    UINTN       IntData=0,IntData1=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP3_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x00,0x77,&T1); // Bank0 Register 0x77.
    GetValueWithIO(0x04,0x56,&offset); // Bank4 Register 0x56

    IntData = (IntData << 1)| (IntData1 >>7 ) ;

    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:

    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData = (UINTN)(INTN)(INT16)(T1 + offset);
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)(INTN)T1;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateCpuAgent0
//
// Description: 
//  Get the third System temperature value in HWM space register and update
//  to Hii.
//
// Input:
//  HWM_DATA    *Data 
//
// Output:
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateCpuAgent0 (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_NCT6776_PECI_AGENT0_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = 0x00;

    //OEM_TODO:Get value with HWM IO interface
    IoWrite8(NCT6776_HWM_INDEX_PORT, 0x4E); 
    IoWrite8(NCT6776_HWM_DATA_PORT, 7);
    IoWrite8(NCT6776_HWM_INDEX_PORT, 0x1F); 
    T1 = IoRead8(NCT6776_HWM_DATA_PORT);
    if(!(T1 & BIT0)){ 
        Data->Value = 0;
        return;
    }
    else{
        GetValueWithIO(0x07,0x20,&T1); // Bank7 Register 0x20
        //Get the Sign Bit,Positive or Negative,AMI_TODO:
        IntData = (UINTN)(INTN)(INT16)(T1 & 0x7F);
    }

    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)(INTN)T1;
    
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetAndUpdateFan1Speed
//
// Description:
//  Get the First FAN Speed value in HWM space register and update it to HII.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateFan1Speed (
    IN OUT HWM_DATA * Data
  )
{
    UINTN   Speed1, Speed2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN1_SPEED_VALUE);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    //OEM_TODO:Get value with HWM IO interface
    //System fan
    GetValueWithIO(0x06,0x56,&Speed1);  //  bank6, Register 0x56
    GetValueWithIO(0x06,0x57,&Speed2);  //  bank6, Register 0x57

    Data->Value = (UINT16)((Speed1<<8)|Speed2);
    if(Data->Value == 0xA4) 
        Data->Value = 0;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetAndUpdateFan2Speed
//
// Description:
//  Get the second FAN Speed value in HWM space register and update it to HII.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateFan2Speed (
    IN OUT HWM_DATA * Data
  )
{
    UINTN   Speed1, Speed2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN2_SPEED_VALUE);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    GetValueWithIO(0x06,0x58,&Speed1);  //  bank6, Register 0x58
    GetValueWithIO(0x06,0x59,&Speed2);  //  bank6, Register 0x59

    Data->Value = (UINT16)((Speed1<<8)|Speed2);
    if(Data->Value == 0xA4) 
        Data->Value = 0;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetAndUpdateFan3Speed
//
// Description:
//  Get the third FAN Speed value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateFan3Speed (
    IN OUT HWM_DATA * Data
  )
{
    UINTN   Speed1, Speed2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN3_SPEED_VALUE);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    GetValueWithIO(0x06,0x5A,&Speed1);  //  bank6, Register 0x5A
    GetValueWithIO(0x06,0x5B,&Speed2);  //  bank6, Register 0x5B

    Data->Value = (UINT16)((Speed1<<8)|Speed2);
    if(Data->Value == 0xA4) 
        Data->Value = 0;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetAndUpdateFan4Speed
//
// Description:
//  Get the third FAN Speed value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateFan4Speed (
    IN OUT HWM_DATA * Data
  )
{
    UINTN   Speed1, Speed2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN4_SPEED_VALUE);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    GetValueWithIO(0x06,0x5C,&Speed1);  //  bank6, Register 0x5C
    GetValueWithIO(0x06,0x5D,&Speed2);  //  bank6, Register 0x5D

    Data->Value = (UINT16)((Speed1<<8)|Speed2);
    if(Data->Value == 0xA4) 
        Data->Value = 0;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:     GetAndUpdateFan5Speed
//
// Description:
//  Get the third FAN Speed value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateFan5Speed (
    IN OUT HWM_DATA * Data
  )
{
    UINTN   Speed1, Speed2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN5_SPEED_VALUE);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    GetValueWithIO(0x06,0x5E,&Speed1);  //  bank6, Register 0x5E
    GetValueWithIO(0x06,0x5F,&Speed2);  //  bank6, Register 0x5F

    Data->Value = (UINT16)((Speed1<<8)|Speed2);
    if(Data->Value == 0xA4) 
        Data->Value = 0;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVCOREVoltage
//
// Description:
//  Get the VCORE Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVCOREVoltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=1;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=0; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6776_HWM_VCORE_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x20,&VData) ;  // Register 0x20
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???
    //R_Small=???
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN0Voltage
//
// Description:
//  Get the VIN0 Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN0Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=150;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6776_HWM_VIN0_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //OEM_TODO:Get value with HWM IO interface
    GetValueWithIO(0x00,0x21,&VData) ; // Register 0x22
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=1;    //G160-002(8)       R_Big=10;
    R_Small=0; //G160-002(8)       R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN1Voltage
//
// Description: Get the VIN1 Voltage value in HWM space register.
//
//  HWM_DATA    *Data
//
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN1Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN1_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x24,&VData) ; // Register 0x24
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=20;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;

}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN2Voltage
//
// Description: Get the VIN2 Voltage value in HWM space register.
//
//  HWM_DATA    *Data
//
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN2Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN2_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x25,&VData) ; // Register 0x25
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=402;  //G160-002(8)       R_Big=150;
    R_Small=100; //G160-002(8)       R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN3Voltage
//
// Description:
//  Get the VIN0 Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN3Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN3_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;        //G160-002(8)        0x04;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x26,&VData) ; // Register 0x26

    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=11;   //G160-002(8)       R_Big=10;
    R_Small=1; //G160-002(8)       R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateAVCCVoltage
//
// Description:
//  Get the AVCC Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateAVCCVoltage (
    IN OUT HWM_DATA * Data
)
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=80;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=20; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6776_HWM_VACC_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x22,&VData) ; // Register 0x22
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVCC3Voltage
//
// Description:
//  Get the VSB3V Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVCC3Voltage (
    IN OUT HWM_DATA * Data
)
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=80;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=20; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VCC3V_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x00,0x23,&VData) ; //bank0 Register 0x23
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVSB3Voltage
//
// Description:
//  Get the VSB3V Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVSB3Voltage (
    IN OUT HWM_DATA * Data
)
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=80;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=20; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VSB3V_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x05,0x50,&VData) ; //bank5 Register 0x50
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);
    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;

    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVBATVoltage
//
// Description:
//  Get the VBAT Voltage value in HWM space register.
//
// Input:
//  HWM_DATA    *Data
//
// Output:
//  HWM_DATA    *Data
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVBATVoltage (
    IN OUT HWM_DATA * Data
)
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=20;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=20; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VBAT_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x05,0x51,&VData) ; //bank5 Register 0x51
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    //pass to setup data which is UINT64 data
    Data->Value = (UINT16)VData;
    return;
}

SIO_EXTERNAL_FUN *NCT6776ExternalFunList[] = {
    GetSystemTemp1,
    GetSystemTemp2,
    GetSystemTemp3,
    GetAndUpdateCpuAgent0,
    GetAndUpdateFan1Speed,
    GetAndUpdateFan2Speed,
    GetAndUpdateFan3Speed,
    GetAndUpdateFan4Speed,
    GetAndUpdateFan5Speed,
    GetAndUpdateVCOREVoltage,
    GetAndUpdateVIN0Voltage,
    GetAndUpdateVIN1Voltage,
    GetAndUpdateVIN2Voltage,
    GetAndUpdateVIN3Voltage,
    GetAndUpdateAVCCVoltage,
    GetAndUpdateVCC3Voltage,
    GetAndUpdateVSB3Voltage,
    GetAndUpdateVBATVoltage,
	NULL
};

VOID NCT6776_HWM_CallBack(EFI_HII_HANDLE HiiHandle, UINT16 Class, UINT16 SubClass, UINT16 Key)
{
    UINTN    index;
    HWM_DATA Data;
    CALLBACK_PARAMETERS *Callback = NULL;

//G160-002(8) - start
    EFI_STATUS  Status;

    if (SmbusProtocol == NULL){
        Status  = pBS->LocateProtocol (&gEfiSmbusHcProtocolGuid, NULL, &SmbusProtocol);
    }
    if (EFI_ERROR(Status)){
        TRACE((-1,"NCT6776_HWM_CallBack TMP75_CallBack: Locate SmbusHcProtocol Failed, Status = %r. \n",Status));
        return ;
    }
//G160-002(8) - end

    Callback = GetCallbackParameters();
    if(!Callback || Callback->Action != EFI_BROWSER_ACTION_CHANGING)
        return;

    for(index=0; NCT6776ExternalFunList[index]; index++)
    {
    	NCT6776ExternalFunList[index](&Data);
        HHMCommon(Data.Value, Data.Type, Data.Token, Data.OddPos, HiiHandle);
    }


    return;
}
//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2013, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************


