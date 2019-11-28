//****************************************************************************
// @Module        Analog / Digital Converter (ADC)
// @Filename      ADC.H
// @Project       adc_zu_can.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains all function prototypes and macros for 
//                the ADC module.
//
//----------------------------------------------------------------------------
// @Date          23.11.2019 22:28:12
//
//****************************************************************************

// USER CODE BEGIN (ADC_Header,1)

// USER CODE END



#ifndef _ADC_H_
#define _ADC_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (ADC_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ADC_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ADC_Header,4)

// USER CODE END

#define CHANNEL_7 7



//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ADC_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void ADC_vInit(void);
void ADC_vStartSeqReqChNum(ubyte ubExtTrg, ubyte ubEnIntr, ubyte ubRFill, ubyte ubChannelNum);
uword ADC_uwGetResultData0(void);

// USER CODE BEGIN (ADC_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (ADC_Header,9)

// USER CODE END

//   Shared interrupt vector definitions are defined in SHARED_INT.H

#endif  // ifndef _ADC_H_
