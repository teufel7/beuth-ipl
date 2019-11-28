//****************************************************************************
// @Module        GPIO
// @Filename      IO.H
// @Project       adc_zu_can.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains all function prototypes and macros for 
//                the IO module.
//
//----------------------------------------------------------------------------
// @Date          23.11.2019 22:28:11
//
//****************************************************************************

// USER CODE BEGIN (IO_Header,1)

// USER CODE END



#ifndef _IO_H_
#define _IO_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (IO_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_Header,4)

// USER CODE END

//   Port 0

sbit at  0x80  P0_0        ; 
sbit at  0x81  P0_1        ; 
sbit at  0x82  P0_2        ; 
sbit at  0x83  P0_3        ; 
sbit at  0x84  P0_4        ; 
sbit at  0x85  P0_5        ; 
sbit at  0x86  P0_6        ; 
sbit at  0x87  P0_7        ; 

//   Port 1

sbit at  0x90  P1_0        ; 
sbit at  0x91  P1_1        ; 
sbit at  0x92  P1_2        ; 
sbit at  0x93  P1_3        ; 
sbit at  0x94  P1_4        ; 
sbit at  0x95  P1_5        ; 
sbit at  0x96  P1_6        ; 
sbit at  0x97  P1_7        ; 

//   Port 2

sbit at  0xA0  P2_0        ; 
sbit at  0xA1  P2_1        ; 
sbit at  0xA2  P2_2        ; 
sbit at  0xA3  P2_3        ; 
sbit at  0xA4  P2_4        ; 
sbit at  0xA5  P2_5        ; 
sbit at  0xA6  P2_6        ; 
sbit at  0xA7  P2_7        ; 

//   Port 3

sbit at  0xB0  P3_0        ; 
sbit at  0xB1  P3_1        ; 
sbit at  0xB2  P3_2        ; 
sbit at  0xB3  P3_3        ; 
sbit at  0xB4  P3_4        ; 
sbit at  0xB5  P3_5        ; 
sbit at  0xB6  P3_6        ; 
sbit at  0xB7  P3_7        ; 

//   Port 4

sbit at  0xC8  P4_0        ; 
sbit at  0xC9  P4_1        ; 
sbit at  0xCA  P4_2        ; 
sbit at  0xCB  P4_3        ; 
sbit at  0xCC  P4_4        ; 
sbit at  0xCD  P4_5        ; 
sbit at  0xCE  P4_6        ; 
sbit at  0xCF  P4_7        ; 

//   Port 5

//   This port is not bit-addressable.


//----------------------------------------------------------------------------
// Defines for the parameter PinName
//----------------------------------------------------------------------------

#define READ_P0_0  P0_0
#define READ_P0_1  P0_1
#define READ_P0_2  P0_2
#define READ_P0_3  P0_3
#define READ_P0_4  P0_4
#define READ_P0_5  P0_5
#define READ_P0_6  P0_6
#define READ_P0_7  P0_7


#define READ_P1_0  P1_0
#define READ_P1_1  P1_1
#define READ_P1_2  P1_2
#define READ_P1_3  P1_3
#define READ_P1_4  P1_4
#define READ_P1_5  P1_5
#define READ_P1_6  P1_6
#define READ_P1_7  P1_7


#define READ_P2_0  P2_0
#define READ_P2_1  P2_1
#define READ_P2_2  P2_2
#define READ_P2_3  P2_3
#define READ_P2_4  P2_4
#define READ_P2_5  P2_5
#define READ_P2_6  P2_6
#define READ_P2_7  P2_7


#define READ_P3_0  P3_0
#define READ_P3_1  P3_1
#define READ_P3_2  P3_2
#define READ_P3_3  P3_3
#define READ_P3_4  P3_4
#define READ_P3_5  P3_5
#define READ_P3_6  P3_6
#define READ_P3_7  P3_7


#define READ_P4_0  P4_0
#define READ_P4_1  P4_1
#define READ_P4_2  P4_2
#define READ_P4_3  P4_3
#define READ_P4_4  P4_4
#define READ_P4_5  P4_5
#define READ_P4_6  P4_6
#define READ_P4_7  P4_7



