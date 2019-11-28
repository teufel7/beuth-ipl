//****************************************************************************
// @Module        MultiCAN Controller 
// @Filename      CAN.C
// @Project       can_example.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC888CLM-8FF
//
// @Compiler      SDCC
//
// @Codegenerator 1.7
//
// @Description:  This file contains functions that use the CAN module.
//
//----------------------------------------------------------------------------
// @Date          21.11.2019 14:59:57
//
//****************************************************************************

// USER CODE BEGIN (CAN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (CAN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************


// USER CODE BEGIN (CAN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (CAN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CAN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************


// USER CODE BEGIN (CAN_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (CAN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (CAN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void CAN_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the CAN function 
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

// USER CODE BEGIN (Init,1)

// USER CODE END

void CAN_vInit(void)
{

  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------
  ///  - the CAN module clock = 48,00 MHz
  ///  - FCLK runs at 2 times the frequency of PCLK.

  ///  - CMCON - Clock Control Register is Configured in MAIN_vInit

  //   - wait until Panel has finished the initialisation
    CAN_vWriteCANAddress(CAN_PANCTR); // Addressing CAN_PANCTR
    CAN_DATA1 = CAN_PANCTR_BUSY;
    while(CAN_DATA1 & CAN_PANCTR_BUSY){ // wait until Panel has finished the 
                                        // initialisation
      CAN_ADCON &= ~0x01;       
      }                         

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 0:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 0:
  ///  - set INIT and CCE

  //-----------CAN_NCR0 = 0x00000041-------------------------------------

    CAN_vWriteCANAddress(CAN_NCR0); // Addressing CAN_NCR0
    CAN_DATA0 = 0x41;            // load NODE 0 control register[7-0]
    CAN_vWriteEN(D0_VALID+ADR_INC); // Data0 is Valid for transmission and 
                                    // Write is EnabledCAN Address pointing 
                                    // to the CAN_NSR0.

  ///  -----------------------------------------------------------------------
  ///  Configuration of CAN Node 1:
  ///  -----------------------------------------------------------------------

  ///  General Configuration of the Node 1:
  ///  - set INIT and CCE
  ///  - enable interrupt generation when a message transfer is completed
  ///  - transfer OK interrupt node pointer: MultiCAN SRN 0

  //-----------CAN_NCR1 = 0x00000043-------------------------------------

    CAN_vWriteCANAddress(CAN_NCR1); // Addressing CAN_NCR1
    CAN_DATA0 = 0x43;            // load NODE 1 control register[7-0]
    CAN_vWriteEN(D0_VALID+ADR_INC); // Data0 is Valid for transmission and 
                                    // Write is EnabledCAN Address pointing 
                                    // to the CAN_NSR1.

  //  CAN Address pointing to the CAN_NIPR1
    CAN_ADCON = ADR_INC;         // Auto Increment the current address(+1)

  ///  - load NODE 1 interrupt pointer register
  //-----------CAN_NIPR1 = 0x00000000-------------------------------------

    CAN_DATA0 = 0x00;            // load NIPR1_LECINP, NIPR1_ALINP
    CAN_DATA1 = 0x00;            // load NIPR1_CFCINP, NIPR1_TRINP
    CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC); // Data0 and Data1 are Valid for 
                                             // with Auto Increment 
                                             // transmission and Write is 
                                             // Enabled CAN Address pointing 
                                             // to the CAN_NPCR1

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CAN Input Port Pins:
  ///  -----------------------------------------------------------------------
  ///  - Pin P1.4 is used as RXDC1_3 input

  //-----------CAN_NPCR1 = 0x00000003-------------------------------------
  ///  - Loop-back mode is disabled

    CAN_DATA0 = 0x03;            // Receive Select NPCR1_RXSEL
    CAN_DATA1 = 0x00;            // Loop-back mode is disabled
    CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC);  //  Data0 & 1 are Valid for 
                                              // transmission and Write is 
                                              // Enabled with AutoIncrement 
                                              // CAN Address pointing to the 
                                              // CAN_NBTR1



  ///  Configuration of the Node 1 Baud Rate:
  ///  - required baud rate = 125,000 kbaud
  ///  - real baud rate     = 125,000 kbaud
  ///  - sample point       = 83,33 %
  ///  - there are 9 time quanta before sample point
  ///  - there are 2 time quanta after sample point
  ///  - the (re)synchronization jump width is 2 time quanta

  //-----------CAN_NBTR1 = 0x0000185F-------------------------------------

    CAN_DATA0 = 0x5F;            // load NBTR1_SJW, BRP
    CAN_DATA1 = 0x18;            // load NBTR1_DIV8, TSEG2, TSEG1
    CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC);  // Data0, 1 are valid for 
                                              // transmission and Write is 
                                              // Enabled with Auto 
                                              // Increment(+1) CAN Address 
                                              // pointing to the CAN_NECNT1

  ///  Configuration of the Node 1 Error Counter:
  ///  - the error warning threshold value (warning level) is 96

  //-----------CAN_NECNT1 = 0x00600000-------------------------------------

    CAN_DATA2 = 0x60;            // load NECNT1_EWRNLVL register
    CAN_vWriteEN(D2_VALID+ADR_INC); // Data2 is Valid for transmission, Auto 
                                    // Increment current address(+1) and 
                                    // Write is Enabled CAN Address pointing 
                                    // to the CAN_NFCR1

  ///  Configuration of the Frame Counter:
  ///  - Frame Counter Mode: the counter is incremented upon the reception 
  ///    and transmission of frames
  ///  - frame counter: 0x0000


  //-----------CAN_NFCR1 = 0x00000000-------------------------------------

    CAN_DATA0 = 0x00;            // load NFCR1_CFCL
    CAN_DATA1 = 0x00;            // load NFCR1_CFCH
    CAN_DATA2 = 0x00;            // load NFCR1_CFCOV, CFCIE, CFMOD, CFSEL
    CAN_vWriteEN(D0_VALID+D1_VALID+D2_VALID); // Data0, 1, 2 are valid for 
                                              // transmission and Write is 
                                              // Enabled

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CAN Output Port Pins:
  ///  -----------------------------------------------------------------------
  ///  - NODE0 TXD Pin's are not used
  ///  Pin P1.3 is used as TXDC1_3 Output 

    SFR_PAGE(_pp2, noSST);       // switch to page 2
      P1_ALTSEL0      |= 0x08;    //  set AltSel0 
      P1_ALTSEL1      |= 0x08;    //  set AltSel1

    SFR_PAGE(_pp0, noSST);       // switch to page 0
      P1_DIR          |= 0x08;        //  set Direction as Output


  ///  -----------------------------------------------------------------------
  ///  Configuration of the CAN Message Object List Structure:
  ///  -----------------------------------------------------------------------

    CAN_vWriteCANAddress(CAN_PANCTR); // Addressing CAN_PANCTR

  ///  Allocate MOs for list 2:
    CAN_vSetListCommand(0x02000002);  // MO0 for list 2

  ///  -----------------------------------------------------------------------
  ///  Configuration of the CAN Message Objects 0 - 31:
  ///  -----------------------------------------------------------------------
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 0:
  ///  -----------------------------------------------------------------------
  ///  - message object 0 is valid
  ///  - message object is used as transmit object
  ///  - this message object is assigned to list 2 (node 1)

  //--------------MOCTR0 = 0x0EA80000---------------------------------------

    CAN_vWriteCANAddress(CAN_MOCTR0); // Addressing MO0 control register

    CAN_vWriteAMData(0x0EA80000); // load MO0 control register

  //  CAN Address pointing to the CAN_MOAR0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)

  ///  - priority class 3; transmit acceptance filtering is based on the list 
  ///    order (like class 1)
  ///  - standard 11-bit identifier
  ///  - identifier 11-bit:      0x123

  //--------------MOAR0 = 0xC48C0000---------------------------------------

    CAN_vWriteAMData(0xC48C0000); // load MO0 arbitration register

  //  CAN Address pointing to the CAN_MODATAH0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)


  //--------------MODATAH0 = 0x00000000---------------------------------------

    CAN_vWriteAMData(0x00000000); // load MO0 data register high

  //  CAN Address pointing to the CAN_MODATAL0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)

  //--------------MODATAL0 = 0x000000DE---------------------------------------

    CAN_vWriteAMData(0x000000DE); // load MO0 data register low

  //  CAN Address pointing to the CAN_MOAMR0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)

  ///  - only accept receive frames with matching IDE bit
  ///  - acceptance mask 11-bit: 0x7FF

  //--------------CAN_MOAMR0 = 0x3FFFFFFF------------------------------------

    CAN_vWriteAMData(0x3FFFFFFF); // load MO0 acceptance mask register

  //  CAN Address pointing to the CAN_MOIPR0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)

  ///  - use message pending register 0 bit position 0

  //--------------MOIPR0 = 0x00000000---------------------------------------

    CAN_vWriteAMData(0x00000000); // load MO0 interrupt pointer register

  //  CAN Address pointing to the CAN_MOFGPR0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)


  //--------------MOFGPR0 = 0x00000000---------------------------------------

    CAN_vWriteAMData(0x00000000); // load MO0 FIFO/gateway pointer register

  //  CAN Address pointing to the CAN_MOFCR0
    CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)

  ///  - this object is a STANDARD MESSAGE OBJECT
  ///  - 1 valid data bytes

  //--------------MOFCR0 = 0x01000000---------------------------------------

    CAN_vWriteAMData(0x01000000); // load MO0  function control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 1:
  ///  -----------------------------------------------------------------------
  ///  - message object 1 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 2:
  ///  -----------------------------------------------------------------------
  ///  - message object 2 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 3:
  ///  -----------------------------------------------------------------------
  ///  - message object 3 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 4:
  ///  -----------------------------------------------------------------------
  ///  - message object 4 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 5:
  ///  -----------------------------------------------------------------------
  ///  - message object 5 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 6:
  ///  -----------------------------------------------------------------------
  ///  - message object 6 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 7:
  ///  -----------------------------------------------------------------------
  ///  - message object 7 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 8:
  ///  -----------------------------------------------------------------------
  ///  - message object 8 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 9:
  ///  -----------------------------------------------------------------------
  ///  - message object 9 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 10:
  ///  -----------------------------------------------------------------------
  ///  - message object 10 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 11:
  ///  -----------------------------------------------------------------------
  ///  - message object 11 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 12:
  ///  -----------------------------------------------------------------------
  ///  - message object 12 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 13:
  ///  -----------------------------------------------------------------------
  ///  - message object 13 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 14:
  ///  -----------------------------------------------------------------------
  ///  - message object 14 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 15:
  ///  -----------------------------------------------------------------------
  ///  - message object 15 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 16:
  ///  -----------------------------------------------------------------------
  ///  - message object 16 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 17:
  ///  -----------------------------------------------------------------------
  ///  - message object 17 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 18:
  ///  -----------------------------------------------------------------------
  ///  - message object 18 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 19:
  ///  -----------------------------------------------------------------------
  ///  - message object 19 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 20:
  ///  -----------------------------------------------------------------------
  ///  - message object 20 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 21:
  ///  -----------------------------------------------------------------------
  ///  - message object 21 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 22:
  ///  -----------------------------------------------------------------------
  ///  - message object 22 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 23:
  ///  -----------------------------------------------------------------------
  ///  - message object 23 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 24:
  ///  -----------------------------------------------------------------------
  ///  - message object 24 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 25:
  ///  -----------------------------------------------------------------------
  ///  - message object 25 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 26:
  ///  -----------------------------------------------------------------------
  ///  - message object 26 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 27:
  ///  -----------------------------------------------------------------------
  ///  - message object 27 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 28:
  ///  -----------------------------------------------------------------------
  ///  - message object 28 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 29:
  ///  -----------------------------------------------------------------------
  ///  - message object 29 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 30:
  ///  -----------------------------------------------------------------------
  ///  - message object 30 is not valid
  ///  -----------------------------------------------------------------------
  ///  Configuration of Message Object 31:
  ///  -----------------------------------------------------------------------
  ///  - message object 31 is not valid

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - CAN interrupt node 0 is enabled
  ///  - CAN interrupt node 1 is disabled
  ///  - CAN interrupt node 2 is disabled
  ///  - CAN interrupt node 3 is disabled
  ///  - CAN interrupt node 4 is disabled
  ///  - CAN interrupt node 5 is disabled
  ///  - CAN interrupt node 6 is disabled
  ///  - CAN interrupt node 7 is disabled

  ///  MultiCAN Node 0 Interrupt enable bit is set in SHINT_vInit() function

  //   -----------------------------------------------------------------------
  //   Start the CAN Nodes:
  //   -----------------------------------------------------------------------


  ///  - -----------CAN_NCR1--------------------------------------------------------

    CAN_vWriteCANAddress(CAN_NCR1); // Addressing CAN_NCR1
    CAN_vReadEN();               // Read Mode is Enabled
    CAN_DATA0  &= ~0x41;         // reset INIT and CCE
    CAN_vWriteEN(D0_VALID);      // Data0 is Valid for transmission and Write 
                                 // is Enabled


  // USER CODE BEGIN (Init,3)

  // USER CODE END

} //  End of function CAN_vInit

