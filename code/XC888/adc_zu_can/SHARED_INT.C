//****************************************************************************
// @Module        Shared Interrupt Routines
// @Filename      SHARED_INT.C
// @Project       adc_zu_can.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description   This file contains the Shared interrupt routines.
//
//----------------------------------------------------------------------------
// @Date          23.11.2019 22:28:11
//
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "SHARED_INT.H"

// USER CODE BEGIN (SHARED_INT_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************


// USER CODE BEGIN (SHARED_INT_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,9)

// USER CODE END


//****************************************************************************
// @Function      void SHINT_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This function initializes the shared interrupts. 
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

// USER CODE BEGIN (SHINT_Init,1)

// USER CODE END

void SHINT_vInit(void)
{
  // USER CODE BEGIN (SHINT_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Shared  Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - Timer 2 Interrupt is Selected
  ///  - MultiCAN Node 0 Interrupt is Selected


  IEN0         |=  0x20;         // load interrupt enable register 0

  ///  - ADC Interrupt is Selected


  IEN1         |=  0x01;         // load interrupt enable register 1


  // USER CODE BEGIN (SHINT_Init,3)

  // USER CODE END


} //  End of function SHINT_vInit


//****************************************************************************
// @Function      void SHINT_viXINTR5Isr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node 
//                XINTR5. XINTR5 ISR Node is shared by Timer 2, UART 
//                Fractional Divider(BRG Interrupt),MultiCAN Node 0 and LIN. 
//                Depending on the selected module interrupt it is called.
//                T2 - Depending on the selected operating mode it is called 
//                when TF2 is set by an overflow or underflow of the timer 2 
//                register or when EXF2 is set by a negative transition on 
//                T2EX.
//                UART - It is called after the BRG timer overflows and sets 
//                the NDOV bit.
//                CAN -  It is called for the  Service Request Node 0 of the 
//                MultiCAN module.
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   none
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

//   You have two choices for interrupt type select in Project Settings Page 
//   under Global Settings Section.
//   If you select CHOICE 1 then ISR will be generated with push and pop.
//   If you select CHOICE 2 then ISR will be generated without push and pop.
//   Default choice is CHOICE 2.
//   Current selection is CHOICE 2 

// USER CODE BEGIN (SHINT_XINTR5Isr,1)

// USER CODE END

void SHINT_viXINTR5Isr(void) interrupt XINTR5INT
{
ubyte ubNSRL;
ubyte ubResetLEC = 0x3F;

  // USER CODE BEGIN (SHINT_XINTR5Isr,2)

  // USER CODE END

  CAN_pushAMRegs();              // push the CAN Access Mediator Registers

  SFR_PAGE(_su0, SST0);          // switch to page 0

  //   Timer 2 interrupt handling section...

  if (TF2)
  {
    //   a timer 2 overflow has occured

    TF2 = 0;

    // USER CODE BEGIN (SHINT_XINTR5Isr,3)
    ADC_vStartSeqReqChNum(0,0,0,7);
    // USER CODE END

  }

  //   MultiCAN Node 0 (SRN0) interrupt handling section...


  //   Check Interrupt Request Register 2 Interrupt Flag 0
  if (((IRCON2 & 0x01) != 0))
  {

    IRCON2 &= ~(ubyte)0x01; //   clear CANSRC0

    //   ---------------------------------------------------------------------
    //   Interrupts of CAN node 1
    //   ---------------------------------------------------------------------

    CAN_vWriteCANAddress(CAN_NSR1);
    CAN_vReadEN();
    ubNSRL = CAN_DATA0;

    // USER CODE BEGIN (SRN0_NODE1,1)

    // USER CODE END

    //   ---------------------------------------------------------------------
    //   CAN node 1 Transfer Interrupt
    //   ---------------------------------------------------------------------

    if (ubNSRL & 0x18)  // if TXOK or RXOK
    {
          ///  Note: The the successful transmission/reception of a frame, 
          ///  can cause TXOK or RXOK Interrupt. User need to handle these in 
          ///  user defined section.

          // Indicates that a message has been transmitted/received successfully.
          // TXOK = ubNSRL & 0x08
          // RXOK = ubNSRL & 0x10

      // USER CODE BEGIN (SRN0_NODE_1,5)

      // USER CODE END
    }

    // USER CODE BEGIN (SRN0_NODE1,8)

    // USER CODE END

    //// Reset LEC, TXOK, RXOK, ALERT, EWRN, BOFF, LLE, LOE (if set)

    CAN_vWriteCANAddress(CAN_NSR1); // Addressing CAN_NSR1
    CAN_DATA0   =  ~(ubNSRL & ubResetLEC);       // load CAN_NSR1 status register[7-0]
    CAN_vWriteEN(D0_VALID);  // Data0 Valid for
                                 // transmission and Write is Enabled.

    // USER CODE BEGIN (SHINT_XINTR5Isr,6)

    // USER CODE END

  }


  // USER CODE BEGIN (SHINT_XINTR5Isr,7)

  // USER CODE END

  SFR_PAGE(_su0, RST0);          // restore the old SCU page

  CAN_popAMRegs();               // restore the CAN Access Mediator Registers
} //  End of function SHINT_viXINTR5Isr


