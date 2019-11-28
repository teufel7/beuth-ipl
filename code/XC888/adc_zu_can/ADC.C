//****************************************************************************
// @Module        Analog / Digital Converter (ADC)
// @Filename      ADC.C
// @Project       adc_zu_can.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains functions that use the ADC module.
//
//----------------------------------------------------------------------------
// @Date          23.11.2019 22:28:12
//
//****************************************************************************

// USER CODE BEGIN (ADC_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (ADC_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ADC_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ADC_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ADC_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (ADC_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (ADC_General,9)

// USER CODE END


//****************************************************************************
// @Function      void ADC_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the ADC function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                
//                Following SFR fields will be initialized:
//                GLOBCTR  - Global Control
//                PRAR     - Priority and Arbitration Register
//                ETRCR    - External Trigger Control Register
//                CHCTRx   - Channel Control Register x
//                RCRx     - Result Control Register x
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

// USER CODE BEGIN (ADC_Init,1)

// USER CODE END

void ADC_vInit(void)
{
  // USER CODE BEGIN (ADC_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of Global Control:
  ///  -----------------------------------------------------------------------
  ///  - the ADC module clock is enabled
  ///  - the ADC module clock = 24,00 MHz
  ///   
  ///  - the result is 8 bits wide
  ///  --- Conversion Timing -----------------
  ///  - conversion time (CTC)    = 14,71 us

  ///  - Configure global control functions 

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ADC_GLOBCTR   =  0x70;         // load global control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Priority and Arbitration:
  ///  -----------------------------------------------------------------------
  ///  - the priority of request source 0 is low
  ///  - the wait-for-start mode is selected for source 0
  ///  - the priority of request source 1 is low
  ///  - the wait-for-start mode is selected for source 1
  ///  - the permanent arbitration mode is selected
  ///  - Arbitration Slot 0 is enabled
  ///  - Arbitration Slot 1 is disabled

  ADC_PRAR      =  0x40;         // load Priority and Arbitration register

  SFR_PAGE(_ad1, noSST);         // switch to page 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Control Registers:
  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel 7
  ///  - the result register0 is selected
  ///  - the limit check 4 is selected

  ADC_CHCTR7    =  0x40;         // load channel control register

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Sample Time Control:
  ///  -----------------------------------------------------------------------

  ADC_INPCR0    =  0x00;         // load input class register

  SFR_PAGE(_ad4, noSST);         // switch to page 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Result Control Registers:
  ///  -----------------------------------------------------------------------
  ///  Configuration of Result Control Register 0
  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF unchaned by read access to RESRxH/RESRAxH

  ADC_RCR0      =  0x00;         // load result control register 0

  ///  Configuration of Result Control Register 1
  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF unchaned by read access to RESRxH/RESRAxH

  ADC_RCR1      =  0x00;         // load result control register 1

  ///  Configuration of Result Control Register 2
  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF unchaned by read access to RESRxH/RESRAxH

  ADC_RCR2      =  0x00;         // load result control register 2

  ///  Configuration of Result Control Register 3
  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF unchaned by read access to RESRxH/RESRAxH

  ADC_RCR3      =  0x00;         // load result control register 3

  SFR_PAGE(_ad5, noSST);         // switch to page 5

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Interrupt Node Pointer Register:
  ///  -----------------------------------------------------------------------
  ///  - the SR 0 line become activated if channel 0 interrupt is generated
  ///  - the SR 0 line become activated if channel 1 interrupt is generated
  ///  - the SR 0 line become activated if channel 2 interrupt is generated
  ///  - the SR 0 line become activated if channel 3 interrupt is generated
  ///  - the SR 0 line become activated if channel 4 interrupt is generated
  ///  - the SR 0 line become activated if channel 5 interrupt is generated
  ///  - the SR 0 line become activated if channel 6 interrupt is generated
  ///  - the SR 0 line become activated if channel 7 interrupt is generated

  ADC_CHINPR    =  0x00;         // load channel interrupt node pointer 
                                 // register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Event Interrupt Node Pointer Registers:
  ///  -----------------------------------------------------------------------
  ///  - the SR 0 line become activated if the event 0 interrupt is generated
  ///  - the SR 0 line become activated if the event 1 interrupt is generated
  ///  - the SR 0 line become activated if the event 4 interrupt is generated
  ///  - the SR 0 line become activated if the event 5 interrupt is generated
  ///  - the SR 0 line become activated if the event 6 interrupt is generated
  ///  - the SR 0 line become activated if the event 7 interrupt is generated

  ADC_EVINPR    =  0x00;         // load event interrupt set flag register 

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Limit Check Boundary:
  ///  -----------------------------------------------------------------------

  ADC_LCBR      =  0xB7;         // load limit check boundary register

  ///  -----------------------------------------------------------------------
  ///  Configuration of External Trigger Control:
  ///  -----------------------------------------------------------------------
  ///  - the trigger input ETR00 is selected for Source 0
  ///  - the trigger input ETR10 is selected for Source 1
  ///  - the synchronizing stage is not in external trigger input REQTR0 path
  ///  - the synchronizing stage is not in external trigger input REQTR1 path

  ADC_ETRCR     =  0x00;         // load external trigger control register

  SFR_PAGE(_ad6, noSST);         // switch to page 6

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Queue Mode Register:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 1
  ///  - the external trigger is disabled

  ADC_QMR0      =  0x01;         // load queue mode register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Request Mode Registers:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 0
  ///  - the external trigger is disabled
  ///  - the source interrupt is disabled
  ///  - the autoscan functionality is disabled

  ADC_CRMR1     =  0x00;         // load conversion request mode register 1

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ADC_GLOBCTR  |=  0x80;         // turn on Analog part

  ///  - ADC -Interrupt enable bit is set in SHINT_vInit() function

  // USER CODE BEGIN (ADC_Init,3)

  // USER CODE END

} //  End of function ADC_vInit


