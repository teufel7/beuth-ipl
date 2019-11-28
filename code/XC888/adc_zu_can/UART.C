//****************************************************************************
// @Module        UART (Serial Interface)
// @Filename      UART.C
// @Project       adc_zu_can.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains functions that use the UART module.
//
//----------------------------------------------------------------------------
// @Date          23.11.2019 22:28:12
//
//****************************************************************************

// USER CODE BEGIN (UART_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (UART_General,2)
#include <stdio.h>
#include <string.h>
// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (UART_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (UART_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (UART_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (UART_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (UART_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (UART_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (UART_General,9)

// USER CODE END


//****************************************************************************
// @Function      void UART_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the UART function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                
//                The following SFR fields will be initialized:
//                - register SCON
//                - bits SMOD and ES
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

// USER CODE BEGIN (UART_Init,1)

// USER CODE END

void UART_vInit(void)
{
  // USER CODE BEGIN (UART_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  UART settings
  ///  -----------------------------------------------------------------------
  ///  Pin TXD_0 (P1.1) is selected for transmission
  ///  No pins are selected for reception
  ///  Receiver disabled
  ///  Mode 1: 8-bit data, 1 start bit, 1 stop bit, variable baud rate
  ///  BRG is selected for baudrate generation

  SFR_PAGE(_pp2, noSST);         // switch to page 2 without saving
  P1_ALTSEL0   &= ~(ubyte)0x02;  // configure alternate function register 0
  P1_ALTSEL1   |=  (ubyte)0x02;  // configure alternate function register 1
  SFR_PAGE(_pp0, noSST);         // switch to page 0 without saving
  P1_DIR       |=  (ubyte)0x02;  // set output direction

  BCON          =  0x00;         // reset baudrate timer/reload register
  SCON          =  0x40;         // load serial channel control register

  ///  -----------------------------------------------------------------------
  ///  Baudrate generator settings
  ///  -----------------------------------------------------------------------
  ///  input clock = fPCLK
  ///  Fractional divider is disabled
  ///  baudrate = 9,6154 kbaud

  BG            =  0x9B;         // load baudrate timer/reload register
  BCON         |=  0x01;         // load baud rate control register


  // USER CODE BEGIN (UART_Init,3)

  // USER CODE END

  ///  UART interrupt enabled
  ES = 1;

} //  End of function UART_vInit


//****************************************************************************
// @Function      void UART_viIsr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the UART interrupt. It is 
//                called after each transmission (flag TI set) or reception 
//                (flag RI set) of a data unit.
//                Please note that you have to add application specific code 
//                to this function.
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

//   You have two choices for interrupt type select in Project Settings Page 
//   under Global Settings Section.
//   If you select CHOICE 1 then ISR will be generated with push and pop.
//   If you select CHOICE 2 then ISR will be generated without push and pop.
//   Default choice is CHOICE 2.
//   Current selection is CHOICE 2 

// USER CODE BEGIN (UART_Isr,1)
static unsigned char txcount=0;
static int a = 0;
static unsigned char buf[6];
// USER CODE END

void UART_viIsr(void) interrupt UARTINT
{

    // USER CODE BEGIN (UART_Isr,2)

    // USER CODE END
  SFR_PAGE(_su0, SST1);          // switch to page 0
  if (TI)
  {
    // USER CODE BEGIN (UART_Isr,3)
      TI = 0;
      a = ADC_uwGetResultData0();
      sprintf(buf,"%d\r\n", a);
      if(buf[txcount]){
   	   UART_vSendData8(buf[txcount++]);
      }
      else txcount=0;
    // USER CODE END
  }
  if (RI)
  {
    // USER CODE BEGIN (UART_Isr,4)

    // USER CODE END
  }

    // USER CODE BEGIN (UART_Isr,5)

    // USER CODE END
  SFR_PAGE(_su0, RST1);          // restore the old page
} //  End of function UART_viIsr


//****************************************************************************
// @Function      void UART_vSendData8(ubyte ubData) 
//
//----------------------------------------------------------------------------
// @Description   This function transmits an 8-bit data unit. At first 
//                interrupt flag TI is cleared, then buffer SBUF is written.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubData: 
//                data to be transmitted
//
//----------------------------------------------------------------------------
// @Date          23.11.2019
//
//****************************************************************************

void UART_vSendData8(ubyte ubData)
{
  //   Clear the transmitter interrupt flag
  TI = 0;

  //   Write the transmit data byte, this initiates the transmission.
  SBUF = ubData;
} //  End of function UART_vSendData8


// USER CODE BEGIN (UART_General,10)

// USER CODE END

