                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 2.9.0 #5416 (Feb  7 2011) (MSVC)
                              4 ; This file was generated Thu Nov 28 11:00:59 2019
                              5 ;--------------------------------------------------------
                              6 	.module SHARED_INT
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
                            433 	.globl _SHINT_vInit
                            434 	.globl _SHINT_viXINTR5Isr
                            435 	.globl _SHINT_viXINTR6Isr
                            436 ;--------------------------------------------------------
                            437 ; special function registers
                            438 ;--------------------------------------------------------
                            439 	.area RSEG    (DATA)
                    00E0    440 G$ACC$0$0 == 0x00e0
                    00E0    441 _ACC	=	0x00e0
                    00CA    442 G$ADC_CHCTR0$0$0 == 0x00ca
                    00CA    443 _ADC_CHCTR0	=	0x00ca
                    00CB    444 G$ADC_CHCTR1$0$0 == 0x00cb
                    00CB    445 _ADC_CHCTR1	=	0x00cb
                    00CC    446 G$ADC_CHCTR2$0$0 == 0x00cc
                    00CC    447 _ADC_CHCTR2	=	0x00cc
                    00CD    448 G$ADC_CHCTR3$0$0 == 0x00cd
                    00CD    449 _ADC_CHCTR3	=	0x00cd
                    00CE    450 G$ADC_CHCTR4$0$0 == 0x00ce
                    00CE    451 _ADC_CHCTR4	=	0x00ce
                    00CF    452 G$ADC_CHCTR5$0$0 == 0x00cf
                    00CF    453 _ADC_CHCTR5	=	0x00cf
                    00D2    454 G$ADC_CHCTR6$0$0 == 0x00d2
                    00D2    455 _ADC_CHCTR6	=	0x00d2
                    00D3    456 G$ADC_CHCTR7$0$0 == 0x00d3
                    00D3    457 _ADC_CHCTR7	=	0x00d3
                    00CB    458 G$ADC_CHINCR$0$0 == 0x00cb
                    00CB    459 _ADC_CHINCR	=	0x00cb
                    00CA    460 G$ADC_CHINFR$0$0 == 0x00ca
                    00CA    461 _ADC_CHINFR	=	0x00ca
                    00CD    462 G$ADC_CHINPR$0$0 == 0x00cd
                    00CD    463 _ADC_CHINPR	=	0x00cd
                    00CC    464 G$ADC_CHINSR$0$0 == 0x00cc
                    00CC    465 _ADC_CHINSR	=	0x00cc
                    00CA    466 G$ADC_CRCR1$0$0 == 0x00ca
                    00CA    467 _ADC_CRCR1	=	0x00ca
                    00CC    468 G$ADC_CRMR1$0$0 == 0x00cc
                    00CC    469 _ADC_CRMR1	=	0x00cc
                    00CB    470 G$ADC_CRPR1$0$0 == 0x00cb
                    00CB    471 _ADC_CRPR1	=	0x00cb
                    00CF    472 G$ADC_ETRCR$0$0 == 0x00cf
                    00CF    473 _ADC_ETRCR	=	0x00cf
                    00CF    474 G$ADC_EVINCR$0$0 == 0x00cf
                    00CF    475 _ADC_EVINCR	=	0x00cf
                    00CE    476 G$ADC_EVINFR$0$0 == 0x00ce
                    00CE    477 _ADC_EVINFR	=	0x00ce
                    00D3    478 G$ADC_EVINPR$0$0 == 0x00d3
                    00D3    479 _ADC_EVINPR	=	0x00d3
                    00D2    480 G$ADC_EVINSR$0$0 == 0x00d2
                    00D2    481 _ADC_EVINSR	=	0x00d2
                    00CA    482 G$ADC_GLOBCTR$0$0 == 0x00ca
                    00CA    483 _ADC_GLOBCTR	=	0x00ca
                    00CB    484 G$ADC_GLOBSTR$0$0 == 0x00cb
                    00CB    485 _ADC_GLOBSTR	=	0x00cb
                    00CE    486 G$ADC_INPCR0$0$0 == 0x00ce
                    00CE    487 _ADC_INPCR0	=	0x00ce
                    00CD    488 G$ADC_LCBR$0$0 == 0x00cd
                    00CD    489 _ADC_LCBR	=	0x00cd
                    00D1    490 G$ADC_PAGE$0$0 == 0x00d1
                    00D1    491 _ADC_PAGE	=	0x00d1
                    00CC    492 G$ADC_PRAR$0$0 == 0x00cc
                    00CC    493 _ADC_PRAR	=	0x00cc
                    00CF    494 G$ADC_Q0R0$0$0 == 0x00cf
                    00CF    495 _ADC_Q0R0	=	0x00cf
                    00D2    496 G$ADC_QBUR0$0$0 == 0x00d2
                    00D2    497 _ADC_QBUR0	=	0x00d2
                    00D2    498 G$ADC_QINR0$0$0 == 0x00d2
                    00D2    499 _ADC_QINR0	=	0x00d2
                    00CD    500 G$ADC_QMR0$0$0 == 0x00cd
                    00CD    501 _ADC_QMR0	=	0x00cd
                    00CE    502 G$ADC_QSR0$0$0 == 0x00ce
                    00CE    503 _ADC_QSR0	=	0x00ce
                    00CA    504 G$ADC_RCR0$0$0 == 0x00ca
                    00CA    505 _ADC_RCR0	=	0x00ca
                    00CB    506 G$ADC_RCR1$0$0 == 0x00cb
                    00CB    507 _ADC_RCR1	=	0x00cb
                    00CC    508 G$ADC_RCR2$0$0 == 0x00cc
                    00CC    509 _ADC_RCR2	=	0x00cc
                    00CD    510 G$ADC_RCR3$0$0 == 0x00cd
                    00CD    511 _ADC_RCR3	=	0x00cd
                    00CB    512 G$ADC_RESR0H$0$0 == 0x00cb
                    00CB    513 _ADC_RESR0H	=	0x00cb
                    00CA    514 G$ADC_RESR0L$0$0 == 0x00ca
                    00CA    515 _ADC_RESR0L	=	0x00ca
                    00CD    516 G$ADC_RESR1H$0$0 == 0x00cd
                    00CD    517 _ADC_RESR1H	=	0x00cd
                    00CC    518 G$ADC_RESR1L$0$0 == 0x00cc
                    00CC    519 _ADC_RESR1L	=	0x00cc
                    00CF    520 G$ADC_RESR2H$0$0 == 0x00cf
                    00CF    521 _ADC_RESR2H	=	0x00cf
                    00CE    522 G$ADC_RESR2L$0$0 == 0x00ce
                    00CE    523 _ADC_RESR2L	=	0x00ce
                    00D3    524 G$ADC_RESR3H$0$0 == 0x00d3
                    00D3    525 _ADC_RESR3H	=	0x00d3
                    00D2    526 G$ADC_RESR3L$0$0 == 0x00d2
                    00D2    527 _ADC_RESR3L	=	0x00d2
                    00CB    528 G$ADC_RESRA0H$0$0 == 0x00cb
                    00CB    529 _ADC_RESRA0H	=	0x00cb
                    00CA    530 G$ADC_RESRA0L$0$0 == 0x00ca
                    00CA    531 _ADC_RESRA0L	=	0x00ca
                    00CD    532 G$ADC_RESRA1H$0$0 == 0x00cd
                    00CD    533 _ADC_RESRA1H	=	0x00cd
                    00CC    534 G$ADC_RESRA1L$0$0 == 0x00cc
                    00CC    535 _ADC_RESRA1L	=	0x00cc
                    00CF    536 G$ADC_RESRA2H$0$0 == 0x00cf
                    00CF    537 _ADC_RESRA2H	=	0x00cf
                    00CE    538 G$ADC_RESRA2L$0$0 == 0x00ce
                    00CE    539 _ADC_RESRA2L	=	0x00ce
                    00D3    540 G$ADC_RESRA3H$0$0 == 0x00d3
                    00D3    541 _ADC_RESRA3H	=	0x00d3
                    00D2    542 G$ADC_RESRA3L$0$0 == 0x00d2
                    00D2    543 _ADC_RESRA3L	=	0x00d2
                    00CE    544 G$ADC_VFCR$0$0 == 0x00ce
                    00CE    545 _ADC_VFCR	=	0x00ce
                    00F0    546 G$B$0$0 == 0x00f0
                    00F0    547 _B	=	0x00f0
                    00BD    548 G$BCON$0$0 == 0x00bd
                    00BD    549 _BCON	=	0x00bd
                    00BE    550 G$BG$0$0 == 0x00be
                    00BE    551 _BG	=	0x00be
                    00D8    552 G$CAN_ADCON$0$0 == 0x00d8
                    00D8    553 _CAN_ADCON	=	0x00d8
                    00DA    554 G$CAN_ADH$0$0 == 0x00da
                    00DA    555 _CAN_ADH	=	0x00da
                    00D9    556 G$CAN_ADL$0$0 == 0x00d9
                    00D9    557 _CAN_ADL	=	0x00d9
                    00DB    558 G$CAN_DATA0$0$0 == 0x00db
                    00DB    559 _CAN_DATA0	=	0x00db
                    00DC    560 G$CAN_DATA1$0$0 == 0x00dc
                    00DC    561 _CAN_DATA1	=	0x00dc
                    00DD    562 G$CAN_DATA2$0$0 == 0x00dd
                    00DD    563 _CAN_DATA2	=	0x00dd
                    00DE    564 G$CAN_DATA3$0$0 == 0x00de
                    00DE    565 _CAN_DATA3	=	0x00de
                    00FB    566 G$CCU6_CC60RH$0$0 == 0x00fb
                    00FB    567 _CCU6_CC60RH	=	0x00fb
                    00FA    568 G$CCU6_CC60RL$0$0 == 0x00fa
                    00FA    569 _CCU6_CC60RL	=	0x00fa
                    00FB    570 G$CCU6_CC60SRH$0$0 == 0x00fb
                    00FB    571 _CCU6_CC60SRH	=	0x00fb
                    00FA    572 G$CCU6_CC60SRL$0$0 == 0x00fa
                    00FA    573 _CCU6_CC60SRL	=	0x00fa
                    00FD    574 G$CCU6_CC61RH$0$0 == 0x00fd
                    00FD    575 _CCU6_CC61RH	=	0x00fd
                    00FC    576 G$CCU6_CC61RL$0$0 == 0x00fc
                    00FC    577 _CCU6_CC61RL	=	0x00fc
                    00FD    578 G$CCU6_CC61SRH$0$0 == 0x00fd
                    00FD    579 _CCU6_CC61SRH	=	0x00fd
                    00FC    580 G$CCU6_CC61SRL$0$0 == 0x00fc
                    00FC    581 _CCU6_CC61SRL	=	0x00fc
                    00FF    582 G$CCU6_CC62RH$0$0 == 0x00ff
                    00FF    583 _CCU6_CC62RH	=	0x00ff
                    00FE    584 G$CCU6_CC62RL$0$0 == 0x00fe
                    00FE    585 _CCU6_CC62RL	=	0x00fe
                    00FF    586 G$CCU6_CC62SRH$0$0 == 0x00ff
                    00FF    587 _CCU6_CC62SRH	=	0x00ff
                    00FE    588 G$CCU6_CC62SRL$0$0 == 0x00fe
                    00FE    589 _CCU6_CC62SRL	=	0x00fe
                    009B    590 G$CCU6_CC63RH$0$0 == 0x009b
                    009B    591 _CCU6_CC63RH	=	0x009b
                    009A    592 G$CCU6_CC63RL$0$0 == 0x009a
                    009A    593 _CCU6_CC63RL	=	0x009a
                    009B    594 G$CCU6_CC63SRH$0$0 == 0x009b
                    009B    595 _CCU6_CC63SRH	=	0x009b
                    009A    596 G$CCU6_CC63SRL$0$0 == 0x009a
                    009A    597 _CCU6_CC63SRL	=	0x009a
                    00A7    598 G$CCU6_CMPMODIFH$0$0 == 0x00a7
                    00A7    599 _CCU6_CMPMODIFH	=	0x00a7
                    00A6    600 G$CCU6_CMPMODIFL$0$0 == 0x00a6
                    00A6    601 _CCU6_CMPMODIFL	=	0x00a6
                    00FF    602 G$CCU6_CMPSTATH$0$0 == 0x00ff
                    00FF    603 _CCU6_CMPSTATH	=	0x00ff
                    00FE    604 G$CCU6_CMPSTATL$0$0 == 0x00fe
                    00FE    605 _CCU6_CMPSTATL	=	0x00fe
                    009D    606 G$CCU6_IENH$0$0 == 0x009d
                    009D    607 _CCU6_IENH	=	0x009d
                    009C    608 G$CCU6_IENL$0$0 == 0x009c
                    009C    609 _CCU6_IENL	=	0x009c
                    009F    610 G$CCU6_INPH$0$0 == 0x009f
                    009F    611 _CCU6_INPH	=	0x009f
                    009E    612 G$CCU6_INPL$0$0 == 0x009e
                    009E    613 _CCU6_INPL	=	0x009e
                    009D    614 G$CCU6_ISH$0$0 == 0x009d
                    009D    615 _CCU6_ISH	=	0x009d
                    009C    616 G$CCU6_ISL$0$0 == 0x009c
                    009C    617 _CCU6_ISL	=	0x009c
                    00A5    618 G$CCU6_ISRH$0$0 == 0x00a5
                    00A5    619 _CCU6_ISRH	=	0x00a5
                    00A4    620 G$CCU6_ISRL$0$0 == 0x00a4
                    00A4    621 _CCU6_ISRL	=	0x00a4
                    00A5    622 G$CCU6_ISSH$0$0 == 0x00a5
                    00A5    623 _CCU6_ISSH	=	0x00a5
                    00A4    624 G$CCU6_ISSL$0$0 == 0x00a4
                    00A4    625 _CCU6_ISSL	=	0x00a4
                    00A7    626 G$CCU6_MCMCTR$0$0 == 0x00a7
                    00A7    627 _CCU6_MCMCTR	=	0x00a7
                    009B    628 G$CCU6_MCMOUTH$0$0 == 0x009b
                    009B    629 _CCU6_MCMOUTH	=	0x009b
                    009A    630 G$CCU6_MCMOUTL$0$0 == 0x009a
                    009A    631 _CCU6_MCMOUTL	=	0x009a
                    009F    632 G$CCU6_MCMOUTSH$0$0 == 0x009f
                    009F    633 _CCU6_MCMOUTSH	=	0x009f
                    009E    634 G$CCU6_MCMOUTSL$0$0 == 0x009e
                    009E    635 _CCU6_MCMOUTSL	=	0x009e
                    00FD    636 G$CCU6_MODCTRH$0$0 == 0x00fd
                    00FD    637 _CCU6_MODCTRH	=	0x00fd
                    00FC    638 G$CCU6_MODCTRL$0$0 == 0x00fc
                    00FC    639 _CCU6_MODCTRL	=	0x00fc
                    00A3    640 G$CCU6_PAGE$0$0 == 0x00a3
                    00A3    641 _CCU6_PAGE	=	0x00a3
                    009F    642 G$CCU6_PISEL0H$0$0 == 0x009f
                    009F    643 _CCU6_PISEL0H	=	0x009f
                    009E    644 G$CCU6_PISEL0L$0$0 == 0x009e
                    009E    645 _CCU6_PISEL0L	=	0x009e
                    00A4    646 G$CCU6_PISEL2$0$0 == 0x00a4
                    00A4    647 _CCU6_PISEL2	=	0x00a4
                    00A6    648 G$CCU6_PSLR$0$0 == 0x00a6
                    00A6    649 _CCU6_PSLR	=	0x00a6
                    00A5    650 G$CCU6_T12DTCH$0$0 == 0x00a5
                    00A5    651 _CCU6_T12DTCH	=	0x00a5
                    00A4    652 G$CCU6_T12DTCL$0$0 == 0x00a4
                    00A4    653 _CCU6_T12DTCL	=	0x00a4
                    00FB    654 G$CCU6_T12H$0$0 == 0x00fb
                    00FB    655 _CCU6_T12H	=	0x00fb
                    00FA    656 G$CCU6_T12L$0$0 == 0x00fa
                    00FA    657 _CCU6_T12L	=	0x00fa
                    009B    658 G$CCU6_T12MSELH$0$0 == 0x009b
                    009B    659 _CCU6_T12MSELH	=	0x009b
                    009A    660 G$CCU6_T12MSELL$0$0 == 0x009a
                    009A    661 _CCU6_T12MSELL	=	0x009a
                    009D    662 G$CCU6_T12PRH$0$0 == 0x009d
                    009D    663 _CCU6_T12PRH	=	0x009d
                    009C    664 G$CCU6_T12PRL$0$0 == 0x009c
                    009C    665 _CCU6_T12PRL	=	0x009c
                    00FD    666 G$CCU6_T13H$0$0 == 0x00fd
                    00FD    667 _CCU6_T13H	=	0x00fd
                    00FC    668 G$CCU6_T13L$0$0 == 0x00fc
                    00FC    669 _CCU6_T13L	=	0x00fc
                    009F    670 G$CCU6_T13PRH$0$0 == 0x009f
                    009F    671 _CCU6_T13PRH	=	0x009f
                    009E    672 G$CCU6_T13PRL$0$0 == 0x009e
                    009E    673 _CCU6_T13PRL	=	0x009e
                    00A7    674 G$CCU6_TCTR0H$0$0 == 0x00a7
                    00A7    675 _CCU6_TCTR0H	=	0x00a7
                    00A6    676 G$CCU6_TCTR0L$0$0 == 0x00a6
                    00A6    677 _CCU6_TCTR0L	=	0x00a6
                    00FB    678 G$CCU6_TCTR2H$0$0 == 0x00fb
                    00FB    679 _CCU6_TCTR2H	=	0x00fb
                    00FA    680 G$CCU6_TCTR2L$0$0 == 0x00fa
                    00FA    681 _CCU6_TCTR2L	=	0x00fa
                    009D    682 G$CCU6_TCTR4H$0$0 == 0x009d
                    009D    683 _CCU6_TCTR4H	=	0x009d
                    009C    684 G$CCU6_TCTR4L$0$0 == 0x009c
                    009C    685 _CCU6_TCTR4L	=	0x009c
                    00FF    686 G$CCU6_TRPCTRH$0$0 == 0x00ff
                    00FF    687 _CCU6_TRPCTRH	=	0x00ff
                    00FE    688 G$CCU6_TRPCTRL$0$0 == 0x00fe
                    00FE    689 _CCU6_TRPCTRL	=	0x00fe
                    00A1    690 G$CD_CON$0$0 == 0x00a1
                    00A1    691 _CD_CON	=	0x00a1
                    009B    692 G$CD_CORDXH$0$0 == 0x009b
                    009B    693 _CD_CORDXH	=	0x009b
                    009A    694 G$CD_CORDXL$0$0 == 0x009a
                    009A    695 _CD_CORDXL	=	0x009a
                    009D    696 G$CD_CORDYH$0$0 == 0x009d
                    009D    697 _CD_CORDYH	=	0x009d
                    009C    698 G$CD_CORDYL$0$0 == 0x009c
                    009C    699 _CD_CORDYL	=	0x009c
                    009F    700 G$CD_CORDZH$0$0 == 0x009f
                    009F    701 _CD_CORDZH	=	0x009f
                    009E    702 G$CD_CORDZL$0$0 == 0x009e
                    009E    703 _CD_CORDZL	=	0x009e
                    00A0    704 G$CD_STATC$0$0 == 0x00a0
                    00A0    705 _CD_STATC	=	0x00a0
                    00BA    706 G$CMCON$0$0 == 0x00ba
                    00BA    707 _CMCON	=	0x00ba
                    00BE    708 G$COCON$0$0 == 0x00be
                    00BE    709 _COCON	=	0x00be
                    0083    710 G$DPH$0$0 == 0x0083
                    0083    711 _DPH	=	0x0083
                    0082    712 G$DPL$0$0 == 0x0082
                    0082    713 _DPL	=	0x0082
                    00A2    714 G$EO$0$0 == 0x00a2
                    00A2    715 _EO	=	0x00a2
                    00B7    716 G$EXICON0$0$0 == 0x00b7
                    00B7    717 _EXICON0	=	0x00b7
                    00BA    718 G$EXICON1$0$0 == 0x00ba
                    00BA    719 _EXICON1	=	0x00ba
                    00E9    720 G$FDCON$0$0 == 0x00e9
                    00E9    721 _FDCON	=	0x00e9
                    00EB    722 G$FDRES$0$0 == 0x00eb
                    00EB    723 _FDRES	=	0x00eb
                    00EA    724 G$FDSTEP$0$0 == 0x00ea
                    00EA    725 _FDSTEP	=	0x00ea
                    00BD    726 G$FEAH$0$0 == 0x00bd
                    00BD    727 _FEAH	=	0x00bd
                    00BC    728 G$FEAL$0$0 == 0x00bc
                    00BC    729 _FEAL	=	0x00bc
                    00F7    730 G$HWBPDR$0$0 == 0x00f7
                    00F7    731 _HWBPDR	=	0x00f7
                    00F6    732 G$HWBPSR$0$0 == 0x00f6
                    00F6    733 _HWBPSR	=	0x00f6
                    00B3    734 G$ID$0$0 == 0x00b3
                    00B3    735 _ID	=	0x00b3
                    00A8    736 G$IEN0$0$0 == 0x00a8
                    00A8    737 _IEN0	=	0x00a8
                    00E8    738 G$IEN1$0$0 == 0x00e8
                    00E8    739 _IEN1	=	0x00e8
                    00B8    740 G$IP$0$0 == 0x00b8
                    00B8    741 _IP	=	0x00b8
                    00F8    742 G$IP1$0$0 == 0x00f8
                    00F8    743 _IP1	=	0x00f8
                    00B9    744 G$IPH$0$0 == 0x00b9
                    00B9    745 _IPH	=	0x00b9
                    00F9    746 G$IPH1$0$0 == 0x00f9
                    00F9    747 _IPH1	=	0x00f9
                    00B4    748 G$IRCON0$0$0 == 0x00b4
                    00B4    749 _IRCON0	=	0x00b4
                    00B5    750 G$IRCON1$0$0 == 0x00b5
                    00B5    751 _IRCON1	=	0x00b5
                    00B6    752 G$IRCON2$0$0 == 0x00b6
                    00B6    753 _IRCON2	=	0x00b6
                    00B4    754 G$IRCON3$0$0 == 0x00b4
                    00B4    755 _IRCON3	=	0x00b4
                    00B5    756 G$IRCON4$0$0 == 0x00b5
                    00B5    757 _IRCON4	=	0x00b5
                    00B2    758 G$MDU_MD0$0$0 == 0x00b2
                    00B2    759 _MDU_MD0	=	0x00b2
                    00B3    760 G$MDU_MD1$0$0 == 0x00b3
                    00B3    761 _MDU_MD1	=	0x00b3
                    00B4    762 G$MDU_MD2$0$0 == 0x00b4
                    00B4    763 _MDU_MD2	=	0x00b4
                    00B5    764 G$MDU_MD3$0$0 == 0x00b5
                    00B5    765 _MDU_MD3	=	0x00b5
                    00B6    766 G$MDU_MD4$0$0 == 0x00b6
                    00B6    767 _MDU_MD4	=	0x00b6
                    00B7    768 G$MDU_MD5$0$0 == 0x00b7
                    00B7    769 _MDU_MD5	=	0x00b7
                    00B1    770 G$MDU_MDUCON$0$0 == 0x00b1
                    00B1    771 _MDU_MDUCON	=	0x00b1
                    00B0    772 G$MDU_MDUSTAT$0$0 == 0x00b0
                    00B0    773 _MDU_MDUSTAT	=	0x00b0
                    00B2    774 G$MDU_MR0$0$0 == 0x00b2
                    00B2    775 _MDU_MR0	=	0x00b2
                    00B3    776 G$MDU_MR1$0$0 == 0x00b3
                    00B3    777 _MDU_MR1	=	0x00b3
                    00B4    778 G$MDU_MR2$0$0 == 0x00b4
                    00B4    779 _MDU_MR2	=	0x00b4
                    00B5    780 G$MDU_MR3$0$0 == 0x00b5
                    00B5    781 _MDU_MR3	=	0x00b5
                    00B6    782 G$MDU_MR4$0$0 == 0x00b6
                    00B6    783 _MDU_MR4	=	0x00b6
                    00B7    784 G$MDU_MR5$0$0 == 0x00b7
                    00B7    785 _MDU_MR5	=	0x00b7
                    00E9    786 G$MISC_CON$0$0 == 0x00e9
                    00E9    787 _MISC_CON	=	0x00e9
                    00F3    788 G$MMBPCR$0$0 == 0x00f3
                    00F3    789 _MMBPCR	=	0x00f3
                    00F1    790 G$MMCR$0$0 == 0x00f1
                    00F1    791 _MMCR	=	0x00f1
                    00E9    792 G$MMCR2$0$0 == 0x00e9
                    00E9    793 _MMCR2	=	0x00e9
                    00F5    794 G$MMDR$0$0 == 0x00f5
                    00F5    795 _MMDR	=	0x00f5
                    00F4    796 G$MMICR$0$0 == 0x00f4
                    00F4    797 _MMICR	=	0x00f4
                    00F2    798 G$MMSR$0$0 == 0x00f2
                    00F2    799 _MMSR	=	0x00f2
                    00EB    800 G$MMWR1$0$0 == 0x00eb
                    00EB    801 _MMWR1	=	0x00eb
                    00EC    802 G$MMWR2$0$0 == 0x00ec
                    00EC    803 _MMWR2	=	0x00ec
                    00B3    804 G$MODPISEL$0$0 == 0x00b3
                    00B3    805 _MODPISEL	=	0x00b3
                    00B7    806 G$MODPISEL1$0$0 == 0x00b7
                    00B7    807 _MODPISEL1	=	0x00b7
                    00BA    808 G$MODPISEL2$0$0 == 0x00ba
                    00BA    809 _MODPISEL2	=	0x00ba
                    00BD    810 G$MODSUSP$0$0 == 0x00bd
                    00BD    811 _MODSUSP	=	0x00bd
                    00BB    812 G$NMICON$0$0 == 0x00bb
                    00BB    813 _NMICON	=	0x00bb
                    00BC    814 G$NMISR$0$0 == 0x00bc
                    00BC    815 _NMISR	=	0x00bc
                    00B6    816 G$OSC_CON$0$0 == 0x00b6
                    00B6    817 _OSC_CON	=	0x00b6
                    0080    818 G$P0_ALTSEL0$0$0 == 0x0080
                    0080    819 _P0_ALTSEL0	=	0x0080
                    0086    820 G$P0_ALTSEL1$0$0 == 0x0086
                    0086    821 _P0_ALTSEL1	=	0x0086
                    0080    822 G$P0_DATA$0$0 == 0x0080
                    0080    823 _P0_DATA	=	0x0080
                    0086    824 G$P0_DIR$0$0 == 0x0086
                    0086    825 _P0_DIR	=	0x0086
                    0080    826 G$P0_OD$0$0 == 0x0080
                    0080    827 _P0_OD	=	0x0080
                    0086    828 G$P0_PUDEN$0$0 == 0x0086
                    0086    829 _P0_PUDEN	=	0x0086
                    0080    830 G$P0_PUDSEL$0$0 == 0x0080
                    0080    831 _P0_PUDSEL	=	0x0080
                    0090    832 G$P1_ALTSEL0$0$0 == 0x0090
                    0090    833 _P1_ALTSEL0	=	0x0090
                    0091    834 G$P1_ALTSEL1$0$0 == 0x0091
                    0091    835 _P1_ALTSEL1	=	0x0091
                    0090    836 G$P1_DATA$0$0 == 0x0090
                    0090    837 _P1_DATA	=	0x0090
                    0091    838 G$P1_DIR$0$0 == 0x0091
                    0091    839 _P1_DIR	=	0x0091
                    0090    840 G$P1_OD$0$0 == 0x0090
                    0090    841 _P1_OD	=	0x0090
                    0091    842 G$P1_PUDEN$0$0 == 0x0091
                    0091    843 _P1_PUDEN	=	0x0091
                    0090    844 G$P1_PUDSEL$0$0 == 0x0090
                    0090    845 _P1_PUDSEL	=	0x0090
                    00A0    846 G$P2_DATA$0$0 == 0x00a0
                    00A0    847 _P2_DATA	=	0x00a0
                    00A1    848 G$P2_DIR$0$0 == 0x00a1
                    00A1    849 _P2_DIR	=	0x00a1
                    00A1    850 G$P2_PUDEN$0$0 == 0x00a1
                    00A1    851 _P2_PUDEN	=	0x00a1
                    00A0    852 G$P2_PUDSEL$0$0 == 0x00a0
                    00A0    853 _P2_PUDSEL	=	0x00a0
                    00B0    854 G$P3_ALTSEL0$0$0 == 0x00b0
                    00B0    855 _P3_ALTSEL0	=	0x00b0
                    00B1    856 G$P3_ALTSEL1$0$0 == 0x00b1
                    00B1    857 _P3_ALTSEL1	=	0x00b1
                    00B0    858 G$P3_DATA$0$0 == 0x00b0
                    00B0    859 _P3_DATA	=	0x00b0
                    00B1    860 G$P3_DIR$0$0 == 0x00b1
                    00B1    861 _P3_DIR	=	0x00b1
                    00B0    862 G$P3_OD$0$0 == 0x00b0
                    00B0    863 _P3_OD	=	0x00b0
                    00B1    864 G$P3_PUDEN$0$0 == 0x00b1
                    00B1    865 _P3_PUDEN	=	0x00b1
                    00B0    866 G$P3_PUDSEL$0$0 == 0x00b0
                    00B0    867 _P3_PUDSEL	=	0x00b0
                    00C8    868 G$P4_ALTSEL0$0$0 == 0x00c8
                    00C8    869 _P4_ALTSEL0	=	0x00c8
                    00C9    870 G$P4_ALTSEL1$0$0 == 0x00c9
                    00C9    871 _P4_ALTSEL1	=	0x00c9
                    00C8    872 G$P4_DATA$0$0 == 0x00c8
                    00C8    873 _P4_DATA	=	0x00c8
                    00C9    874 G$P4_DIR$0$0 == 0x00c9
                    00C9    875 _P4_DIR	=	0x00c9
                    00C8    876 G$P4_OD$0$0 == 0x00c8
                    00C8    877 _P4_OD	=	0x00c8
                    00C9    878 G$P4_PUDEN$0$0 == 0x00c9
                    00C9    879 _P4_PUDEN	=	0x00c9
                    00C8    880 G$P4_PUDSEL$0$0 == 0x00c8
                    00C8    881 _P4_PUDSEL	=	0x00c8
                    0092    882 G$P5_ALTSEL0$0$0 == 0x0092
                    0092    883 _P5_ALTSEL0	=	0x0092
                    0093    884 G$P5_ALTSEL1$0$0 == 0x0093
                    0093    885 _P5_ALTSEL1	=	0x0093
                    0092    886 G$P5_DATA$0$0 == 0x0092
                    0092    887 _P5_DATA	=	0x0092
                    0093    888 G$P5_DIR$0$0 == 0x0093
                    0093    889 _P5_DIR	=	0x0093
                    0092    890 G$P5_OD$0$0 == 0x0092
                    0092    891 _P5_OD	=	0x0092
                    0093    892 G$P5_PUDEN$0$0 == 0x0093
                    0093    893 _P5_PUDEN	=	0x0093
                    0092    894 G$P5_PUDSEL$0$0 == 0x0092
                    0092    895 _P5_PUDSEL	=	0x0092
                    00BB    896 G$PASSWD$0$0 == 0x00bb
                    00BB    897 _PASSWD	=	0x00bb
                    0087    898 G$PCON$0$0 == 0x0087
                    0087    899 _PCON	=	0x0087
                    00B7    900 G$PLL_CON$0$0 == 0x00b7
                    00B7    901 _PLL_CON	=	0x00b7
                    00B4    902 G$PMCON0$0$0 == 0x00b4
                    00B4    903 _PMCON0	=	0x00b4
                    00B5    904 G$PMCON1$0$0 == 0x00b5
                    00B5    905 _PMCON1	=	0x00b5
                    00BB    906 G$PMCON2$0$0 == 0x00bb
                    00BB    907 _PMCON2	=	0x00bb
                    00B2    908 G$PORT_PAGE$0$0 == 0x00b2
                    00B2    909 _PORT_PAGE	=	0x00b2
                    00D0    910 G$PSW$0$0 == 0x00d0
                    00D0    911 _PSW	=	0x00d0
                    0099    912 G$SBUF$0$0 == 0x0099
                    0099    913 _SBUF	=	0x0099
                    0098    914 G$SCON$0$0 == 0x0098
                    0098    915 _SCON	=	0x0098
                    00BF    916 G$SCU_PAGE$0$0 == 0x00bf
                    00BF    917 _SCU_PAGE	=	0x00bf
                    0081    918 G$SP$0$0 == 0x0081
                    0081    919 _SP	=	0x0081
                    00AF    920 G$SSC_BRH$0$0 == 0x00af
                    00AF    921 _SSC_BRH	=	0x00af
                    00AE    922 G$SSC_BRL$0$0 == 0x00ae
                    00AE    923 _SSC_BRL	=	0x00ae
                    00AB    924 G$SSC_CONH_O$0$0 == 0x00ab
                    00AB    925 _SSC_CONH_O	=	0x00ab
                    00AB    926 G$SSC_CONH_P$0$0 == 0x00ab
                    00AB    927 _SSC_CONH_P	=	0x00ab
                    00AA    928 G$SSC_CONL_O$0$0 == 0x00aa
                    00AA    929 _SSC_CONL_O	=	0x00aa
                    00AA    930 G$SSC_CONL_P$0$0 == 0x00aa
                    00AA    931 _SSC_CONL_P	=	0x00aa
                    00A9    932 G$SSC_PISEL$0$0 == 0x00a9
                    00A9    933 _SSC_PISEL	=	0x00a9
                    00AD    934 G$SSC_RBL$0$0 == 0x00ad
                    00AD    935 _SSC_RBL	=	0x00ad
                    00AC    936 G$SSC_TBL$0$0 == 0x00ac
                    00AC    937 _SSC_TBL	=	0x00ac
                    008F    938 G$SYSCON0$0$0 == 0x008f
                    008F    939 _SYSCON0	=	0x008f
                    00C3    940 G$T21_RC2H$0$0 == 0x00c3
                    00C3    941 _T21_RC2H	=	0x00c3
                    00C2    942 G$T21_RC2L$0$0 == 0x00c2
                    00C2    943 _T21_RC2L	=	0x00c2
                    00C0    944 G$T21_T2CON$0$0 == 0x00c0
                    00C0    945 _T21_T2CON	=	0x00c0
                    00C5    946 G$T21_T2H$0$0 == 0x00c5
                    00C5    947 _T21_T2H	=	0x00c5
                    00C4    948 G$T21_T2L$0$0 == 0x00c4
                    00C4    949 _T21_T2L	=	0x00c4
                    00C1    950 G$T21_T2MOD$0$0 == 0x00c1
                    00C1    951 _T21_T2MOD	=	0x00c1
                    00C3    952 G$T2_RC2H$0$0 == 0x00c3
                    00C3    953 _T2_RC2H	=	0x00c3
                    00C2    954 G$T2_RC2L$0$0 == 0x00c2
                    00C2    955 _T2_RC2L	=	0x00c2
                    00C0    956 G$T2_T2CON$0$0 == 0x00c0
                    00C0    957 _T2_T2CON	=	0x00c0
                    00C5    958 G$T2_T2H$0$0 == 0x00c5
                    00C5    959 _T2_T2H	=	0x00c5
                    00C4    960 G$T2_T2L$0$0 == 0x00c4
                    00C4    961 _T2_T2L	=	0x00c4
                    00C1    962 G$T2_T2MOD$0$0 == 0x00c1
                    00C1    963 _T2_T2MOD	=	0x00c1
                    0088    964 G$TCON$0$0 == 0x0088
                    0088    965 _TCON	=	0x0088
                    008C    966 G$TH0$0$0 == 0x008c
                    008C    967 _TH0	=	0x008c
                    008D    968 G$TH1$0$0 == 0x008d
                    008D    969 _TH1	=	0x008d
                    008A    970 G$TL0$0$0 == 0x008a
                    008A    971 _TL0	=	0x008a
                    008B    972 G$TL1$0$0 == 0x008b
                    008B    973 _TL1	=	0x008b
                    0089    974 G$TMOD$0$0 == 0x0089
                    0089    975 _TMOD	=	0x0089
                    00CA    976 G$UART1_BCON$0$0 == 0x00ca
                    00CA    977 _UART1_BCON	=	0x00ca
                    00CB    978 G$UART1_BG$0$0 == 0x00cb
                    00CB    979 _UART1_BG	=	0x00cb
                    00CC    980 G$UART1_FDCON$0$0 == 0x00cc
                    00CC    981 _UART1_FDCON	=	0x00cc
                    00CE    982 G$UART1_FDRES$0$0 == 0x00ce
                    00CE    983 _UART1_FDRES	=	0x00ce
                    00CD    984 G$UART1_FDSTEP$0$0 == 0x00cd
                    00CD    985 _UART1_FDSTEP	=	0x00cd
                    00C9    986 G$UART1_SBUF$0$0 == 0x00c9
                    00C9    987 _UART1_SBUF	=	0x00c9
                    00C8    988 G$UART1_SCON$0$0 == 0x00c8
                    00C8    989 _UART1_SCON	=	0x00c8
                    00BB    990 G$WDTCON$0$0 == 0x00bb
                    00BB    991 _WDTCON	=	0x00bb
                    00BF    992 G$WDTH$0$0 == 0x00bf
                    00BF    993 _WDTH	=	0x00bf
                    00BE    994 G$WDTL$0$0 == 0x00be
                    00BE    995 _WDTL	=	0x00be
                    00BC    996 G$WDTREL$0$0 == 0x00bc
                    00BC    997 _WDTREL	=	0x00bc
                    00BD    998 G$WDTWINB$0$0 == 0x00bd
                    00BD    999 _WDTWINB	=	0x00bd
                    00B3   1000 G$XADDRH$0$0 == 0x00b3
                    00B3   1001 _XADDRH	=	0x00b3
                    CBCA   1002 G$ADC_RESR0LH$0$0 == 0xcbca
                    CBCA   1003 _ADC_RESR0LH	=	0xcbca
                    CDCC   1004 G$ADC_RESR1LH$0$0 == 0xcdcc
                    CDCC   1005 _ADC_RESR1LH	=	0xcdcc
                    CFCE   1006 G$ADC_RESR2LH$0$0 == 0xcfce
                    CFCE   1007 _ADC_RESR2LH	=	0xcfce
                    D3D2   1008 G$ADC_RESR3LH$0$0 == 0xd3d2
                    D3D2   1009 _ADC_RESR3LH	=	0xd3d2
                    CBCA   1010 G$ADC_RESRA0LH$0$0 == 0xcbca
                    CBCA   1011 _ADC_RESRA0LH	=	0xcbca
                    CDCC   1012 G$ADC_RESRA1LH$0$0 == 0xcdcc
                    CDCC   1013 _ADC_RESRA1LH	=	0xcdcc
                    CFCE   1014 G$ADC_RESRA2LH$0$0 == 0xcfce
                    CFCE   1015 _ADC_RESRA2LH	=	0xcfce
                    D3D2   1016 G$ADC_RESRA3LH$0$0 == 0xd3d2
                    D3D2   1017 _ADC_RESRA3LH	=	0xd3d2
                    FBFA   1018 G$CCU6_CC60RLH$0$0 == 0xfbfa
                    FBFA   1019 _CCU6_CC60RLH	=	0xfbfa
                    FBFA   1020 G$CCU6_CC60SRLH$0$0 == 0xfbfa
                    FBFA   1021 _CCU6_CC60SRLH	=	0xfbfa
                    FDFC   1022 G$CCU6_CC61RLH$0$0 == 0xfdfc
                    FDFC   1023 _CCU6_CC61RLH	=	0xfdfc
                    FDFC   1024 G$CCU6_CC61SRLH$0$0 == 0xfdfc
                    FDFC   1025 _CCU6_CC61SRLH	=	0xfdfc
                    FFFE   1026 G$CCU6_CC62RLH$0$0 == 0xfffe
                    FFFE   1027 _CCU6_CC62RLH	=	0xfffe
                    FFFE   1028 G$CCU6_CC62SRLH$0$0 == 0xfffe
                    FFFE   1029 _CCU6_CC62SRLH	=	0xfffe
                    9B9A   1030 G$CCU6_CC63RLH$0$0 == 0x9b9a
                    9B9A   1031 _CCU6_CC63RLH	=	0x9b9a
                    9B9A   1032 G$CCU6_CC63SRLH$0$0 == 0x9b9a
                    9B9A   1033 _CCU6_CC63SRLH	=	0x9b9a
                    FBFA   1034 G$CCU6_T12LH$0$0 == 0xfbfa
                    FBFA   1035 _CCU6_T12LH	=	0xfbfa
                    9D9C   1036 G$CCU6_T12PRLH$0$0 == 0x9d9c
                    9D9C   1037 _CCU6_T12PRLH	=	0x9d9c
                    FDFC   1038 G$CCU6_T13LH$0$0 == 0xfdfc
                    FDFC   1039 _CCU6_T13LH	=	0xfdfc
                    9F9E   1040 G$CCU6_T13PRLH$0$0 == 0x9f9e
                    9F9E   1041 _CCU6_T13PRLH	=	0x9f9e
                    C3C2   1042 G$T2_RC2LH$0$0 == 0xc3c2
                    C3C2   1043 _T2_RC2LH	=	0xc3c2
                    C5C4   1044 G$T2_T2LH$0$0 == 0xc5c4
                    C5C4   1045 _T2_T2LH	=	0xc5c4
                           1046 ;--------------------------------------------------------
                           1047 ; special function bits
                           1048 ;--------------------------------------------------------
                           1049 	.area RSEG    (DATA)
                    00A0   1050 G$CD_BSY$0$0 == 0x00a0
                    00A0   1051 _CD_BSY	=	0x00a0
                    00A4   1052 G$DMAP$0$0 == 0x00a4
                    00A4   1053 _DMAP	=	0x00a4
                    00A2   1054 G$EOC$0$0 == 0x00a2
                    00A2   1055 _EOC	=	0x00a2
                    00A1   1056 G$ERROR$0$0 == 0x00a1
                    00A1   1057 _ERROR	=	0x00a1
                    00A3   1058 G$INT_EN$0$0 == 0x00a3
                    00A3   1059 _INT_EN	=	0x00a3
                    00A5   1060 G$KEEPX$0$0 == 0x00a5
                    00A5   1061 _KEEPX	=	0x00a5
                    00A6   1062 G$KEEPY$0$0 == 0x00a6
                    00A6   1063 _KEEPY	=	0x00a6
                    00A7   1064 G$KEEPZ$0$0 == 0x00a7
                    00A7   1065 _KEEPZ	=	0x00a7
                    00AF   1066 G$EA$0$0 == 0x00af
                    00AF   1067 _EA	=	0x00af
                    00AC   1068 G$ES$0$0 == 0x00ac
                    00AC   1069 _ES	=	0x00ac
                    00A9   1070 G$ET0$0$0 == 0x00a9
                    00A9   1071 _ET0	=	0x00a9
                    00AB   1072 G$ET1$0$0 == 0x00ab
                    00AB   1073 _ET1	=	0x00ab
                    00AD   1074 G$ET2$0$0 == 0x00ad
                    00AD   1075 _ET2	=	0x00ad
                    00A8   1076 G$EX0$0$0 == 0x00a8
                    00A8   1077 _EX0	=	0x00a8
                    00AA   1078 G$EX1$0$0 == 0x00aa
                    00AA   1079 _EX1	=	0x00aa
                    00E8   1080 G$EADC$0$0 == 0x00e8
                    00E8   1081 _EADC	=	0x00e8
                    00EC   1082 G$ECCIP0$0$0 == 0x00ec
                    00EC   1083 _ECCIP0	=	0x00ec
                    00ED   1084 G$ECCIP1$0$0 == 0x00ed
                    00ED   1085 _ECCIP1	=	0x00ed
                    00EE   1086 G$ECCIP2$0$0 == 0x00ee
                    00EE   1087 _ECCIP2	=	0x00ee
                    00EF   1088 G$ECCIP3$0$0 == 0x00ef
                    00EF   1089 _ECCIP3	=	0x00ef
                    00E9   1090 G$ESSC$0$0 == 0x00e9
                    00E9   1091 _ESSC	=	0x00e9
                    00EA   1092 G$EX2$0$0 == 0x00ea
                    00EA   1093 _EX2	=	0x00ea
                    00EB   1094 G$EXM$0$0 == 0x00eb
                    00EB   1095 _EXM	=	0x00eb
                    00F8   1096 G$PADC$0$0 == 0x00f8
                    00F8   1097 _PADC	=	0x00f8
                    00FC   1098 G$PCCIP0$0$0 == 0x00fc
                    00FC   1099 _PCCIP0	=	0x00fc
                    00FD   1100 G$PCCIP1$0$0 == 0x00fd
                    00FD   1101 _PCCIP1	=	0x00fd
                    00FE   1102 G$PCCIP2$0$0 == 0x00fe
                    00FE   1103 _PCCIP2	=	0x00fe
                    00FF   1104 G$PCCIP3$0$0 == 0x00ff
                    00FF   1105 _PCCIP3	=	0x00ff
                    00F9   1106 G$PSSC$0$0 == 0x00f9
                    00F9   1107 _PSSC	=	0x00f9
                    00FA   1108 G$PX2$0$0 == 0x00fa
                    00FA   1109 _PX2	=	0x00fa
                    00FB   1110 G$PXM$0$0 == 0x00fb
                    00FB   1111 _PXM	=	0x00fb
                    00BC   1112 G$PS$0$0 == 0x00bc
                    00BC   1113 _PS	=	0x00bc
                    00B9   1114 G$PT0$0$0 == 0x00b9
                    00B9   1115 _PT0	=	0x00b9
                    00BB   1116 G$PT1$0$0 == 0x00bb
                    00BB   1117 _PT1	=	0x00bb
                    00BD   1118 G$PT2$0$0 == 0x00bd
                    00BD   1119 _PT2	=	0x00bd
                    00B8   1120 G$PX0$0$0 == 0x00b8
                    00B8   1121 _PX0	=	0x00b8
                    00BA   1122 G$PX1$0$0 == 0x00ba
                    00BA   1123 _PX1	=	0x00ba
                    00B1   1124 G$IERR$0$0 == 0x00b1
                    00B1   1125 _IERR	=	0x00b1
                    00B0   1126 G$IRDY$0$0 == 0x00b0
                    00B0   1127 _IRDY	=	0x00b0
                    00B2   1128 G$MDU_BSY$0$0 == 0x00b2
                    00B2   1129 _MDU_BSY	=	0x00b2
                    00D6   1130 G$AC$0$0 == 0x00d6
                    00D6   1131 _AC	=	0x00d6
                    00D7   1132 G$CY$0$0 == 0x00d7
                    00D7   1133 _CY	=	0x00d7
                    00D5   1134 G$F0$0$0 == 0x00d5
                    00D5   1135 _F0	=	0x00d5
                    00D1   1136 G$F1$0$0 == 0x00d1
                    00D1   1137 _F1	=	0x00d1
                    00D2   1138 G$OV$0$0 == 0x00d2
                    00D2   1139 _OV	=	0x00d2
                    00D0   1140 G$P$0$0 == 0x00d0
                    00D0   1141 _P	=	0x00d0
                    00D3   1142 G$RS0$0$0 == 0x00d3
                    00D3   1143 _RS0	=	0x00d3
                    00D4   1144 G$RS1$0$0 == 0x00d4
                    00D4   1145 _RS1	=	0x00d4
                    009A   1146 G$RB8$0$0 == 0x009a
                    009A   1147 _RB8	=	0x009a
                    009C   1148 G$REN$0$0 == 0x009c
                    009C   1149 _REN	=	0x009c
                    0098   1150 G$RI$0$0 == 0x0098
                    0098   1151 _RI	=	0x0098
                    009F   1152 G$SM0$0$0 == 0x009f
                    009F   1153 _SM0	=	0x009f
                    009E   1154 G$SM1$0$0 == 0x009e
                    009E   1155 _SM1	=	0x009e
                    009D   1156 G$SM2$0$0 == 0x009d
                    009D   1157 _SM2	=	0x009d
                    009B   1158 G$TB8$0$0 == 0x009b
                    009B   1159 _TB8	=	0x009b
                    0099   1160 G$TI$0$0 == 0x0099
                    0099   1161 _TI	=	0x0099
                    00C1   1162 G$C_T2$0$0 == 0x00c1
                    00C1   1163 _C_T2	=	0x00c1
                    00C0   1164 G$CP_RL2$0$0 == 0x00c0
                    00C0   1165 _CP_RL2	=	0x00c0
                    00C3   1166 G$EXEN2$0$0 == 0x00c3
                    00C3   1167 _EXEN2	=	0x00c3
                    00C6   1168 G$EXF2$0$0 == 0x00c6
                    00C6   1169 _EXF2	=	0x00c6
                    00C7   1170 G$TF2$0$0 == 0x00c7
                    00C7   1171 _TF2	=	0x00c7
                    00C2   1172 G$TR2$0$0 == 0x00c2
                    00C2   1173 _TR2	=	0x00c2
                    0089   1174 G$IE0$0$0 == 0x0089
                    0089   1175 _IE0	=	0x0089
                    008B   1176 G$IE1$0$0 == 0x008b
                    008B   1177 _IE1	=	0x008b
                    0088   1178 G$IT0$0$0 == 0x0088
                    0088   1179 _IT0	=	0x0088
                    008A   1180 G$IT1$0$0 == 0x008a
                    008A   1181 _IT1	=	0x008a
                    008D   1182 G$TF0$0$0 == 0x008d
                    008D   1183 _TF0	=	0x008d
                    008F   1184 G$TF1$0$0 == 0x008f
                    008F   1185 _TF1	=	0x008f
                    008C   1186 G$TR0$0$0 == 0x008c
                    008C   1187 _TR0	=	0x008c
                    008E   1188 G$TR1$0$0 == 0x008e
                    008E   1189 _TR1	=	0x008e
                    00CA   1190 G$RB8_1$0$0 == 0x00ca
                    00CA   1191 _RB8_1	=	0x00ca
                    00CC   1192 G$REN_1$0$0 == 0x00cc
                    00CC   1193 _REN_1	=	0x00cc
                    00C8   1194 G$RI_1$0$0 == 0x00c8
                    00C8   1195 _RI_1	=	0x00c8
                    00CF   1196 G$SM0_1$0$0 == 0x00cf
                    00CF   1197 _SM0_1	=	0x00cf
                    00CE   1198 G$SM1_1$0$0 == 0x00ce
                    00CE   1199 _SM1_1	=	0x00ce
                    00CD   1200 G$SM2_1$0$0 == 0x00cd
                    00CD   1201 _SM2_1	=	0x00cd
                    00CB   1202 G$TB8_1$0$0 == 0x00cb
                    00CB   1203 _TB8_1	=	0x00cb
                    00C9   1204 G$TI_1$0$0 == 0x00c9
                    00C9   1205 _TI_1	=	0x00c9
                    0080   1206 G$P0_0$0$0 == 0x0080
                    0080   1207 _P0_0	=	0x0080
                    0081   1208 G$P0_1$0$0 == 0x0081
                    0081   1209 _P0_1	=	0x0081
                    0082   1210 G$P0_2$0$0 == 0x0082
                    0082   1211 _P0_2	=	0x0082
                    0083   1212 G$P0_3$0$0 == 0x0083
                    0083   1213 _P0_3	=	0x0083
                    0084   1214 G$P0_4$0$0 == 0x0084
                    0084   1215 _P0_4	=	0x0084
                    0085   1216 G$P0_5$0$0 == 0x0085
                    0085   1217 _P0_5	=	0x0085
                    0086   1218 G$P0_6$0$0 == 0x0086
                    0086   1219 _P0_6	=	0x0086
                    0087   1220 G$P0_7$0$0 == 0x0087
                    0087   1221 _P0_7	=	0x0087
                    0090   1222 G$P1_0$0$0 == 0x0090
                    0090   1223 _P1_0	=	0x0090
                    0091   1224 G$P1_1$0$0 == 0x0091
                    0091   1225 _P1_1	=	0x0091
                    0092   1226 G$P1_2$0$0 == 0x0092
                    0092   1227 _P1_2	=	0x0092
                    0093   1228 G$P1_3$0$0 == 0x0093
                    0093   1229 _P1_3	=	0x0093
                    0094   1230 G$P1_4$0$0 == 0x0094
                    0094   1231 _P1_4	=	0x0094
                    0095   1232 G$P1_5$0$0 == 0x0095
                    0095   1233 _P1_5	=	0x0095
                    0096   1234 G$P1_6$0$0 == 0x0096
                    0096   1235 _P1_6	=	0x0096
                    0097   1236 G$P1_7$0$0 == 0x0097
                    0097   1237 _P1_7	=	0x0097
                    00A0   1238 G$P2_0$0$0 == 0x00a0
                    00A0   1239 _P2_0	=	0x00a0
                    00A1   1240 G$P2_1$0$0 == 0x00a1
                    00A1   1241 _P2_1	=	0x00a1
                    00A2   1242 G$P2_2$0$0 == 0x00a2
                    00A2   1243 _P2_2	=	0x00a2
                    00A3   1244 G$P2_3$0$0 == 0x00a3
                    00A3   1245 _P2_3	=	0x00a3
                    00A4   1246 G$P2_4$0$0 == 0x00a4
                    00A4   1247 _P2_4	=	0x00a4
                    00A5   1248 G$P2_5$0$0 == 0x00a5
                    00A5   1249 _P2_5	=	0x00a5
                    00A6   1250 G$P2_6$0$0 == 0x00a6
                    00A6   1251 _P2_6	=	0x00a6
                    00A7   1252 G$P2_7$0$0 == 0x00a7
                    00A7   1253 _P2_7	=	0x00a7
                    00B0   1254 G$P3_0$0$0 == 0x00b0
                    00B0   1255 _P3_0	=	0x00b0
                    00B1   1256 G$P3_1$0$0 == 0x00b1
                    00B1   1257 _P3_1	=	0x00b1
                    00B2   1258 G$P3_2$0$0 == 0x00b2
                    00B2   1259 _P3_2	=	0x00b2
                    00B3   1260 G$P3_3$0$0 == 0x00b3
                    00B3   1261 _P3_3	=	0x00b3
                    00B4   1262 G$P3_4$0$0 == 0x00b4
                    00B4   1263 _P3_4	=	0x00b4
                    00B5   1264 G$P3_5$0$0 == 0x00b5
                    00B5   1265 _P3_5	=	0x00b5
                    00B6   1266 G$P3_6$0$0 == 0x00b6
                    00B6   1267 _P3_6	=	0x00b6
                    00B7   1268 G$P3_7$0$0 == 0x00b7
                    00B7   1269 _P3_7	=	0x00b7
                    00C8   1270 G$P4_0$0$0 == 0x00c8
                    00C8   1271 _P4_0	=	0x00c8
                    00C9   1272 G$P4_1$0$0 == 0x00c9
                    00C9   1273 _P4_1	=	0x00c9
                    00CA   1274 G$P4_2$0$0 == 0x00ca
                    00CA   1275 _P4_2	=	0x00ca
                    00CB   1276 G$P4_3$0$0 == 0x00cb
                    00CB   1277 _P4_3	=	0x00cb
                    00CC   1278 G$P4_4$0$0 == 0x00cc
                    00CC   1279 _P4_4	=	0x00cc
                    00CD   1280 G$P4_5$0$0 == 0x00cd
                    00CD   1281 _P4_5	=	0x00cd
                    00CE   1282 G$P4_6$0$0 == 0x00ce
                    00CE   1283 _P4_6	=	0x00ce
                    00CF   1284 G$P4_7$0$0 == 0x00cf
                    00CF   1285 _P4_7	=	0x00cf
                           1286 ;--------------------------------------------------------
                           1287 ; overlayable register banks
                           1288 ;--------------------------------------------------------
                           1289 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1290 	.ds 8
                           1291 ;--------------------------------------------------------
                           1292 ; overlayable bit register bank
                           1293 ;--------------------------------------------------------
                           1294 	.area BIT_BANK	(REL,OVR,DATA)
   0022                    1295 bits:
   0022                    1296 	.ds 1
                    8000   1297 	b0 = bits[0]
                    8100   1298 	b1 = bits[1]
                    8200   1299 	b2 = bits[2]
                    8300   1300 	b3 = bits[3]
                    8400   1301 	b4 = bits[4]
                    8500   1302 	b5 = bits[5]
                    8600   1303 	b6 = bits[6]
                    8700   1304 	b7 = bits[7]
                           1305 ;--------------------------------------------------------
                           1306 ; internal ram data
                           1307 ;--------------------------------------------------------
                           1308 	.area DSEG    (DATA)
                    0000   1309 FSHARED_INT$wertadc$0$0==.
   000B                    1310 _wertadc:
   000B                    1311 	.ds 4
                           1312 ;--------------------------------------------------------
                           1313 ; overlayable items in internal ram 
                           1314 ;--------------------------------------------------------
                           1315 	.area OSEG    (OVR,DATA)
                           1316 ;--------------------------------------------------------
                           1317 ; indirectly addressable internal ram data
                           1318 ;--------------------------------------------------------
                           1319 	.area ISEG    (DATA)
                           1320 ;--------------------------------------------------------
                           1321 ; absolute internal ram data
                           1322 ;--------------------------------------------------------
                           1323 	.area IABS    (ABS,DATA)
                           1324 	.area IABS    (ABS,DATA)
                           1325 ;--------------------------------------------------------
                           1326 ; bit data
                           1327 ;--------------------------------------------------------
                           1328 	.area BSEG    (BIT)
                           1329 ;--------------------------------------------------------
                           1330 ; paged external ram data
                           1331 ;--------------------------------------------------------
                           1332 	.area PSEG    (PAG,XDATA)
                           1333 ;--------------------------------------------------------
                           1334 ; external ram data
                           1335 ;--------------------------------------------------------
                           1336 	.area XSEG    (XDATA)
                           1337 ;--------------------------------------------------------
                           1338 ; absolute external ram data
                           1339 ;--------------------------------------------------------
                           1340 	.area XABS    (ABS,XDATA)
                           1341 ;--------------------------------------------------------
                           1342 ; external initialized ram data
                           1343 ;--------------------------------------------------------
                           1344 	.area XISEG   (XDATA)
                           1345 	.area HOME    (CODE)
                           1346 	.area GSINIT0 (CODE)
                           1347 	.area GSINIT1 (CODE)
                           1348 	.area GSINIT2 (CODE)
                           1349 	.area GSINIT3 (CODE)
                           1350 	.area GSINIT4 (CODE)
                           1351 	.area GSINIT5 (CODE)
                           1352 	.area GSINIT  (CODE)
                           1353 	.area GSFINAL (CODE)
                           1354 	.area CSEG    (CODE)
                           1355 ;--------------------------------------------------------
                           1356 ; global & static initialisations
                           1357 ;--------------------------------------------------------
                           1358 	.area HOME    (CODE)
                           1359 	.area GSINIT  (CODE)
                           1360 	.area GSFINAL (CODE)
                           1361 	.area GSINIT  (CODE)
                    0000   1362 	G$SHINT_viXINTR6Isr$0$0 ==.
                    0000   1363 	C$SHARED_INT.C$322$1$1 ==.
                           1364 ;	../SHARED_INT.C:322: static ulong wertadc = 0;
   009C E4                 1365 	clr	a
   009D F5 0B              1366 	mov	_wertadc,a
   009F F5 0C              1367 	mov	(_wertadc + 1),a
   00A1 F5 0D              1368 	mov	(_wertadc + 2),a
   00A3 F5 0E              1369 	mov	(_wertadc + 3),a
                           1370 ;--------------------------------------------------------
                           1371 ; Home
                           1372 ;--------------------------------------------------------
                           1373 	.area HOME    (CODE)
                           1374 	.area HOME    (CODE)
                           1375 ;--------------------------------------------------------
                           1376 ; code
                           1377 ;--------------------------------------------------------
                           1378 	.area CSEG    (CODE)
                           1379 ;------------------------------------------------------------
                           1380 ;Allocation info for local variables in function 'SHINT_vInit'
                           1381 ;------------------------------------------------------------
                           1382 ;------------------------------------------------------------
                    0000   1383 	G$SHINT_vInit$0$0 ==.
                    0000   1384 	C$SHARED_INT.C$121$0$0 ==.
                           1385 ;	../SHARED_INT.C:121: void SHINT_vInit(void)
                           1386 ;	-----------------------------------------
                           1387 ;	 function SHINT_vInit
                           1388 ;	-----------------------------------------
   08BC                    1389 _SHINT_vInit:
                    0002   1390 	ar2 = 0x02
                    0003   1391 	ar3 = 0x03
                    0004   1392 	ar4 = 0x04
                    0005   1393 	ar5 = 0x05
                    0006   1394 	ar6 = 0x06
                    0007   1395 	ar7 = 0x07
                    0000   1396 	ar0 = 0x00
                    0001   1397 	ar1 = 0x01
                    0000   1398 	C$SHARED_INT.C$134$1$1 ==.
                           1399 ;	../SHARED_INT.C:134: IEN0         |=  0x20;         // load interrupt enable register 0
   08BC 43 A8 20           1400 	orl	_IEN0,#0x20
                    0003   1401 	C$SHARED_INT.C$139$1$1 ==.
                           1402 ;	../SHARED_INT.C:139: IEN1         |=  0x01;         // load interrupt enable register 1
   08BF 43 E8 01           1403 	orl	_IEN1,#0x01
                    0006   1404 	C$SHARED_INT.C$147$1$1 ==.
                    0006   1405 	XG$SHINT_vInit$0$0 ==.
   08C2 22                 1406 	ret
                           1407 ;------------------------------------------------------------
                           1408 ;Allocation info for local variables in function 'SHINT_viXINTR5Isr'
                           1409 ;------------------------------------------------------------
                           1410 ;ubNSRL                    Allocated to registers r2 
                           1411 ;ubResetLEC                Allocated to registers 
                           1412 ;------------------------------------------------------------
                    0007   1413 	G$SHINT_viXINTR5Isr$0$0 ==.
                    0007   1414 	C$SHARED_INT.C$191$1$1 ==.
                           1415 ;	../SHARED_INT.C:191: void SHINT_viXINTR5Isr(void) interrupt XINTR5INT
                           1416 ;	-----------------------------------------
                           1417 ;	 function SHINT_viXINTR5Isr
                           1418 ;	-----------------------------------------
   08C3                    1419 _SHINT_viXINTR5Isr:
   08C3 C0 22              1420 	push	bits
   08C5 C0 E0              1421 	push	acc
   08C7 C0 F0              1422 	push	b
   08C9 C0 82              1423 	push	dpl
   08CB C0 83              1424 	push	dph
   08CD C0 02              1425 	push	(0+2)
   08CF C0 03              1426 	push	(0+3)
   08D1 C0 04              1427 	push	(0+4)
   08D3 C0 05              1428 	push	(0+5)
   08D5 C0 06              1429 	push	(0+6)
   08D7 C0 07              1430 	push	(0+7)
   08D9 C0 00              1431 	push	(0+0)
   08DB C0 01              1432 	push	(0+1)
   08DD C0 D0              1433 	push	psw
   08DF 75 D0 00           1434 	mov	psw,#0x00
                    0026   1435 	C$SHARED_INT.C$200$1$1 ==.
                           1436 ;	../SHARED_INT.C:200: CAN_pushAMRegs();              // push the CAN Access Mediator Registers
   08E2                    1437 00101$:
   08E2 E5 D8              1438 	mov	a,_CAN_ADCON
   08E4 20 E1 FB           1439 	jb	acc.1,00101$
   08E7 C0 D9 C0 DA C0 DB  1440 	 push 0xD9 push 0xDA push 0xDB push 0xDC push 0xDD push 0xDE 
        C0 DC C0 DD C0 DE
                    0037   1441 	C$SHARED_INT.C$202$1$1 ==.
                           1442 ;	../SHARED_INT.C:202: SFR_PAGE(_su0, SST0);          // switch to page 0
   08F3 75 BF 80           1443 	mov	_SCU_PAGE,#0x80
                    003A   1444 	C$SHARED_INT.C$206$1$1 ==.
                           1445 ;	../SHARED_INT.C:206: if (TF2)
                    003A   1446 	C$SHARED_INT.C$210$2$2 ==.
                           1447 ;	../SHARED_INT.C:210: TF2 = 0;
   08F6 10 C7 02           1448 	jbc	_TF2,00124$
   08F9 80 0F              1449 	sjmp	00105$
   08FB                    1450 00124$:
                    003F   1451 	C$SHARED_INT.C$213$2$2 ==.
                           1452 ;	../SHARED_INT.C:213: ADC_vStartSeqReqChNum(0,0,0,7);
   08FB 75 08 00           1453 	mov	_ADC_vStartSeqReqChNum_PARM_2,#0x00
   08FE 75 09 00           1454 	mov	_ADC_vStartSeqReqChNum_PARM_3,#0x00
   0901 75 0A 07           1455 	mov	_ADC_vStartSeqReqChNum_PARM_4,#0x07
   0904 75 82 00           1456 	mov	dpl,#0x00
   0907 12 01 25           1457 	lcall	_ADC_vStartSeqReqChNum
   090A                    1458 00105$:
                    004E   1459 	C$SHARED_INT.C$222$1$1 ==.
                           1460 ;	../SHARED_INT.C:222: if (((IRCON2 & 0x01) != 0))
   090A E5 B6              1461 	mov	a,_IRCON2
   090C 30 E0 28           1462 	jnb	acc.0,00113$
                    0053   1463 	C$SHARED_INT.C$225$2$3 ==.
                           1464 ;	../SHARED_INT.C:225: IRCON2 &= ~(ubyte)0x01; //   clear CANSRC0
   090F 53 B6 FE           1465 	anl	_IRCON2,#0xFE
                    0056   1466 	C$SHARED_INT.C$231$2$3 ==.
                           1467 ;	../SHARED_INT.C:231: CAN_vWriteCANAddress(CAN_NSR1);
   0912 75 D9 C1           1468 	mov	_CAN_ADL,#0xC1
   0915 75 DA 00           1469 	mov	_CAN_ADH,#0x00
                    005C   1470 	C$SHARED_INT.C$232$2$3 ==.
                           1471 ;	../SHARED_INT.C:232: CAN_vReadEN();
   0918 75 D8 00           1472 	mov	_CAN_ADCON,#0x00
   091B                    1473 00106$:
   091B E5 D8              1474 	mov	a,_CAN_ADCON
   091D 20 E1 FB           1475 	jb	acc.1,00106$
                    0064   1476 	C$SHARED_INT.C$233$2$3 ==.
                           1477 ;	../SHARED_INT.C:233: ubNSRL = CAN_DATA0;
   0920 AA DB              1478 	mov	r2,_CAN_DATA0
                    0066   1479 	C$SHARED_INT.C$264$2$3 ==.
                           1480 ;	../SHARED_INT.C:264: CAN_vWriteCANAddress(CAN_NSR1); // Addressing CAN_NSR1
   0922 75 D9 C1           1481 	mov	_CAN_ADL,#0xC1
   0925 75 DA 00           1482 	mov	_CAN_ADH,#0x00
                    006C   1483 	C$SHARED_INT.C$265$2$3 ==.
                           1484 ;	../SHARED_INT.C:265: CAN_DATA0   =  ~(ubNSRL & ubResetLEC);       // load CAN_NSR1 status register[7-0]
   0928 53 02 3F           1485 	anl	ar2,#0x3F
   092B EA                 1486 	mov	a,r2
   092C F4                 1487 	cpl	a
   092D F5 DB              1488 	mov	_CAN_DATA0,a
                    0073   1489 	C$SHARED_INT.C$266$2$3 ==.
                           1490 ;	../SHARED_INT.C:266: CAN_vWriteEN(D0_VALID);  // Data0 Valid for
   092F 75 D8 11           1491 	mov	_CAN_ADCON,#0x11
   0932                    1492 00109$:
   0932 E5 D8              1493 	mov	a,_CAN_ADCON
   0934 20 E1 FB           1494 	jb	acc.1,00109$
   0937                    1495 00113$:
                    007B   1496 	C$SHARED_INT.C$280$1$1 ==.
                           1497 ;	../SHARED_INT.C:280: SFR_PAGE(_su0, RST0);          // restore the old SCU page
   0937 75 BF C0           1498 	mov	_SCU_PAGE,#0xC0
                    007E   1499 	C$SHARED_INT.C$282$1$1 ==.
                           1500 ;	../SHARED_INT.C:282: CAN_popAMRegs();               // restore the CAN Access Mediator Registers
   093A D0 DE D0 DD D0 DC  1501 	 pop 0xDE pop 0xDD pop 0xDC pop 0xDB pop 0xDA pop 0xD9 
        D0 DB D0 DA D0 D9
   0946 D0 D0              1502 	pop	psw
   0948 D0 01              1503 	pop	(0+1)
   094A D0 00              1504 	pop	(0+0)
   094C D0 07              1505 	pop	(0+7)
   094E D0 06              1506 	pop	(0+6)
   0950 D0 05              1507 	pop	(0+5)
   0952 D0 04              1508 	pop	(0+4)
   0954 D0 03              1509 	pop	(0+3)
   0956 D0 02              1510 	pop	(0+2)
   0958 D0 83              1511 	pop	dph
   095A D0 82              1512 	pop	dpl
   095C D0 F0              1513 	pop	b
   095E D0 E0              1514 	pop	acc
   0960 D0 22              1515 	pop	bits
                    00A6   1516 	C$SHARED_INT.C$283$1$1 ==.
                    00A6   1517 	XG$SHINT_viXINTR5Isr$0$0 ==.
   0962 32                 1518 	reti
                           1519 ;------------------------------------------------------------
                           1520 ;Allocation info for local variables in function 'SHINT_viXINTR6Isr'
                           1521 ;------------------------------------------------------------
                           1522 ;------------------------------------------------------------
                    00A7   1523 	G$SHINT_viXINTR6Isr$0$0 ==.
                    00A7   1524 	C$SHARED_INT.C$325$1$1 ==.
                           1525 ;	../SHARED_INT.C:325: void SHINT_viXINTR6Isr(void) interrupt XINTR6INT
                           1526 ;	-----------------------------------------
                           1527 ;	 function SHINT_viXINTR6Isr
                           1528 ;	-----------------------------------------
   0963                    1529 _SHINT_viXINTR6Isr:
   0963 C0 22              1530 	push	bits
   0965 C0 E0              1531 	push	acc
   0967 C0 F0              1532 	push	b
   0969 C0 82              1533 	push	dpl
   096B C0 83              1534 	push	dph
   096D C0 02              1535 	push	(0+2)
   096F C0 03              1536 	push	(0+3)
   0971 C0 04              1537 	push	(0+4)
   0973 C0 05              1538 	push	(0+5)
   0975 C0 06              1539 	push	(0+6)
   0977 C0 07              1540 	push	(0+7)
   0979 C0 00              1541 	push	(0+0)
   097B C0 01              1542 	push	(0+1)
   097D C0 D0              1543 	push	psw
   097F 75 D0 00           1544 	mov	psw,#0x00
                    00C6   1545 	C$SHARED_INT.C$329$1$1 ==.
                           1546 ;	../SHARED_INT.C:329: P3_DATA=ADC_uwGetResultData0();
   0982 12 01 4F           1547 	lcall	_ADC_uwGetResultData0
   0985 AA 82              1548 	mov	r2,dpl
   0987 8A B0              1549 	mov	_P3_DATA,r2
                    00CD   1550 	C$SHARED_INT.C$330$1$1 ==.
                           1551 ;	../SHARED_INT.C:330: wertadc = ADC_uwGetResultData0();
   0989 12 01 4F           1552 	lcall	_ADC_uwGetResultData0
   098C AA 82              1553 	mov	r2,dpl
   098E AB 83              1554 	mov	r3,dph
   0990 8A 0B              1555 	mov	_wertadc,r2
   0992 8B 0C              1556 	mov	(_wertadc + 1),r3
   0994 75 0D 00           1557 	mov	(_wertadc + 2),#0x00
   0997 75 0E 00           1558 	mov	(_wertadc + 3),#0x00
                    00DE   1559 	C$SHARED_INT.C$331$1$1 ==.
                           1560 ;	../SHARED_INT.C:331: CAN_vLoadData(0,&wertadc);
   099A 75 36 0B           1561 	mov	_CAN_vLoadData_PARM_2,#_wertadc
   099D 75 37 00           1562 	mov	(_CAN_vLoadData_PARM_2 + 1),#0x00
   09A0 75 38 40           1563 	mov	(_CAN_vLoadData_PARM_2 + 2),#0x40
   09A3 75 82 00           1564 	mov	dpl,#0x00
   09A6 12 07 AE           1565 	lcall	_CAN_vLoadData
                    00ED   1566 	C$SHARED_INT.C$332$1$1 ==.
                           1567 ;	../SHARED_INT.C:332: CAN_vTransmit(0);
   09A9 75 82 00           1568 	mov	dpl,#0x00
   09AC 12 07 5F           1569 	lcall	_CAN_vTransmit
                    00F3   1570 	C$SHARED_INT.C$333$1$1 ==.
                           1571 ;	../SHARED_INT.C:333: TI = 1;
   09AF D2 99              1572 	setb	_TI
                    00F5   1573 	C$SHARED_INT.C$336$1$1 ==.
                           1574 ;	../SHARED_INT.C:336: SFR_PAGE(_su0, SST0);          // switch to page 0
   09B1 75 BF 80           1575 	mov	_SCU_PAGE,#0x80
                    00F8   1576 	C$SHARED_INT.C$366$1$1 ==.
                           1577 ;	../SHARED_INT.C:366: if (((IRCON1 & 0x08) != 0))
   09B4 E5 B5              1578 	mov	a,_IRCON1
   09B6 30 E3 03           1579 	jnb	acc.3,00102$
                    00FD   1580 	C$SHARED_INT.C$369$2$2 ==.
                           1581 ;	../SHARED_INT.C:369: IRCON1 &= ~(ubyte)0x08; //   clear ADCSR0
   09B9 53 B5 F7           1582 	anl	_IRCON1,#0xF7
   09BC                    1583 00102$:
                    0100   1584 	C$SHARED_INT.C$379$1$1 ==.
                           1585 ;	../SHARED_INT.C:379: if (((IRCON1 & 0x10) != 0))
   09BC E5 B5              1586 	mov	a,_IRCON1
   09BE 30 E4 03           1587 	jnb	acc.4,00104$
                    0105   1588 	C$SHARED_INT.C$382$2$3 ==.
                           1589 ;	../SHARED_INT.C:382: IRCON1 &= ~(ubyte)0x10; //   clear ADCSR1
   09C1 53 B5 EF           1590 	anl	_IRCON1,#0xEF
   09C4                    1591 00104$:
                    0108   1592 	C$SHARED_INT.C$395$1$1 ==.
                           1593 ;	../SHARED_INT.C:395: SFR_PAGE(_su0, RST0);          // restore the old SCU page
   09C4 75 BF C0           1594 	mov	_SCU_PAGE,#0xC0
   09C7 D0 D0              1595 	pop	psw
   09C9 D0 01              1596 	pop	(0+1)
   09CB D0 00              1597 	pop	(0+0)
   09CD D0 07              1598 	pop	(0+7)
   09CF D0 06              1599 	pop	(0+6)
   09D1 D0 05              1600 	pop	(0+5)
   09D3 D0 04              1601 	pop	(0+4)
   09D5 D0 03              1602 	pop	(0+3)
   09D7 D0 02              1603 	pop	(0+2)
   09D9 D0 83              1604 	pop	dph
   09DB D0 82              1605 	pop	dpl
   09DD D0 F0              1606 	pop	b
   09DF D0 E0              1607 	pop	acc
   09E1 D0 22              1608 	pop	bits
                    0127   1609 	C$SHARED_INT.C$396$1$1 ==.
                    0127   1610 	XG$SHINT_viXINTR6Isr$0$0 ==.
   09E3 32                 1611 	reti
                           1612 	.area CSEG    (CODE)
                           1613 	.area CONST   (CODE)
                           1614 	.area XINIT   (CODE)
                           1615 	.area CABS    (ABS,CODE)
