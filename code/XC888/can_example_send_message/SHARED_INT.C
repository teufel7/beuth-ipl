//****************************************************************************
// @Module        Shared Interrupt Routines
// @Filename      SHARED_INT.C
// @Project       can_example.dav
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
// @Date          21.11.2019 14:59:56
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
// @Date          21.11.2019
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



  IEN1         |=  0x00;         // load interrupt enable register 1


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
// @Date          21.11.2019
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
    IO_vTogglePin(P3_7);
    CAN_vTransmit(0);
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
    	IO_vTogglePin(P3_6);
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


// USER CODE BEGIN (SHARED_INT_General,10)

// USER CODE END


