// THIS FILE IS INCLUDED to South Bridge device scope
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
//<AMI_FHDR_START>
//
// Name:  <NCT6683DEVT.asl>
//
// Description: Define SIO Device for ACPI OS.
//
//<AMI_FHDR_END>
//*************************************************************************
//Scope(\_SB.PCI0.SBRG) {
//-----------------------------------------------------------------------
// SET OF COMMON DATA/CONTROL METHODS USED FOR ALL LDN BASED SIO DEVICES
//-----------------------------------------------------------------------
// SIO specific: SIOS - SIO Chipset specific code called from _PTS
// SIO specific: SIOW - SIO Chipset specific code called from _WAK
// SIO specific: SIOH - SIO event handler, to be called from correspondent _Lxx method
// SIO specific: PowerResources & _PR0 object to control Power management for FDC, LPT, UART1,2.


//-------------------------------------------------------------------------
// SIO_PME WAKE UP EVENTS //
//-------------------------------------------------------------------------
// Following code is the workaround for wake up on RI/Key/Mouse events
// are generated by some SuperIO. The wake up signal (SIO_PME) is
// connected to one of GPIOs of south bridge chip.
// Make sure the correspondent GPIO in south bridge is enabled to generate an SCI
//-------------------------------------------------------------------------
// Add Flag for Fix WakeUp Switch bug. 
Name(PMFG, 0x00)    //PME wake ststus

//-------------------------------------------------------------------------
// SIOS - SIO Chipset specific code called from _PTS
//-------------------------------------------------------------------------
// input  - Arg0 : Sleep state #
// output - nothing
//-------------------------------------------------------------------------
Method(SIOS, 1){
    // Aware wake up events in SIO chip
    Store("SIOS", Debug)

    //AMI_TODO: 
    // 1. select sleep state
    If(LNotEqual(0x05, Arg0)){
        ^ENFG(0x0A)                        //Set Logical Device 0A (PME)

        // 2. clear PME Status
        Store(0xFF, ^OPT9)   
        Store(0xFF, ^OPTA) 

        // 3. enable wake-up ; Enable Keyboard, PS/2 Mouse,    UART 1&2 to Generate PME.
        if(\KBFG){
            Or(^OPTB, 0x02, ^OPTB)    //enable Keyboard Wake-up bit
            Or(^RGE4, 0x40, ^RGE4)
        }        
        Else{
            And(^OPTB, 0xFD, ^OPTB)   //disable Keyboard Wake-up bit
            And(^RGE4, 0xBF, ^RGE4)
        }
        if(\MSFG){
            Or(^OPTB, 0x01, ^OPTB)    //enable Mouse Wake-up bit
            Or(^RGE4, 0x80, ^RGE4)
        }        
        Else{
            And(^OPTB, 0xFE, ^OPTB)   //disable Mouse Wake-up bit
            And(^RGE4, 0x7F, ^RGE4)
        }

        // 4. Enable PME /wakeup
        Or(^RGE3, 0x01, ^RGE3)

        ^EXFG()
    }
}

//-----------------------------------------------------------------------
// SIOW - SIO Chipset specific code called from _WAK
//-----------------------------------------------------------------------
// input  - Sleep State #
// output - nothing
//-----------------------------------------------------------------------
Method(SIOW, 1){
    Store("SIOW", Debug)

    //AMI_TODO: 
    ^ENFG(0x0A)                    //Set Logical Device 04 (PME)

    // 1. Clear Status
    Store(^OPT9, PMFG)             // PMFG=PME  Wake Status
    And(^OPT9, 0xFF, ^OPT9)   //Clear KBC Wake Event

    // 2. Disable PME
    And(^RGE3, 0xFE, ^RGE3)
    And(^OPTB, 0x00, ^OPTB)    
    And(^OPTC, 0x00, ^OPTC)  

    ^EXFG()
}

//-----------------------------------------------------------------------
// SIOH - SIO event handler, to be called from correspondent _Lxx method
// in order to serve the SIO chipset side of wake up event
//-----------------------------------------------------------------------
// input  - nothing
// output - nothing
//-----------------------------------------------------------------------
Method(SIOH, 0){
    If(And(PMFG, 0x08)){
        #if NCT6683D_KEYBOARD_PRESENT
        Notify(PS2K, 0x2)    //KBD Wake up
        #endif
    }
    If(And(PMFG, 0x10)){
        #if NCT6683D_MOUSE_PRESENT
        Notify(PS2M, 0x2)    //MOUSE Wake up
        #endif
    }
}    //End Of SIOH

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