//****************************************************************************
// @Function      void SHINT_viXINTR6Isr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node 
//                XINTR6. XINTR6 ISR Node is shared by ADC[1:0] and MultiCAN 
//                Nodes 1 & 2. Depending on the selected module interrupt it 
//                is called. 
//                ADC -  It is activated by different interrupt sources 
//                (Channel Interrupts or Event Interrupts).The user obtains 
//                the conversion result by calling the function 
//                ADC_uwGetResultDataX(0,1,2,3).
//                CAN - It is called for the  Service Request Node 1 and 2 of 
//                the MultiCAN module.
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   none
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

//   You have two choices for interrupt type select in Project Settings Page 
//   under Global Settings Section.
//   If you select CHOICE 1 then ISR will be generated with push and pop.
//   If you select CHOICE 2 then ISR will be generated without push and pop.
//   Default choice is CHOICE 2.
//   Current selection is CHOICE 2 

// USER CODE BEGIN (SHINT_XINTR6Isr,1)
static ulong wertadc = 0;
// USER CODE END

void SHINT_viXINTR6Isr(void) interrupt XINTR6INT
{

  // USER CODE BEGIN (SHINT_XINTR6Isr,2)
	P3_DATA=ADC_uwGetResultData0();
	wertadc = ADC_uwGetResultData0();
    CAN_vLoadData(0,&wertadc);
    CAN_vTransmit(0);
	TI = 1;
  // USER CODE END

  SFR_PAGE(_su0, SST0);          // switch to page 0

  //   ADC interrupt handling section...

  //   ***********************************************************

  //    Note: Below comments  could  be helpful to the user in the ADC 
  //   interrupt handling

  //    The ADC module provides two service request outputs SR[1:0] that can 
  //   be activated by different interrupt sources.
  //   They are 1.EVENT interrupts 2.CHANNEL interrupts.

  //   1.EVENT INTERRUPTS:Activated by events of the request sources or 
  //   result registers.These interrupts can be handled by using functions 
  //   ADC_ubGetEventInterruptFlag(), ADC_vClearEventInterruptFlag(ubyte 
  //   ubChannelNum).

  //   2.CHANNEL INTERRUPTS:Activated by the completion of any input channel 
  //   conversion.They are enabled according to the control bits of limit 
  //   checking.The settings are defined individually for each  input channel.
  //   These interrupts can be handled by using functions 
  //   ADC_ubGetChInterruptFlag(), ADC_vClearChInterruptFlag(ubyte 
  //   ubChannelNum).

  //   Select the appropriate functions from the function page of the ADC 
  //   module.User need to handle these in the user defined section.

  //   ***********************************************************
  //   Check Interrupt Request Register 1 Interrupt Flag 0 for ADC
  if (((IRCON1 & 0x08) != 0))
  {

    IRCON1 &= ~(ubyte)0x08; //   clear ADCSR0

    // USER CODE BEGIN (SHINT_XINTR6Isr,3)

    // USER CODE END

  }


  //   Check Interrupt Request Register 1 Interrupt Flag 1 for ADC
  if (((IRCON1 & 0x10) != 0))
  {

    IRCON1 &= ~(ubyte)0x10; //   clear ADCSR1

    // USER CODE BEGIN (SHINT_XINTR6Isr,4)

    // USER CODE END

  }


  // USER CODE BEGIN (SHINT_XINTR6Isr,7)

  // USER CODE END

  SFR_PAGE(_su0, RST0);          // restore the old SCU page
} //  End of function SHINT_viXINTR6Isr


// USER CODE BEGIN (SHARED_INT_General,10)

// USER CODE END