//****************************************************************************
// @Function      void CAN_vWriteAMData(ulong ulValue) 
//
//----------------------------------------------------------------------------
// @Description   This function writes 32-bit Data to CAN Data Register's 
//                0-3respectively. 
//                Note:
//                Write Process :
//                ->Write the address of the MultiCAN kernel register to the 
//                CAN_ADL and CAN_ADH registers.
//                use macro : CAN_vWriteCANAddress. 
//                ->Write the data to the 
//                CAN_DATA0/CAN_DATA1/CAN_DATA2/CAN_DATA3 registers.
//                ->Write the register CAN_ADCON, including setting the valid 
//                bit of the data registers and setting register bit RWEN to 
//                1.
//                ->The valid data will be written to the MultiCAN kernel 
//                only once. Register bit BSY will become 1.
//                ->When Register bit BSY becomes 0, the transmission is 
//                finished.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ulValue: 
//                32-bit Data
//
//----------------------------------------------------------------------------
// @Date          21.11.2019
//
//****************************************************************************

// USER CODE BEGIN (WriteAMData,1)

// USER CODE END

void CAN_vWriteAMData(ulong ulValue)
{
  un_32bit ulData;
  ulData.ulVal = ulValue;

    CAN_DATA0 = ulData.ubDB[0]; // load CAN Data Register 0
    CAN_DATA1 = ulData.ubDB[1]; // load CAN Data Register 1
    CAN_DATA2 = ulData.ubDB[2]; // load CAN Data Register 2
    CAN_DATA3 = ulData.ubDB[3]; // load CAN Data Register 3
        CAN_vWriteEN(ALL_DATA_VALID); // Writemode is Enabled
} //  End of function CAN_vWriteAMData

