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
// Name:  <NCT6683DHwmSetup.c>
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

//-------------------------------------------------------------------------
// Constants, Macros and Type Definitions
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//Variable, Prototype, and External Declarations
//-------------------------------------------------------------------------
#if NCT6683D_HWM_PRESENT
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
    IoWrite8(NCT6683D_HWM_BASE_ADDRESS, 0xFF);

    // Enter Bank NO!
    IoWrite8(NCT6683D_HWM_BASE_ADDRESS, BankNo);

    //Read the data from register
    IoWrite8(NCT6683D_HWM_BASE_ADDRESS+0x01, Register); 
    *Value = IoRead8(NCT6683D_HWM_BASE_ADDRESS+0x02);

    IoWrite8(NCT6683D_HWM_BASE_ADDRESS, 0xFF);

    return;
}
//-------------------------------------------------------------------------
//Variable, Prototype, and External Declarations
//-------------------------------------------------------------------------
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdatePECI1
//
// Description: 
//  Get the PECI Agent 1 Temperature value to HII.
//
// Input:       
//  HWM_DATA    *Data 
//
// Output:      
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
#if INTEL_AMD_PLATFORM
void
GetAndUpdatePECI1( 
    IN OUT HWM_DATA * Data
)
{
    UINTN     T1;
    UINTN     IntData=0;
    UINTN     DecData=0 ;
    UINT8     Unit_Point_Count=2;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3
    UINT8     T_base1=0;
    UINT8     Temp=0;
    UINT8     Temp_High=0,Temp_Low=0;

    Data->Token = STRING_TOKEN(STR_NCT6683D_PECI_TEMP1_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;
    
    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x00,&IntData); // Bank0 Register 0x00.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    Data->Value = (UINT16)(INTN)T1;
    return;
}
#endif
//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdatePCHTemp
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
#if INTEL_AMD_PLATFORM
void
GetAndUpdatePCHTemp( 
    IN OUT HWM_DATA * Data
)
{
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_NCT6683D_PCH_TEMP1_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x02,&IntData); // Bank0 Register 0x02.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    Data->Value = (UINT16)(INTN)T1;
    return;
}
#endif
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
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP1_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x00,&IntData);         //G160-004(11)      GetValueWithIO(0x01,0x04,&IntData); // Bank0 Register 0x04.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    Data->Value = (UINT16)(INTN)T1;
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
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP2_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x06,&IntData); // Bank0 Register 0x06.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    Data->Value = (UINT16)(INTN)T1;
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
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP3_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x08,&IntData); // Bank0 Register 0x08.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

    Data->Value = (UINT16)(INTN)T1;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetSystemTemp4
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
GetSystemTemp4( 
    IN OUT HWM_DATA * Data
)
{
    UINTN       T1;
    UINTN       IntData=0;
    UINTN       DecData=0;
    UINT8       Unit_Point_Count=0;//AMI_TODO integer:0,0.5->1,0.25->2,0.125->3

    Data->Token = STRING_TOKEN(STR_HWM1_SYSTEM_TEMP4_VALUE);
    Data->Type = TEMPERATURE;
    Data->OddPos = Unit_Point_Count;

    //Get Integer Data,AMI_TODO:
    GetValueWithIO(0x01,0x0A,&IntData); // Bank0 Register 0x0A.
    if((IntData == 0x80) || (IntData == 0x7F)) {//No device on the sensor
        Data->Value = 0;
        return;
    }
    //Get Demical Data,AMI_TODO:
    
    //Get the Sign Bit,Positive or Negative,AMI_TODO:
    IntData=(UINTN)(INTN)(INT8)IntData;//8bit Data  
    //Change Data display
    T1= TEMP_DECIMAL_TO_INTEGER (IntData,//integer
                                 DecData,//decimal
                                 Unit_Point_Count);//point

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
    UINTN       Speed;
    UINTN       count1,count2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN1_SPEED_VALUE);    //G160-004(11)        STRING_TOKEN(STR_HWM1_FAN1_SPEED);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    //AMI_TODO:Get the count value
    GetValueWithIO(0x01,0x41,&count1); //  LSB Register 0x41 system fan count
    GetValueWithIO(0x01,0x40,&count2); //  MSB Register 0x40 system fan count

    Speed = (UINTN)((count2<<8)|count1);

    Data->Value = (UINT16)Speed;

    return;
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
    UINTN       Speed;
    UINTN       count1,count2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN2_SPEED_VALUE);      //G160-004(11)        STRING_TOKEN(STR_HWM1_FAN2_SPEED);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    //AMI_TODO:Get the count value
    GetValueWithIO(0x01,0x43,&count1); //  LSB Register 0x43 system fan count
    GetValueWithIO(0x01,0x42,&count2); //  MSB Register 0x42 system fan count

    Speed = (UINTN)((count2<<8)|count1);

    Data->Value = (UINT16)Speed;

    return;
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
    UINTN       Speed;
    UINTN       count1,count2;

    Data->Token = STRING_TOKEN(STR_HWM1_FAN3_SPEED_VALUE);      //G160-004(11)        STRING_TOKEN(STR_HWM1_FAN3_SPEED);
    Data->Type = FAN_SPEED;
    Data->OddPos = 0x00;

    //AMI_TODO:Get the count value
    GetValueWithIO(0x01,0x45,&count1); //  LSB Register 0x45 system fan count
    GetValueWithIO(0x01,0x44,&count2); //  MSB Register 0x44 system fan count

    Speed = (UINTN)((count2<<8)|count1);

    Data->Value = (UINT16)Speed;

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
    UINTN       Lsb_Unit=16;//AMI_TODO:LSB unit is 16mv   //G160-004(11) 8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=150;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6683D_HMM_VIN0_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //OEM_TODO:Get value with HWM IO interface
    GetValueWithIO(0x01,0x26,&VData) ; // Register 0x26
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=10;
    R_Small=0;  //G160-004(11)      R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

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
    UINTN       Lsb_Unit=16;//AMI_TODO:LSB unit is 16mv   //G160-004(11) 8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN1_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x28,&VData) ; // Register 0x28
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=10;   //G160-004(11)      R_Big=20;
    R_Small=0;  //G160-004(11)      R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

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
    UINTN       Lsb_Unit=16;//AMI_TODO:LSB unit is 16mv   //G160-004(11) 8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN2_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x2A,&VData) ; // Register 0x2A
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=226;  //G160-004(11)      R_Big=150;
    R_Small=100; //G160-004(11)      R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN3Voltage