//****************************************************************************
// @Function      void ADC_vStartSeqReqChNum(ubyte ubExtTrg, ubyte ubEnIntr, 
//                ubyte ubRFill, ubyte ubChannelNum) 
//
//----------------------------------------------------------------------------
// @Description   This function request software controlled conversion for 
//                new channel.
//                
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubExtTrg: 
//                External Trigger : defines external trigger
// @Parameters    ubEnIntr: 
//                Enable Source Interrupt : defines source interrupt
// @Parameters    ubRFill: 
//                Refill : defines the refill
// @Parameters    ubChannelNum: 
//                Name of the Request Channel Number (0 - 7)
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

void ADC_vStartSeqReqChNum(ubyte ubExtTrg, ubyte ubEnIntr, ubyte ubRFill, ubyte ubChannelNum)
{

  ubyte ubVal = 0;
  if (ubExtTrg == 1){ ubVal = 0x80;}
  if (ubEnIntr == 1){ ubVal = ubVal + 0x40;}
  if (ubRFill == 1){ ubVal = ubVal + 0x20;}
  ubVal = ubVal + (ubChannelNum & 0x07);

  SFR_PAGE(_ad6, SST1);          // switch to page 6

  ADC_QINR0 = ubVal; // requested channel 

  SFR_PAGE(_ad0, RST1);          // restore the old ADC page

} //  End of function ADC_vStartSeqReqChNum


//****************************************************************************
// @Function      uword ADC_uwGetResultData0(void) 
//
//----------------------------------------------------------------------------
// @Description   This function reads the 8- or 10-bit conversion results 
//                from result register 0
//
//----------------------------------------------------------------------------
// @Returnvalue   Conversion Result
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

uword ADC_uwGetResultData0(void)
{
  uword uwResult = 0;

  SFR_PAGE(_ad2, SST1);          // switch to page 2

    if ( ADC_RESR0L & 0x10 )       //  if Result Register0 contains valid data
    {
    // 8-bit conversion (without accumulation)
    uwResult = ADC_RESR0H;  // Result Register0 High
    }

  SFR_PAGE(_ad0, RST1);          // restore the old ADC page

  return(uwResult);
} //  End of function ADC_uwGetResultData0




// USER CODE BEGIN (ADC_General,10)

// USER CODE END

