                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 2.9.0 #5416 (Feb  7 2011) (MSVC)
                              4 ; This file was generated Thu Nov 28 11:00:58 2019
                              5 ;--------------------------------------------------------
                              6 	.module CAN
                              7 	.optsdcc -mxc800 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _P4_7
                             13 	.globl _P4_6
                             14 	.globl _P4_5
                             15 	.globl _P4_4
                             16 	.globl _P4_3
                             17 	.globl _P4_2
                             18 	.globl _P4_1
                             19 	.globl _P4_0
                             20 	.globl _P3_7
                             21 	.globl _P3_6
                             22 	.globl _P3_5
                             23 	.globl _P3_4
                             24 	.globl _P3_3
                             25 	.globl _P3_2
                             26 	.globl _P3_1
                             27 	.globl _P3_0
                             28 	.globl _P2_7
                             29 	.globl _P2_6
                             30 	.globl _P2_5
                             31 	.globl _P2_4
                             32 	.globl _P2_3
                             33 	.globl _P2_2
                             34 	.globl _P2_1
                             35 	.globl _P2_0
                             36 	.globl _P1_7
                             37 	.globl _P1_6
                             38 	.globl _P1_5
                             39 	.globl _P1_4
                             40 	.globl _P1_3
                             41 	.globl _P1_2
                             42 	.globl _P1_1
                             43 	.globl _P1_0
                             44 	.globl _P0_7
                             45 	.globl _P0_6
                             46 	.globl _P0_5
                             47 	.globl _P0_4
                             48 	.globl _P0_3
                             49 	.globl _P0_2
                             50 	.globl _P0_1
                             51 	.globl _P0_0
                             52 	.globl _TI_1
                             53 	.globl _TB8_1
                             54 	.globl _SM2_1
                             55 	.globl _SM1_1
                             56 	.globl _SM0_1
                             57 	.globl _RI_1
                             58 	.globl _REN_1
                             59 	.globl _RB8_1
                             60 	.globl _TR1
                             61 	.globl _TR0
                             62 	.globl _TF1
                             63 	.globl _TF0
                             64 	.globl _IT1
                             65 	.globl _IT0
                             66 	.globl _IE1
                             67 	.globl _IE0
                             68 	.globl _TR2
                             69 	.globl _TF2
                             70 	.globl _EXF2
                             71 	.globl _EXEN2
                             72 	.globl _CP_RL2
                             73 	.globl _C_T2
                             74 	.globl _TI
                             75 	.globl _TB8
                             76 	.globl _SM2
                             77 	.globl _SM1
                             78 	.globl _SM0
                             79 	.globl _RI
                             80 	.globl _REN
                             81 	.globl _RB8
                             82 	.globl _RS1
                             83 	.globl _RS0
                             84 	.globl _P
                             85 	.globl _OV
                             86 	.globl _F1
                             87 	.globl _F0
                             88 	.globl _CY
                             89 	.globl _AC
                             90 	.globl _MDU_BSY
                             91 	.globl _IRDY
                             92 	.globl _IERR
                             93 	.globl _PX1
                             94 	.globl _PX0
                             95 	.globl _PT2
                             96 	.globl _PT1
                             97 	.globl _PT0
                             98 	.globl _PS
                             99 	.globl _PXM
                            100 	.globl _PX2
                            101 	.globl _PSSC
                            102 	.globl _PCCIP3
                            103 	.globl _PCCIP2
                            104 	.globl _PCCIP1
                            105 	.globl _PCCIP0
                            106 	.globl _PADC
                            107 	.globl _EXM
                            108 	.globl _EX2
                            109 	.globl _ESSC
                            110 	.globl _ECCIP3
                            111 	.globl _ECCIP2
                            112 	.globl _ECCIP1
                            113 	.globl _ECCIP0
                            114 	.globl _EADC
                            115 	.globl _EX1
                            116 	.globl _EX0
                            117 	.globl _ET2
                            118 	.globl _ET1
                            119 	.globl _ET0
                            120 	.globl _ES
                            121 	.globl _EA
                            122 	.globl _KEEPZ
                            123 	.globl _KEEPY
                            124 	.globl _KEEPX
                            125 	.globl _INT_EN
                            126 	.globl _ERROR
                            127 	.globl _EOC
                            128 	.globl _DMAP
                            129 	.globl _CD_BSY
                            130 	.globl _T2_T2LH
                            131 	.globl _T2_RC2LH
                            132 	.globl _CCU6_T13PRLH
                            133 	.globl _CCU6_T13LH
                            134 	.globl _CCU6_T12PRLH
                            135 	.globl _CCU6_T12LH
                            136 	.globl _CCU6_CC63SRLH
                            137 	.globl _CCU6_CC63RLH
                            138 	.globl _CCU6_CC62SRLH
                            139 	.globl _CCU6_CC62RLH
                            140 	.globl _CCU6_CC61SRLH
                            141 	.globl _CCU6_CC61RLH
                            142 	.globl _CCU6_CC60SRLH
                            143 	.globl _CCU6_CC60RLH
                            144 	.globl _ADC_RESRA3LH
                            145 	.globl _ADC_RESRA2LH
                            146 	.globl _ADC_RESRA1LH
                            147 	.globl _ADC_RESRA0LH
                            148 	.globl _ADC_RESR3LH
                            149 	.globl _ADC_RESR2LH
                            150 	.globl _ADC_RESR1LH
                            151 	.globl _ADC_RESR0LH
                            152 	.globl _XADDRH
                            153 	.globl _WDTWINB
                            154 	.globl _WDTREL
                            155 	.globl _WDTL
                            156 	.globl _WDTH
                            157 	.globl _WDTCON
                            158 	.globl _UART1_SCON
                            159 	.globl _UART1_SBUF
                            160 	.globl _UART1_FDSTEP
                            161 	.globl _UART1_FDRES
                            162 	.globl _UART1_FDCON
                            163 	.globl _UART1_BG
                            164 	.globl _UART1_BCON
                            165 	.globl _TMOD
                            166 	.globl _TL1
                            167 	.globl _TL0
                            168 	.globl _TH1
                            169 	.globl _TH0
                            170 	.globl _TCON
                            171 	.globl _T2_T2MOD
                            172 	.globl _T2_T2L
                            173 	.globl _T2_T2H
                            174 	.globl _T2_T2CON
                            175 	.globl _T2_RC2L
                            176 	.globl _T2_RC2H
                            177 	.globl _T21_T2MOD
                            178 	.globl _T21_T2L
                            179 	.globl _T21_T2H
                            180 	.globl _T21_T2CON
                            181 	.globl _T21_RC2L
                            182 	.globl _T21_RC2H
                            183 	.globl _SYSCON0
                            184 	.globl _SSC_TBL
                            185 	.globl _SSC_RBL
                            186 	.globl _SSC_PISEL
                            187 	.globl _SSC_CONL_P
                            188 	.globl _SSC_CONL_O
                            189 	.globl _SSC_CONH_P
                            190 	.globl _SSC_CONH_O
                            191 	.globl _SSC_BRL
                            192 	.globl _SSC_BRH
                            193 	.globl _SP
                            194 	.globl _SCU_PAGE
                            195 	.globl _SCON
                            196 	.globl _SBUF
                            197 	.globl _PSW
                            198 	.globl _PORT_PAGE
                            199 	.globl _PMCON2
                            200 	.globl _PMCON1
                            201 	.globl _PMCON0
                            202 	.globl _PLL_CON
                            203 	.globl _PCON
                            204 	.globl _PASSWD
                            205 	.globl _P5_PUDSEL
                            206 	.globl _P5_PUDEN
                            207 	.globl _P5_OD
                            208 	.globl _P5_DIR
                            209 	.globl _P5_DATA
                            210 	.globl _P5_ALTSEL1
                            211 	.globl _P5_ALTSEL0
                            212 	.globl _P4_PUDSEL
                            213 	.globl _P4_PUDEN
                            214 	.globl _P4_OD
                            215 	.globl _P4_DIR
                            216 	.globl _P4_DATA
                            217 	.globl _P4_ALTSEL1
                            218 	.globl _P4_ALTSEL0
                            219 	.globl _P3_PUDSEL
                            220 	.globl _P3_PUDEN
                            221 	.globl _P3_OD
                            222 	.globl _P3_DIR
                            223 	.globl _P3_DATA
                            224 	.globl _P3_ALTSEL1
                            225 	.globl _P3_ALTSEL0
                            226 	.globl _P2_PUDSEL
                            227 	.globl _P2_PUDEN
                            228 	.globl _P2_DIR
                            229 	.globl _P2_DATA
                            230 	.globl _P1_PUDSEL
                            231 	.globl _P1_PUDEN
                            232 	.globl _P1_OD
                            233 	.globl _P1_DIR
                            234 	.globl _P1_DATA
                            235 	.globl _P1_ALTSEL1
                            236 	.globl _P1_ALTSEL0
                            237 	.globl _P0_PUDSEL
                            238 	.globl _P0_PUDEN
                            239 	.globl _P0_OD
                            240 	.globl _P0_DIR
                            241 	.globl _P0_DATA
                            242 	.globl _P0_ALTSEL1
                            243 	.globl _P0_ALTSEL0
                            244 	.globl _OSC_CON
                            245 	.globl _NMISR
                            246 	.globl _NMICON
                            247 	.globl _MODSUSP
                            248 	.globl _MODPISEL2
                            249 	.globl _MODPISEL1
                            250 	.globl _MODPISEL
                            251 	.globl _MMWR2
                            252 	.globl _MMWR1
                            253 	.globl _MMSR
                            254 	.globl _MMICR
                            255 	.globl _MMDR
                            256 	.globl _MMCR2
                            257 	.globl _MMCR
                            258 	.globl _MMBPCR
                            259 	.globl _MISC_CON
                            260 	.globl _MDU_MR5
                            261 	.globl _MDU_MR4
                            262 	.globl _MDU_MR3
                            263 	.globl _MDU_MR2
                            264 	.globl _MDU_MR1
                            265 	.globl _MDU_MR0
                            266 	.globl _MDU_MDUSTAT
                            267 	.globl _MDU_MDUCON
                            268 	.globl _MDU_MD5
                            269 	.globl _MDU_MD4
                            270 	.globl _MDU_MD3
                            271 	.globl _MDU_MD2
                            272 	.globl _MDU_MD1
                            273 	.globl _MDU_MD0
                            274 	.globl _IRCON4
                            275 	.globl _IRCON3
                            276 	.globl _IRCON2
                            277 	.globl _IRCON1
                            278 	.globl _IRCON0
                            279 	.globl _IPH1
                            280 	.globl _IPH
                            281 	.globl _IP1
                            282 	.globl _IP
                            283 	.globl _IEN1
                            284 	.globl _IEN0
                            285 	.globl _ID
                            286 	.globl _HWBPSR
                            287 	.globl _HWBPDR
                            288 	.globl _FEAL
                            289 	.globl _FEAH
                            290 	.globl _FDSTEP
                            291 	.globl _FDRES
                            292 	.globl _FDCON
                            293 	.globl _EXICON1
                            294 	.globl _EXICON0
                            295 	.globl _EO
                            296 	.globl _DPL
                            297 	.globl _DPH
                            298 	.globl _COCON
                            299 	.globl _CMCON
                            300 	.globl _CD_STATC
                            301 	.globl _CD_CORDZL
                            302 	.globl _CD_CORDZH
                            303 	.globl _CD_CORDYL
                            304 	.globl _CD_CORDYH
                            305 	.globl _CD_CORDXL
                            306 	.globl _CD_CORDXH
                            307 	.globl _CD_CON
                            308 	.globl _CCU6_TRPCTRL
                            309 	.globl _CCU6_TRPCTRH
                            310 	.globl _CCU6_TCTR4L
                            311 	.globl _CCU6_TCTR4H
                            312 	.globl _CCU6_TCTR2L
                            313 	.globl _CCU6_TCTR2H
                            314 	.globl _CCU6_TCTR0L
                            315 	.globl _CCU6_TCTR0H
                            316 	.globl _CCU6_T13PRL
                            317 	.globl _CCU6_T13PRH
                            318 	.globl _CCU6_T13L
                            319 	.globl _CCU6_T13H
                            320 	.globl _CCU6_T12PRL
                            321 	.globl _CCU6_T12PRH
                            322 	.globl _CCU6_T12MSELL
                            323 	.globl _CCU6_T12MSELH
                            324 	.globl _CCU6_T12L
                            325 	.globl _CCU6_T12H
                            326 	.globl _CCU6_T12DTCL
                            327 	.globl _CCU6_T12DTCH
                            328 	.globl _CCU6_PSLR
                            329 	.globl _CCU6_PISEL2
                            330 	.globl _CCU6_PISEL0L
                            331 	.globl _CCU6_PISEL0H
                            332 	.globl _CCU6_PAGE
                            333 	.globl _CCU6_MODCTRL
                            334 	.globl _CCU6_MODCTRH
                            335 	.globl _CCU6_MCMOUTSL
                            336 	.globl _CCU6_MCMOUTSH
                            337 	.globl _CCU6_MCMOUTL
                            338 	.globl _CCU6_MCMOUTH
                            339 	.globl _CCU6_MCMCTR
                            340 	.globl _CCU6_ISSL
                            341 	.globl _CCU6_ISSH
                            342 	.globl _CCU6_ISRL
                            343 	.globl _CCU6_ISRH
                            344 	.globl _CCU6_ISL
                            345 	.globl _CCU6_ISH
                            346 	.globl _CCU6_INPL
                            347 	.globl _CCU6_INPH
                            348 	.globl _CCU6_IENL
                            349 	.globl _CCU6_IENH
                            350 	.globl _CCU6_CMPSTATL
                            351 	.globl _CCU6_CMPSTATH
                            352 	.globl _CCU6_CMPMODIFL
                            353 	.globl _CCU6_CMPMODIFH
                            354 	.globl _CCU6_CC63SRL
                            355 	.globl _CCU6_CC63SRH
                            356 	.globl _CCU6_CC63RL
                            357 	.globl _CCU6_CC63RH
                            358 	.globl _CCU6_CC62SRL
                            359 	.globl _CCU6_CC62SRH
                            360 	.globl _CCU6_CC62RL
                            361 	.globl _CCU6_CC62RH
                            362 	.globl _CCU6_CC61SRL
                            363 	.globl _CCU6_CC61SRH
                            364 	.globl _CCU6_CC61RL
                            365 	.globl _CCU6_CC61RH
                            366 	.globl _CCU6_CC60SRL
                            367 	.globl _CCU6_CC60SRH
                            368 	.globl _CCU6_CC60RL
                            369 	.globl _CCU6_CC60RH
                            370 	.globl _CAN_DATA3
                            371 	.globl _CAN_DATA2
                            372 	.globl _CAN_DATA1
                            373 	.globl _CAN_DATA0
                            374 	.globl _CAN_ADL
                            375 	.globl _CAN_ADH
                            376 	.globl _CAN_ADCON
                            377 	.globl _BG
                            378 	.globl _BCON
                            379 	.globl _B
                            380 	.globl _ADC_VFCR
                            381 	.globl _ADC_RESRA3L
                            382 	.globl _ADC_RESRA3H
                            383 	.globl _ADC_RESRA2L
                            384 	.globl _ADC_RESRA2H
                            385 	.globl _ADC_RESRA1L
                            386 	.globl _ADC_RESRA1H
                            387 	.globl _ADC_RESRA0L
                            388 	.globl _ADC_RESRA0H
                            389 	.globl _ADC_RESR3L
                            390 	.globl _ADC_RESR3H
                            391 	.globl _ADC_RESR2L
                            392 	.globl _ADC_RESR2H
                            393 	.globl _ADC_RESR1L
                            394 	.globl _ADC_RESR1H
                            395 	.globl _ADC_RESR0L
                            396 	.globl _ADC_RESR0H
                            397 	.globl _ADC_RCR3
                            398 	.globl _ADC_RCR2
                            399 	.globl _ADC_RCR1
                            400 	.globl _ADC_RCR0
                            401 	.globl _ADC_QSR0
                            402 	.globl _ADC_QMR0
                            403 	.globl _ADC_QINR0
                            404 	.globl _ADC_QBUR0
                            405 	.globl _ADC_Q0R0
                            406 	.globl _ADC_PRAR
                            407 	.globl _ADC_PAGE
                            408 	.globl _ADC_LCBR
                            409 	.globl _ADC_INPCR0
                            410 	.globl _ADC_GLOBSTR
                            411 	.globl _ADC_GLOBCTR
                            412 	.globl _ADC_EVINSR
                            413 	.globl _ADC_EVINPR
                            414 	.globl _ADC_EVINFR
                            415 	.globl _ADC_EVINCR
                            416 	.globl _ADC_ETRCR
                            417 	.globl _ADC_CRPR1
                            418 	.globl _ADC_CRMR1
                            419 	.globl _ADC_CRCR1
                            420 	.globl _ADC_CHINSR
                            421 	.globl _ADC_CHINPR
                            422 	.globl _ADC_CHINFR
                            423 	.globl _ADC_CHINCR
                            424 	.globl _ADC_CHCTR7
                            425 	.globl _ADC_CHCTR6
                            426 	.globl _ADC_CHCTR5
                            427 	.globl _ADC_CHCTR4
                            428 	.globl _ADC_CHCTR3
                            429 	.globl _ADC_CHCTR2
                            430 	.globl _ADC_CHCTR1
                            431 	.globl _ADC_CHCTR0
                            432 	.globl _ACC
                            433 	.globl _CAN_vLoadData_PARM_2
                            434 	.globl _CAN_vGetMsgObj_PARM_2
                            435 	.globl _CAN_vInit
                            436 	.globl _CAN_vWriteAMData
                            437 	.globl _CAN_ulGetCANData
                            438 	.globl _CAN_vSetListCommand
                            439 	.globl _CAN_vGetMsgObj
                            440 	.globl _CAN_vTransmit
                            441 	.globl _CAN_vLoadData
                            442 ;--------------------------------------------------------
                            443 ; special function registers
                            444 ;--------------------------------------------------------
                            445 	.area RSEG    (DATA)
                    00E0    446 G$ACC$0$0 == 0x00e0
                    00E0    447 _ACC	=	0x00e0
                    00CA    448 G$ADC_CHCTR0$0$0 == 0x00ca
                    00CA    449 _ADC_CHCTR0	=	0x00ca
                    00CB    450 G$ADC_CHCTR1$0$0 == 0x00cb
                    00CB    451 _ADC_CHCTR1	=	0x00cb
                    00CC    452 G$ADC_CHCTR2$0$0 == 0x00cc
                    00CC    453 _ADC_CHCTR2	=	0x00cc
                    00CD    454 G$ADC_CHCTR3$0$0 == 0x00cd
                    00CD    455 _ADC_CHCTR3	=	0x00cd
                    00CE    456 G$ADC_CHCTR4$0$0 == 0x00ce
                    00CE    457 _ADC_CHCTR4	=	0x00ce
                    00CF    458 G$ADC_CHCTR5$0$0 == 0x00cf
                    00CF    459 _ADC_CHCTR5	=	0x00cf
                    00D2    460 G$ADC_CHCTR6$0$0 == 0x00d2
                    00D2    461 _ADC_CHCTR6	=	0x00d2
                    00D3    462 G$ADC_CHCTR7$0$0 == 0x00d3
                    00D3    463 _ADC_CHCTR7	=	0x00d3
                    00CB    464 G$ADC_CHINCR$0$0 == 0x00cb
                    00CB    465 _ADC_CHINCR	=	0x00cb
                    00CA    466 G$ADC_CHINFR$0$0 == 0x00ca
                    00CA    467 _ADC_CHINFR	=	0x00ca
                    00CD    468 G$ADC_CHINPR$0$0 == 0x00cd
                    00CD    469 _ADC_CHINPR	=	0x00cd
                    00CC    470 G$ADC_CHINSR$0$0 == 0x00cc
                    00CC    471 _ADC_CHINSR	=	0x00cc
                    00CA    472 G$ADC_CRCR1$0$0 == 0x00ca
                    00CA    473 _ADC_CRCR1	=	0x00ca
                    00CC    474 G$ADC_CRMR1$0$0 == 0x00cc
                    00CC    475 _ADC_CRMR1	=	0x00cc
                    00CB    476 G$ADC_CRPR1$0$0 == 0x00cb
                    00CB    477 _ADC_CRPR1	=	0x00cb
                    00CF    478 G$ADC_ETRCR$0$0 == 0x00cf
                    00CF    479 _ADC_ETRCR	=	0x00cf
                    00CF    480 G$ADC_EVINCR$0$0 == 0x00cf
                    00CF    481 _ADC_EVINCR	=	0x00cf
                    00CE    482 G$ADC_EVINFR$0$0 == 0x00ce
                    00CE    483 _ADC_EVINFR	=	0x00ce
                    00D3    484 G$ADC_EVINPR$0$0 == 0x00d3
                    00D3    485 _ADC_EVINPR	=	0x00d3
                    00D2    486 G$ADC_EVINSR$0$0 == 0x00d2
                    00D2    487 _ADC_EVINSR	=	0x00d2
                    00CA    488 G$ADC_GLOBCTR$0$0 == 0x00ca
                    00CA    489 _ADC_GLOBCTR	=	0x00ca
                    00CB    490 G$ADC_GLOBSTR$0$0 == 0x00cb
                    00CB    491 _ADC_GLOBSTR	=	0x00cb
                    00CE    492 G$ADC_INPCR0$0$0 == 0x00ce
                    00CE    493 _ADC_INPCR0	=	0x00ce
                    00CD    494 G$ADC_LCBR$0$0 == 0x00cd
                    00CD    495 _ADC_LCBR	=	0x00cd
                    00D1    496 G$ADC_PAGE$0$0 == 0x00d1
                    00D1    497 _ADC_PAGE	=	0x00d1
                    00CC    498 G$ADC_PRAR$0$0 == 0x00cc
                    00CC    499 _ADC_PRAR	=	0x00cc
                    00CF    500 G$ADC_Q0R0$0$0 == 0x00cf
                    00CF    501 _ADC_Q0R0	=	0x00cf
                    00D2    502 G$ADC_QBUR0$0$0 == 0x00d2
                    00D2    503 _ADC_QBUR0	=	0x00d2
                    00D2    504 G$ADC_QINR0$0$0 == 0x00d2
                    00D2    505 _ADC_QINR0	=	0x00d2
                    00CD    506 G$ADC_QMR0$0$0 == 0x00cd
                    00CD    507 _ADC_QMR0	=	0x00cd
                    00CE    508 G$ADC_QSR0$0$0 == 0x00ce
                    00CE    509 _ADC_QSR0	=	0x00ce
                    00CA    510 G$ADC_RCR0$0$0 == 0x00ca
                    00CA    511 _ADC_RCR0	=	0x00ca
                    00CB    512 G$ADC_RCR1$0$0 == 0x00cb
                    00CB    513 _ADC_RCR1	=	0x00cb
                    00CC    514 G$ADC_RCR2$0$0 == 0x00cc
                    00CC    515 _ADC_RCR2	=	0x00cc
                    00CD    516 G$ADC_RCR3$0$0 == 0x00cd
                    00CD    517 _ADC_RCR3	=	0x00cd
                    00CB    518 G$ADC_RESR0H$0$0 == 0x00cb
                    00CB    519 _ADC_RESR0H	=	0x00cb
                    00CA    520 G$ADC_RESR0L$0$0 == 0x00ca
                    00CA    521 _ADC_RESR0L	=	0x00ca
                    00CD    522 G$ADC_RESR1H$0$0 == 0x00cd
                    00CD    523 _ADC_RESR1H	=	0x00cd
                    00CC    524 G$ADC_RESR1L$0$0 == 0x00cc
                    00CC    525 _ADC_RESR1L	=	0x00cc
                    00CF    526 G$ADC_RESR2H$0$0 == 0x00cf
                    00CF    527 _ADC_RESR2H	=	0x00cf
                    00CE    528 G$ADC_RESR2L$0$0 == 0x00ce
                    00CE    529 _ADC_RESR2L	=	0x00ce
                    00D3    530 G$ADC_RESR3H$0$0 == 0x00d3
                    00D3    531 _ADC_RESR3H	=	0x00d3
                    00D2    532 G$ADC_RESR3L$0$0 == 0x00d2
                    00D2    533 _ADC_RESR3L	=	0x00d2
                    00CB    534 G$ADC_RESRA0H$0$0 == 0x00cb
                    00CB    535 _ADC_RESRA0H	=	0x00cb
                    00CA    536 G$ADC_RESRA0L$0$0 == 0x00ca
                    00CA    537 _ADC_RESRA0L	=	0x00ca
                    00CD    538 G$ADC_RESRA1H$0$0 == 0x00cd
                    00CD    539 _ADC_RESRA1H	=	0x00cd
                    00CC    540 G$ADC_RESRA1L$0$0 == 0x00cc
                    00CC    541 _ADC_RESRA1L	=	0x00cc
                    00CF    542 G$ADC_RESRA2H$0$0 == 0x00cf
                    00CF    543 _ADC_RESRA2H	=	0x00cf
                    00CE    544 G$ADC_RESRA2L$0$0 == 0x00ce
                    00CE    545 _ADC_RESRA2L	=	0x00ce
                    00D3    546 G$ADC_RESRA3H$0$0 == 0x00d3
                    00D3    547 _ADC_RESRA3H	=	0x00d3
                    00D2    548 G$ADC_RESRA3L$0$0 == 0x00d2
                    00D2    549 _ADC_RESRA3L	=	0x00d2
                    00CE    550 G$ADC_VFCR$0$0 == 0x00ce
                    00CE    551 _ADC_VFCR	=	0x00ce
                    00F0    552 G$B$0$0 == 0x00f0
                    00F0    553 _B	=	0x00f0
                    00BD    554 G$BCON$0$0 == 0x00bd
                    00BD    555 _BCON	=	0x00bd
                    00BE    556 G$BG$0$0 == 0x00be
                    00BE    557 _BG	=	0x00be
                    00D8    558 G$CAN_ADCON$0$0 == 0x00d8
                    00D8    559 _CAN_ADCON	=	0x00d8
                    00DA    560 G$CAN_ADH$0$0 == 0x00da
                    00DA    561 _CAN_ADH	=	0x00da
                    00D9    562 G$CAN_ADL$0$0 == 0x00d9
                    00D9    563 _CAN_ADL	=	0x00d9
                    00DB    564 G$CAN_DATA0$0$0 == 0x00db
                    00DB    565 _CAN_DATA0	=	0x00db
                    00DC    566 G$CAN_DATA1$0$0 == 0x00dc
                    00DC    567 _CAN_DATA1	=	0x00dc
                    00DD    568 G$CAN_DATA2$0$0 == 0x00dd
                    00DD    569 _CAN_DATA2	=	0x00dd
                    00DE    570 G$CAN_DATA3$0$0 == 0x00de
                    00DE    571 _CAN_DATA3	=	0x00de
                    00FB    572 G$CCU6_CC60RH$0$0 == 0x00fb
                    00FB    573 _CCU6_CC60RH	=	0x00fb
                    00FA    574 G$CCU6_CC60RL$0$0 == 0x00fa
                    00FA    575 _CCU6_CC60RL	=	0x00fa
                    00FB    576 G$CCU6_CC60SRH$0$0 == 0x00fb
                    00FB    577 _CCU6_CC60SRH	=	0x00fb
                    00FA    578 G$CCU6_CC60SRL$0$0 == 0x00fa
                    00FA    579 _CCU6_CC60SRL	=	0x00fa
                    00FD    580 G$CCU6_CC61RH$0$0 == 0x00fd
                    00FD    581 _CCU6_CC61RH	=	0x00fd
                    00FC    582 G$CCU6_CC61RL$0$0 == 0x00fc
                    00FC    583 _CCU6_CC61RL	=	0x00fc
                    00FD    584 G$CCU6_CC61SRH$0$0 == 0x00fd
                    00FD    585 _CCU6_CC61SRH	=	0x00fd
                    00FC    586 G$CCU6_CC61SRL$0$0 == 0x00fc
                    00FC    587 _CCU6_CC61SRL	=	0x00fc
                    00FF    588 G$CCU6_CC62RH$0$0 == 0x00ff
                    00FF    589 _CCU6_CC62RH	=	0x00ff
                    00FE    590 G$CCU6_CC62RL$0$0 == 0x00fe
                    00FE    591 _CCU6_CC62RL	=	0x00fe
                    00FF    592 G$CCU6_CC62SRH$0$0 == 0x00ff
                    00FF    593 _CCU6_CC62SRH	=	0x00ff
                    00FE    594 G$CCU6_CC62SRL$0$0 == 0x00fe
                    00FE    595 _CCU6_CC62SRL	=	0x00fe
                    009B    596 G$CCU6_CC63RH$0$0 == 0x009b
                    009B    597 _CCU6_CC63RH	=	0x009b
                    009A    598 G$CCU6_CC63RL$0$0 == 0x009a
                    009A    599 _CCU6_CC63RL	=	0x009a
                    009B    600 G$CCU6_CC63SRH$0$0 == 0x009b
                    009B    601 _CCU6_CC63SRH	=	0x009b
                    009A    602 G$CCU6_CC63SRL$0$0 == 0x009a
                    009A    603 _CCU6_CC63SRL	=	0x009a
                    00A7    604 G$CCU6_CMPMODIFH$0$0 == 0x00a7
                    00A7    605 _CCU6_CMPMODIFH	=	0x00a7
                    00A6    606 G$CCU6_CMPMODIFL$0$0 == 0x00a6
                    00A6    607 _CCU6_CMPMODIFL	=	0x00a6
                    00FF    608 G$CCU6_CMPSTATH$0$0 == 0x00ff
                    00FF    609 _CCU6_CMPSTATH	=	0x00ff
                    00FE    610 G$CCU6_CMPSTATL$0$0 == 0x00fe
                    00FE    611 _CCU6_CMPSTATL	=	0x00fe
                    009D    612 G$CCU6_IENH$0$0 == 0x009d
                    009D    613 _CCU6_IENH	=	0x009d
                    009C    614 G$CCU6_IENL$0$0 == 0x009c
                    009C    615 _CCU6_IENL	=	0x009c
                    009F    616 G$CCU6_INPH$0$0 == 0x009f
                    009F    617 _CCU6_INPH	=	0x009f
                    009E    618 G$CCU6_INPL$0$0 == 0x009e
                    009E    619 _CCU6_INPL	=	0x009e
                    009D    620 G$CCU6_ISH$0$0 == 0x009d
                    009D    621 _CCU6_ISH	=	0x009d
                    009C    622 G$CCU6_ISL$0$0 == 0x009c
                    009C    623 _CCU6_ISL	=	0x009c
                    00A5    624 G$CCU6_ISRH$0$0 == 0x00a5
                    00A5    625 _CCU6_ISRH	=	0x00a5
                    00A4    626 G$CCU6_ISRL$0$0 == 0x00a4
                    00A4    627 _CCU6_ISRL	=	0x00a4
                    00A5    628 G$CCU6_ISSH$0$0 == 0x00a5
                    00A5    629 _CCU6_ISSH	=	0x00a5
                    00A4    630 G$CCU6_ISSL$0$0 == 0x00a4
                    00A4    631 _CCU6_ISSL	=	0x00a4
                    00A7    632 G$CCU6_MCMCTR$0$0 == 0x00a7
                    00A7    633 _CCU6_MCMCTR	=	0x00a7
                    009B    634 G$CCU6_MCMOUTH$0$0 == 0x009b
                    009B    635 _CCU6_MCMOUTH	=	0x009b
                    009A    636 G$CCU6_MCMOUTL$0$0 == 0x009a
                    009A    637 _CCU6_MCMOUTL	=	0x009a
                    009F    638 G$CCU6_MCMOUTSH$0$0 == 0x009f
                    009F    639 _CCU6_MCMOUTSH	=	0x009f
                    009E    640 G$CCU6_MCMOUTSL$0$0 == 0x009e
                    009E    641 _CCU6_MCMOUTSL	=	0x009e
                    00FD    642 G$CCU6_MODCTRH$0$0 == 0x00fd
                    00FD    643 _CCU6_MODCTRH	=	0x00fd
                    00FC    644 G$CCU6_MODCTRL$0$0 == 0x00fc
                    00FC    645 _CCU6_MODCTRL	=	0x00fc
                    00A3    646 G$CCU6_PAGE$0$0 == 0x00a3
                    00A3    647 _CCU6_PAGE	=	0x00a3
                    009F    648 G$CCU6_PISEL0H$0$0 == 0x009f
                    009F    649 _CCU6_PISEL0H	=	0x009f
                    009E    650 G$CCU6_PISEL0L$0$0 == 0x009e
                    009E    651 _CCU6_PISEL0L	=	0x009e
                    00A4    652 G$CCU6_PISEL2$0$0 == 0x00a4
                    00A4    653 _CCU6_PISEL2	=	0x00a4
                    00A6    654 G$CCU6_PSLR$0$0 == 0x00a6
                    00A6    655 _CCU6_PSLR	=	0x00a6
                    00A5    656 G$CCU6_T12DTCH$0$0 == 0x00a5
                    00A5    657 _CCU6_T12DTCH	=	0x00a5
                    00A4    658 G$CCU6_T12DTCL$0$0 == 0x00a4
                    00A4    659 _CCU6_T12DTCL	=	0x00a4
                    00FB    660 G$CCU6_T12H$0$0 == 0x00fb
                    00FB    661 _CCU6_T12H	=	0x00fb
                    00FA    662 G$CCU6_T12L$0$0 == 0x00fa
                    00FA    663 _CCU6_T12L	=	0x00fa
                    009B    664 G$CCU6_T12MSELH$0$0 == 0x009b
                    009B    665 _CCU6_T12MSELH	=	0x009b
                    009A    666 G$CCU6_T12MSELL$0$0 == 0x009a
                    009A    667 _CCU6_T12MSELL	=	0x009a
                    009D    668 G$CCU6_T12PRH$0$0 == 0x009d
                    009D    669 _CCU6_T12PRH	=	0x009d
                    009C    670 G$CCU6_T12PRL$0$0 == 0x009c
                    009C    671 _CCU6_T12PRL	=	0x009c
                    00FD    672 G$CCU6_T13H$0$0 == 0x00fd
                    00FD    673 _CCU6_T13H	=	0x00fd
                    00FC    674 G$CCU6_T13L$0$0 == 0x00fc
                    00FC    675 _CCU6_T13L	=	0x00fc
                    009F    676 G$CCU6_T13PRH$0$0 == 0x009f
                    009F    677 _CCU6_T13PRH	=	0x009f
                    009E    678 G$CCU6_T13PRL$0$0 == 0x009e
                    009E    679 _CCU6_T13PRL	=	0x009e
                    00A7    680 G$CCU6_TCTR0H$0$0 == 0x00a7
                    00A7    681 _CCU6_TCTR0H	=	0x00a7
                    00A6    682 G$CCU6_TCTR0L$0$0 == 0x00a6
                    00A6    683 _CCU6_TCTR0L	=	0x00a6
                    00FB    684 G$CCU6_TCTR2H$0$0 == 0x00fb
                    00FB    685 _CCU6_TCTR2H	=	0x00fb
                    00FA    686 G$CCU6_TCTR2L$0$0 == 0x00fa
                    00FA    687 _CCU6_TCTR2L	=	0x00fa
                    009D    688 G$CCU6_TCTR4H$0$0 == 0x009d
                    009D    689 _CCU6_TCTR4H	=	0x009d
                    009C    690 G$CCU6_TCTR4L$0$0 == 0x009c
                    009C    691 _CCU6_TCTR4L	=	0x009c
                    00FF    692 G$CCU6_TRPCTRH$0$0 == 0x00ff
                    00FF    693 _CCU6_TRPCTRH	=	0x00ff
                    00FE    694 G$CCU6_TRPCTRL$0$0 == 0x00fe
                    00FE    695 _CCU6_TRPCTRL	=	0x00fe
                    00A1    696 G$CD_CON$0$0 == 0x00a1
                    00A1    697 _CD_CON	=	0x00a1
                    009B    698 G$CD_CORDXH$0$0 == 0x009b
                    009B    699 _CD_CORDXH	=	0x009b
                    009A    700 G$CD_CORDXL$0$0 == 0x009a
                    009A    701 _CD_CORDXL	=	0x009a
                    009D    702 G$CD_CORDYH$0$0 == 0x009d
                    009D    703 _CD_CORDYH	=	0x009d
                    009C    704 G$CD_CORDYL$0$0 == 0x009c
                    009C    705 _CD_CORDYL	=	0x009c
                    009F    706 G$CD_CORDZH$0$0 == 0x009f
                    009F    707 _CD_CORDZH	=	0x009f
                    009E    708 G$CD_CORDZL$0$0 == 0x009e
                    009E    709 _CD_CORDZL	=	0x009e
                    00A0    710 G$CD_STATC$0$0 == 0x00a0
                    00A0    711 _CD_STATC	=	0x00a0
                    00BA    712 G$CMCON$0$0 == 0x00ba
                    00BA    713 _CMCON	=	0x00ba
                    00BE    714 G$COCON$0$0 == 0x00be
                    00BE    715 _COCON	=	0x00be
                    0083    716 G$DPH$0$0 == 0x0083
                    0083    717 _DPH	=	0x0083
                    0082    718 G$DPL$0$0 == 0x0082
                    0082    719 _DPL	=	0x0082
                    00A2    720 G$EO$0$0 == 0x00a2
                    00A2    721 _EO	=	0x00a2
                    00B7    722 G$EXICON0$0$0 == 0x00b7
                    00B7    723 _EXICON0	=	0x00b7
                    00BA    724 G$EXICON1$0$0 == 0x00ba
                    00BA    725 _EXICON1	=	0x00ba
                    00E9    726 G$FDCON$0$0 == 0x00e9
                    00E9    727 _FDCON	=	0x00e9
                    00EB    728 G$FDRES$0$0 == 0x00eb
                    00EB    729 _FDRES	=	0x00eb
                    00EA    730 G$FDSTEP$0$0 == 0x00ea
                    00EA    731 _FDSTEP	=	0x00ea
                    00BD    732 G$FEAH$0$0 == 0x00bd
                    00BD    733 _FEAH	=	0x00bd
                    00BC    734 G$FEAL$0$0 == 0x00bc
                    00BC    735 _FEAL	=	0x00bc
                    00F7    736 G$HWBPDR$0$0 == 0x00f7
                    00F7    737 _HWBPDR	=	0x00f7
                    00F6    738 G$HWBPSR$0$0 == 0x00f6
                    00F6    739 _HWBPSR	=	0x00f6
                    00B3    740 G$ID$0$0 == 0x00b3
                    00B3    741 _ID	=	0x00b3
                    00A8    742 G$IEN0$0$0 == 0x00a8
                    00A8    743 _IEN0	=	0x00a8
                    00E8    744 G$IEN1$0$0 == 0x00e8
                    00E8    745 _IEN1	=	0x00e8
                    00B8    746 G$IP$0$0 == 0x00b8
                    00B8    747 _IP	=	0x00b8
                    00F8    748 G$IP1$0$0 == 0x00f8
                    00F8    749 _IP1	=	0x00f8
                    00B9    750 G$IPH$0$0 == 0x00b9
                    00B9    751 _IPH	=	0x00b9
                    00F9    752 G$IPH1$0$0 == 0x00f9
                    00F9    753 _IPH1	=	0x00f9
                    00B4    754 G$IRCON0$0$0 == 0x00b4
                    00B4    755 _IRCON0	=	0x00b4
                    00B5    756 G$IRCON1$0$0 == 0x00b5
                    00B5    757 _IRCON1	=	0x00b5
                    00B6    758 G$IRCON2$0$0 == 0x00b6
                    00B6    759 _IRCON2	=	0x00b6
                    00B4    760 G$IRCON3$0$0 == 0x00b4
                    00B4    761 _IRCON3	=	0x00b4
                    00B5    762 G$IRCON4$0$0 == 0x00b5
                    00B5    763 _IRCON4	=	0x00b5
                    00B2    764 G$MDU_MD0$0$0 == 0x00b2
                    00B2    765 _MDU_MD0	=	0x00b2
                    00B3    766 G$MDU_MD1$0$0 == 0x00b3
                    00B3    767 _MDU_MD1	=	0x00b3
                    00B4    768 G$MDU_MD2$0$0 == 0x00b4
                    00B4    769 _MDU_MD2	=	0x00b4
                    00B5    770 G$MDU_MD3$0$0 == 0x00b5
                    00B5    771 _MDU_MD3	=	0x00b5
                    00B6    772 G$MDU_MD4$0$0 == 0x00b6
                    00B6    773 _MDU_MD4	=	0x00b6
                    00B7    774 G$MDU_MD5$0$0 == 0x00b7
                    00B7    775 _MDU_MD5	=	0x00b7
                    00B1    776 G$MDU_MDUCON$0$0 == 0x00b1
                    00B1    777 _MDU_MDUCON	=	0x00b1
                    00B0    778 G$MDU_MDUSTAT$0$0 == 0x00b0
                    00B0    779 _MDU_MDUSTAT	=	0x00b0
                    00B2    780 G$MDU_MR0$0$0 == 0x00b2
                    00B2    781 _MDU_MR0	=	0x00b2
                    00B3    782 G$MDU_MR1$0$0 == 0x00b3
                    00B3    783 _MDU_MR1	=	0x00b3
                    00B4    784 G$MDU_MR2$0$0 == 0x00b4
                    00B4    785 _MDU_MR2	=	0x00b4
                    00B5    786 G$MDU_MR3$0$0 == 0x00b5
                    00B5    787 _MDU_MR3	=	0x00b5
                    00B6    788 G$MDU_MR4$0$0 == 0x00b6
                    00B6    789 _MDU_MR4	=	0x00b6
                    00B7    790 G$MDU_MR5$0$0 == 0x00b7
                    00B7    791 _MDU_MR5	=	0x00b7
                    00E9    792 G$MISC_CON$0$0 == 0x00e9
                    00E9    793 _MISC_CON	=	0x00e9
                    00F3    794 G$MMBPCR$0$0 == 0x00f3
                    00F3    795 _MMBPCR	=	0x00f3
                    00F1    796 G$MMCR$0$0 == 0x00f1
                    00F1    797 _MMCR	=	0x00f1
                    00E9    798 G$MMCR2$0$0 == 0x00e9
                    00E9    799 _MMCR2	=	0x00e9
                    00F5    800 G$MMDR$0$0 == 0x00f5
                    00F5    801 _MMDR	=	0x00f5
                    00F4    802 G$MMICR$0$0 == 0x00f4
                    00F4    803 _MMICR	=	0x00f4
                    00F2    804 G$MMSR$0$0 == 0x00f2
                    00F2    805 _MMSR	=	0x00f2
                    00EB    806 G$MMWR1$0$0 == 0x00eb
                    00EB    807 _MMWR1	=	0x00eb
                    00EC    808 G$MMWR2$0$0 == 0x00ec
                    00EC    809 _MMWR2	=	0x00ec
                    00B3    810 G$MODPISEL$0$0 == 0x00b3
                    00B3    811 _MODPISEL	=	0x00b3
                    00B7    812 G$MODPISEL1$0$0 == 0x00b7
                    00B7    813 _MODPISEL1	=	0x00b7
                    00BA    814 G$MODPISEL2$0$0 == 0x00ba
                    00BA    815 _MODPISEL2	=	0x00ba
                    00BD    816 G$MODSUSP$0$0 == 0x00bd
                    00BD    817 _MODSUSP	=	0x00bd
                    00BB    818 G$NMICON$0$0 == 0x00bb
                    00BB    819 _NMICON	=	0x00bb
                    00BC    820 G$NMISR$0$0 == 0x00bc
                    00BC    821 _NMISR	=	0x00bc
                    00B6    822 G$OSC_CON$0$0 == 0x00b6
                    00B6    823 _OSC_CON	=	0x00b6
                    0080    824 G$P0_ALTSEL0$0$0 == 0x0080
                    0080    825 _P0_ALTSEL0	=	0x0080
                    0086    826 G$P0_ALTSEL1$0$0 == 0x0086
                    0086    827 _P0_ALTSEL1	=	0x0086
                    0080    828 G$P0_DATA$0$0 == 0x0080
                    0080    829 _P0_DATA	=	0x0080
                    0086    830 G$P0_DIR$0$0 == 0x0086
                    0086    831 _P0_DIR	=	0x0086
                    0080    832 G$P0_OD$0$0 == 0x0080
                    0080    833 _P0_OD	=	0x0080
                    0086    834 G$P0_PUDEN$0$0 == 0x0086
                    0086    835 _P0_PUDEN	=	0x0086
                    0080    836 G$P0_PUDSEL$0$0 == 0x0080
                    0080    837 _P0_PUDSEL	=	0x0080
                    0090    838 G$P1_ALTSEL0$0$0 == 0x0090
                    0090    839 _P1_ALTSEL0	=	0x0090
                    0091    840 G$P1_ALTSEL1$0$0 == 0x0091
                    0091    841 _P1_ALTSEL1	=	0x0091
                    0090    842 G$P1_DATA$0$0 == 0x0090
                    0090    843 _P1_DATA	=	0x0090
                    0091    844 G$P1_DIR$0$0 == 0x0091
                    0091    845 _P1_DIR	=	0x0091
                    0090    846 G$P1_OD$0$0 == 0x0090
                    0090    847 _P1_OD	=	0x0090
                    0091    848 G$P1_PUDEN$0$0 == 0x0091
                    0091    849 _P1_PUDEN	=	0x0091
                    0090    850 G$P1_PUDSEL$0$0 == 0x0090
                    0090    851 _P1_PUDSEL	=	0x0090
                    00A0    852 G$P2_DATA$0$0 == 0x00a0
                    00A0    853 _P2_DATA	=	0x00a0
                    00A1    854 G$P2_DIR$0$0 == 0x00a1
                    00A1    855 _P2_DIR	=	0x00a1
                    00A1    856 G$P2_PUDEN$0$0 == 0x00a1
                    00A1    857 _P2_PUDEN	=	0x00a1
                    00A0    858 G$P2_PUDSEL$0$0 == 0x00a0
                    00A0    859 _P2_PUDSEL	=	0x00a0
                    00B0    860 G$P3_ALTSEL0$0$0 == 0x00b0
                    00B0    861 _P3_ALTSEL0	=	0x00b0
                    00B1    862 G$P3_ALTSEL1$0$0 == 0x00b1
                    00B1    863 _P3_ALTSEL1	=	0x00b1
                    00B0    864 G$P3_DATA$0$0 == 0x00b0
                    00B0    865 _P3_DATA	=	0x00b0
                    00B1    866 G$P3_DIR$0$0 == 0x00b1
                    00B1    867 _P3_DIR	=	0x00b1
                    00B0    868 G$P3_OD$0$0 == 0x00b0
                    00B0    869 _P3_OD	=	0x00b0
                    00B1    870 G$P3_PUDEN$0$0 == 0x00b1
                    00B1    871 _P3_PUDEN	=	0x00b1
                    00B0    872 G$P3_PUDSEL$0$0 == 0x00b0
                    00B0    873 _P3_PUDSEL	=	0x00b0
                    00C8    874 G$P4_ALTSEL0$0$0 == 0x00c8
                    00C8    875 _P4_ALTSEL0	=	0x00c8
                    00C9    876 G$P4_ALTSEL1$0$0 == 0x00c9
                    00C9    877 _P4_ALTSEL1	=	0x00c9
                    00C8    878 G$P4_DATA$0$0 == 0x00c8
                    00C8    879 _P4_DATA	=	0x00c8
                    00C9    880 G$P4_DIR$0$0 == 0x00c9
                    00C9    881 _P4_DIR	=	0x00c9
                    00C8    882 G$P4_OD$0$0 == 0x00c8
                    00C8    883 _P4_OD	=	0x00c8
                    00C9    884 G$P4_PUDEN$0$0 == 0x00c9
                    00C9    885 _P4_PUDEN	=	0x00c9
                    00C8    886 G$P4_PUDSEL$0$0 == 0x00c8
                    00C8    887 _P4_PUDSEL	=	0x00c8
                    0092    888 G$P5_ALTSEL0$0$0 == 0x0092
                    0092    889 _P5_ALTSEL0	=	0x0092
                    0093    890 G$P5_ALTSEL1$0$0 == 0x0093
                    0093    891 _P5_ALTSEL1	=	0x0093
                    0092    892 G$P5_DATA$0$0 == 0x0092
                    0092    893 _P5_DATA	=	0x0092
                    0093    894 G$P5_DIR$0$0 == 0x0093
                    0093    895 _P5_DIR	=	0x0093
                    0092    896 G$P5_OD$0$0 == 0x0092
                    0092    897 _P5_OD	=	0x0092
                    0093    898 G$P5_PUDEN$0$0 == 0x0093
                    0093    899 _P5_PUDEN	=	0x0093
                    0092    900 G$P5_PUDSEL$0$0 == 0x0092
                    0092    901 _P5_PUDSEL	=	0x0092
                    00BB    902 G$PASSWD$0$0 == 0x00bb
                    00BB    903 _PASSWD	=	0x00bb
                    0087    904 G$PCON$0$0 == 0x0087
                    0087    905 _PCON	=	0x0087
                    00B7    906 G$PLL_CON$0$0 == 0x00b7
                    00B7    907 _PLL_CON	=	0x00b7
                    00B4    908 G$PMCON0$0$0 == 0x00b4
                    00B4    909 _PMCON0	=	0x00b4
                    00B5    910 G$PMCON1$0$0 == 0x00b5
                    00B5    911 _PMCON1	=	0x00b5
                    00BB    912 G$PMCON2$0$0 == 0x00bb
                    00BB    913 _PMCON2	=	0x00bb
                    00B2    914 G$PORT_PAGE$0$0 == 0x00b2
                    00B2    915 _PORT_PAGE	=	0x00b2
                    00D0    916 G$PSW$0$0 == 0x00d0
                    00D0    917 _PSW	=	0x00d0
                    0099    918 G$SBUF$0$0 == 0x0099
                    0099    919 _SBUF	=	0x0099
                    0098    920 G$SCON$0$0 == 0x0098
                    0098    921 _SCON	=	0x0098
                    00BF    922 G$SCU_PAGE$0$0 == 0x00bf
                    00BF    923 _SCU_PAGE	=	0x00bf
                    0081    924 G$SP$0$0 == 0x0081
                    0081    925 _SP	=	0x0081
                    00AF    926 G$SSC_BRH$0$0 == 0x00af
                    00AF    927 _SSC_BRH	=	0x00af
                    00AE    928 G$SSC_BRL$0$0 == 0x00ae
                    00AE    929 _SSC_BRL	=	0x00ae
                    00AB    930 G$SSC_CONH_O$0$0 == 0x00ab
                    00AB    931 _SSC_CONH_O	=	0x00ab
                    00AB    932 G$SSC_CONH_P$0$0 == 0x00ab
                    00AB    933 _SSC_CONH_P	=	0x00ab
                    00AA    934 G$SSC_CONL_O$0$0 == 0x00aa
                    00AA    935 _SSC_CONL_O	=	0x00aa
                    00AA    936 G$SSC_CONL_P$0$0 == 0x00aa
                    00AA    937 _SSC_CONL_P	=	0x00aa
                    00A9    938 G$SSC_PISEL$0$0 == 0x00a9
                    00A9    939 _SSC_PISEL	=	0x00a9
                    00AD    940 G$SSC_RBL$0$0 == 0x00ad
                    00AD    941 _SSC_RBL	=	0x00ad
                    00AC    942 G$SSC_TBL$0$0 == 0x00ac
                    00AC    943 _SSC_TBL	=	0x00ac
                    008F    944 G$SYSCON0$0$0 == 0x008f
                    008F    945 _SYSCON0	=	0x008f
                    00C3    946 G$T21_RC2H$0$0 == 0x00c3
                    00C3    947 _T21_RC2H	=	0x00c3
                    00C2    948 G$T21_RC2L$0$0 == 0x00c2
                    00C2    949 _T21_RC2L	=	0x00c2
                    00C0    950 G$T21_T2CON$0$0 == 0x00c0
                    00C0    951 _T21_T2CON	=	0x00c0
                    00C5    952 G$T21_T2H$0$0 == 0x00c5
                    00C5    953 _T21_T2H	=	0x00c5
                    00C4    954 G$T21_T2L$0$0 == 0x00c4
                    00C4    955 _T21_T2L	=	0x00c4
                    00C1    956 G$T21_T2MOD$0$0 == 0x00c1
                    00C1    957 _T21_T2MOD	=	0x00c1
                    00C3    958 G$T2_RC2H$0$0 == 0x00c3
                    00C3    959 _T2_RC2H	=	0x00c3
                    00C2    960 G$T2_RC2L$0$0 == 0x00c2
                    00C2    961 _T2_RC2L	=	0x00c2
                    00C0    962 G$T2_T2CON$0$0 == 0x00c0
                    00C0    963 _T2_T2CON	=	0x00c0
                    00C5    964 G$T2_T2H$0$0 == 0x00c5
                    00C5    965 _T2_T2H	=	0x00c5
                    00C4    966 G$T2_T2L$0$0 == 0x00c4
                    00C4    967 _T2_T2L	=	0x00c4
                    00C1    968 G$T2_T2MOD$0$0 == 0x00c1
                    00C1    969 _T2_T2MOD	=	0x00c1
                    0088    970 G$TCON$0$0 == 0x0088
                    0088    971 _TCON	=	0x0088
                    008C    972 G$TH0$0$0 == 0x008c
                    008C    973 _TH0	=	0x008c
                    008D    974 G$TH1$0$0 == 0x008d
                    008D    975 _TH1	=	0x008d
                    008A    976 G$TL0$0$0 == 0x008a
                    008A    977 _TL0	=	0x008a
                    008B    978 G$TL1$0$0 == 0x008b
                    008B    979 _TL1	=	0x008b
                    0089    980 G$TMOD$0$0 == 0x0089
                    0089    981 _TMOD	=	0x0089
                    00CA    982 G$UART1_BCON$0$0 == 0x00ca
                    00CA    983 _UART1_BCON	=	0x00ca
                    00CB    984 G$UART1_BG$0$0 == 0x00cb
                    00CB    985 _UART1_BG	=	0x00cb
                    00CC    986 G$UART1_FDCON$0$0 == 0x00cc
                    00CC    987 _UART1_FDCON	=	0x00cc
                    00CE    988 G$UART1_FDRES$0$0 == 0x00ce
                    00CE    989 _UART1_FDRES	=	0x00ce
                    00CD    990 G$UART1_FDSTEP$0$0 == 0x00cd
                    00CD    991 _UART1_FDSTEP	=	0x00cd
                    00C9    992 G$UART1_SBUF$0$0 == 0x00c9
                    00C9    993 _UART1_SBUF	=	0x00c9
                    00C8    994 G$UART1_SCON$0$0 == 0x00c8
                    00C8    995 _UART1_SCON	=	0x00c8
                    00BB    996 G$WDTCON$0$0 == 0x00bb
                    00BB    997 _WDTCON	=	0x00bb
                    00BF    998 G$WDTH$0$0 == 0x00bf
                    00BF    999 _WDTH	=	0x00bf
                    00BE   1000 G$WDTL$0$0 == 0x00be
                    00BE   1001 _WDTL	=	0x00be
                    00BC   1002 G$WDTREL$0$0 == 0x00bc
                    00BC   1003 _WDTREL	=	0x00bc
                    00BD   1004 G$WDTWINB$0$0 == 0x00bd
                    00BD   1005 _WDTWINB	=	0x00bd
                    00B3   1006 G$XADDRH$0$0 == 0x00b3
                    00B3   1007 _XADDRH	=	0x00b3
                    CBCA   1008 G$ADC_RESR0LH$0$0 == 0xcbca
                    CBCA   1009 _ADC_RESR0LH	=	0xcbca
                    CDCC   1010 G$ADC_RESR1LH$0$0 == 0xcdcc
                    CDCC   1011 _ADC_RESR1LH	=	0xcdcc
                    CFCE   1012 G$ADC_RESR2LH$0$0 == 0xcfce
                    CFCE   1013 _ADC_RESR2LH	=	0xcfce
                    D3D2   1014 G$ADC_RESR3LH$0$0 == 0xd3d2
                    D3D2   1015 _ADC_RESR3LH	=	0xd3d2
                    CBCA   1016 G$ADC_RESRA0LH$0$0 == 0xcbca
                    CBCA   1017 _ADC_RESRA0LH	=	0xcbca
                    CDCC   1018 G$ADC_RESRA1LH$0$0 == 0xcdcc
                    CDCC   1019 _ADC_RESRA1LH	=	0xcdcc
                    CFCE   1020 G$ADC_RESRA2LH$0$0 == 0xcfce
                    CFCE   1021 _ADC_RESRA2LH	=	0xcfce
                    D3D2   1022 G$ADC_RESRA3LH$0$0 == 0xd3d2
                    D3D2   1023 _ADC_RESRA3LH	=	0xd3d2
                    FBFA   1024 G$CCU6_CC60RLH$0$0 == 0xfbfa
                    FBFA   1025 _CCU6_CC60RLH	=	0xfbfa
                    FBFA   1026 G$CCU6_CC60SRLH$0$0 == 0xfbfa
                    FBFA   1027 _CCU6_CC60SRLH	=	0xfbfa
                    FDFC   1028 G$CCU6_CC61RLH$0$0 == 0xfdfc
                    FDFC   1029 _CCU6_CC61RLH	=	0xfdfc
                    FDFC   1030 G$CCU6_CC61SRLH$0$0 == 0xfdfc
                    FDFC   1031 _CCU6_CC61SRLH	=	0xfdfc
                    FFFE   1032 G$CCU6_CC62RLH$0$0 == 0xfffe
                    FFFE   1033 _CCU6_CC62RLH	=	0xfffe
                    FFFE   1034 G$CCU6_CC62SRLH$0$0 == 0xfffe
                    FFFE   1035 _CCU6_CC62SRLH	=	0xfffe
                    9B9A   1036 G$CCU6_CC63RLH$0$0 == 0x9b9a
                    9B9A   1037 _CCU6_CC63RLH	=	0x9b9a
                    9B9A   1038 G$CCU6_CC63SRLH$0$0 == 0x9b9a
                    9B9A   1039 _CCU6_CC63SRLH	=	0x9b9a
                    FBFA   1040 G$CCU6_T12LH$0$0 == 0xfbfa
                    FBFA   1041 _CCU6_T12LH	=	0xfbfa
                    9D9C   1042 G$CCU6_T12PRLH$0$0 == 0x9d9c
                    9D9C   1043 _CCU6_T12PRLH	=	0x9d9c
                    FDFC   1044 G$CCU6_T13LH$0$0 == 0xfdfc
                    FDFC   1045 _CCU6_T13LH	=	0xfdfc
                    9F9E   1046 G$CCU6_T13PRLH$0$0 == 0x9f9e
                    9F9E   1047 _CCU6_T13PRLH	=	0x9f9e
                    C3C2   1048 G$T2_RC2LH$0$0 == 0xc3c2
                    C3C2   1049 _T2_RC2LH	=	0xc3c2
                    C5C4   1050 G$T2_T2LH$0$0 == 0xc5c4
                    C5C4   1051 _T2_T2LH	=	0xc5c4
                           1052 ;--------------------------------------------------------
                           1053 ; special function bits
                           1054 ;--------------------------------------------------------
                           1055 	.area RSEG    (DATA)
                    00A0   1056 G$CD_BSY$0$0 == 0x00a0
                    00A0   1057 _CD_BSY	=	0x00a0
                    00A4   1058 G$DMAP$0$0 == 0x00a4
                    00A4   1059 _DMAP	=	0x00a4
                    00A2   1060 G$EOC$0$0 == 0x00a2
                    00A2   1061 _EOC	=	0x00a2
                    00A1   1062 G$ERROR$0$0 == 0x00a1
                    00A1   1063 _ERROR	=	0x00a1
                    00A3   1064 G$INT_EN$0$0 == 0x00a3
                    00A3   1065 _INT_EN	=	0x00a3
                    00A5   1066 G$KEEPX$0$0 == 0x00a5
                    00A5   1067 _KEEPX	=	0x00a5
                    00A6   1068 G$KEEPY$0$0 == 0x00a6
                    00A6   1069 _KEEPY	=	0x00a6
                    00A7   1070 G$KEEPZ$0$0 == 0x00a7
                    00A7   1071 _KEEPZ	=	0x00a7
                    00AF   1072 G$EA$0$0 == 0x00af
                    00AF   1073 _EA	=	0x00af
                    00AC   1074 G$ES$0$0 == 0x00ac
                    00AC   1075 _ES	=	0x00ac
                    00A9   1076 G$ET0$0$0 == 0x00a9
                    00A9   1077 _ET0	=	0x00a9
                    00AB   1078 G$ET1$0$0 == 0x00ab
                    00AB   1079 _ET1	=	0x00ab
                    00AD   1080 G$ET2$0$0 == 0x00ad
                    00AD   1081 _ET2	=	0x00ad
                    00A8   1082 G$EX0$0$0 == 0x00a8
                    00A8   1083 _EX0	=	0x00a8
                    00AA   1084 G$EX1$0$0 == 0x00aa
                    00AA   1085 _EX1	=	0x00aa
                    00E8   1086 G$EADC$0$0 == 0x00e8
                    00E8   1087 _EADC	=	0x00e8
                    00EC   1088 G$ECCIP0$0$0 == 0x00ec
                    00EC   1089 _ECCIP0	=	0x00ec
                    00ED   1090 G$ECCIP1$0$0 == 0x00ed
                    00ED   1091 _ECCIP1	=	0x00ed
                    00EE   1092 G$ECCIP2$0$0 == 0x00ee
                    00EE   1093 _ECCIP2	=	0x00ee
                    00EF   1094 G$ECCIP3$0$0 == 0x00ef
                    00EF   1095 _ECCIP3	=	0x00ef
                    00E9   1096 G$ESSC$0$0 == 0x00e9
                    00E9   1097 _ESSC	=	0x00e9
                    00EA   1098 G$EX2$0$0 == 0x00ea
                    00EA   1099 _EX2	=	0x00ea
                    00EB   1100 G$EXM$0$0 == 0x00eb
                    00EB   1101 _EXM	=	0x00eb
                    00F8   1102 G$PADC$0$0 == 0x00f8
                    00F8   1103 _PADC	=	0x00f8
                    00FC   1104 G$PCCIP0$0$0 == 0x00fc
                    00FC   1105 _PCCIP0	=	0x00fc
                    00FD   1106 G$PCCIP1$0$0 == 0x00fd
                    00FD   1107 _PCCIP1	=	0x00fd
                    00FE   1108 G$PCCIP2$0$0 == 0x00fe
                    00FE   1109 _PCCIP2	=	0x00fe
                    00FF   1110 G$PCCIP3$0$0 == 0x00ff
                    00FF   1111 _PCCIP3	=	0x00ff
                    00F9   1112 G$PSSC$0$0 == 0x00f9
                    00F9   1113 _PSSC	=	0x00f9
                    00FA   1114 G$PX2$0$0 == 0x00fa
                    00FA   1115 _PX2	=	0x00fa
                    00FB   1116 G$PXM$0$0 == 0x00fb
                    00FB   1117 _PXM	=	0x00fb
                    00BC   1118 G$PS$0$0 == 0x00bc
                    00BC   1119 _PS	=	0x00bc
                    00B9   1120 G$PT0$0$0 == 0x00b9
                    00B9   1121 _PT0	=	0x00b9
                    00BB   1122 G$PT1$0$0 == 0x00bb
                    00BB   1123 _PT1	=	0x00bb
                    00BD   1124 G$PT2$0$0 == 0x00bd
                    00BD   1125 _PT2	=	0x00bd
                    00B8   1126 G$PX0$0$0 == 0x00b8
                    00B8   1127 _PX0	=	0x00b8
                    00BA   1128 G$PX1$0$0 == 0x00ba
                    00BA   1129 _PX1	=	0x00ba
                    00B1   1130 G$IERR$0$0 == 0x00b1
                    00B1   1131 _IERR	=	0x00b1
                    00B0   1132 G$IRDY$0$0 == 0x00b0
                    00B0   1133 _IRDY	=	0x00b0
                    00B2   1134 G$MDU_BSY$0$0 == 0x00b2
                    00B2   1135 _MDU_BSY	=	0x00b2
                    00D6   1136 G$AC$0$0 == 0x00d6
                    00D6   1137 _AC	=	0x00d6
                    00D7   1138 G$CY$0$0 == 0x00d7
                    00D7   1139 _CY	=	0x00d7
                    00D5   1140 G$F0$0$0 == 0x00d5
                    00D5   1141 _F0	=	0x00d5
                    00D1   1142 G$F1$0$0 == 0x00d1
                    00D1   1143 _F1	=	0x00d1
                    00D2   1144 G$OV$0$0 == 0x00d2
                    00D2   1145 _OV	=	0x00d2
                    00D0   1146 G$P$0$0 == 0x00d0
                    00D0   1147 _P	=	0x00d0
                    00D3   1148 G$RS0$0$0 == 0x00d3
                    00D3   1149 _RS0	=	0x00d3
                    00D4   1150 G$RS1$0$0 == 0x00d4
                    00D4   1151 _RS1	=	0x00d4
                    009A   1152 G$RB8$0$0 == 0x009a
                    009A   1153 _RB8	=	0x009a
                    009C   1154 G$REN$0$0 == 0x009c
                    009C   1155 _REN	=	0x009c
                    0098   1156 G$RI$0$0 == 0x0098
                    0098   1157 _RI	=	0x0098
                    009F   1158 G$SM0$0$0 == 0x009f
                    009F   1159 _SM0	=	0x009f
                    009E   1160 G$SM1$0$0 == 0x009e
                    009E   1161 _SM1	=	0x009e
                    009D   1162 G$SM2$0$0 == 0x009d
                    009D   1163 _SM2	=	0x009d
                    009B   1164 G$TB8$0$0 == 0x009b
                    009B   1165 _TB8	=	0x009b
                    0099   1166 G$TI$0$0 == 0x0099
                    0099   1167 _TI	=	0x0099
                    00C1   1168 G$C_T2$0$0 == 0x00c1
                    00C1   1169 _C_T2	=	0x00c1
                    00C0   1170 G$CP_RL2$0$0 == 0x00c0
                    00C0   1171 _CP_RL2	=	0x00c0
                    00C3   1172 G$EXEN2$0$0 == 0x00c3
                    00C3   1173 _EXEN2	=	0x00c3
                    00C6   1174 G$EXF2$0$0 == 0x00c6
                    00C6   1175 _EXF2	=	0x00c6
                    00C7   1176 G$TF2$0$0 == 0x00c7
                    00C7   1177 _TF2	=	0x00c7
                    00C2   1178 G$TR2$0$0 == 0x00c2
                    00C2   1179 _TR2	=	0x00c2
                    0089   1180 G$IE0$0$0 == 0x0089
                    0089   1181 _IE0	=	0x0089
                    008B   1182 G$IE1$0$0 == 0x008b
                    008B   1183 _IE1	=	0x008b
                    0088   1184 G$IT0$0$0 == 0x0088
                    0088   1185 _IT0	=	0x0088
                    008A   1186 G$IT1$0$0 == 0x008a
                    008A   1187 _IT1	=	0x008a
                    008D   1188 G$TF0$0$0 == 0x008d
                    008D   1189 _TF0	=	0x008d
                    008F   1190 G$TF1$0$0 == 0x008f
                    008F   1191 _TF1	=	0x008f
                    008C   1192 G$TR0$0$0 == 0x008c
                    008C   1193 _TR0	=	0x008c
                    008E   1194 G$TR1$0$0 == 0x008e
                    008E   1195 _TR1	=	0x008e
                    00CA   1196 G$RB8_1$0$0 == 0x00ca
                    00CA   1197 _RB8_1	=	0x00ca
                    00CC   1198 G$REN_1$0$0 == 0x00cc
                    00CC   1199 _REN_1	=	0x00cc
                    00C8   1200 G$RI_1$0$0 == 0x00c8
                    00C8   1201 _RI_1	=	0x00c8
                    00CF   1202 G$SM0_1$0$0 == 0x00cf
                    00CF   1203 _SM0_1	=	0x00cf
                    00CE   1204 G$SM1_1$0$0 == 0x00ce
                    00CE   1205 _SM1_1	=	0x00ce
                    00CD   1206 G$SM2_1$0$0 == 0x00cd
                    00CD   1207 _SM2_1	=	0x00cd
                    00CB   1208 G$TB8_1$0$0 == 0x00cb
                    00CB   1209 _TB8_1	=	0x00cb
                    00C9   1210 G$TI_1$0$0 == 0x00c9
                    00C9   1211 _TI_1	=	0x00c9
                    0080   1212 G$P0_0$0$0 == 0x0080
                    0080   1213 _P0_0	=	0x0080
                    0081   1214 G$P0_1$0$0 == 0x0081
                    0081   1215 _P0_1	=	0x0081
                    0082   1216 G$P0_2$0$0 == 0x0082
                    0082   1217 _P0_2	=	0x0082
                    0083   1218 G$P0_3$0$0 == 0x0083
                    0083   1219 _P0_3	=	0x0083
                    0084   1220 G$P0_4$0$0 == 0x0084
                    0084   1221 _P0_4	=	0x0084
                    0085   1222 G$P0_5$0$0 == 0x0085
                    0085   1223 _P0_5	=	0x0085
                    0086   1224 G$P0_6$0$0 == 0x0086
                    0086   1225 _P0_6	=	0x0086
                    0087   1226 G$P0_7$0$0 == 0x0087
                    0087   1227 _P0_7	=	0x0087
                    0090   1228 G$P1_0$0$0 == 0x0090
                    0090   1229 _P1_0	=	0x0090
                    0091   1230 G$P1_1$0$0 == 0x0091
                    0091   1231 _P1_1	=	0x0091
                    0092   1232 G$P1_2$0$0 == 0x0092
                    0092   1233 _P1_2	=	0x0092
                    0093   1234 G$P1_3$0$0 == 0x0093
                    0093   1235 _P1_3	=	0x0093
                    0094   1236 G$P1_4$0$0 == 0x0094
                    0094   1237 _P1_4	=	0x0094
                    0095   1238 G$P1_5$0$0 == 0x0095
                    0095   1239 _P1_5	=	0x0095
                    0096   1240 G$P1_6$0$0 == 0x0096
                    0096   1241 _P1_6	=	0x0096
                    0097   1242 G$P1_7$0$0 == 0x0097
                    0097   1243 _P1_7	=	0x0097
                    00A0   1244 G$P2_0$0$0 == 0x00a0
                    00A0   1245 _P2_0	=	0x00a0
                    00A1   1246 G$P2_1$0$0 == 0x00a1
                    00A1   1247 _P2_1	=	0x00a1
                    00A2   1248 G$P2_2$0$0 == 0x00a2
                    00A2   1249 _P2_2	=	0x00a2
                    00A3   1250 G$P2_3$0$0 == 0x00a3
                    00A3   1251 _P2_3	=	0x00a3
                    00A4   1252 G$P2_4$0$0 == 0x00a4
                    00A4   1253 _P2_4	=	0x00a4
                    00A5   1254 G$P2_5$0$0 == 0x00a5
                    00A5   1255 _P2_5	=	0x00a5
                    00A6   1256 G$P2_6$0$0 == 0x00a6
                    00A6   1257 _P2_6	=	0x00a6
                    00A7   1258 G$P2_7$0$0 == 0x00a7
                    00A7   1259 _P2_7	=	0x00a7
                    00B0   1260 G$P3_0$0$0 == 0x00b0
                    00B0   1261 _P3_0	=	0x00b0
                    00B1   1262 G$P3_1$0$0 == 0x00b1
                    00B1   1263 _P3_1	=	0x00b1
                    00B2   1264 G$P3_2$0$0 == 0x00b2
                    00B2   1265 _P3_2	=	0x00b2
                    00B3   1266 G$P3_3$0$0 == 0x00b3
                    00B3   1267 _P3_3	=	0x00b3
                    00B4   1268 G$P3_4$0$0 == 0x00b4
                    00B4   1269 _P3_4	=	0x00b4
                    00B5   1270 G$P3_5$0$0 == 0x00b5
                    00B5   1271 _P3_5	=	0x00b5
                    00B6   1272 G$P3_6$0$0 == 0x00b6
                    00B6   1273 _P3_6	=	0x00b6
                    00B7   1274 G$P3_7$0$0 == 0x00b7
                    00B7   1275 _P3_7	=	0x00b7
                    00C8   1276 G$P4_0$0$0 == 0x00c8
                    00C8   1277 _P4_0	=	0x00c8
                    00C9   1278 G$P4_1$0$0 == 0x00c9
                    00C9   1279 _P4_1	=	0x00c9
                    00CA   1280 G$P4_2$0$0 == 0x00ca
                    00CA   1281 _P4_2	=	0x00ca
                    00CB   1282 G$P4_3$0$0 == 0x00cb
                    00CB   1283 _P4_3	=	0x00cb
                    00CC   1284 G$P4_4$0$0 == 0x00cc
                    00CC   1285 _P4_4	=	0x00cc
                    00CD   1286 G$P4_5$0$0 == 0x00cd
                    00CD   1287 _P4_5	=	0x00cd
                    00CE   1288 G$P4_6$0$0 == 0x00ce
                    00CE   1289 _P4_6	=	0x00ce
                    00CF   1290 G$P4_7$0$0 == 0x00cf
                    00CF   1291 _P4_7	=	0x00cf
                           1292 ;--------------------------------------------------------
                           1293 ; overlayable register banks
                           1294 ;--------------------------------------------------------
                           1295 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1296 	.ds 8
                           1297 ;--------------------------------------------------------
                           1298 ; internal ram data
                           1299 ;--------------------------------------------------------
                           1300 	.area DSEG    (DATA)
                    0000   1301 LCAN_vWriteAMData$ulData$1$1==.
   0023                    1302 _CAN_vWriteAMData_ulData_1_1:
   0023                    1303 	.ds 4
                    0004   1304 LCAN_ulGetCANData$ulData$1$1==.
   0027                    1305 _CAN_ulGetCANData_ulData_1_1:
   0027                    1306 	.ds 4
                    0008   1307 LCAN_vGetMsgObj$pstObj$1$1==.
   002B                    1308 _CAN_vGetMsgObj_PARM_2:
   002B                    1309 	.ds 3
                    000B   1310 LCAN_vGetMsgObj$ubTemp$1$1==.
   002E                    1311 _CAN_vGetMsgObj_ubTemp_1_1:
   002E                    1312 	.ds 1
                    000C   1313 LCAN_vGetMsgObj$sloc0$1$0==.
   002F                    1314 _CAN_vGetMsgObj_sloc0_1_0:
   002F                    1315 	.ds 3
                    000F   1316 LCAN_vGetMsgObj$sloc1$1$0==.
   0032                    1317 _CAN_vGetMsgObj_sloc1_1_0:
   0032                    1318 	.ds 1
                    0010   1319 LCAN_vGetMsgObj$sloc2$1$0==.
   0033                    1320 _CAN_vGetMsgObj_sloc2_1_0:
   0033                    1321 	.ds 3
                    0013   1322 LCAN_vLoadData$ulpubData$1$1==.
   0036                    1323 _CAN_vLoadData_PARM_2:
   0036                    1324 	.ds 3
                    0016   1325 LCAN_vLoadData$sloc0$1$0==.
   0039                    1326 _CAN_vLoadData_sloc0_1_0:
   0039                    1327 	.ds 3
                           1328 ;--------------------------------------------------------
                           1329 ; overlayable items in internal ram 
                           1330 ;--------------------------------------------------------
                           1331 	.area OSEG    (OVR,DATA)
                           1332 ;--------------------------------------------------------
                           1333 ; indirectly addressable internal ram data
                           1334 ;--------------------------------------------------------
                           1335 	.area ISEG    (DATA)
                           1336 ;--------------------------------------------------------
                           1337 ; absolute internal ram data
                           1338 ;--------------------------------------------------------
                           1339 	.area IABS    (ABS,DATA)
                           1340 	.area IABS    (ABS,DATA)
                           1341 ;--------------------------------------------------------
                           1342 ; bit data
                           1343 ;--------------------------------------------------------
                           1344 	.area BSEG    (BIT)
                           1345 ;--------------------------------------------------------
                           1346 ; paged external ram data
                           1347 ;--------------------------------------------------------
                           1348 	.area PSEG    (PAG,XDATA)
                           1349 ;--------------------------------------------------------
                           1350 ; external ram data
                           1351 ;--------------------------------------------------------
                           1352 	.area XSEG    (XDATA)
                           1353 ;--------------------------------------------------------
                           1354 ; absolute external ram data
                           1355 ;--------------------------------------------------------
                           1356 	.area XABS    (ABS,XDATA)
                           1357 ;--------------------------------------------------------
                           1358 ; external initialized ram data
                           1359 ;--------------------------------------------------------
                           1360 	.area XISEG   (XDATA)
                           1361 	.area HOME    (CODE)
                           1362 	.area GSINIT0 (CODE)
                           1363 	.area GSINIT1 (CODE)
                           1364 	.area GSINIT2 (CODE)
                           1365 	.area GSINIT3 (CODE)
                           1366 	.area GSINIT4 (CODE)
                           1367 	.area GSINIT5 (CODE)
                           1368 	.area GSINIT  (CODE)
                           1369 	.area GSFINAL (CODE)
                           1370 	.area CSEG    (CODE)
                           1371 ;--------------------------------------------------------
                           1372 ; global & static initialisations
                           1373 ;--------------------------------------------------------
                           1374 	.area HOME    (CODE)
                           1375 	.area GSINIT  (CODE)
                           1376 	.area GSFINAL (CODE)
                           1377 	.area GSINIT  (CODE)
                           1378 ;--------------------------------------------------------
                           1379 ; Home
                           1380 ;--------------------------------------------------------
                           1381 	.area HOME    (CODE)
                           1382 	.area HOME    (CODE)
                           1383 ;--------------------------------------------------------
                           1384 ; code
                           1385 ;--------------------------------------------------------
                           1386 	.area CSEG    (CODE)
                           1387 ;------------------------------------------------------------
                           1388 ;Allocation info for local variables in function 'CAN_vInit'
                           1389 ;------------------------------------------------------------
                           1390 ;------------------------------------------------------------
                    0000   1391 	G$CAN_vInit$0$0 ==.
                    0000   1392 	C$CAN.C$124$0$0 ==.
                           1393 ;	../CAN.C:124: void CAN_vInit(void)
                           1394 ;	-----------------------------------------
                           1395 ;	 function CAN_vInit
                           1396 ;	-----------------------------------------
   0167                    1397 _CAN_vInit:
                    0002   1398 	ar2 = 0x02
                    0003   1399 	ar3 = 0x03
                    0004   1400 	ar4 = 0x04
                    0005   1401 	ar5 = 0x05
                    0006   1402 	ar6 = 0x06
                    0007   1403 	ar7 = 0x07
                    0000   1404 	ar0 = 0x00
                    0001   1405 	ar1 = 0x01
                    0000   1406 	C$CAN.C$140$1$1 ==.
                           1407 ;	../CAN.C:140: CAN_vWriteCANAddress(CAN_PANCTR); // Addressing CAN_PANCTR
   0167 75 D9 71           1408 	mov	_CAN_ADL,#0x71
   016A 75 DA 00           1409 	mov	_CAN_ADH,#0x00
                    0006   1410 	C$CAN.C$141$1$1 ==.
                           1411 ;	../CAN.C:141: CAN_DATA1 = CAN_PANCTR_BUSY;
   016D 75 DC 01           1412 	mov	_CAN_DATA1,#0x01
                    0009   1413 	C$CAN.C$142$1$1 ==.
                           1414 ;	../CAN.C:142: while(CAN_DATA1 & CAN_PANCTR_BUSY){ // wait until Panel has finished the 
   0170                    1415 00101$:
   0170 E5 DC              1416 	mov	a,_CAN_DATA1
   0172 30 E0 05           1417 	jnb	acc.0,00103$
                    000E   1418 	C$CAN.C$144$2$2 ==.
                           1419 ;	../CAN.C:144: CAN_ADCON &= ~0x01;       
   0175 53 D8 FE           1420 	anl	_CAN_ADCON,#0xFE
   0178 80 F6              1421 	sjmp	00101$
   017A                    1422 00103$:
                    0013   1423 	C$CAN.C$156$1$1 ==.
                           1424 ;	../CAN.C:156: CAN_vWriteCANAddress(CAN_NCR0); // Addressing CAN_NCR0
   017A 75 D9 80           1425 	mov	_CAN_ADL,#0x80
   017D 75 DA 00           1426 	mov	_CAN_ADH,#0x00
                    0019   1427 	C$CAN.C$157$1$1 ==.
                           1428 ;	../CAN.C:157: CAN_DATA0 = 0x41;            // load NODE 0 control register[7-0]
   0180 75 DB 41           1429 	mov	_CAN_DATA0,#0x41
                    001C   1430 	C$CAN.C$158$1$1 ==.
                           1431 ;	../CAN.C:158: CAN_vWriteEN(D0_VALID+ADR_INC); // Data0 is Valid for transmission and 
   0183 75 D8 15           1432 	mov	_CAN_ADCON,#0x15
   0186                    1433 00104$:
   0186 E5 D8              1434 	mov	a,_CAN_ADCON
   0188 20 E1 FB           1435 	jb	acc.1,00104$
                    0024   1436 	C$CAN.C$173$1$1 ==.
                           1437 ;	../CAN.C:173: CAN_vWriteCANAddress(CAN_NCR1); // Addressing CAN_NCR1
   018B 75 D9 C0           1438 	mov	_CAN_ADL,#0xC0
   018E 75 DA 00           1439 	mov	_CAN_ADH,#0x00
                    002A   1440 	C$CAN.C$174$1$1 ==.
                           1441 ;	../CAN.C:174: CAN_DATA0 = 0x43;            // load NODE 1 control register[7-0]
   0191 75 DB 43           1442 	mov	_CAN_DATA0,#0x43
                    002D   1443 	C$CAN.C$175$1$1 ==.
                           1444 ;	../CAN.C:175: CAN_vWriteEN(D0_VALID+ADR_INC); // Data0 is Valid for transmission and 
   0194 75 D8 15           1445 	mov	_CAN_ADCON,#0x15
   0197                    1446 00107$:
   0197 E5 D8              1447 	mov	a,_CAN_ADCON
   0199 20 E1 FB           1448 	jb	acc.1,00107$
                    0035   1449 	C$CAN.C$180$1$1 ==.
                           1450 ;	../CAN.C:180: CAN_ADCON = ADR_INC;         // Auto Increment the current address(+1)
   019C 75 D8 04           1451 	mov	_CAN_ADCON,#0x04
                    0038   1452 	C$CAN.C$185$1$1 ==.
                           1453 ;	../CAN.C:185: CAN_DATA0 = 0x00;            // load NIPR1_LECINP, NIPR1_ALINP
   019F 75 DB 00           1454 	mov	_CAN_DATA0,#0x00
                    003B   1455 	C$CAN.C$186$1$1 ==.
                           1456 ;	../CAN.C:186: CAN_DATA1 = 0x00;            // load NIPR1_CFCINP, NIPR1_TRINP
   01A2 75 DC 00           1457 	mov	_CAN_DATA1,#0x00
                    003E   1458 	C$CAN.C$187$1$1 ==.
                           1459 ;	../CAN.C:187: CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC); // Data0 and Data1 are Valid for 
   01A5 75 D8 35           1460 	mov	_CAN_ADCON,#0x35
   01A8                    1461 00110$:
   01A8 E5 D8              1462 	mov	a,_CAN_ADCON
   01AA 20 E1 FB           1463 	jb	acc.1,00110$
                    0046   1464 	C$CAN.C$201$1$1 ==.
                           1465 ;	../CAN.C:201: CAN_DATA0 = 0x03;            // Receive Select NPCR1_RXSEL
   01AD 75 DB 03           1466 	mov	_CAN_DATA0,#0x03
                    0049   1467 	C$CAN.C$202$1$1 ==.
                           1468 ;	../CAN.C:202: CAN_DATA1 = 0x00;            // Loop-back mode is disabled
   01B0 75 DC 00           1469 	mov	_CAN_DATA1,#0x00
                    004C   1470 	C$CAN.C$203$1$1 ==.
                           1471 ;	../CAN.C:203: CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC);  //  Data0 & 1 are Valid for 
   01B3 75 D8 35           1472 	mov	_CAN_ADCON,#0x35
   01B6                    1473 00113$:
   01B6 E5 D8              1474 	mov	a,_CAN_ADCON
   01B8 20 E1 FB           1475 	jb	acc.1,00113$
                    0054   1476 	C$CAN.C$221$1$1 ==.
                           1477 ;	../CAN.C:221: CAN_DATA0 = 0x5F;            // load NBTR1_SJW, BRP
   01BB 75 DB 5F           1478 	mov	_CAN_DATA0,#0x5F
                    0057   1479 	C$CAN.C$222$1$1 ==.
                           1480 ;	../CAN.C:222: CAN_DATA1 = 0x18;            // load NBTR1_DIV8, TSEG2, TSEG1
   01BE 75 DC 18           1481 	mov	_CAN_DATA1,#0x18
                    005A   1482 	C$CAN.C$223$1$1 ==.
                           1483 ;	../CAN.C:223: CAN_vWriteEN(D0_VALID+D1_VALID+ADR_INC);  // Data0, 1 are valid for 
   01C1 75 D8 35           1484 	mov	_CAN_ADCON,#0x35
   01C4                    1485 00116$:
   01C4 E5 D8              1486 	mov	a,_CAN_ADCON
   01C6 20 E1 FB           1487 	jb	acc.1,00116$
                    0062   1488 	C$CAN.C$234$1$1 ==.
                           1489 ;	../CAN.C:234: CAN_DATA2 = 0x60;            // load NECNT1_EWRNLVL register
   01C9 75 DD 60           1490 	mov	_CAN_DATA2,#0x60
                    0065   1491 	C$CAN.C$235$1$1 ==.
                           1492 ;	../CAN.C:235: CAN_vWriteEN(D2_VALID+ADR_INC); // Data2 is Valid for transmission, Auto 
   01CC 75 D8 45           1493 	mov	_CAN_ADCON,#0x45
   01CF                    1494 00119$:
   01CF E5 D8              1495 	mov	a,_CAN_ADCON
   01D1 20 E1 FB           1496 	jb	acc.1,00119$
                    006D   1497 	C$CAN.C$248$1$1 ==.
                           1498 ;	../CAN.C:248: CAN_DATA0 = 0x00;            // load NFCR1_CFCL
   01D4 75 DB 00           1499 	mov	_CAN_DATA0,#0x00
                    0070   1500 	C$CAN.C$249$1$1 ==.
                           1501 ;	../CAN.C:249: CAN_DATA1 = 0x00;            // load NFCR1_CFCH
   01D7 75 DC 00           1502 	mov	_CAN_DATA1,#0x00
                    0073   1503 	C$CAN.C$250$1$1 ==.
                           1504 ;	../CAN.C:250: CAN_DATA2 = 0x00;            // load NFCR1_CFCOV, CFCIE, CFMOD, CFSEL
   01DA 75 DD 00           1505 	mov	_CAN_DATA2,#0x00
                    0076   1506 	C$CAN.C$251$1$1 ==.
                           1507 ;	../CAN.C:251: CAN_vWriteEN(D0_VALID+D1_VALID+D2_VALID); // Data0, 1, 2 are valid for 
   01DD 75 D8 71           1508 	mov	_CAN_ADCON,#0x71
   01E0                    1509 00122$:
   01E0 E5 D8              1510 	mov	a,_CAN_ADCON
   01E2 20 E1 FB           1511 	jb	acc.1,00122$
                    007E   1512 	C$CAN.C$261$1$1 ==.
                           1513 ;	../CAN.C:261: SFR_PAGE(_pp2, noSST);       // switch to page 2
   01E5 75 B2 02           1514 	mov	_PORT_PAGE,#0x02
                    0081   1515 	C$CAN.C$262$1$1 ==.
                           1516 ;	../CAN.C:262: P1_ALTSEL0      |= 0x08;    //  set AltSel0 
   01E8 43 90 08           1517 	orl	_P1_ALTSEL0,#0x08
                    0084   1518 	C$CAN.C$263$1$1 ==.
                           1519 ;	../CAN.C:263: P1_ALTSEL1      |= 0x08;    //  set AltSel1
   01EB 43 91 08           1520 	orl	_P1_ALTSEL1,#0x08
                    0087   1521 	C$CAN.C$265$1$1 ==.
                           1522 ;	../CAN.C:265: SFR_PAGE(_pp0, noSST);       // switch to page 0
   01EE 75 B2 00           1523 	mov	_PORT_PAGE,#0x00
                    008A   1524 	C$CAN.C$266$1$1 ==.
                           1525 ;	../CAN.C:266: P1_DIR          |= 0x08;        //  set Direction as Output
   01F1 43 91 08           1526 	orl	_P1_DIR,#0x08
                    008D   1527 	C$CAN.C$273$1$1 ==.
                           1528 ;	../CAN.C:273: CAN_vWriteCANAddress(CAN_PANCTR); // Addressing CAN_PANCTR
   01F4 75 D9 71           1529 	mov	_CAN_ADL,#0x71
   01F7 75 DA 00           1530 	mov	_CAN_ADH,#0x00
                    0093   1531 	C$CAN.C$276$1$1 ==.
                           1532 ;	../CAN.C:276: CAN_vSetListCommand(0x02000002);  // MO0 for list 2
   01FA 90 00 02           1533 	mov	dptr,#(0x02&0x00ff)
   01FD E4                 1534 	clr	a
   01FE F5 F0              1535 	mov	b,a
   0200 74 02              1536 	mov	a,#0x02
   0202 12 02 CE           1537 	lcall	_CAN_vSetListCommand
                    009E   1538 	C$CAN.C$290$1$1 ==.
                           1539 ;	../CAN.C:290: CAN_vWriteCANAddress(CAN_MOCTR0); // Addressing MO0 control register
   0205 75 D9 07           1540 	mov	_CAN_ADL,#0x07
   0208 75 DA 04           1541 	mov	_CAN_ADH,#0x04
                    00A4   1542 	C$CAN.C$292$1$1 ==.
                           1543 ;	../CAN.C:292: CAN_vWriteAMData(0x0EA80000); // load MO0 control register
   020B 90 00 00           1544 	mov	dptr,#0x0000
   020E 75 F0 A8           1545 	mov	b,#0xA8
   0211 74 0E              1546 	mov	a,#0x0E
   0213 12 02 8A           1547 	lcall	_CAN_vWriteAMData
                    00AF   1548 	C$CAN.C$295$1$1 ==.
                           1549 ;	../CAN.C:295: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   0216 75 D8 08           1550 	mov	_CAN_ADCON,#0x08
                    00B2   1551 	C$CAN.C$304$1$1 ==.
                           1552 ;	../CAN.C:304: CAN_vWriteAMData(0xC0400000); // load MO0 arbitration register
   0219 90 00 00           1553 	mov	dptr,#0x0000
   021C 75 F0 40           1554 	mov	b,#0x40
   021F 74 C0              1555 	mov	a,#0xC0
   0221 12 02 8A           1556 	lcall	_CAN_vWriteAMData
                    00BD   1557 	C$CAN.C$307$1$1 ==.
                           1558 ;	../CAN.C:307: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   0224 75 D8 08           1559 	mov	_CAN_ADCON,#0x08
                    00C0   1560 	C$CAN.C$312$1$1 ==.
                           1561 ;	../CAN.C:312: CAN_vWriteAMData(0x00000000); // load MO0 data register high
   0227 90 00 00           1562 	mov	dptr,#(0x00&0x00ff)
   022A E4                 1563 	clr	a
   022B F5 F0              1564 	mov	b,a
   022D 12 02 8A           1565 	lcall	_CAN_vWriteAMData
                    00C9   1566 	C$CAN.C$315$1$1 ==.
                           1567 ;	../CAN.C:315: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   0230 75 D8 08           1568 	mov	_CAN_ADCON,#0x08
                    00CC   1569 	C$CAN.C$319$1$1 ==.
                           1570 ;	../CAN.C:319: CAN_vWriteAMData(0x00000000); // load MO0 data register low
   0233 90 00 00           1571 	mov	dptr,#(0x00&0x00ff)
   0236 E4                 1572 	clr	a
   0237 F5 F0              1573 	mov	b,a
   0239 12 02 8A           1574 	lcall	_CAN_vWriteAMData
                    00D5   1575 	C$CAN.C$322$1$1 ==.
                           1576 ;	../CAN.C:322: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   023C 75 D8 08           1577 	mov	_CAN_ADCON,#0x08
                    00D8   1578 	C$CAN.C$329$1$1 ==.
                           1579 ;	../CAN.C:329: CAN_vWriteAMData(0x3FFFFFFF); // load MO0 acceptance mask register
   023F 90 FF FF           1580 	mov	dptr,#0xFFFF
   0242 75 F0 FF           1581 	mov	b,#0xFF
   0245 74 3F              1582 	mov	a,#0x3F
   0247 12 02 8A           1583 	lcall	_CAN_vWriteAMData
                    00E3   1584 	C$CAN.C$332$1$1 ==.
                           1585 ;	../CAN.C:332: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   024A 75 D8 08           1586 	mov	_CAN_ADCON,#0x08
                    00E6   1587 	C$CAN.C$338$1$1 ==.
                           1588 ;	../CAN.C:338: CAN_vWriteAMData(0x00000000); // load MO0 interrupt pointer register
   024D 90 00 00           1589 	mov	dptr,#(0x00&0x00ff)
   0250 E4                 1590 	clr	a
   0251 F5 F0              1591 	mov	b,a
   0253 12 02 8A           1592 	lcall	_CAN_vWriteAMData
                    00EF   1593 	C$CAN.C$341$1$1 ==.
                           1594 ;	../CAN.C:341: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   0256 75 D8 08           1595 	mov	_CAN_ADCON,#0x08
                    00F2   1596 	C$CAN.C$346$1$1 ==.
                           1597 ;	../CAN.C:346: CAN_vWriteAMData(0x00000000); // load MO0 FIFO/gateway pointer register
   0259 90 00 00           1598 	mov	dptr,#(0x00&0x00ff)
   025C E4                 1599 	clr	a
   025D F5 F0              1600 	mov	b,a
   025F 12 02 8A           1601 	lcall	_CAN_vWriteAMData
                    00FB   1602 	C$CAN.C$349$1$1 ==.
                           1603 ;	../CAN.C:349: CAN_ADCON = ADR_DEC;         // Auto Decrement the current address(-1)
   0262 75 D8 08           1604 	mov	_CAN_ADCON,#0x08
                    00FE   1605 	C$CAN.C$356$1$1 ==.
                           1606 ;	../CAN.C:356: CAN_vWriteAMData(0x01000000); // load MO0  function control register
   0265 90 00 00           1607 	mov	dptr,#(0x00&0x00ff)
   0268 E4                 1608 	clr	a
   0269 F5 F0              1609 	mov	b,a
   026B 74 01              1610 	mov	a,#0x01
   026D 12 02 8A           1611 	lcall	_CAN_vWriteAMData
                    0109   1612 	C$CAN.C$504$1$1 ==.
                           1613 ;	../CAN.C:504: CAN_vWriteCANAddress(CAN_NCR1); // Addressing CAN_NCR1
   0270 75 D9 C0           1614 	mov	_CAN_ADL,#0xC0
   0273 75 DA 00           1615 	mov	_CAN_ADH,#0x00
                    010F   1616 	C$CAN.C$505$1$1 ==.
                           1617 ;	../CAN.C:505: CAN_vReadEN();               // Read Mode is Enabled
   0276 75 D8 00           1618 	mov	_CAN_ADCON,#0x00
   0279                    1619 00125$:
   0279 E5 D8              1620 	mov	a,_CAN_ADCON
   027B 20 E1 FB           1621 	jb	acc.1,00125$
                    0117   1622 	C$CAN.C$506$1$1 ==.
                           1623 ;	../CAN.C:506: CAN_DATA0  &= ~0x41;         // reset INIT and CCE
   027E 53 DB BE           1624 	anl	_CAN_DATA0,#0xBE
                    011A   1625 	C$CAN.C$507$1$1 ==.
                           1626 ;	../CAN.C:507: CAN_vWriteEN(D0_VALID);      // Data0 is Valid for transmission and Write 
   0281 75 D8 11           1627 	mov	_CAN_ADCON,#0x11
   0284                    1628 00128$:
   0284 E5 D8              1629 	mov	a,_CAN_ADCON
   0286 20 E1 FB           1630 	jb	acc.1,00128$
                    0122   1631 	C$CAN.C$515$1$1 ==.
                    0122   1632 	XG$CAN_vInit$0$0 ==.
   0289 22                 1633 	ret
                           1634 ;------------------------------------------------------------
                           1635 ;Allocation info for local variables in function 'CAN_vWriteAMData'
                           1636 ;------------------------------------------------------------
                           1637 ;ulValue                   Allocated to registers r2 r3 r4 r5 
                           1638 ;ulData                    Allocated with name '_CAN_vWriteAMData_ulData_1_1'
                           1639 ;------------------------------------------------------------
                    0123   1640 	G$CAN_vWriteAMData$0$0 ==.
                    0123   1641 	C$CAN.C$554$1$1 ==.
                           1642 ;	../CAN.C:554: void CAN_vWriteAMData(ulong ulValue)
                           1643 ;	-----------------------------------------
                           1644 ;	 function CAN_vWriteAMData
                           1645 ;	-----------------------------------------
   028A                    1646 _CAN_vWriteAMData:
   028A AA 82              1647 	mov	r2,dpl
   028C AB 83              1648 	mov	r3,dph
   028E AC F0              1649 	mov	r4,b
   0290 FD                 1650 	mov	r5,a
                    012A   1651 	C$CAN.C$557$1$1 ==.
                           1652 ;	../CAN.C:557: ulData.ulVal = ulValue;
   0291 8A 23              1653 	mov	_CAN_vWriteAMData_ulData_1_1,r2
   0293 8B 24              1654 	mov	(_CAN_vWriteAMData_ulData_1_1 + 1),r3
   0295 8C 25              1655 	mov	(_CAN_vWriteAMData_ulData_1_1 + 2),r4
   0297 8D 26              1656 	mov	(_CAN_vWriteAMData_ulData_1_1 + 3),r5
                    0132   1657 	C$CAN.C$559$1$1 ==.
                           1658 ;	../CAN.C:559: CAN_DATA0 = ulData.ubDB[0]; // load CAN Data Register 0
   0299 85 23 DB           1659 	mov	_CAN_DATA0,_CAN_vWriteAMData_ulData_1_1
                    0135   1660 	C$CAN.C$560$1$1 ==.
                           1661 ;	../CAN.C:560: CAN_DATA1 = ulData.ubDB[1]; // load CAN Data Register 1
   029C 85 24 DC           1662 	mov	_CAN_DATA1,(_CAN_vWriteAMData_ulData_1_1 + 0x0001)
                    0138   1663 	C$CAN.C$561$1$1 ==.
                           1664 ;	../CAN.C:561: CAN_DATA2 = ulData.ubDB[2]; // load CAN Data Register 2
   029F 85 25 DD           1665 	mov	_CAN_DATA2,(_CAN_vWriteAMData_ulData_1_1 + 0x0002)
                    013B   1666 	C$CAN.C$562$1$1 ==.
                           1667 ;	../CAN.C:562: CAN_DATA3 = ulData.ubDB[3]; // load CAN Data Register 3
   02A2 85 26 DE           1668 	mov	_CAN_DATA3,(_CAN_vWriteAMData_ulData_1_1 + 0x0003)
                    013E   1669 	C$CAN.C$563$1$1 ==.
                           1670 ;	../CAN.C:563: CAN_vWriteEN(ALL_DATA_VALID); // Writemode is Enabled
   02A5 75 D8 F1           1671 	mov	_CAN_ADCON,#0xF1
   02A8                    1672 00101$:
   02A8 E5 D8              1673 	mov	a,_CAN_ADCON
   02AA 20 E1 FB           1674 	jb	acc.1,00101$
                    0146   1675 	C$CAN.C$564$1$1 ==.
                    0146   1676 	XG$CAN_vWriteAMData$0$0 ==.
   02AD 22                 1677 	ret
                           1678 ;------------------------------------------------------------
                           1679 ;Allocation info for local variables in function 'CAN_ulGetCANData'
                           1680 ;------------------------------------------------------------
                           1681 ;ulData                    Allocated with name '_CAN_ulGetCANData_ulData_1_1'
                           1682 ;------------------------------------------------------------
                    0147   1683 	G$CAN_ulGetCANData$0$0 ==.
                    0147   1684 	C$CAN.C$606$1$1 ==.
                           1685 ;	../CAN.C:606: ulong CAN_ulGetCANData(void)
                           1686 ;	-----------------------------------------
                           1687 ;	 function CAN_ulGetCANData
                           1688 ;	-----------------------------------------
   02AE                    1689 _CAN_ulGetCANData:
                    0147   1690 	C$CAN.C$610$1$1 ==.
                           1691 ;	../CAN.C:610: CAN_vReadEN();  // Readmode is Enabled
   02AE 75 D8 00           1692 	mov	_CAN_ADCON,#0x00
   02B1                    1693 00101$:
   02B1 E5 D8              1694 	mov	a,_CAN_ADCON
   02B3 20 E1 FB           1695 	jb	acc.1,00101$
                    014F   1696 	C$CAN.C$611$1$1 ==.
                           1697 ;	../CAN.C:611: ulData.ubDB[0] = CAN_DATA0; // Read CAN Data Register 0
   02B6 85 DB 27           1698 	mov	_CAN_ulGetCANData_ulData_1_1,_CAN_DATA0
                    0152   1699 	C$CAN.C$612$1$1 ==.
                           1700 ;	../CAN.C:612: ulData.ubDB[1] = CAN_DATA1; // Read CAN Data Register 1
   02B9 85 DC 28           1701 	mov	(_CAN_ulGetCANData_ulData_1_1 + 0x0001),_CAN_DATA1
                    0155   1702 	C$CAN.C$613$1$1 ==.
                           1703 ;	../CAN.C:613: ulData.ubDB[2] = CAN_DATA2; // Read CAN Data Register 2
   02BC 85 DD 29           1704 	mov	(_CAN_ulGetCANData_ulData_1_1 + 0x0002),_CAN_DATA2
                    0158   1705 	C$CAN.C$614$1$1 ==.
                           1706 ;	../CAN.C:614: ulData.ubDB[3] = CAN_DATA3; // Read CAN Data Register 3
   02BF 85 DE 2A           1707 	mov	(_CAN_ulGetCANData_ulData_1_1 + 0x0003),_CAN_DATA3
                    015B   1708 	C$CAN.C$615$1$1 ==.
                           1709 ;	../CAN.C:615: return (ulData.ulVal);
   02C2 85 27 82           1710 	mov	dpl,_CAN_ulGetCANData_ulData_1_1
   02C5 85 28 83           1711 	mov	dph,(_CAN_ulGetCANData_ulData_1_1 + 1)
   02C8 85 29 F0           1712 	mov	b,(_CAN_ulGetCANData_ulData_1_1 + 2)
   02CB E5 2A              1713 	mov	a,(_CAN_ulGetCANData_ulData_1_1 + 3)
                    0166   1714 	C$CAN.C$616$1$1 ==.
                    0166   1715 	XG$CAN_ulGetCANData$0$0 ==.
   02CD 22                 1716 	ret
                           1717 ;------------------------------------------------------------
                           1718 ;Allocation info for local variables in function 'CAN_vSetListCommand'
                           1719 ;------------------------------------------------------------
                           1720 ;ulVal                     Allocated to registers r2 r3 r4 r5 
                           1721 ;------------------------------------------------------------
                    0167   1722 	G$CAN_vSetListCommand$0$0 ==.
                    0167   1723 	C$CAN.C$641$1$1 ==.
                           1724 ;	../CAN.C:641: void CAN_vSetListCommand(ulong ulVal)
                           1725 ;	-----------------------------------------
                           1726 ;	 function CAN_vSetListCommand
                           1727 ;	-----------------------------------------
   02CE                    1728 _CAN_vSetListCommand:
                    0167   1729 	C$CAN.C$643$1$1 ==.
                           1730 ;	../CAN.C:643: CAN_vWriteAMData(ulVal);  // - load Panel Control Register
   02CE 12 02 8A           1731 	lcall	_CAN_vWriteAMData
                    016A   1732 	C$CAN.C$644$1$1 ==.
                           1733 ;	../CAN.C:644: CAN_DATA1 = CAN_PANCTR_BUSY;
   02D1 75 DC 01           1734 	mov	_CAN_DATA1,#0x01
                    016D   1735 	C$CAN.C$645$1$1 ==.
                           1736 ;	../CAN.C:645: while(CAN_DATA1 & CAN_PANCTR_BUSY){ // wait until Panel has finished the 
   02D4                    1737 00101$:
   02D4 E5 DC              1738 	mov	a,_CAN_DATA1
   02D6 30 E0 05           1739 	jnb	acc.0,00104$
                    0172   1740 	C$CAN.C$647$2$2 ==.
                           1741 ;	../CAN.C:647: CAN_ADCON &= ~0x01;       
   02D9 53 D8 FE           1742 	anl	_CAN_ADCON,#0xFE
   02DC 80 F6              1743 	sjmp	00101$
   02DE                    1744 00104$:
                    0177   1745 	C$CAN.C$649$1$1 ==.
                    0177   1746 	XG$CAN_vSetListCommand$0$0 ==.
   02DE 22                 1747 	ret
                           1748 ;------------------------------------------------------------
                           1749 ;Allocation info for local variables in function 'CAN_vGetMsgObj'
                           1750 ;------------------------------------------------------------
                           1751 ;pstObj                    Allocated with name '_CAN_vGetMsgObj_PARM_2'
                           1752 ;ubObjNr                   Allocated to registers r2 
                           1753 ;ubTemp                    Allocated with name '_CAN_vGetMsgObj_ubTemp_1_1'
                           1754 ;sloc0                     Allocated with name '_CAN_vGetMsgObj_sloc0_1_0'
                           1755 ;sloc1                     Allocated with name '_CAN_vGetMsgObj_sloc1_1_0'
                           1756 ;sloc2                     Allocated with name '_CAN_vGetMsgObj_sloc2_1_0'
                           1757 ;------------------------------------------------------------
                    0178   1758 	G$CAN_vGetMsgObj$0$0 ==.
                    0178   1759 	C$CAN.C$679$1$1 ==.
                           1760 ;	../CAN.C:679: void CAN_vGetMsgObj(ubyte ubObjNr, stCAN_SWObj *pstObj)
                           1761 ;	-----------------------------------------
                           1762 ;	 function CAN_vGetMsgObj
                           1763 ;	-----------------------------------------
   02DF                    1764 _CAN_vGetMsgObj:
   02DF AA 82              1765 	mov	r2,dpl
                    017A   1766 	C$CAN.C$683$1$1 ==.
                           1767 ;	../CAN.C:683: CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register
   02E1                    1768 00101$:
   02E1 E5 D8              1769 	mov	a,_CAN_ADCON
   02E3 20 E1 FB           1770 	jb	acc.1,00101$
   02E6 C0 D9 C0 DA C0 DB  1771 	 push 0xD9 push 0xDA push 0xDB push 0xDC push 0xDD push 0xDE 
        C0 DC C0 DD C0 DE
                    018B   1772 	C$CAN.C$687$1$1 ==.
                           1773 ;	../CAN.C:687: CAN_vWriteCANAddress(CAN_MOFCR(ubObjNr));
   02F2 EA                 1774 	mov	a,r2
   02F3 C4                 1775 	swap	a
   02F4 03                 1776 	rr	a
   02F5 54 F8              1777 	anl	a,#0xf8
   02F7 F5 32              1778 	mov	_CAN_vGetMsgObj_sloc1_1_0,a
   02F9 85 32 D9           1779 	mov	_CAN_ADL,_CAN_vGetMsgObj_sloc1_1_0
   02FC EA                 1780 	mov	a,r2
   02FD 75 F0 08           1781 	mov	b,#0x08
   0300 A4                 1782 	mul	ab
   0301 FA                 1783 	mov	r2,a
   0302 AC F0              1784 	mov	r4,b
   0304 8A 05              1785 	mov	ar5,r2
   0306 74 04              1786 	mov	a,#0x04
   0308 2C                 1787 	add	a,r4
   0309 FE                 1788 	mov	r6,a
   030A 7D 00              1789 	mov	r5,#0x00
   030C 8E DA              1790 	mov	_CAN_ADH,r6
                    01A7   1791 	C$CAN.C$688$1$1 ==.
                           1792 ;	../CAN.C:688: CAN_vReadEN();   // Readmode is Enabled
   030E 75 D8 00           1793 	mov	_CAN_ADCON,#0x00
   0311                    1794 00104$:
   0311 E5 D8              1795 	mov	a,_CAN_ADCON
   0313 20 E1 FB           1796 	jb	acc.1,00104$
                    01AF   1797 	C$CAN.C$690$1$1 ==.
                           1798 ;	../CAN.C:690: pstObj->ubMOdlc  =  CAN_DATA3;//MOFCRn[31-24] DLC
   0316 AD 2B              1799 	mov	r5,_CAN_vGetMsgObj_PARM_2
   0318 AE 2C              1800 	mov	r6,(_CAN_vGetMsgObj_PARM_2 + 1)
   031A AF 2D              1801 	mov	r7,(_CAN_vGetMsgObj_PARM_2 + 2)
   031C 8D 82              1802 	mov	dpl,r5
   031E 8E 83              1803 	mov	dph,r6
   0320 8F F0              1804 	mov	b,r7
   0322 E5 DE              1805 	mov	a,_CAN_DATA3
   0324 12 0A AC           1806 	lcall	__gptrput
                    01C0   1807 	C$CAN.C$693$1$1 ==.
                           1808 ;	../CAN.C:693: CAN_vWriteCANAddress(CAN_MODATAL(ubObjNr));
   0327 74 04              1809 	mov	a,#0x04
   0329 25 32              1810 	add	a,_CAN_vGetMsgObj_sloc1_1_0
   032B F5 D9              1811 	mov	_CAN_ADL,a
   032D 74 04              1812 	mov	a,#0x04
   032F 2A                 1813 	add	a,r2
   0330 74 04              1814 	mov	a,#0x04
   0332 3C                 1815 	addc	a,r4
   0333 F9                 1816 	mov	r1,a
   0334 78 00              1817 	mov	r0,#0x00
   0336 89 DA              1818 	mov	_CAN_ADH,r1
                    01D1   1819 	C$CAN.C$695$1$1 ==.
                           1820 ;	../CAN.C:695: CAN_vReadEN();  // Readmode is Enabled
   0338 75 D8 00           1821 	mov	_CAN_ADCON,#0x00
   033B                    1822 00107$:
   033B E5 D8              1823 	mov	a,_CAN_ADCON
   033D 20 E1 FB           1824 	jb	acc.1,00107$
                    01D9   1825 	C$CAN.C$696$1$1 ==.
                           1826 ;	../CAN.C:696: pstObj->ulDATAL.ubDB[0] = CAN_DATA0; // Read CAN Data Register 0
   0340 74 0A              1827 	mov	a,#0x0A
   0342 2D                 1828 	add	a,r5
   0343 F8                 1829 	mov	r0,a
   0344 E4                 1830 	clr	a
   0345 3E                 1831 	addc	a,r6
   0346 F9                 1832 	mov	r1,a
   0347 8F 03              1833 	mov	ar3,r7
   0349 88 82              1834 	mov	dpl,r0
   034B 89 83              1835 	mov	dph,r1
   034D 8B F0              1836 	mov	b,r3
   034F E5 DB              1837 	mov	a,_CAN_DATA0
   0351 12 0A AC           1838 	lcall	__gptrput
                    01ED   1839 	C$CAN.C$697$1$1 ==.
                           1840 ;	../CAN.C:697: pstObj->ulDATAL.ubDB[1] = CAN_DATA1; // Read CAN Data Register 1
   0354 74 0A              1841 	mov	a,#0x0A
   0356 2D                 1842 	add	a,r5
   0357 F5 2F              1843 	mov	_CAN_vGetMsgObj_sloc0_1_0,a
   0359 E4                 1844 	clr	a
   035A 3E                 1845 	addc	a,r6
   035B F5 30              1846 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 1),a
   035D 8F 31              1847 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 2),r7
   035F 74 01              1848 	mov	a,#0x01
   0361 25 2F              1849 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   0363 FB                 1850 	mov	r3,a
   0364 E4                 1851 	clr	a
   0365 35 30              1852 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   0367 F8                 1853 	mov	r0,a
   0368 A9 31              1854 	mov	r1,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   036A 8B 82              1855 	mov	dpl,r3
   036C 88 83              1856 	mov	dph,r0
   036E 89 F0              1857 	mov	b,r1
   0370 E5 DC              1858 	mov	a,_CAN_DATA1
   0372 12 0A AC           1859 	lcall	__gptrput
                    020E   1860 	C$CAN.C$698$1$1 ==.
                           1861 ;	../CAN.C:698: pstObj->ulDATAL.ubDB[2] = CAN_DATA2; // Read CAN Data Register 2
   0375 74 02              1862 	mov	a,#0x02
   0377 25 2F              1863 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   0379 FB                 1864 	mov	r3,a
   037A E4                 1865 	clr	a
   037B 35 30              1866 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   037D F8                 1867 	mov	r0,a
   037E A9 31              1868 	mov	r1,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   0380 8B 82              1869 	mov	dpl,r3
   0382 88 83              1870 	mov	dph,r0
   0384 89 F0              1871 	mov	b,r1
   0386 E5 DD              1872 	mov	a,_CAN_DATA2
   0388 12 0A AC           1873 	lcall	__gptrput
                    0224   1874 	C$CAN.C$699$1$1 ==.
                           1875 ;	../CAN.C:699: pstObj->ulDATAL.ubDB[3] = CAN_DATA3; // Read CAN Data Register 3
   038B 74 03              1876 	mov	a,#0x03
   038D 25 2F              1877 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   038F FB                 1878 	mov	r3,a
   0390 E4                 1879 	clr	a
   0391 35 30              1880 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   0393 F8                 1881 	mov	r0,a
   0394 A9 31              1882 	mov	r1,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   0396 8B 82              1883 	mov	dpl,r3
   0398 88 83              1884 	mov	dph,r0
   039A 89 F0              1885 	mov	b,r1
   039C E5 DE              1886 	mov	a,_CAN_DATA3
   039E 12 0A AC           1887 	lcall	__gptrput
                    023A   1888 	C$CAN.C$702$1$1 ==.
                           1889 ;	../CAN.C:702: CAN_ADCON = ADR_INC;
   03A1 75 D8 04           1890 	mov	_CAN_ADCON,#0x04
                    023D   1891 	C$CAN.C$706$1$1 ==.
                           1892 ;	../CAN.C:706: CAN_vReadEN();  // Readmode is Enabled
   03A4 75 D8 00           1893 	mov	_CAN_ADCON,#0x00
                    0240   1894 	C$CAN.C$800$1$1 ==.
                           1895 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
                    0240   1896 	C$CAN.C$706$1$1 ==.
                           1897 ;	../CAN.C:706: CAN_vReadEN();  // Readmode is Enabled
   03A7                    1898 00110$:
   03A7 E5 D8              1899 	mov	a,_CAN_ADCON
   03A9 20 E1 FB           1900 	jb	acc.1,00110$
                    0245   1901 	C$CAN.C$707$1$1 ==.
                           1902 ;	../CAN.C:707: pstObj->ulDATAH.ubDB[0] = CAN_DATA0; // Read CAN Data Register 0
   03AC 74 0E              1903 	mov	a,#0x0E
   03AE 2D                 1904 	add	a,r5
   03AF F8                 1905 	mov	r0,a
   03B0 E4                 1906 	clr	a
   03B1 3E                 1907 	addc	a,r6
   03B2 F9                 1908 	mov	r1,a
   03B3 8F 03              1909 	mov	ar3,r7
   03B5 88 82              1910 	mov	dpl,r0
   03B7 89 83              1911 	mov	dph,r1
   03B9 8B F0              1912 	mov	b,r3
   03BB E5 DB              1913 	mov	a,_CAN_DATA0
   03BD 12 0A AC           1914 	lcall	__gptrput
                    0259   1915 	C$CAN.C$708$1$1 ==.
                           1916 ;	../CAN.C:708: pstObj->ulDATAH.ubDB[1] = CAN_DATA1; // Read CAN Data Register 1
   03C0 74 0E              1917 	mov	a,#0x0E
   03C2 2D                 1918 	add	a,r5
   03C3 FB                 1919 	mov	r3,a
   03C4 E4                 1920 	clr	a
   03C5 3E                 1921 	addc	a,r6
   03C6 F8                 1922 	mov	r0,a
   03C7 8F 01              1923 	mov	ar1,r7
   03C9 C0 05              1924 	push	ar5
   03CB C0 06              1925 	push	ar6
   03CD C0 07              1926 	push	ar7
   03CF 74 01              1927 	mov	a,#0x01
   03D1 2B                 1928 	add	a,r3
   03D2 FD                 1929 	mov	r5,a
   03D3 E4                 1930 	clr	a
   03D4 38                 1931 	addc	a,r0
   03D5 FE                 1932 	mov	r6,a
   03D6 89 07              1933 	mov	ar7,r1
   03D8 8D 82              1934 	mov	dpl,r5
   03DA 8E 83              1935 	mov	dph,r6
   03DC 8F F0              1936 	mov	b,r7
   03DE E5 DC              1937 	mov	a,_CAN_DATA1
   03E0 12 0A AC           1938 	lcall	__gptrput
                    027C   1939 	C$CAN.C$709$1$1 ==.
                           1940 ;	../CAN.C:709: pstObj->ulDATAH.ubDB[2] = CAN_DATA2; // Read CAN Data Register 2
   03E3 74 02              1941 	mov	a,#0x02
   03E5 2B                 1942 	add	a,r3
   03E6 FD                 1943 	mov	r5,a
   03E7 E4                 1944 	clr	a
   03E8 38                 1945 	addc	a,r0
   03E9 FE                 1946 	mov	r6,a
   03EA 89 07              1947 	mov	ar7,r1
   03EC 8D 82              1948 	mov	dpl,r5
   03EE 8E 83              1949 	mov	dph,r6
   03F0 8F F0              1950 	mov	b,r7
   03F2 E5 DD              1951 	mov	a,_CAN_DATA2
   03F4 12 0A AC           1952 	lcall	__gptrput
                    0290   1953 	C$CAN.C$710$1$1 ==.
                           1954 ;	../CAN.C:710: pstObj->ulDATAH.ubDB[3] = CAN_DATA3; // Read CAN Data Register 3
   03F7 74 03              1955 	mov	a,#0x03
   03F9 2B                 1956 	add	a,r3
   03FA FB                 1957 	mov	r3,a
   03FB E4                 1958 	clr	a
   03FC 38                 1959 	addc	a,r0
   03FD F8                 1960 	mov	r0,a
   03FE 8B 82              1961 	mov	dpl,r3
   0400 88 83              1962 	mov	dph,r0
   0402 89 F0              1963 	mov	b,r1
   0404 E5 DE              1964 	mov	a,_CAN_DATA3
   0406 12 0A AC           1965 	lcall	__gptrput
                    02A2   1966 	C$CAN.C$713$1$1 ==.
                           1967 ;	../CAN.C:713: CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));
   0409 74 07              1968 	mov	a,#0x07
   040B 25 32              1969 	add	a,_CAN_vGetMsgObj_sloc1_1_0
   040D F5 D9              1970 	mov	_CAN_ADL,a
   040F 74 07              1971 	mov	a,#0x07
   0411 2A                 1972 	add	a,r2
   0412 74 04              1973 	mov	a,#0x04
   0414 3C                 1974 	addc	a,r4
   0415 FD                 1975 	mov	r5,a
   0416 7B 00              1976 	mov	r3,#0x00
   0418 8D DA              1977 	mov	_CAN_ADH,r5
                    02B3   1978 	C$CAN.C$714$1$1 ==.
                           1979 ;	../CAN.C:714: CAN_vReadEN();   // Readmode is Enabled
   041A 75 D8 00           1980 	mov	_CAN_ADCON,#0x00
                    02B6   1981 	C$CAN.C$800$1$1 ==.
                           1982 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   041D D0 07              1983 	pop	ar7
   041F D0 06              1984 	pop	ar6
   0421 D0 05              1985 	pop	ar5
                    02BC   1986 	C$CAN.C$714$1$1 ==.
                           1987 ;	../CAN.C:714: CAN_vReadEN();   // Readmode is Enabled
   0423                    1988 00113$:
   0423 E5 D8              1989 	mov	a,_CAN_ADCON
   0425 20 E1 FB           1990 	jb	acc.1,00113$
                    02C1   1991 	C$CAN.C$716$1$1 ==.
                           1992 ;	../CAN.C:716: if(CAN_DATA1 & 0x08)   // if transmit object (MOSTAT_DIR)
   0428 E5 DC              1993 	mov	a,_CAN_DATA1
   042A 30 E3 28           1994 	jnb	acc.3,00117$
                    02C6   1995 	C$CAN.C$718$1$1 ==.
                           1996 ;	../CAN.C:718: pstObj->ubMOcfg  = (pstObj->ubMOcfg | 0x08);  // set DIR
   042D C0 02              1997 	push	ar2
   042F C0 04              1998 	push	ar4
   0431 74 01              1999 	mov	a,#0x01
   0433 2D                 2000 	add	a,r5
   0434 FB                 2001 	mov	r3,a
   0435 E4                 2002 	clr	a
   0436 3E                 2003 	addc	a,r6
   0437 F8                 2004 	mov	r0,a
   0438 8F 01              2005 	mov	ar1,r7
   043A 8B 82              2006 	mov	dpl,r3
   043C 88 83              2007 	mov	dph,r0
   043E 89 F0              2008 	mov	b,r1
   0440 12 11 86           2009 	lcall	__gptrget
   0443 FA                 2010 	mov	r2,a
   0444 43 02 08           2011 	orl	ar2,#0x08
   0447 8B 82              2012 	mov	dpl,r3
   0449 88 83              2013 	mov	dph,r0
   044B 89 F0              2014 	mov	b,r1
   044D EA                 2015 	mov	a,r2
   044E 12 0A AC           2016 	lcall	__gptrput
                    02EA   2017 	C$CAN.C$800$1$1 ==.
                           2018 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   0451 D0 04              2019 	pop	ar4
   0453 D0 02              2020 	pop	ar2
                    02EE   2021 	C$CAN.C$718$1$1 ==.
                           2022 ;	../CAN.C:718: pstObj->ubMOcfg  = (pstObj->ubMOcfg | 0x08);  // set DIR
   0455                    2023 00117$:
                    02EE   2024 	C$CAN.C$724$1$1 ==.
                           2025 ;	../CAN.C:724: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   0455 75 D8 08           2026 	mov	_CAN_ADCON,#0x08
                    02F1   2027 	C$CAN.C$725$1$1 ==.
                           2028 ;	../CAN.C:725: CAN_vReadEN();   // ReadMode is Enabled
   0458 75 D8 00           2029 	mov	_CAN_ADCON,#0x00
   045B                    2030 00118$:
   045B E5 D8              2031 	mov	a,_CAN_ADCON
   045D 20 E1 FB           2032 	jb	acc.1,00118$
                    02F9   2033 	C$CAN.C$727$1$1 ==.
                           2034 ;	../CAN.C:727: if(CAN_DATA3 & 0x20)   // if extended identifier
   0460 E5 DE              2035 	mov	a,_CAN_DATA3
   0462 20 E5 03           2036 	jb	acc.5,00162$
   0465 02 05 73           2037 	ljmp	00128$
   0468                    2038 00162$:
                    0301   2039 	C$CAN.C$731$1$1 ==.
                           2040 ;	../CAN.C:731: pstObj->ulID.ubDB[0] = CAN_DATA0;   // MOARn[7-0]
   0468 C0 02              2041 	push	ar2
   046A C0 04              2042 	push	ar4
   046C 74 02              2043 	mov	a,#0x02
   046E 2D                 2044 	add	a,r5
   046F FB                 2045 	mov	r3,a
   0470 E4                 2046 	clr	a
   0471 3E                 2047 	addc	a,r6
   0472 F8                 2048 	mov	r0,a
   0473 8F 01              2049 	mov	ar1,r7
   0475 8B 82              2050 	mov	dpl,r3
   0477 88 83              2051 	mov	dph,r0
   0479 89 F0              2052 	mov	b,r1
   047B E5 DB              2053 	mov	a,_CAN_DATA0
   047D 12 0A AC           2054 	lcall	__gptrput
                    0319   2055 	C$CAN.C$732$2$3 ==.
                           2056 ;	../CAN.C:732: pstObj->ulID.ubDB[1] = CAN_DATA1;   // MOARn[15-8]
   0480 74 02              2057 	mov	a,#0x02
   0482 2D                 2058 	add	a,r5
   0483 F5 2F              2059 	mov	_CAN_vGetMsgObj_sloc0_1_0,a
   0485 E4                 2060 	clr	a
   0486 3E                 2061 	addc	a,r6
   0487 F5 30              2062 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 1),a
   0489 8F 31              2063 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 2),r7
   048B 74 01              2064 	mov	a,#0x01
   048D 25 2F              2065 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   048F FA                 2066 	mov	r2,a
   0490 E4                 2067 	clr	a
   0491 35 30              2068 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   0493 FC                 2069 	mov	r4,a
   0494 AB 31              2070 	mov	r3,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   0496 8A 82              2071 	mov	dpl,r2
   0498 8C 83              2072 	mov	dph,r4
   049A 8B F0              2073 	mov	b,r3
   049C E5 DC              2074 	mov	a,_CAN_DATA1
   049E 12 0A AC           2075 	lcall	__gptrput
                    033A   2076 	C$CAN.C$733$2$3 ==.
                           2077 ;	../CAN.C:733: pstObj->ulID.ubDB[2] = CAN_DATA2;   // MOARn[23-16]
   04A1 74 02              2078 	mov	a,#0x02
   04A3 25 2F              2079 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   04A5 FA                 2080 	mov	r2,a
   04A6 E4                 2081 	clr	a
   04A7 35 30              2082 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   04A9 FB                 2083 	mov	r3,a
   04AA AC 31              2084 	mov	r4,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   04AC 8A 82              2085 	mov	dpl,r2
   04AE 8B 83              2086 	mov	dph,r3
   04B0 8C F0              2087 	mov	b,r4
   04B2 E5 DD              2088 	mov	a,_CAN_DATA2
   04B4 12 0A AC           2089 	lcall	__gptrput
                    0350   2090 	C$CAN.C$734$2$3 ==.
                           2091 ;	../CAN.C:734: pstObj->ulID.ubDB[3] = (CAN_DATA3 & 0x1f);  // MOARn[31-24]
   04B7 74 03              2092 	mov	a,#0x03
   04B9 25 2F              2093 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   04BB FA                 2094 	mov	r2,a
   04BC E4                 2095 	clr	a
   04BD 35 30              2096 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   04BF FB                 2097 	mov	r3,a
   04C0 AC 31              2098 	mov	r4,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   04C2 74 1F              2099 	mov	a,#0x1F
   04C4 55 DE              2100 	anl	a,_CAN_DATA3
   04C6 F8                 2101 	mov	r0,a
   04C7 8A 82              2102 	mov	dpl,r2
   04C9 8B 83              2103 	mov	dph,r3
   04CB 8C F0              2104 	mov	b,r4
   04CD 12 0A AC           2105 	lcall	__gptrput
                    0369   2106 	C$CAN.C$737$2$3 ==.
                           2107 ;	../CAN.C:737: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   04D0 75 D8 08           2108 	mov	_CAN_ADCON,#0x08
                    036C   2109 	C$CAN.C$740$2$3 ==.
                           2110 ;	../CAN.C:740: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   04D3 75 D8 08           2111 	mov	_CAN_ADCON,#0x08
                    036F   2112 	C$CAN.C$743$2$3 ==.
                           2113 ;	../CAN.C:743: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   04D6 75 D8 08           2114 	mov	_CAN_ADCON,#0x08
                    0372   2115 	C$CAN.C$745$2$3 ==.
                           2116 ;	../CAN.C:745: CAN_vReadEN();   // ReadMode is Enabled
   04D9 75 D8 00           2117 	mov	_CAN_ADCON,#0x00
                    0375   2118 	C$CAN.C$800$1$1 ==.
                           2119 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   04DC D0 04              2120 	pop	ar4
   04DE D0 02              2121 	pop	ar2
                    0379   2122 	C$CAN.C$745$2$3 ==.
                           2123 ;	../CAN.C:745: CAN_vReadEN();   // ReadMode is Enabled
   04E0                    2124 00121$:
   04E0 E5 D8              2125 	mov	a,_CAN_ADCON
   04E2 20 E1 FB           2126 	jb	acc.1,00121$
                    037E   2127 	C$CAN.C$748$1$1 ==.
                           2128 ;	../CAN.C:748: pstObj->ulMask.ubDB[0] = CAN_DATA0;   // MOAMRn[7-0]
   04E5 C0 02              2129 	push	ar2
   04E7 C0 04              2130 	push	ar4
   04E9 74 06              2131 	mov	a,#0x06
   04EB 2D                 2132 	add	a,r5
   04EC FB                 2133 	mov	r3,a
   04ED E4                 2134 	clr	a
   04EE 3E                 2135 	addc	a,r6
   04EF F8                 2136 	mov	r0,a
   04F0 8F 01              2137 	mov	ar1,r7
   04F2 8B 82              2138 	mov	dpl,r3
   04F4 88 83              2139 	mov	dph,r0
   04F6 89 F0              2140 	mov	b,r1
   04F8 E5 DB              2141 	mov	a,_CAN_DATA0
   04FA 12 0A AC           2142 	lcall	__gptrput
                    0396   2143 	C$CAN.C$749$2$3 ==.
                           2144 ;	../CAN.C:749: pstObj->ulMask.ubDB[1] = CAN_DATA1;   // MOAMRn[15-8]
   04FD 74 06              2145 	mov	a,#0x06
   04FF 2D                 2146 	add	a,r5
   0500 F5 2F              2147 	mov	_CAN_vGetMsgObj_sloc0_1_0,a
   0502 E4                 2148 	clr	a
   0503 3E                 2149 	addc	a,r6
   0504 F5 30              2150 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 1),a
   0506 8F 31              2151 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 2),r7
   0508 74 01              2152 	mov	a,#0x01
   050A 25 2F              2153 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   050C FA                 2154 	mov	r2,a
   050D E4                 2155 	clr	a
   050E 35 30              2156 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   0510 FC                 2157 	mov	r4,a
   0511 AB 31              2158 	mov	r3,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   0513 8A 82              2159 	mov	dpl,r2
   0515 8C 83              2160 	mov	dph,r4
   0517 8B F0              2161 	mov	b,r3
   0519 E5 DC              2162 	mov	a,_CAN_DATA1
   051B 12 0A AC           2163 	lcall	__gptrput
                    03B7   2164 	C$CAN.C$750$2$3 ==.
                           2165 ;	../CAN.C:750: pstObj->ulMask.ubDB[2] = CAN_DATA2;   // MOAMRn[23-16]
   051E 74 02              2166 	mov	a,#0x02
   0520 25 2F              2167 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   0522 FA                 2168 	mov	r2,a
   0523 E4                 2169 	clr	a
   0524 35 30              2170 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   0526 FB                 2171 	mov	r3,a
   0527 AC 31              2172 	mov	r4,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   0529 8A 82              2173 	mov	dpl,r2
   052B 8B 83              2174 	mov	dph,r3
   052D 8C F0              2175 	mov	b,r4
   052F E5 DD              2176 	mov	a,_CAN_DATA2
   0531 12 0A AC           2177 	lcall	__gptrput
                    03CD   2178 	C$CAN.C$751$2$3 ==.
                           2179 ;	../CAN.C:751: pstObj->ulMask.ubDB[3] = (CAN_DATA3 & 0x1f);      // MOAMRn[31-24]
   0534 74 03              2180 	mov	a,#0x03
   0536 25 2F              2181 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   0538 FA                 2182 	mov	r2,a
   0539 E4                 2183 	clr	a
   053A 35 30              2184 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   053C FB                 2185 	mov	r3,a
   053D AC 31              2186 	mov	r4,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   053F 74 1F              2187 	mov	a,#0x1F
   0541 55 DE              2188 	anl	a,_CAN_DATA3
   0543 8A 82              2189 	mov	dpl,r2
   0545 8B 83              2190 	mov	dph,r3
   0547 8C F0              2191 	mov	b,r4
   0549 12 0A AC           2192 	lcall	__gptrput
                    03E5   2193 	C$CAN.C$753$2$3 ==.
                           2194 ;	../CAN.C:753: pstObj->ubMOcfg  = (pstObj->ubMOcfg | 0x04);      // set IDE 29-bit
   054C 74 01              2195 	mov	a,#0x01
   054E 2D                 2196 	add	a,r5
   054F FA                 2197 	mov	r2,a
   0550 E4                 2198 	clr	a
   0551 3E                 2199 	addc	a,r6
   0552 FB                 2200 	mov	r3,a
   0553 8F 04              2201 	mov	ar4,r7
   0555 8A 82              2202 	mov	dpl,r2
   0557 8B 83              2203 	mov	dph,r3
   0559 8C F0              2204 	mov	b,r4
   055B 12 11 86           2205 	lcall	__gptrget
   055E F8                 2206 	mov	r0,a
   055F 43 00 04           2207 	orl	ar0,#0x04
   0562 8A 82              2208 	mov	dpl,r2
   0564 8B 83              2209 	mov	dph,r3
   0566 8C F0              2210 	mov	b,r4
   0568 E8                 2211 	mov	a,r0
   0569 12 0A AC           2212 	lcall	__gptrput
   056C D0 04              2213 	pop	ar4
   056E D0 02              2214 	pop	ar2
   0570 02 07 0E           2215 	ljmp	00129$
   0573                    2216 00128$:
                    040C   2217 	C$CAN.C$758$1$1 ==.
                           2218 ;	../CAN.C:758: pstObj->ulID.ubDB[0] = (CAN_DATA2 & 0xFC) >> 2;   // MOARn[23-16]
   0573 C0 02              2219 	push	ar2
   0575 C0 04              2220 	push	ar4
   0577 74 02              2221 	mov	a,#0x02
   0579 2D                 2222 	add	a,r5
   057A FB                 2223 	mov	r3,a
   057B E4                 2224 	clr	a
   057C 3E                 2225 	addc	a,r6
   057D F8                 2226 	mov	r0,a
   057E 8F 01              2227 	mov	ar1,r7
   0580 74 FC              2228 	mov	a,#0xFC
   0582 55 DD              2229 	anl	a,_CAN_DATA2
   0584 03                 2230 	rr	a
   0585 03                 2231 	rr	a
   0586 54 3F              2232 	anl	a,#0x3f
   0588 8B 82              2233 	mov	dpl,r3
   058A 88 83              2234 	mov	dph,r0
   058C 89 F0              2235 	mov	b,r1
   058E 12 0A AC           2236 	lcall	__gptrput
                    042A   2237 	C$CAN.C$759$2$4 ==.
                           2238 ;	../CAN.C:759: pstObj->ulID.ubDB[1] = (CAN_DATA3 & 0x1f);        // MOARn[31-24]
   0591 74 02              2239 	mov	a,#0x02
   0593 2D                 2240 	add	a,r5
   0594 F5 2F              2241 	mov	_CAN_vGetMsgObj_sloc0_1_0,a
   0596 E4                 2242 	clr	a
   0597 3E                 2243 	addc	a,r6
   0598 F5 30              2244 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 1),a
   059A 8F 31              2245 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 2),r7
   059C 74 01              2246 	mov	a,#0x01
   059E 25 2F              2247 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   05A0 F5 33              2248 	mov	_CAN_vGetMsgObj_sloc2_1_0,a
   05A2 E4                 2249 	clr	a
   05A3 35 30              2250 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   05A5 F5 34              2251 	mov	(_CAN_vGetMsgObj_sloc2_1_0 + 1),a
   05A7 85 31 35           2252 	mov	(_CAN_vGetMsgObj_sloc2_1_0 + 2),(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   05AA 74 1F              2253 	mov	a,#0x1F
   05AC 55 DE              2254 	anl	a,_CAN_DATA3
   05AE 85 33 82           2255 	mov	dpl,_CAN_vGetMsgObj_sloc2_1_0
   05B1 85 34 83           2256 	mov	dph,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   05B4 85 35 F0           2257 	mov	b,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   05B7 12 0A AC           2258 	lcall	__gptrput
                    0453   2259 	C$CAN.C$760$2$4 ==.
                           2260 ;	../CAN.C:760: pstObj->ulID.ubDB[2] = 0x00;    // MOARn[15-8]
   05BA 74 02              2261 	mov	a,#0x02
   05BC 25 2F              2262 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   05BE FB                 2263 	mov	r3,a
   05BF E4                 2264 	clr	a
   05C0 35 30              2265 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   05C2 FC                 2266 	mov	r4,a
   05C3 AA 31              2267 	mov	r2,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   05C5 8B 82              2268 	mov	dpl,r3
   05C7 8C 83              2269 	mov	dph,r4
   05C9 8A F0              2270 	mov	b,r2
   05CB E4                 2271 	clr	a
   05CC 12 0A AC           2272 	lcall	__gptrput
                    0468   2273 	C$CAN.C$761$2$4 ==.
                           2274 ;	../CAN.C:761: pstObj->ulID.ubDB[3] = 0x00;    // MOARn[15-8]
   05CF 74 03              2275 	mov	a,#0x03
   05D1 25 2F              2276 	add	a,_CAN_vGetMsgObj_sloc0_1_0
   05D3 FA                 2277 	mov	r2,a
   05D4 E4                 2278 	clr	a
   05D5 35 30              2279 	addc	a,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   05D7 FB                 2280 	mov	r3,a
   05D8 AC 31              2281 	mov	r4,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   05DA 8A 82              2282 	mov	dpl,r2
   05DC 8B 83              2283 	mov	dph,r3
   05DE 8C F0              2284 	mov	b,r4
   05E0 E4                 2285 	clr	a
   05E1 12 0A AC           2286 	lcall	__gptrput
                    047D   2287 	C$CAN.C$764$2$4 ==.
                           2288 ;	../CAN.C:764: ubTemp = ((pstObj->ulID.ubDB[1]) & 0x03) << 6;
   05E4 85 33 82           2289 	mov	dpl,_CAN_vGetMsgObj_sloc2_1_0
   05E7 85 34 83           2290 	mov	dph,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   05EA 85 35 F0           2291 	mov	b,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   05ED 12 11 86           2292 	lcall	__gptrget
   05F0 54 03              2293 	anl	a,#0x03
   05F2 03                 2294 	rr	a
   05F3 03                 2295 	rr	a
   05F4 54 C0              2296 	anl	a,#0xc0
   05F6 F5 2E              2297 	mov	_CAN_vGetMsgObj_ubTemp_1_1,a
                    0491   2298 	C$CAN.C$765$2$4 ==.
                           2299 ;	../CAN.C:765: pstObj->ulID.ubDB[1] = (pstObj->ulID.ubDB[1] >> 2);
   05F8 85 33 82           2300 	mov	dpl,_CAN_vGetMsgObj_sloc2_1_0
   05FB 85 34 83           2301 	mov	dph,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   05FE 85 35 F0           2302 	mov	b,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   0601 12 11 86           2303 	lcall	__gptrget
   0604 03                 2304 	rr	a
   0605 03                 2305 	rr	a
   0606 54 3F              2306 	anl	a,#0x3f
   0608 85 33 82           2307 	mov	dpl,_CAN_vGetMsgObj_sloc2_1_0
   060B 85 34 83           2308 	mov	dph,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   060E 85 35 F0           2309 	mov	b,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   0611 12 0A AC           2310 	lcall	__gptrput
                    04AD   2311 	C$CAN.C$766$2$4 ==.
                           2312 ;	../CAN.C:766: pstObj->ulID.ubDB[0] = (pstObj->ulID.ubDB[0] + ubTemp);
   0614 74 02              2313 	mov	a,#0x02
   0616 2D                 2314 	add	a,r5
   0617 FA                 2315 	mov	r2,a
   0618 E4                 2316 	clr	a
   0619 3E                 2317 	addc	a,r6
   061A FB                 2318 	mov	r3,a
   061B 8F 04              2319 	mov	ar4,r7
   061D 8A 82              2320 	mov	dpl,r2
   061F 8B 83              2321 	mov	dph,r3
   0621 8C F0              2322 	mov	b,r4
   0623 12 11 86           2323 	lcall	__gptrget
   0626 F8                 2324 	mov	r0,a
   0627 E5 2E              2325 	mov	a,_CAN_vGetMsgObj_ubTemp_1_1
   0629 28                 2326 	add	a,r0
   062A F8                 2327 	mov	r0,a
   062B 8A 82              2328 	mov	dpl,r2
   062D 8B 83              2329 	mov	dph,r3
   062F 8C F0              2330 	mov	b,r4
   0631 12 0A AC           2331 	lcall	__gptrput
                    04CD   2332 	C$CAN.C$769$2$4 ==.
                           2333 ;	../CAN.C:769: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   0634 75 D8 08           2334 	mov	_CAN_ADCON,#0x08
                    04D0   2335 	C$CAN.C$772$2$4 ==.
                           2336 ;	../CAN.C:772: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   0637 75 D8 08           2337 	mov	_CAN_ADCON,#0x08
                    04D3   2338 	C$CAN.C$775$2$4 ==.
                           2339 ;	../CAN.C:775: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   063A 75 D8 08           2340 	mov	_CAN_ADCON,#0x08
                    04D6   2341 	C$CAN.C$777$2$4 ==.
                           2342 ;	../CAN.C:777: CAN_vReadEN();   // ReadMode is Enabled
   063D 75 D8 00           2343 	mov	_CAN_ADCON,#0x00
                    04D9   2344 	C$CAN.C$800$1$1 ==.
                           2345 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   0640 D0 04              2346 	pop	ar4
   0642 D0 02              2347 	pop	ar2
                    04DD   2348 	C$CAN.C$777$2$4 ==.
                           2349 ;	../CAN.C:777: CAN_vReadEN();   // ReadMode is Enabled
   0644                    2350 00124$:
   0644 E5 D8              2351 	mov	a,_CAN_ADCON
   0646 20 E1 FB           2352 	jb	acc.1,00124$
                    04E2   2353 	C$CAN.C$781$1$1 ==.
                           2354 ;	../CAN.C:781: pstObj->ulMask.ubDB[0] = (CAN_DATA2 & 0xFC) >> 2;   // MOARn[23-16]
   0649 C0 02              2355 	push	ar2
   064B C0 04              2356 	push	ar4
   064D 74 06              2357 	mov	a,#0x06
   064F 2D                 2358 	add	a,r5
   0650 FB                 2359 	mov	r3,a
   0651 E4                 2360 	clr	a
   0652 3E                 2361 	addc	a,r6
   0653 F8                 2362 	mov	r0,a
   0654 8F 01              2363 	mov	ar1,r7
   0656 74 FC              2364 	mov	a,#0xFC
   0658 55 DD              2365 	anl	a,_CAN_DATA2
   065A 03                 2366 	rr	a
   065B 03                 2367 	rr	a
   065C 54 3F              2368 	anl	a,#0x3f
   065E 8B 82              2369 	mov	dpl,r3
   0660 88 83              2370 	mov	dph,r0
   0662 89 F0              2371 	mov	b,r1
   0664 12 0A AC           2372 	lcall	__gptrput
                    0500   2373 	C$CAN.C$782$2$4 ==.
                           2374 ;	../CAN.C:782: pstObj->ulMask.ubDB[1] = (CAN_DATA3 & 0x1f);        // MOARn[31-24]
   0667 74 06              2375 	mov	a,#0x06
   0669 2D                 2376 	add	a,r5
   066A F5 33              2377 	mov	_CAN_vGetMsgObj_sloc2_1_0,a
   066C E4                 2378 	clr	a
   066D 3E                 2379 	addc	a,r6
   066E F5 34              2380 	mov	(_CAN_vGetMsgObj_sloc2_1_0 + 1),a
   0670 8F 35              2381 	mov	(_CAN_vGetMsgObj_sloc2_1_0 + 2),r7
   0672 74 01              2382 	mov	a,#0x01
   0674 25 33              2383 	add	a,_CAN_vGetMsgObj_sloc2_1_0
   0676 F5 2F              2384 	mov	_CAN_vGetMsgObj_sloc0_1_0,a
   0678 E4                 2385 	clr	a
   0679 35 34              2386 	addc	a,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   067B F5 30              2387 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 1),a
   067D 85 35 31           2388 	mov	(_CAN_vGetMsgObj_sloc0_1_0 + 2),(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   0680 74 1F              2389 	mov	a,#0x1F
   0682 55 DE              2390 	anl	a,_CAN_DATA3
   0684 85 2F 82           2391 	mov	dpl,_CAN_vGetMsgObj_sloc0_1_0
   0687 85 30 83           2392 	mov	dph,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   068A 85 31 F0           2393 	mov	b,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   068D 12 0A AC           2394 	lcall	__gptrput
                    0529   2395 	C$CAN.C$783$2$4 ==.
                           2396 ;	../CAN.C:783: pstObj->ulMask.ubDB[2] = 0x00;    // MOARn[15-8]
   0690 74 02              2397 	mov	a,#0x02
   0692 25 33              2398 	add	a,_CAN_vGetMsgObj_sloc2_1_0
   0694 FB                 2399 	mov	r3,a
   0695 E4                 2400 	clr	a
   0696 35 34              2401 	addc	a,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   0698 FC                 2402 	mov	r4,a
   0699 AA 35              2403 	mov	r2,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   069B 8B 82              2404 	mov	dpl,r3
   069D 8C 83              2405 	mov	dph,r4
   069F 8A F0              2406 	mov	b,r2
   06A1 E4                 2407 	clr	a
   06A2 12 0A AC           2408 	lcall	__gptrput
                    053E   2409 	C$CAN.C$784$2$4 ==.
                           2410 ;	../CAN.C:784: pstObj->ulMask.ubDB[3] = 0x00;    // MOARn[15-8]
   06A5 74 03              2411 	mov	a,#0x03
   06A7 25 33              2412 	add	a,_CAN_vGetMsgObj_sloc2_1_0
   06A9 FA                 2413 	mov	r2,a
   06AA E4                 2414 	clr	a
   06AB 35 34              2415 	addc	a,(_CAN_vGetMsgObj_sloc2_1_0 + 1)
   06AD FB                 2416 	mov	r3,a
   06AE AC 35              2417 	mov	r4,(_CAN_vGetMsgObj_sloc2_1_0 + 2)
   06B0 8A 82              2418 	mov	dpl,r2
   06B2 8B 83              2419 	mov	dph,r3
   06B4 8C F0              2420 	mov	b,r4
   06B6 E4                 2421 	clr	a
   06B7 12 0A AC           2422 	lcall	__gptrput
                    0553   2423 	C$CAN.C$787$2$4 ==.
                           2424 ;	../CAN.C:787: ubTemp = ((pstObj->ulMask.ubDB[1]) & 0x03) << 6;
   06BA 85 2F 82           2425 	mov	dpl,_CAN_vGetMsgObj_sloc0_1_0
   06BD 85 30 83           2426 	mov	dph,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   06C0 85 31 F0           2427 	mov	b,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   06C3 12 11 86           2428 	lcall	__gptrget
   06C6 54 03              2429 	anl	a,#0x03
   06C8 03                 2430 	rr	a
   06C9 03                 2431 	rr	a
   06CA 54 C0              2432 	anl	a,#0xc0
   06CC F5 2E              2433 	mov	_CAN_vGetMsgObj_ubTemp_1_1,a
                    0567   2434 	C$CAN.C$788$2$4 ==.
                           2435 ;	../CAN.C:788: pstObj->ulMask.ubDB[1] = (pstObj->ulMask.ubDB[1] >> 2);
   06CE 85 2F 82           2436 	mov	dpl,_CAN_vGetMsgObj_sloc0_1_0
   06D1 85 30 83           2437 	mov	dph,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   06D4 85 31 F0           2438 	mov	b,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   06D7 12 11 86           2439 	lcall	__gptrget
   06DA 03                 2440 	rr	a
   06DB 03                 2441 	rr	a
   06DC 54 3F              2442 	anl	a,#0x3f
   06DE 85 2F 82           2443 	mov	dpl,_CAN_vGetMsgObj_sloc0_1_0
   06E1 85 30 83           2444 	mov	dph,(_CAN_vGetMsgObj_sloc0_1_0 + 1)
   06E4 85 31 F0           2445 	mov	b,(_CAN_vGetMsgObj_sloc0_1_0 + 2)
   06E7 12 0A AC           2446 	lcall	__gptrput
                    0583   2447 	C$CAN.C$789$2$4 ==.
                           2448 ;	../CAN.C:789: pstObj->ulMask.ubDB[0] = (pstObj->ulMask.ubDB[0] + ubTemp);
   06EA 74 06              2449 	mov	a,#0x06
   06EC 2D                 2450 	add	a,r5
   06ED FA                 2451 	mov	r2,a
   06EE E4                 2452 	clr	a
   06EF 3E                 2453 	addc	a,r6
   06F0 FB                 2454 	mov	r3,a
   06F1 8F 04              2455 	mov	ar4,r7
   06F3 8A 82              2456 	mov	dpl,r2
   06F5 8B 83              2457 	mov	dph,r3
   06F7 8C F0              2458 	mov	b,r4
   06F9 12 11 86           2459 	lcall	__gptrget
   06FC F8                 2460 	mov	r0,a
   06FD E5 2E              2461 	mov	a,_CAN_vGetMsgObj_ubTemp_1_1
   06FF 28                 2462 	add	a,r0
   0700 F8                 2463 	mov	r0,a
   0701 8A 82              2464 	mov	dpl,r2
   0703 8B 83              2465 	mov	dph,r3
   0705 8C F0              2466 	mov	b,r4
   0707 12 0A AC           2467 	lcall	__gptrput
                    05A3   2468 	C$CAN.C$800$1$1 ==.
                           2469 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   070A D0 04              2470 	pop	ar4
   070C D0 02              2471 	pop	ar2
                    05A7   2472 	C$CAN.C$789$1$1 ==.
                           2473 ;	../CAN.C:789: pstObj->ulMask.ubDB[0] = (pstObj->ulMask.ubDB[0] + ubTemp);
   070E                    2474 00129$:
                    05A7   2475 	C$CAN.C$794$1$1 ==.
                           2476 ;	../CAN.C:794: CAN_vWriteCANAddress(CAN_MOIPR(ubObjNr));
   070E 74 02              2477 	mov	a,#0x02
   0710 25 32              2478 	add	a,_CAN_vGetMsgObj_sloc1_1_0
   0712 F5 D9              2479 	mov	_CAN_ADL,a
   0714 74 02              2480 	mov	a,#0x02
   0716 2A                 2481 	add	a,r2
   0717 74 04              2482 	mov	a,#0x04
   0719 3C                 2483 	addc	a,r4
   071A FC                 2484 	mov	r4,a
   071B 7A 00              2485 	mov	r2,#0x00
   071D 8C DA              2486 	mov	_CAN_ADH,r4
                    05B8   2487 	C$CAN.C$795$1$1 ==.
                           2488 ;	../CAN.C:795: CAN_vReadEN();   // Readmode is Enabled
   071F 75 D8 00           2489 	mov	_CAN_ADCON,#0x00
   0722                    2490 00130$:
   0722 E5 D8              2491 	mov	a,_CAN_ADCON
   0724 20 E1 FB           2492 	jb	acc.1,00130$
                    05C0   2493 	C$CAN.C$797$1$1 ==.
                           2494 ;	../CAN.C:797: pstObj->uwCounter.ubDB[0] = CAN_DATA2;  // MOIPRn[16-23]
   0727 74 12              2495 	mov	a,#0x12
   0729 2D                 2496 	add	a,r5
   072A FA                 2497 	mov	r2,a
   072B E4                 2498 	clr	a
   072C 3E                 2499 	addc	a,r6
   072D FB                 2500 	mov	r3,a
   072E 8F 04              2501 	mov	ar4,r7
   0730 8A 82              2502 	mov	dpl,r2
   0732 8B 83              2503 	mov	dph,r3
   0734 8C F0              2504 	mov	b,r4
   0736 E5 DD              2505 	mov	a,_CAN_DATA2
   0738 12 0A AC           2506 	lcall	__gptrput
                    05D4   2507 	C$CAN.C$798$1$1 ==.
                           2508 ;	../CAN.C:798: pstObj->uwCounter.ubDB[1] = CAN_DATA3;  // MOIPRn[31-24]
   073B 74 12              2509 	mov	a,#0x12
   073D 2D                 2510 	add	a,r5
   073E FD                 2511 	mov	r5,a
   073F E4                 2512 	clr	a
   0740 3E                 2513 	addc	a,r6
   0741 FE                 2514 	mov	r6,a
   0742 0D                 2515 	inc	r5
   0743 BD 00 01           2516 	cjne	r5,#0x00,00166$
   0746 0E                 2517 	inc	r6
   0747                    2518 00166$:
   0747 8D 82              2519 	mov	dpl,r5
   0749 8E 83              2520 	mov	dph,r6
   074B 8F F0              2521 	mov	b,r7
   074D E5 DE              2522 	mov	a,_CAN_DATA3
   074F 12 0A AC           2523 	lcall	__gptrput
                    05EB   2524 	C$CAN.C$800$1$1 ==.
                           2525 ;	../CAN.C:800: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   0752 D0 DE D0 DD D0 DC  2526 	 pop 0xDE pop 0xDD pop 0xDC pop 0xDB pop 0xDA pop 0xD9 
        D0 DB D0 DA D0 D9
                    05F7   2527 	C$CAN.C$801$1$1 ==.
                    05F7   2528 	XG$CAN_vGetMsgObj$0$0 ==.
   075E 22                 2529 	ret
                           2530 ;------------------------------------------------------------
                           2531 ;Allocation info for local variables in function 'CAN_vTransmit'
                           2532 ;------------------------------------------------------------
                           2533 ;ubObjNr                   Allocated to registers r2 
                           2534 ;------------------------------------------------------------
                    05F8   2535 	G$CAN_vTransmit$0$0 ==.
                    05F8   2536 	C$CAN.C$830$1$1 ==.
                           2537 ;	../CAN.C:830: void CAN_vTransmit(ubyte ubObjNr)
                           2538 ;	-----------------------------------------
                           2539 ;	 function CAN_vTransmit
                           2540 ;	-----------------------------------------
   075F                    2541 _CAN_vTransmit:
   075F AA 82              2542 	mov	r2,dpl
                    05FA   2543 	C$CAN.C$832$1$1 ==.
                           2544 ;	../CAN.C:832: CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register
   0761                    2545 00101$:
   0761 E5 D8              2546 	mov	a,_CAN_ADCON
   0763 20 E1 FB           2547 	jb	acc.1,00101$
   0766 C0 D9 C0 DA C0 DB  2548 	 push 0xD9 push 0xDA push 0xDB push 0xDC push 0xDD push 0xDE 
        C0 DC C0 DD C0 DE
                    060B   2549 	C$CAN.C$834$1$1 ==.
                           2550 ;	../CAN.C:834: CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));  //Addressing CAN_MOCTR register
   0772 EA                 2551 	mov	a,r2
   0773 C4                 2552 	swap	a
   0774 03                 2553 	rr	a
   0775 54 F8              2554 	anl	a,#0xf8
   0777 FB                 2555 	mov	r3,a
   0778 74 07              2556 	mov	a,#0x07
   077A 2B                 2557 	add	a,r3
   077B F5 D9              2558 	mov	_CAN_ADL,a
   077D EA                 2559 	mov	a,r2
   077E 75 F0 08           2560 	mov	b,#0x08
   0781 A4                 2561 	mul	ab
   0782 24 07              2562 	add	a,#0x07
   0784 74 04              2563 	mov	a,#0x04
   0786 35 F0              2564 	addc	a,b
   0788 FB                 2565 	mov	r3,a
   0789 7A 00              2566 	mov	r2,#0x00
   078B 8B DA              2567 	mov	_CAN_ADH,r3
                    0626   2568 	C$CAN.C$835$1$1 ==.
                           2569 ;	../CAN.C:835: CAN_vWriteCANData(0x07200000);      // set TXRQ,TXEN0,TXEN1,MSGVAL
   078D 75 DB 00           2570 	mov	_CAN_DATA0,#0x00
   0790 75 DC 00           2571 	mov	_CAN_DATA1,#0x00
   0793 75 DD 20           2572 	mov	_CAN_DATA2,#0x20
   0796 75 DE 07           2573 	mov	_CAN_DATA3,#0x07
   0799 75 D8 F1           2574 	mov	_CAN_ADCON,#0xF1
   079C                    2575 00104$:
   079C E5 D8              2576 	mov	a,_CAN_ADCON
   079E 20 E1 FB           2577 	jb	acc.1,00104$
                    063A   2578 	C$CAN.C$837$1$1 ==.
                           2579 ;	../CAN.C:837: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   07A1 D0 DE D0 DD D0 DC  2580 	 pop 0xDE pop 0xDD pop 0xDC pop 0xDB pop 0xDA pop 0xD9 
        D0 DB D0 DA D0 D9
                    0646   2581 	C$CAN.C$839$1$1 ==.
                    0646   2582 	XG$CAN_vTransmit$0$0 ==.
   07AD 22                 2583 	ret
                           2584 ;------------------------------------------------------------
                           2585 ;Allocation info for local variables in function 'CAN_vLoadData'
                           2586 ;------------------------------------------------------------
                           2587 ;ulpubData                 Allocated with name '_CAN_vLoadData_PARM_2'
                           2588 ;ubObjNr                   Allocated to registers r2 
                           2589 ;sloc0                     Allocated with name '_CAN_vLoadData_sloc0_1_0'
                           2590 ;------------------------------------------------------------
                    0647   2591 	G$CAN_vLoadData$0$0 ==.
                    0647   2592 	C$CAN.C$870$1$1 ==.
                           2593 ;	../CAN.C:870: void CAN_vLoadData(ubyte ubObjNr, ulong *ulpubData)
                           2594 ;	-----------------------------------------
                           2595 ;	 function CAN_vLoadData
                           2596 ;	-----------------------------------------
   07AE                    2597 _CAN_vLoadData:
   07AE AA 82              2598 	mov	r2,dpl
                    0649   2599 	C$CAN.C$872$1$1 ==.
                           2600 ;	../CAN.C:872: CAN_pushAMRegs();    //   PUSH the CAN Access Mediator Register
   07B0                    2601 00101$:
   07B0 E5 D8              2602 	mov	a,_CAN_ADCON
   07B2 20 E1 FB           2603 	jb	acc.1,00101$
   07B5 C0 D9 C0 DA C0 DB  2604 	 push 0xD9 push 0xDA push 0xDB push 0xDC push 0xDD push 0xDE 
        C0 DC C0 DD C0 DE
                    065A   2605 	C$CAN.C$874$1$1 ==.
                           2606 ;	../CAN.C:874: CAN_vWriteCANAddress(CAN_MOCTR(ubObjNr));  // Addressing CAN_MOCTRn register
   07C1 EA                 2607 	mov	a,r2
   07C2 C4                 2608 	swap	a
   07C3 03                 2609 	rr	a
   07C4 54 F8              2610 	anl	a,#0xf8
   07C6 FB                 2611 	mov	r3,a
   07C7 74 07              2612 	mov	a,#0x07
   07C9 2B                 2613 	add	a,r3
   07CA F5 D9              2614 	mov	_CAN_ADL,a
   07CC EA                 2615 	mov	a,r2
   07CD 75 F0 08           2616 	mov	b,#0x08
   07D0 A4                 2617 	mul	ab
   07D1 24 07              2618 	add	a,#0x07
   07D3 74 04              2619 	mov	a,#0x04
   07D5 35 F0              2620 	addc	a,b
   07D7 FB                 2621 	mov	r3,a
   07D8 7A 00              2622 	mov	r2,#0x00
   07DA 8B DA              2623 	mov	_CAN_ADH,r3
                    0675   2624 	C$CAN.C$875$1$1 ==.
                           2625 ;	../CAN.C:875: CAN_vWriteCANData(0x00080000);      // Set NEWDATA
   07DC 75 DB 00           2626 	mov	_CAN_DATA0,#0x00
   07DF 75 DC 00           2627 	mov	_CAN_DATA1,#0x00
   07E2 75 DD 08           2628 	mov	_CAN_DATA2,#0x08
   07E5 75 DE 00           2629 	mov	_CAN_DATA3,#0x00
   07E8 75 D8 F1           2630 	mov	_CAN_ADCON,#0xF1
   07EB                    2631 00104$:
   07EB E5 D8              2632 	mov	a,_CAN_ADCON
   07ED 20 E1 FB           2633 	jb	acc.1,00104$
                    0689   2634 	C$CAN.C$878$1$1 ==.
                           2635 ;	../CAN.C:878: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   07F0 75 D8 08           2636 	mov	_CAN_ADCON,#0x08
                    068C   2637 	C$CAN.C$881$1$1 ==.
                           2638 ;	../CAN.C:881: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   07F3 75 D8 08           2639 	mov	_CAN_ADCON,#0x08
                    068F   2640 	C$CAN.C$884$1$1 ==.
                           2641 ;	../CAN.C:884: CAN_ADCON = ADR_DEC;   // Auto Decrement the current address(-1)
   07F6 75 D8 08           2642 	mov	_CAN_ADCON,#0x08
                    0692   2643 	C$CAN.C$886$1$1 ==.
                           2644 ;	../CAN.C:886: CAN_vWriteCANData(*ulpubData); // Loading CAN_MODATALn
   07F9 85 36 39           2645 	mov	_CAN_vLoadData_sloc0_1_0,_CAN_vLoadData_PARM_2
   07FC 85 37 3A           2646 	mov	(_CAN_vLoadData_sloc0_1_0 + 1),(_CAN_vLoadData_PARM_2 + 1)
   07FF 85 38 3B           2647 	mov	(_CAN_vLoadData_sloc0_1_0 + 2),(_CAN_vLoadData_PARM_2 + 2)
   0802 85 39 82           2648 	mov	dpl,_CAN_vLoadData_sloc0_1_0
   0805 85 3A 83           2649 	mov	dph,(_CAN_vLoadData_sloc0_1_0 + 1)
   0808 85 3B F0           2650 	mov	b,(_CAN_vLoadData_sloc0_1_0 + 2)
   080B 12 11 86           2651 	lcall	__gptrget
   080E FD                 2652 	mov	r5,a
   080F A3                 2653 	inc	dptr
   0810 12 11 86           2654 	lcall	__gptrget
   0813 FE                 2655 	mov	r6,a
   0814 A3                 2656 	inc	dptr
   0815 12 11 86           2657 	lcall	__gptrget
   0818 FF                 2658 	mov	r7,a
   0819 A3                 2659 	inc	dptr
   081A 12 11 86           2660 	lcall	__gptrget
   081D F8                 2661 	mov	r0,a
   081E 8D 01              2662 	mov	ar1,r5
   0820 89 DB              2663 	mov	_CAN_DATA0,r1
   0822 8E 03              2664 	mov	ar3,r6
   0824 8B DC              2665 	mov	_CAN_DATA1,r3
   0826 7A 00              2666 	mov	r2,#0x00
   0828 7B 00              2667 	mov	r3,#0x00
   082A 8F 04              2668 	mov	ar4,r7
   082C 79 00              2669 	mov	r1,#0x00
   082E 8C DD              2670 	mov	_CAN_DATA2,r4
   0830 7D 00              2671 	mov	r5,#0x00
   0832 7E 00              2672 	mov	r6,#0x00
   0834 7F 00              2673 	mov	r7,#0x00
   0836 88 DE              2674 	mov	_CAN_DATA3,r0
   0838 75 D8 F1           2675 	mov	_CAN_ADCON,#0xF1
   083B                    2676 00107$:
   083B E5 D8              2677 	mov	a,_CAN_ADCON
   083D 20 E1 FB           2678 	jb	acc.1,00107$
                    06D9   2679 	C$CAN.C$889$1$1 ==.
                           2680 ;	../CAN.C:889: CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)
                    06D9   2681 	C$CAN.C$891$1$1 ==.
                           2682 ;	../CAN.C:891: ulpubData++;
   0840 74 04              2683 	mov	a,#0x04
   0842 F5 D8              2684 	mov	_CAN_ADCON,a
   0844 25 39              2685 	add	a,_CAN_vLoadData_sloc0_1_0
   0846 F5 36              2686 	mov	_CAN_vLoadData_PARM_2,a
   0848 E4                 2687 	clr	a
   0849 35 3A              2688 	addc	a,(_CAN_vLoadData_sloc0_1_0 + 1)
   084B F5 37              2689 	mov	(_CAN_vLoadData_PARM_2 + 1),a
   084D 85 3B 38           2690 	mov	(_CAN_vLoadData_PARM_2 + 2),(_CAN_vLoadData_sloc0_1_0 + 2)
                    06E9   2691 	C$CAN.C$893$1$1 ==.
                           2692 ;	../CAN.C:893: CAN_vWriteCANData(*ulpubData); // Loading CAN_MODATAHn
   0850 AA 36              2693 	mov	r2,_CAN_vLoadData_PARM_2
   0852 AB 37              2694 	mov	r3,(_CAN_vLoadData_PARM_2 + 1)
   0854 AC 38              2695 	mov	r4,(_CAN_vLoadData_PARM_2 + 2)
   0856 8A 82              2696 	mov	dpl,r2
   0858 8B 83              2697 	mov	dph,r3
   085A 8C F0              2698 	mov	b,r4
   085C 12 11 86           2699 	lcall	__gptrget
   085F FA                 2700 	mov	r2,a
   0860 A3                 2701 	inc	dptr
   0861 12 11 86           2702 	lcall	__gptrget
   0864 FB                 2703 	mov	r3,a
   0865 A3                 2704 	inc	dptr
   0866 12 11 86           2705 	lcall	__gptrget
   0869 FC                 2706 	mov	r4,a
   086A A3                 2707 	inc	dptr
   086B 12 11 86           2708 	lcall	__gptrget
   086E FD                 2709 	mov	r5,a
   086F 8A 06              2710 	mov	ar6,r2
   0871 8E DB              2711 	mov	_CAN_DATA0,r6
   0873 8B 07              2712 	mov	ar7,r3
   0875 8F DC              2713 	mov	_CAN_DATA1,r7
   0877 7E 00              2714 	mov	r6,#0x00
   0879 7F 00              2715 	mov	r7,#0x00
   087B 8C 00              2716 	mov	ar0,r4
   087D 79 00              2717 	mov	r1,#0x00
   087F 88 DD              2718 	mov	_CAN_DATA2,r0
   0881 7A 00              2719 	mov	r2,#0x00
   0883 7B 00              2720 	mov	r3,#0x00
   0885 7C 00              2721 	mov	r4,#0x00
   0887 8D DE              2722 	mov	_CAN_DATA3,r5
   0889 75 D8 F1           2723 	mov	_CAN_ADCON,#0xF1
   088C                    2724 00110$:
   088C E5 D8              2725 	mov	a,_CAN_ADCON
   088E 20 E1 FB           2726 	jb	acc.1,00110$
                    072A   2727 	C$CAN.C$896$1$1 ==.
                           2728 ;	../CAN.C:896: CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)
   0891 75 D8 04           2729 	mov	_CAN_ADCON,#0x04
                    072D   2730 	C$CAN.C$899$1$1 ==.
                           2731 ;	../CAN.C:899: CAN_ADCON = ADR_INC;   // Auto Increment the current address(+1)
   0894 75 D8 04           2732 	mov	_CAN_ADCON,#0x04
                    0730   2733 	C$CAN.C$901$1$1 ==.
                           2734 ;	../CAN.C:901: CAN_vWriteCANData(0x00200040);  // reset RTSEL, set MSGVAL
   0897 75 DB 40           2735 	mov	_CAN_DATA0,#0x40
   089A 75 DC 00           2736 	mov	_CAN_DATA1,#0x00
   089D 75 DD 20           2737 	mov	_CAN_DATA2,#0x20
   08A0 75 DE 00           2738 	mov	_CAN_DATA3,#0x00
   08A3 75 D8 F1           2739 	mov	_CAN_ADCON,#0xF1
   08A6                    2740 00113$:
   08A6 E5 D8              2741 	mov	a,_CAN_ADCON
   08A8 20 E1 FB           2742 	jb	acc.1,00113$
                    0744   2743 	C$CAN.C$903$1$1 ==.
                           2744 ;	../CAN.C:903: CAN_popAMRegs();    //   POP the CAN Access Mediator Register
   08AB D0 DE D0 DD D0 DC  2745 	 pop 0xDE pop 0xDD pop 0xDC pop 0xDB pop 0xDA pop 0xD9 
        D0 DB D0 DA D0 D9
                    0750   2746 	C$CAN.C$905$1$1 ==.
                    0750   2747 	XG$CAN_vLoadData$0$0 ==.
   08B7 22                 2748 	ret
                           2749 	.area CSEG    (CODE)
                           2750 	.area CONST   (CODE)
                           2751 	.area XINIT   (CODE)
                           2752 	.area CABS    (ABS,CODE)