//
// Description: Get the VIN3 Voltage value in HWM space register.
//
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
    UINTN       Lsb_Unit=16;//AMI_TODO:LSB unit is 16mv   //G160-004(11) 8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN3_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x2C,&VData) ; // Register 0x2C
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=402;  //G160-004(11)      R_Big=150;
    R_Small=100; //G160-004(11)      R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN4Voltage
//
// Description: Get the VIN4 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN4Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=16;//AMI_TODO:LSB unit is 16mv   //G160-004(11) 8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN4_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x2E,&VData) ; // Register 0x2E
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=110;  //G160-004(11)      R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN5Voltage
//
// Description: Get the VIN5 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN5Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN5_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x30,&VData) ; // Register 0x30
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN6Voltage
//
// Description: Get the VIN6 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN6Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN6_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x32,&VData) ; // Register 0x32
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN8Voltage
//
// Description: Get the VIN8 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN8Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN8_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x34,&VData) ; // Register 0x34
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN9Voltage
//
// Description: Get the VIN9 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN9Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN9_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x36,&VData) ; // Register 0x36
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN10Voltage
//
// Description: Get the VIN10 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN10Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_HWM1_VIN10_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x38,&VData) ; // Register 0x38
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN11Voltage
//
// Description: Get the VIN11 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN11Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6683D_HMM_VIN11_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x3A,&VData) ; // Register 0x3A
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN12Voltage
//
// Description: Get the VIN12 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN12Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6683D_HMM_VIN12_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x3C,&VData) ; // Register 0x3C
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------
// Procedure:   GetAndUpdateVIN13Voltage
//
// Description: Get the VIN13 Voltage value in HWM space register.
//
//  HWM_DATA    *Data 
//
//  HWM_DATA    *Data 
//
//-------------------------------------------------------------------------
//<AMI_PHDR_END>
void
GetAndUpdateVIN13Voltage (
    IN OUT HWM_DATA * Data
  )
{
    UINTN       VData;
    UINTN       Lsb_Unit=8;//AMI_TODO:LSB unit is 8mv
    UINTN       R_Big=10;   //AMI_TODO:Connect bigger divisor resistor
    UINTN       R_Small=10; //AMI_TODO:Connect smaller divisor resistor

    Data->Token = STRING_TOKEN(STR_NCT6683D_HMM_VIN13_VALUE);
    Data->Type = VOLTAGE;
    Data->OddPos = 0x03;

    //AMI_TODO:Get value of Hwm Space raw data
    GetValueWithIO(0x01,0x3E,&VData) ; // Register 0x3E
    //OEM_TODO:change R_Big & R_Small Value according to your board
    R_Big=150;
    R_Small=10;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

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
    GetValueWithIO(0x01,0x20,&VData) ; //bank0 Register 0x20
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

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
    GetValueWithIO(0x01,0x22,&VData) ; //bank1 Register 0x22
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

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
    GetValueWithIO(0x01,0x24,&VData) ; //bank1 Register 0x24
    //OEM_TODO:change R_Big & R_Small Value according to your board
    //R_Big=???;
    //R_Small=???;
    //calculate voltage value
    VData = VOL_DIVISOR_CALCULATE (VData,
                                   Lsb_Unit,
                                   R_Big,
                                   R_Small);

    Data->Value = (UINT16)VData;
    return;
}

