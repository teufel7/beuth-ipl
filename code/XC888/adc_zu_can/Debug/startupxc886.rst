                              1 ;------------------------------------------------------------------------------
                              2 ;  This file is part of the DAvE SDCC Compiler package
                              3 ;  Startup Code for the Infineon XC8xx devices 
                              4 ;  Copyright (c) .
                              5 ;  Version 1.00
                              6 ;
                              7 ;------------------------------------------------------------------------------
                              8 ;  startupxc886.s:  This code is executed after processor reset.
                              9 ;
                             10 ;------------------------------------------------------------------------------
                             11 ;
                             12 ; XC8xx series runs by default from on-chip osciallator.
                             13 ;------------------------------------------------------------------------------
                             14 
                             15 .area startup_code(code)
                             16 
                             17 .globl __sdcc_external_startup
   11EF                      18 __sdcc_external_startup:
                             19 
                    0001     20 XTAL = 1   ; set to 1 External oscillator
                             21 
                             22 ; <o> PLL N-Divider
                             23 ; <0=>  N=10
                             24 ; <1=>  N=12
                             25 ; <2=>  N=13
                             26 ; <3=>  N=14
                             27 ; <4=>  N=15
                             28 ; <5=>  N=16
                             29 ; <6=>  N=17
                             30 ; <7=>  N=18
                             31 ; <8=>  N=19
                             32 ; <9=>  N=20 (9.6 MHz On-Chip XTAL)
                             33 ; <10=> N=24 (8 MHz Ext XTAL)
                             34 ; <11=> N=30
                             35 ; <12=> N=32(6 MHz  XTAL)
                             36 ; <13=> N=36
                             37 ; <14=> N=40
                             38 ; <15=> N=48(4 MHz  XTAL)
                             39 ;
                    000A     40              NDIV  = 10   ; default 10
                             41 
                             42 ; XC8xx specific SFR Symbols used in STARTUP code
                    00BF     43      SCU_PAGE = 0x00BF
                    00B7     44      PLL_CON  = 0x00B7
                    00B6     45      OSC_CON  = 0x00B6
                    00BB     46      PASSWD   = 0x00BB
                             47 
                    0001     48 .if XTAL                                         ; switch to external XTAL
   11EF 75 BF 01             49      MOV     SCU_PAGE,#1
   11F2 43 B7 08             50      ORL     PLL_CON, #0x08  ; VCOBYP=1
   11F5 43 B7 04             51      ORL     PLL_CON, #0x04  ; OSCDISC = 1   _ _ _ NDIV, VCOBYP, OSCDISC, RESLD, LOCK
   11F8 43 B6 04             52      ORL     OSC_CON, #0x04  ; OSCSS = 1     0, 0, 0, OSCPD, XPD, OSCSS, ORDRES, OSCR
   11FB 53 B6 F7             53      ANL     OSC_CON, #0xF7  ; XPD = 0       power xtal
                             54 
   11FE 78 0A                55      MOV     R0,#10          ; delay around 1.5 ms
                             56 
   1200                      57 DelayXTAL:
   1200 D9 FE                58 Delay1: DJNZ R1, Delay1
   1202 D8 FC                59         DJNZ R0, DelayXTAL
                             60                 
   1204                      61 OSCR_NOTSET:
   1204 43 B6 02             62      ORL     OSC_CON, #0x02  ; ORDRES = 1
   1207                      63 WAIT_ORDRES_0:
   1207 E5 B6                64      MOV A, OSC_CON
   1209 20 E1 FB             65      JB      ACC.1,WAIT_ORDRES_0
   120C 30 E0 F5             66      JNB     ACC.0,OSCR_NOTSET
                             67                 
                             68      ; VCOBYP to change N-Divider
   120F 43 B7 08             69      ORL     PLL_CON, #0x08  ; VCOBYP = 1
   1212 53 B7 FB             70      ANL     PLL_CON, #0xFB  ; OSCDISC = 0
   1215 75 BB 98             71      MOV     PASSWD,  #0x98  ; open access to writing protected bit
   1218 53 B7 0F             72      ANL     PLL_CON, #0x0F
   121B 43 B7 A0             73      ORL     PLL_CON, #NDIV*16
                             74 
   121E 43 B7 02             75      ORL     PLL_CON, #0x02  ; detect PLL lock
   1221                      76 WAIT_LOCK:
   1221 E5 B7                77      MOV A, PLL_CON
   1223 30 E0 FB             78      JNB     ACC.0, WAIT_LOCK
                             79                     ; reconnect to PLL
   1226 53 B7 F7             80      ANL     PLL_CON, #0xF7  ; VCOBYP = 0
   1229 75 BF 00             81      MOV     SCU_PAGE,#0
                             82 .endif
                             83 
                             84 
                             85 
   122C 22                   86 ret         ;End of __sdcc_external_startup
                             87 