//****************************************************************************
// @Function      void CAN_vSetListCommand(ulong ulVal) 
//
//----------------------------------------------------------------------------
// @Description   This function write's 32-bit Data to CAN_PANCTR Register.
//                
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ulVal: 
//                32-bit Data
//
//----------------------------------------------------------------------------
// @Date          21.11.2019
//
//****************************************************************************

// USER CODE BEGIN (SetListCommand,1)

// USER CODE END

void CAN_vSetListCommand(ulong ulVal)
{
    CAN_vWriteAMData(ulVal);  // - load Panel Control Register
    CAN_DATA1 = CAN_PANCTR_BUSY;
    while(CAN_DATA1 & CAN_PANCTR_BUSY){ // wait until Panel has finished the 
                                        // initialisation
      CAN_ADCON &= ~0x01;       
      }                         
} //  End of function CAN_vSetListCommand

//****************************************************************************
// @Function      void CAN_vGetMsgObj(ubyte ubObjNr, stCAN_SWObj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function fills the forwarded SW message object with 
//                the content of the chosen HW message object.
//                
//                The structure of the SW message object is defined in the 
//                header file CAN.H (see stCAN_SWObj).
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be read (0-31)
// @Parameters    *pstObj: 
//                Pointer on a message object to be filled by this function
//
//----------------------------------------------------------------------------
// @Date          21.11.2019
//
//****************************************************************************