#define READ_P5_0  (bit)(P5_DATA & 0x01)
#define READ_P5_1  (bit)(P5_DATA & 0x02)
#define READ_P5_2  (bit)(P5_DATA & 0x04)
#define READ_P5_3  (bit)(P5_DATA & 0x08)
#define READ_P5_4  (bit)(P5_DATA & 0x10)
#define READ_P5_5  (bit)(P5_DATA & 0x20)
#define READ_P5_6  (bit)(P5_DATA & 0x40)
#define READ_P5_7  (bit)(P5_DATA & 0x80)


#define SET_P0_0  P0_0= 1
#define SET_P0_1  P0_1= 1
#define SET_P0_2  P0_2= 1
#define SET_P0_3  P0_3= 1
#define SET_P0_4  P0_4= 1
#define SET_P0_5  P0_5= 1
#define SET_P0_6  P0_6= 1
#define SET_P0_7  P0_7= 1


#define SET_P1_0  P1_0= 1
#define SET_P1_1  P1_1= 1
#define SET_P1_2  P1_2= 1
#define SET_P1_3  P1_3= 1
#define SET_P1_4  P1_4= 1
#define SET_P1_5  P1_5= 1
#define SET_P1_6  P1_6= 1
#define SET_P1_7  P1_7= 1


#define SET_P2_0  P2_0= 1
#define SET_P2_1  P2_1= 1
#define SET_P2_2  P2_2= 1
#define SET_P2_3  P2_3= 1
#define SET_P2_4  P2_4= 1
#define SET_P2_5  P2_5= 1
#define SET_P2_6  P2_6= 1
#define SET_P2_7  P2_7= 1


#define SET_P3_0  P3_0= 1
#define SET_P3_1  P3_1= 1
#define SET_P3_2  P3_2= 1
#define SET_P3_3  P3_3= 1
#define SET_P3_4  P3_4= 1
#define SET_P3_5  P3_5= 1
#define SET_P3_6  P3_6= 1
#define SET_P3_7  P3_7= 1


#define SET_P4_0  P4_0= 1
#define SET_P4_1  P4_1= 1
#define SET_P4_2  P4_2= 1
#define SET_P4_3  P4_3= 1
#define SET_P4_4  P4_4= 1
#define SET_P4_5  P4_5= 1
#define SET_P4_6  P4_6= 1
#define SET_P4_7  P4_7= 1



#define SET_P5_0  P5_DATA |=0x01
#define SET_P5_1  P5_DATA |=0x02
#define SET_P5_2  P5_DATA |=0x04
#define SET_P5_3  P5_DATA |=0x08
#define SET_P5_4  P5_DATA |=0x10
#define SET_P5_5  P5_DATA |=0x20
#define SET_P5_6  P5_DATA |=0x40
#define SET_P5_7  P5_DATA |=0x80


#define RESET_P0_0  P0_0 = 0
#define RESET_P0_1  P0_1 = 0
#define RESET_P0_2  P0_2 = 0
#define RESET_P0_3  P0_3 = 0
#define RESET_P0_4  P0_4 = 0
#define RESET_P0_5  P0_5 = 0
#define RESET_P0_6  P0_6 = 0
#define RESET_P0_7  P0_7 = 0


#define RESET_P1_0  P1_0 = 0
#define RESET_P1_1  P1_1 = 0
#define RESET_P1_2  P1_2 = 0
#define RESET_P1_3  P1_3 = 0
#define RESET_P1_4  P1_4 = 0
#define RESET_P1_5  P1_5 = 0
#define RESET_P1_6  P1_6 = 0
#define RESET_P1_7  P1_7 = 0


#define RESET_P2_0  P2_0 = 0
#define RESET_P2_1  P2_1 = 0
#define RESET_P2_2  P2_2 = 0
#define RESET_P2_3  P2_3 = 0
#define RESET_P2_4  P2_4 = 0
#define RESET_P2_5  P2_5 = 0
#define RESET_P2_6  P2_6 = 0
#define RESET_P2_7  P2_7 = 0


#define RESET_P3_0  P3_0 = 0
#define RESET_P3_1  P3_1 = 0
#define RESET_P3_2  P3_2 = 0
#define RESET_P3_3  P3_3 = 0
#define RESET_P3_4  P3_4 = 0
#define RESET_P3_5  P3_5 = 0
#define RESET_P3_6  P3_6 = 0
#define RESET_P3_7  P3_7 = 0