SIO_EXTERNAL_FUN *NCT6683DExternalFunList[] = {
    GetSystemTemp1, GetSystemTemp2, GetSystemTemp3, GetSystemTemp4,
#if INTEL_AMD_PLATFORM
    GetAndUpdatePECI1, GetAndUpdatePCHTemp, 
#endif
    GetAndUpdateFan1Speed, GetAndUpdateFan2Speed, GetAndUpdateFan3Speed,
    GetAndUpdateVIN0Voltage, GetAndUpdateVIN1Voltage, GetAndUpdateVIN2Voltage, GetAndUpdateVIN3Voltage,
    GetAndUpdateVIN4Voltage, GetAndUpdateVIN5Voltage, GetAndUpdateVIN6Voltage, GetAndUpdateVIN8Voltage,
    GetAndUpdateVIN9Voltage, GetAndUpdateVIN10Voltage, GetAndUpdateVIN11Voltage, GetAndUpdateVIN12Voltage,
    GetAndUpdateVIN13Voltage, GetAndUpdateVCC3Voltage, GetAndUpdateVSB3Voltage, GetAndUpdateVBATVoltage,
    NULL
};

VOID NCT6683D_HWM_CallBack(EFI_HII_HANDLE HiiHandle, UINT16 Class, UINT16 SubClass, UINT16 Key)
{
    UINTN    index;
    HWM_DATA Data;
    CALLBACK_PARAMETERS *Callback = NULL;

    Callback = GetCallbackParameters();
    if(!Callback || Callback->Action != EFI_BROWSER_ACTION_CHANGING)
        return;

    for(index=0; NCT6683DExternalFunList[index]; index++)
    {
        NCT6683DExternalFunList[index](&Data);
        HHMCommon(Data.Value, Data.Type, Data.Token, Data.OddPos, HiiHandle);
    }


    return;
}

#endif

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