// USER CODE BEGIN (GetMsgObj,1)

// USER CODE END

void CAN_vGetMsgObj(ubyte ubObjNr, stCAN_SWObj *pstObj)
{
ubyte ubTemp;

    CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register

    //----- get DLC -------------------------------------------------------

    CAN_vWriteCANAddress(CAN_MOFCR(ubObjNr));
    CAN_vReadEN();   // Readmode is Enabled

    pstObj->ubMOdlc  =  CAN_DATA3;//MOFCRn[31-24] DLC

    //----- get MODATAL ---------------------------------------------------
    CAN_vWriteCANAddress(CAN_MODATAL(ubObjNr));

    CAN_vReadEN();  // Readmode is Enabled
    pstObj->ulDATAL.ubDB[0] = CAN_DATA0; // Read CAN Data Register 0
    pstObj->ulDATAL.ubDB[1] = CAN_DATA1; // Read CAN Data Register 1
    pstObj->ulDATAL.ubDB[2] = CAN_DATA2; // Read CAN Data Register 2
    pstObj->ulDATAL.ubDB[3] = CAN_DATA3; // Read CAN Data Register 3

    //  CAN Address pointing to the CAN_MODATAH
    CAN_ADCON = ADR_INC;

    //----- get MODATAH ---------------------------------------------------

    CAN_vReadEN();  // Readmode is Enabled
    pstObj->ulDATAH.ubDB[0] = CAN_DATA0; // Read CAN Data Register 0
    pstObj->ulDATAH.ubDB[1] = CAN_DATA1; // Read CAN Data Register 1
    pstObj->ulDATAH.ubDB[2] = CAN_DATA2; // Read CAN Data Register 2
    pstObj->ulDATAH.ubDB[3] = CAN_DATA3; // Read CAN Data Register 3

    //----- get DIR -------------------------------------------------------
    CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));
    CAN_vReadEN();   // Readmode is Enabled

    if(CAN_DATA1 & 0x08)   // if transmit object (MOSTAT_DIR)
    {
        pstObj->ubMOcfg  = (pstObj->ubMOcfg | 0x08);  // set DIR
    }

    //----- get XID - Extended Identifier ---------------------------------

    //  CAN Address pointing to the CAN_MOARn
    CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
    CAN_vReadEN();   // ReadMode is Enabled

    if(CAN_DATA3 & 0x20)   // if extended identifier
    {

        //----- get XID - Extended Identifier (MOARn) ------------------------
        pstObj->ulID.ubDB[0] = CAN_DATA0;   // MOARn[7-0]
        pstObj->ulID.ubDB[1] = CAN_DATA1;   // MOARn[15-8]
        pstObj->ulID.ubDB[2] = CAN_DATA2;   // MOARn[23-16]
        pstObj->ulID.ubDB[3] = (CAN_DATA3 & 0x1f);  // MOARn[31-24]

        //  CAN Address pointing to the CAN_MODATAH
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        //  CAN Address pointing to the CAN_MODATAL
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        //  CAN Address pointing to the CAN_MOAMR
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        CAN_vReadEN();   // ReadMode is Enabled

        //----- get XID - Extended Acceptance Mask (MOAMRn) -----------------
        pstObj->ulMask.ubDB[0] = CAN_DATA0;   // MOAMRn[7-0]
        pstObj->ulMask.ubDB[1] = CAN_DATA1;   // MOAMRn[15-8]
        pstObj->ulMask.ubDB[2] = CAN_DATA2;   // MOAMRn[23-16]
        pstObj->ulMask.ubDB[3] = (CAN_DATA3 & 0x1f);      // MOAMRn[31-24]

        pstObj->ubMOcfg  = (pstObj->ubMOcfg | 0x04);      // set IDE 29-bit
    }
    else                                                  // standard identifier
    {
        //----- get - ID - Standard Identifier (MOARn) ---------------------
        pstObj->ulID.ubDB[0] = (CAN_DATA2 & 0xFC) >> 2;   // MOARn[23-16]
        pstObj->ulID.ubDB[1] = (CAN_DATA3 & 0x1f);        // MOARn[31-24]
        pstObj->ulID.ubDB[2] = 0x00;    // MOARn[15-8]
        pstObj->ulID.ubDB[3] = 0x00;    // MOARn[15-8]

        ubTemp = 0;
        ubTemp = ((pstObj->ulID.ubDB[1]) & 0x03) << 6;
        pstObj->ulID.ubDB[1] = (pstObj->ulID.ubDB[1] >> 2);
        pstObj->ulID.ubDB[0] = (pstObj->ulID.ubDB[0] + ubTemp);

        //  CAN Address pointing to the CAN_MODATAH
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        //  CAN Address pointing to the CAN_MODATAL
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        //  CAN Address pointing to the CAN_MOAMR
        CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

        CAN_vReadEN();   // ReadMode is Enabled

        //----- get - ID - Acceptance Mask (MOAMRn) -----------------------

        pstObj->ulMask.ubDB[0] = (CAN_DATA2 & 0xFC) >> 2;   // MOARn[23-16]
        pstObj->ulMask.ubDB[1] = (CAN_DATA3 & 0x1f);        // MOARn[31-24]
        pstObj->ulMask.ubDB[2] = 0x00;    // MOARn[15-8]
        pstObj->ulMask.ubDB[3] = 0x00;    // MOARn[15-8]

        ubTemp = 0;
        ubTemp = ((pstObj->ulMask.ubDB[1]) & 0x03) << 6;
        pstObj->ulMask.ubDB[1] = (pstObj->ulMask.ubDB[1] >> 2);
        pstObj->ulMask.ubDB[0] = (pstObj->ulMask.ubDB[0] + ubTemp);
    }

    //----- get CFCVAL - CAN Frame Counter Value (MOIPRn) -----------------

    CAN_vWriteCANAddress(CAN_MOIPR(ubObjNr));
    CAN_vReadEN();   // Readmode is Enabled

    pstObj->uwCounter.ubDB[0] = CAN_DATA2;  // MOIPRn[16-23]
    pstObj->uwCounter.ubDB[1] = CAN_DATA3;  // MOIPRn[31-24]

    CAN_popAMRegs();    //   POP the CAN Access Mediator Register
} //  End of function CAN_vGetMsgObj

