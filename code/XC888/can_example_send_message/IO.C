//****************************************************************************
// @Module        GPIO
// @Filename      IO.C
// @Project       can_example.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          21.11.2019 14:59:56
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (IO_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
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

// USER CODE BEGIN (IO_Init,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Init,2)

  // USER CODE END


  ///  ***********************************************************************
  ///  Note : All peripheral related IO configurations are done in the 
  ///  respective peripheral modules (alternate functions selection)
  ///  
  ///  If no pins are selected DAvE assumes that registers are in default 
  ///  settings
  ///  ***********************************************************************

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P0 is used


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1:
  ///  -----------------------------------------------------------------------
  ///  P1.3:
  ///  - is used as alternate output for the MCAN Node 1 Transmitter Output
  ///  - push/pull output is selected
  ///  - pull-up device is assigned
  ///  P1.4:
  ///  - is used as alternate input for the MCAN Node 1 Receiver Input
  ///  - pull-up device is assigned


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P2 is used


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P3:
  ///  -----------------------------------------------------------------------
  ///  P3.0:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - pull device is disabled (tristate) 
  ///  P3.1:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - pull device is disabled (tristate) 
  ///  P3.2:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - pull device is disabled (tristate) 
  ///  P3.3:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - pull device is disabled (tristate) 
  ///  P3.4:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - pull device is disabled (tristate) 
  ///  P3.5:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - pull device is disabled (tristate) 
  ///  P3.6:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - pull device is disabled (tristate) 
  ///  P3.7:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  - pull device is disabled (tristate) 


  P3_DIR        =  0xFF;         // load direction register
  P3_DATA       =  0x53;         // load data output register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P4:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P4 is used


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P5:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P5 is used



  // USER CODE BEGIN (IO_Init,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