#define RESET_P4_0  P4_0 = 0
#define RESET_P4_1  P4_1 = 0
#define RESET_P4_2  P4_2 = 0
#define RESET_P4_3  P4_3 = 0
#define RESET_P4_4  P4_4 = 0
#define RESET_P4_5  P4_5 = 0
#define RESET_P4_6  P4_6 = 0
#define RESET_P4_7  P4_7 = 0



#define RESET_P5_0  P5_DATA &=~0x01
#define RESET_P5_1  P5_DATA &=~0x02
#define RESET_P5_2  P5_DATA &=~0x04
#define RESET_P5_3  P5_DATA &=~0x08
#define RESET_P5_4  P5_DATA &=~0x10
#define RESET_P5_5  P5_DATA &=~0x20
#define RESET_P5_6  P5_DATA &=~0x40
#define RESET_P5_7  P5_DATA &=~0x80


#define TOGGLE_P0_0  P0_0 ^= 1
#define TOGGLE_P0_1  P0_1 ^= 1
#define TOGGLE_P0_2  P0_2 ^= 1
#define TOGGLE_P0_3  P0_3 ^= 1
#define TOGGLE_P0_4  P0_4 ^= 1
#define TOGGLE_P0_5  P0_5 ^= 1
#define TOGGLE_P0_6  P0_6 ^= 1
#define TOGGLE_P0_7  P0_7 ^= 1


#define TOGGLE_P1_0  P1_0 ^= 1
#define TOGGLE_P1_1  P1_1 ^= 1
#define TOGGLE_P1_2  P1_2 ^= 1
#define TOGGLE_P1_3  P1_3 ^= 1
#define TOGGLE_P1_4  P1_4 ^= 1
#define TOGGLE_P1_5  P1_5 ^= 1
#define TOGGLE_P1_6  P1_6 ^= 1
#define TOGGLE_P1_7  P1_7 ^= 1


#define TOGGLE_P2_0  P2_0 ^= 1
#define TOGGLE_P2_1  P2_1 ^= 1
#define TOGGLE_P2_2  P2_2 ^= 1
#define TOGGLE_P2_3  P2_3 ^= 1
#define TOGGLE_P2_4  P2_4 ^= 1
#define TOGGLE_P2_5  P2_5 ^= 1
#define TOGGLE_P2_6  P2_6 ^= 1
#define TOGGLE_P2_7  P2_7 ^= 1


#define TOGGLE_P3_0  P3_0 ^= 1
#define TOGGLE_P3_1  P3_1 ^= 1
#define TOGGLE_P3_2  P3_2 ^= 1
#define TOGGLE_P3_3  P3_3 ^= 1
#define TOGGLE_P3_4  P3_4 ^= 1
#define TOGGLE_P3_5  P3_5 ^= 1
#define TOGGLE_P3_6  P3_6 ^= 1
#define TOGGLE_P3_7  P3_7 ^= 1


#define TOGGLE_P4_0  P4_0 ^= 1
#define TOGGLE_P4_1  P4_1 ^= 1
#define TOGGLE_P4_2  P4_2 ^= 1
#define TOGGLE_P4_3  P4_3 ^= 1
#define TOGGLE_P4_4  P4_4 ^= 1
#define TOGGLE_P4_5  P4_5 ^= 1
#define TOGGLE_P4_6  P4_6 ^= 1
#define TOGGLE_P4_7  P4_7 ^= 1



#define TOGGLE_P5_0  P5_DATA ^=0x01
#define TOGGLE_P5_1  P5_DATA ^=0x02
#define TOGGLE_P5_2  P5_DATA ^=0x04
#define TOGGLE_P5_3  P5_DATA ^=0x08
#define TOGGLE_P5_4  P5_DATA ^=0x10
#define TOGGLE_P5_5  P5_DATA ^=0x20
#define TOGGLE_P5_6  P5_DATA ^=0x40
#define TOGGLE_P5_7  P5_DATA ^=0x80


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void IO_vInit(void);


// USER CODE BEGIN (IO_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (IO_Header,9)

// USER CODE END


#endif  // ifndef _IO_H_