//****************************************************************************
// @Function      void CAN_vTransmit(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function triggers the CAN controller to send the 
//                selected message.
//                If the selected message object is a TRANSMIT OBJECT then 
//                this function triggers the sending of a data frame. If 
//                however the selected message object is a RECEIVE OBJECT 
//                this function triggers the sending of a remote frame.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (0-31)
//
//----------------------------------------------------------------------------
// @Date          21.11.2019
//
//****************************************************************************

// USER CODE BEGIN (Transmit,1)

// USER CODE END

void CAN_vTransmit(ubyte ubObjNr)
{
    CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register

    CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));  //Addressing CAN_MOCTR register
    CAN_vWriteCANData(0x07200000);      // set TXRQ,TXEN0,TXEN1,MSGVAL

    CAN_popAMRegs();    //   POP the CAN Access Mediator Register

} //  End of function CAN_vTransmit

//****************************************************************************
// @Function      void CAN_vLoadData(ubyte ubObjNr, ulong *ulpubData) 
//
//----------------------------------------------------------------------------
// @Description   If a hardware TRANSMIT OBJECT has to be loaded with data 
//                but not with a new identifier, this function may be used 
//                instead of the function CAN_vConfigMsgObj. The message 
//                object should be accessed by calling the function 
//                CAN_ubRequestMsgObj before calling this function. This 
//                prevents the CAN controller from working with invalid data.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be configured (0-31)
// @Parameters    *ulpubData: 
//                Pointer on a data buffer
//
//----------------------------------------------------------------------------
// @Date          21.11.2019
//
//****************************************************************************

// USER CODE BEGIN (LoadData,1)

// USER CODE END

void CAN_vLoadData(ubyte ubObjNr, ulong *ulpubData)
{
    CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register

    CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));  // Addressing CAN_MOCTRn register
    CAN_vWriteCANData(0x00080000);      // Set NEWDATA

    //  CAN Address pointing to the CAN_MOARn
    CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

    //  CAN Address pointing to the CAN_MODATAHn
    CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

    //  CAN Address pointing to the CAN_MODATALn
    CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)

    CAN_vWriteCANData(*ulpubData); // Loading CAN_MODATALn

     // CAN Address pointing to the CAN_MODATAH
    CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)

    ulpubData++;

    CAN_vWriteCANData(*ulpubData); // Loading CAN_MODATAHn

    //  CAN Address pointing to the CAN_MOARn
    CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)

    //  CAN Address pointing to the CAN_MOCTRn
    CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)

    CAN_vWriteCANData(0x00200040);  // reset RTSEL, set MSGVAL

    CAN_popAMRegs();    //   POP the CAN Access Mediator Register

} //  End of function CAN_vLoadData


// USER CODE BEGIN (CAN_General,10)

// USER CODE END

