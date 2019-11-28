                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 2.9.0 #5416 (Feb  7 2011) (MSVC)
                              4 ; This file was generated Thu Nov 28 11:00:57 2019
                              5 ;--------------------------------------------------------
                              6 	.module ADC
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
                            433 	.globl _ADC_vStartSeqReqChNum_PARM_4
                            434 	.globl _ADC_vStartSeqReqChNum_PARM_3
                            435 	.globl _ADC_vStartSeqReqChNum_PARM_2
                            436 	.globl _ADC_vInit
                            437 	.globl _ADC_vStartSeqReqChNum
                            438 	.globl _ADC_uwGetResultData0
                            439 ;--------------------------------------------------------
                            440 ; special function registers
                            441 ;--------------------------------------------------------
                            442 	.area RSEG    (DATA)
                    00E0    443 G$ACC$0$0 == 0x00e0
                    00E0    444 _ACC	=	0x00e0
                    00CA    445 G$ADC_CHCTR0$0$0 == 0x00ca
                    00CA    446 _ADC_CHCTR0	=	0x00ca
                    00CB    447 G$ADC_CHCTR1$0$0 == 0x00cb
                    00CB    448 _ADC_CHCTR1	=	0x00cb
                    00CC    449 G$ADC_CHCTR2$0$0 == 0x00cc
                    00CC    450 _ADC_CHCTR2	=	0x00cc
                    00CD    451 G$ADC_CHCTR3$0$0 == 0x00cd
                    00CD    452 _ADC_CHCTR3	=	0x00cd
                    00CE    453 G$ADC_CHCTR4$0$0 == 0x00ce
                    00CE    454 _ADC_CHCTR4	=	0x00ce
                    00CF    455 G$ADC_CHCTR5$0$0 == 0x00cf
                    00CF    456 _ADC_CHCTR5	=	0x00cf
                    00D2    457 G$ADC_CHCTR6$0$0 == 0x00d2
                    00D2    458 _ADC_CHCTR6	=	0x00d2
                    00D3    459 G$ADC_CHCTR7$0$0 == 0x00d3
                    00D3    460 _ADC_CHCTR7	=	0x00d3
                    00CB    461 G$ADC_CHINCR$0$0 == 0x00cb
                    00CB    462 _ADC_CHINCR	=	0x00cb
                    00CA    463 G$ADC_CHINFR$0$0 == 0x00ca
                    00CA    464 _ADC_CHINFR	=	0x00ca
                    00CD    465 G$ADC_CHINPR$0$0 == 0x00cd
                    00CD    466 _ADC_CHINPR	=	0x00cd
                    00CC    467 G$ADC_CHINSR$0$0 == 0x00cc
                    00CC    468 _ADC_CHINSR	=	0x00cc
                    00CA    469 G$ADC_CRCR1$0$0 == 0x00ca
                    00CA    470 _ADC_CRCR1	=	0x00ca
                    00CC    471 G$ADC_CRMR1$0$0 == 0x00cc
                    00CC    472 _ADC_CRMR1	=	0x00cc
                    00CB    473 G$ADC_CRPR1$0$0 == 0x00cb
                    00CB    474 _ADC_CRPR1	=	0x00cb
                    00CF    475 G$ADC_ETRCR$0$0 == 0x00cf
                    00CF    476 _ADC_ETRCR	=	0x00cf
                    00CF    477 G$ADC_EVINCR$0$0 == 0x00cf
                    00CF    478 _ADC_EVINCR	=	0x00cf
                    00CE    479 G$ADC_EVINFR$0$0 == 0x00ce
                    00CE    480 _ADC_EVINFR	=	0x00ce
                    00D3    481 G$ADC_EVINPR$0$0 == 0x00d3
                    00D3    482 _ADC_EVINPR	=	0x00d3
                    00D2    483 G$ADC_EVINSR$0$0 == 0x00d2
                    00D2    484 _ADC_EVINSR	=	0x00d2
                    00CA    485 G$ADC_GLOBCTR$0$0 == 0x00ca
                    00CA    486 _ADC_GLOBCTR	=	0x00ca
                    00CB    487 G$ADC_GLOBSTR$0$0 == 0x00cb
                    00CB    488 _ADC_GLOBSTR	=	0x00cb
                    00CE    489 G$ADC_INPCR0$0$0 == 0x00ce
                    00CE    490 _ADC_INPCR0	=	0x00ce
                    00CD    491 G$ADC_LCBR$0$0 == 0x00cd
                    00CD    492 _ADC_LCBR	=	0x00cd
                    00D1    493 G$ADC_PAGE$0$0 == 0x00d1
                    00D1    494 _ADC_PAGE	=	0x00d1
                    00CC    495 G$ADC_PRAR$0$0 == 0x00cc
                    00CC    496 _ADC_PRAR	=	0x00cc
                    00CF    497 G$ADC_Q0R0$0$0 == 0x00cf
                    00CF    498 _ADC_Q0R0	=	0x00cf
                    00D2    499 G$ADC_QBUR0$0$0 == 0x00d2
                    00D2    500 _ADC_QBUR0	=	0x00d2
                    00D2    501 G$ADC_QINR0$0$0 == 0x00d2
                    00D2    502 _ADC_QINR0	=	0x00d2
                    00CD    503 G$ADC_QMR0$0$0 == 0x00cd
                    00CD    504 _ADC_QMR0	=	0x00cd
                    00CE    505 G$ADC_QSR0$0$0 == 0x00ce
                    00CE    506 _ADC_QSR0	=	0x00ce
                    00CA    507 G$ADC_RCR0$0$0 == 0x00ca
                    00CA    508 _ADC_RCR0	=	0x00ca
                    00CB    509 G$ADC_RCR1$0$0 == 0x00cb
                    00CB    510 _ADC_RCR1	=	0x00cb
                    00CC    511 G$ADC_RCR2$0$0 == 0x00cc
                    00CC    512 _ADC_RCR2	=	0x00cc
                    00CD    513 G$ADC_RCR3$0$0 == 0x00cd
                    00CD    514 _ADC_RCR3	=	0x00cd
                    00CB    515 G$ADC_RESR0H$0$0 == 0x00cb
                    00CB    516 _ADC_RESR0H	=	0x00cb
                    00CA    517 G$ADC_RESR0L$0$0 == 0x00ca
                    00CA    518 _ADC_RESR0L	=	0x00ca
                    00CD    519 G$ADC_RESR1H$0$0 == 0x00cd
                    00CD    520 _ADC_RESR1H	=	0x00cd
                    00CC    521 G$ADC_RESR1L$0$0 == 0x00cc
                    00CC    522 _ADC_RESR1L	=	0x00cc
                    00CF    523 G$ADC_RESR2H$0$0 == 0x00cf
                    00CF    524 _ADC_RESR2H	=	0x00cf
                    00CE    525 G$ADC_RESR2L$0$0 == 0x00ce
                    00CE    526 _ADC_RESR2L	=	0x00ce
                    00D3    527 G$ADC_RESR3H$0$0 == 0x00d3
                    00D3    528 _ADC_RESR3H	=	0x00d3
                    00D2    529 G$ADC_RESR3L$0$0 == 0x00d2
                    00D2    530 _ADC_RESR3L	=	0x00d2
                    00CB    531 G$ADC_RESRA0H$0$0 == 0x00cb
                    00CB    532 _ADC_RESRA0H	=	0x00cb
                    00CA    533 G$ADC_RESRA0L$0$0 == 0x00ca
                    00CA    534 _ADC_RESRA0L	=	0x00ca
                    00CD    535 G$ADC_RESRA1H$0$0 == 0x00cd
                    00CD    536 _ADC_RESRA1H	=	0x00cd
                    00CC    537 G$ADC_RESRA1L$0$0 == 0x00cc
                    00CC    538 _ADC_RESRA1L	=	0x00cc
                    00CF    539 G$ADC_RESRA2H$0$0 == 0x00cf
                    00CF    540 _ADC_RESRA2H	=	0x00cf
                    00CE    541 G$ADC_RESRA2L$0$0 == 0x00ce
                    00CE    542 _ADC_RESRA2L	=	0x00ce
                    00D3    543 G$ADC_RESRA3H$0$0 == 0x00d3
                    00D3    544 _ADC_RESRA3H	=	0x00d3
                    00D2    545 G$ADC_RESRA3L$0$0 == 0x00d2
                    00D2    546 _ADC_RESRA3L	=	0x00d2
                    00CE    547 G$ADC_VFCR$0$0 == 0x00ce
                    00CE    548 _ADC_VFCR	=	0x00ce
                    00F0    549 G$B$0$0 == 0x00f0
                    00F0    550 _B	=	0x00f0
                    00BD    551 G$BCON$0$0 == 0x00bd
                    00BD    552 _BCON	=	0x00bd
                    00BE    553 G$BG$0$0 == 0x00be
                    00BE    554 _BG	=	0x00be
                    00D8    555 G$CAN_ADCON$0$0 == 0x00d8
                    00D8    556 _CAN_ADCON	=	0x00d8
                    00DA    557 G$CAN_ADH$0$0 == 0x00da
                    00DA    558 _CAN_ADH	=	0x00da
                    00D9    559 G$CAN_ADL$0$0 == 0x00d9
                    00D9    560 _CAN_ADL	=	0x00d9
                    00DB    561 G$CAN_DATA0$0$0 == 0x00db
                    00DB    562 _CAN_DATA0	=	0x00db
                    00DC    563 G$CAN_DATA1$0$0 == 0x00dc
                    00DC    564 _CAN_DATA1	=	0x00dc
                    00DD    565 G$CAN_DATA2$0$0 == 0x00dd
                    00DD    566 _CAN_DATA2	=	0x00dd
                    00DE    567 G$CAN_DATA3$0$0 == 0x00de
                    00DE    568 _CAN_DATA3	=	0x00de
                    00FB    569 G$CCU6_CC60RH$0$0 == 0x00fb
                    00FB    570 _CCU6_CC60RH	=	0x00fb
                    00FA    571 G$CCU6_CC60RL$0$0 == 0x00fa
                    00FA    572 _CCU6_CC60RL	=	0x00fa
                    00FB    573 G$CCU6_CC60SRH$0$0 == 0x00fb
                    00FB    574 _CCU6_CC60SRH	=	0x00fb
                    00FA    575 G$CCU6_CC60SRL$0$0 == 0x00fa
                    00FA    576 _CCU6_CC60SRL	=	0x00fa
                    00FD    577 G$CCU6_CC61RH$0$0 == 0x00fd
                    00FD    578 _CCU6_CC61RH	=	0x00fd
                    00FC    579 G$CCU6_CC61RL$0$0 == 0x00fc
                    00FC    580 _CCU6_CC61RL	=	0x00fc
                    00FD    581 G$CCU6_CC61SRH$0$0 == 0x00fd
                    00FD    582 _CCU6_CC61SRH	=	0x00fd
                    00FC    583 G$CCU6_CC61SRL$0$0 == 0x00fc
                    00FC    584 _CCU6_CC61SRL	=	0x00fc
                    00FF    585 G$CCU6_CC62RH$0$0 == 0x00ff
                    00FF    586 _CCU6_CC62RH	=	0x00ff
                    00FE    587 G$CCU6_CC62RL$0$0 == 0x00fe
                    00FE    588 _CCU6_CC62RL	=	0x00fe
                    00FF    589 G$CCU6_CC62SRH$0$0 == 0x00ff
                    00FF    590 _CCU6_CC62SRH	=	0x00ff
                    00FE    591 G$CCU6_CC62SRL$0$0 == 0x00fe
                    00FE    592 _CCU6_CC62SRL	=	0x00fe
                    009B    593 G$CCU6_CC63RH$0$0 == 0x009b
                    009B    594 _CCU6_CC63RH	=	0x009b
                    009A    595 G$CCU6_CC63RL$0$0 == 0x009a
                    009A    596 _CCU6_CC63RL	=	0x009a
                    009B    597 G$CCU6_CC63SRH$0$0 == 0x009b
                    009B    598 _CCU6_CC63SRH	=	0x009b
                    009A    599 G$CCU6_CC63SRL$0$0 == 0x009a
                    009A    600 _CCU6_CC63SRL	=	0x009a
                    00A7    601 G$CCU6_CMPMODIFH$0$0 == 0x00a7
                    00A7    602 _CCU6_CMPMODIFH	=	0x00a7
                    00A6    603 G$CCU6_CMPMODIFL$0$0 == 0x00a6
                    00A6    604 _CCU6_CMPMODIFL	=	0x00a6
                    00FF    605 G$CCU6_CMPSTATH$0$0 == 0x00ff
                    00FF    606 _CCU6_CMPSTATH	=	0x00ff
                    00FE    607 G$CCU6_CMPSTATL$0$0 == 0x00fe
                    00FE    608 _CCU6_CMPSTATL	=	0x00fe
                    009D    609 G$CCU6_IENH$0$0 == 0x009d
                    009D    610 _CCU6_IENH	=	0x009d
                    009C    611 G$CCU6_IENL$0$0 == 0x009c
                    009C    612 _CCU6_IENL	=	0x009c
                    009F    613 G$CCU6_INPH$0$0 == 0x009f
                    009F    614 _CCU6_INPH	=	0x009f
                    009E    615 G$CCU6_INPL$0$0 == 0x009e
                    009E    616 _CCU6_INPL	=	0x009e
                    009D    617 G$CCU6_ISH$0$0 == 0x009d
                    009D    618 _CCU6_ISH	=	0x009d
                    009C    619 G$CCU6_ISL$0$0 == 0x009c
                    009C    620 _CCU6_ISL	=	0x009c
                    00A5    621 G$CCU6_ISRH$0$0 == 0x00a5
                    00A5    622 _CCU6_ISRH	=	0x00a5
                    00A4    623 G$CCU6_ISRL$0$0 == 0x00a4
                    00A4    624 _CCU6_ISRL	=	0x00a4
                    00A5    625 G$CCU6_ISSH$0$0 == 0x00a5
                    00A5    626 _CCU6_ISSH	=	0x00a5
                    00A4    627 G$CCU6_ISSL$0$0 == 0x00a4
                    00A4    628 _CCU6_ISSL	=	0x00a4
                    00A7    629 G$CCU6_MCMCTR$0$0 == 0x00a7
                    00A7    630 _CCU6_MCMCTR	=	0x00a7
                    009B    631 G$CCU6_MCMOUTH$0$0 == 0x009b
                    009B    632 _CCU6_MCMOUTH	=	0x009b
                    009A    633 G$CCU6_MCMOUTL$0$0 == 0x009a
                    009A    634 _CCU6_MCMOUTL	=	0x009a
                    009F    635 G$CCU6_MCMOUTSH$0$0 == 0x009f
                    009F    636 _CCU6_MCMOUTSH	=	0x009f
                    009E    637 G$CCU6_MCMOUTSL$0$0 == 0x009e
                    009E    638 _CCU6_MCMOUTSL	=	0x009e
                    00FD    639 G$CCU6_MODCTRH$0$0 == 0x00fd
                    00FD    640 _CCU6_MODCTRH	=	0x00fd
                    00FC    641 G$CCU6_MODCTRL$0$0 == 0x00fc
                    00FC    642 _CCU6_MODCTRL	=	0x00fc
                    00A3    643 G$CCU6_PAGE$0$0 == 0x00a3
                    00A3    644 _CCU6_PAGE	=	0x00a3
                    009F    645 G$CCU6_PISEL0H$0$0 == 0x009f
                    009F    646 _CCU6_PISEL0H	=	0x009f
                    009E    647 G$CCU6_PISEL0L$0$0 == 0x009e
                    009E    648 _CCU6_PISEL0L	=	0x009e
                    00A4    649 G$CCU6_PISEL2$0$0 == 0x00a4
                    00A4    650 _CCU6_PISEL2	=	0x00a4
                    00A6    651 G$CCU6_PSLR$0$0 == 0x00a6
                    00A6    652 _CCU6_PSLR	=	0x00a6
                    00A5    653 G$CCU6_T12DTCH$0$0 == 0x00a5
                    00A5    654 _CCU6_T12DTCH	=	0x00a5
                    00A4    655 G$CCU6_T12DTCL$0$0 == 0x00a4
                    00A4    656 _CCU6_T12DTCL	=	0x00a4
                    00FB    657 G$CCU6_T12H$0$0 == 0x00fb
                    00FB    658 _CCU6_T12H	=	0x00fb
                    00FA    659 G$CCU6_T12L$0$0 == 0x00fa
                    00FA    660 _CCU6_T12L	=	0x00fa
                    009B    661 G$CCU6_T12MSELH$0$0 == 0x009b
                    009B    662 _CCU6_T12MSELH	=	0x009b
                    009A    663 G$CCU6_T12MSELL$0$0 == 0x009a
                    009A    664 _CCU6_T12MSELL	=	0x009a
                    009D    665 G$CCU6_T12PRH$0$0 == 0x009d
                    009D    666 _CCU6_T12PRH	=	0x009d
                    009C    667 G$CCU6_T12PRL$0$0 == 0x009c
                    009C    668 _CCU6_T12PRL	=	0x009c
                    00FD    669 G$CCU6_T13H$0$0 == 0x00fd
                    00FD    670 _CCU6_T13H	=	0x00fd
                    00FC    671 G$CCU6_T13L$0$0 == 0x00fc
                    00FC    672 _CCU6_T13L	=	0x00fc
                    009F    673 G$CCU6_T13PRH$0$0 == 0x009f
                    009F    674 _CCU6_T13PRH	=	0x009f
                    009E    675 G$CCU6_T13PRL$0$0 == 0x009e
                    009E    676 _CCU6_T13PRL	=	0x009e
                    00A7    677 G$CCU6_TCTR0H$0$0 == 0x00a7
                    00A7    678 _CCU6_TCTR0H	=	0x00a7
                    00A6    679 G$CCU6_TCTR0L$0$0 == 0x00a6
                    00A6    680 _CCU6_TCTR0L	=	0x00a6
                    00FB    681 G$CCU6_TCTR2H$0$0 == 0x00fb
                    00FB    682 _CCU6_TCTR2H	=	0x00fb
                    00FA    683 G$CCU6_TCTR2L$0$0 == 0x00fa
                    00FA    684 _CCU6_TCTR2L	=	0x00fa
                    009D    685 G$CCU6_TCTR4H$0$0 == 0x009d
                    009D    686 _CCU6_TCTR4H	=	0x009d
                    009C    687 G$CCU6_TCTR4L$0$0 == 0x009c
                    009C    688 _CCU6_TCTR4L	=	0x009c
                    00FF    689 G$CCU6_TRPCTRH$0$0 == 0x00ff
                    00FF    690 _CCU6_TRPCTRH	=	0x00ff
                    00FE    691 G$CCU6_TRPCTRL$0$0 == 0x00fe
                    00FE    692 _CCU6_TRPCTRL	=	0x00fe
                    00A1    693 G$CD_CON$0$0 == 0x00a1
                    00A1    694 _CD_CON	=	0x00a1
                    009B    695 G$CD_CORDXH$0$0 == 0x009b
                    009B    696 _CD_CORDXH	=	0x009b
                    009A    697 G$CD_CORDXL$0$0 == 0x009a
                    009A    698 _CD_CORDXL	=	0x009a
                    009D    699 G$CD_CORDYH$0$0 == 0x009d
                    009D    700 _CD_CORDYH	=	0x009d
                    009C    701 G$CD_CORDYL$0$0 == 0x009c
                    009C    702 _CD_CORDYL	=	0x009c
                    009F    703 G$CD_CORDZH$0$0 == 0x009f
                    009F    704 _CD_CORDZH	=	0x009f
                    009E    705 G$CD_CORDZL$0$0 == 0x009e
                    009E    706 _CD_CORDZL	=	0x009e
                    00A0    707 G$CD_STATC$0$0 == 0x00a0
                    00A0    708 _CD_STATC	=	0x00a0
                    00BA    709 G$CMCON$0$0 == 0x00ba
                    00BA    710 _CMCON	=	0x00ba
                    00BE    711 G$COCON$0$0 == 0x00be
                    00BE    712 _COCON	=	0x00be
                    0083    713 G$DPH$0$0 == 0x0083
                    0083    714 _DPH	=	0x0083
                    0082    715 G$DPL$0$0 == 0x0082
                    0082    716 _DPL	=	0x0082
                    00A2    717 G$EO$0$0 == 0x00a2
                    00A2    718 _EO	=	0x00a2
                    00B7    719 G$EXICON0$0$0 == 0x00b7
                    00B7    720 _EXICON0	=	0x00b7
                    00BA    721 G$EXICON1$0$0 == 0x00ba
                    00BA    722 _EXICON1	=	0x00ba
                    00E9    723 G$FDCON$0$0 == 0x00e9
                    00E9    724 _FDCON	=	0x00e9
                    00EB    725 G$FDRES$0$0 == 0x00eb
                    00EB    726 _FDRES	=	0x00eb
                    00EA    727 G$FDSTEP$0$0 == 0x00ea
                    00EA    728 _FDSTEP	=	0x00ea
                    00BD    729 G$FEAH$0$0 == 0x00bd
                    00BD    730 _FEAH	=	0x00bd
                    00BC    731 G$FEAL$0$0 == 0x00bc
                    00BC    732 _FEAL	=	0x00bc
                    00F7    733 G$HWBPDR$0$0 == 0x00f7
                    00F7    734 _HWBPDR	=	0x00f7
                    00F6    735 G$HWBPSR$0$0 == 0x00f6
                    00F6    736 _HWBPSR	=	0x00f6
                    00B3    737 G$ID$0$0 == 0x00b3
                    00B3    738 _ID	=	0x00b3
                    00A8    739 G$IEN0$0$0 == 0x00a8
                    00A8    740 _IEN0	=	0x00a8
                    00E8    741 G$IEN1$0$0 == 0x00e8
                    00E8    742 _IEN1	=	0x00e8
                    00B8    743 G$IP$0$0 == 0x00b8
                    00B8    744 _IP	=	0x00b8
                    00F8    745 G$IP1$0$0 == 0x00f8
                    00F8    746 _IP1	=	0x00f8
                    00B9    747 G$IPH$0$0 == 0x00b9
                    00B9    748 _IPH	=	0x00b9
                    00F9    749 G$IPH1$0$0 == 0x00f9
                    00F9    750 _IPH1	=	0x00f9
                    00B4    751 G$IRCON0$0$0 == 0x00b4
                    00B4    752 _IRCON0	=	0x00b4
                    00B5    753 G$IRCON1$0$0 == 0x00b5
                    00B5    754 _IRCON1	=	0x00b5
                    00B6    755 G$IRCON2$0$0 == 0x00b6
                    00B6    756 _IRCON2	=	0x00b6
                    00B4    757 G$IRCON3$0$0 == 0x00b4
                    00B4    758 _IRCON3	=	0x00b4
                    00B5    759 G$IRCON4$0$0 == 0x00b5
                    00B5    760 _IRCON4	=	0x00b5
                    00B2    761 G$MDU_MD0$0$0 == 0x00b2
                    00B2    762 _MDU_MD0	=	0x00b2
                    00B3    763 G$MDU_MD1$0$0 == 0x00b3
                    00B3    764 _MDU_MD1	=	0x00b3
                    00B4    765 G$MDU_MD2$0$0 == 0x00b4
                    00B4    766 _MDU_MD2	=	0x00b4
                    00B5    767 G$MDU_MD3$0$0 == 0x00b5
                    00B5    768 _MDU_MD3	=	0x00b5
                    00B6    769 G$MDU_MD4$0$0 == 0x00b6
                    00B6    770 _MDU_MD4	=	0x00b6
                    00B7    771 G$MDU_MD5$0$0 == 0x00b7
                    00B7    772 _MDU_MD5	=	0x00b7
                    00B1    773 G$MDU_MDUCON$0$0 == 0x00b1
                    00B1    774 _MDU_MDUCON	=	0x00b1
                    00B0    775 G$MDU_MDUSTAT$0$0 == 0x00b0
                    00B0    776 _MDU_MDUSTAT	=	0x00b0
                    00B2    777 G$MDU_MR0$0$0 == 0x00b2
                    00B2    778 _MDU_MR0	=	0x00b2
                    00B3    779 G$MDU_MR1$0$0 == 0x00b3
                    00B3    780 _MDU_MR1	=	0x00b3
                    00B4    781 G$MDU_MR2$0$0 == 0x00b4
                    00B4    782 _MDU_MR2	=	0x00b4
                    00B5    783 G$MDU_MR3$0$0 == 0x00b5
                    00B5    784 _MDU_MR3	=	0x00b5
                    00B6    785 G$MDU_MR4$0$0 == 0x00b6
                    00B6    786 _MDU_MR4	=	0x00b6
                    00B7    787 G$MDU_MR5$0$0 == 0x00b7
                    00B7    788 _MDU_MR5	=	0x00b7
                    00E9    789 G$MISC_CON$0$0 == 0x00e9
                    00E9    790 _MISC_CON	=	0x00e9
                    00F3    791 G$MMBPCR$0$0 == 0x00f3
                    00F3    792 _MMBPCR	=	0x00f3
                    00F1    793 G$MMCR$0$0 == 0x00f1
                    00F1    794 _MMCR	=	0x00f1
                    00E9    795 G$MMCR2$0$0 == 0x00e9
                    00E9    796 _MMCR2	=	0x00e9
                    00F5    797 G$MMDR$0$0 == 0x00f5
                    00F5    798 _MMDR	=	0x00f5
                    00F4    799 G$MMICR$0$0 == 0x00f4
                    00F4    800 _MMICR	=	0x00f4
                    00F2    801 G$MMSR$0$0 == 0x00f2
                    00F2    802 _MMSR	=	0x00f2
                    00EB    803 G$MMWR1$0$0 == 0x00eb
                    00EB    804 _MMWR1	=	0x00eb
                    00EC    805 G$MMWR2$0$0 == 0x00ec
                    00EC    806 _MMWR2	=	0x00ec
                    00B3    807 G$MODPISEL$0$0 == 0x00b3
                    00B3    808 _MODPISEL	=	0x00b3
                    00B7    809 G$MODPISEL1$0$0 == 0x00b7
                    00B7    810 _MODPISEL1	=	0x00b7
                    00BA    811 G$MODPISEL2$0$0 == 0x00ba
                    00BA    812 _MODPISEL2	=	0x00ba
                    00BD    813 G$MODSUSP$0$0 == 0x00bd
                    00BD    814 _MODSUSP	=	0x00bd
                    00BB    815 G$NMICON$0$0 == 0x00bb
                    00BB    816 _NMICON	=	0x00bb
                    00BC    817 G$NMISR$0$0 == 0x00bc
                    00BC    818 _NMISR	=	0x00bc
                    00B6    819 G$OSC_CON$0$0 == 0x00b6
                    00B6    820 _OSC_CON	=	0x00b6
                    0080    821 G$P0_ALTSEL0$0$0 == 0x0080
                    0080    822 _P0_ALTSEL0	=	0x0080
                    0086    823 G$P0_ALTSEL1$0$0 == 0x0086
                    0086    824 _P0_ALTSEL1	=	0x0086
                    0080    825 G$P0_DATA$0$0 == 0x0080
                    0080    826 _P0_DATA	=	0x0080
                    0086    827 G$P0_DIR$0$0 == 0x0086
                    0086    828 _P0_DIR	=	0x0086
                    0080    829 G$P0_OD$0$0 == 0x0080
                    0080    830 _P0_OD	=	0x0080
                    0086    831 G$P0_PUDEN$0$0 == 0x0086
                    0086    832 _P0_PUDEN	=	0x0086
                    0080    833 G$P0_PUDSEL$0$0 == 0x0080
                    0080    834 _P0_PUDSEL	=	0x0080
                    0090    835 G$P1_ALTSEL0$0$0 == 0x0090
                    0090    836 _P1_ALTSEL0	=	0x0090
                    0091    837 G$P1_ALTSEL1$0$0 == 0x0091
                    0091    838 _P1_ALTSEL1	=	0x0091
                    0090    839 G$P1_DATA$0$0 == 0x0090
                    0090    840 _P1_DATA	=	0x0090
                    0091    841 G$P1_DIR$0$0 == 0x0091
                    0091    842 _P1_DIR	=	0x0091
                    0090    843 G$P1_OD$0$0 == 0x0090
                    0090    844 _P1_OD	=	0x0090
                    0091    845 G$P1_PUDEN$0$0 == 0x0091
                    0091    846 _P1_PUDEN	=	0x0091
                    0090    847 G$P1_PUDSEL$0$0 == 0x0090
                    0090    848 _P1_PUDSEL	=	0x0090
                    00A0    849 G$P2_DATA$0$0 == 0x00a0
                    00A0    850 _P2_DATA	=	0x00a0
                    00A1    851 G$P2_DIR$0$0 == 0x00a1
                    00A1    852 _P2_DIR	=	0x00a1
                    00A1    853 G$P2_PUDEN$0$0 == 0x00a1
                    00A1    854 _P2_PUDEN	=	0x00a1
                    00A0    855 G$P2_PUDSEL$0$0 == 0x00a0
                    00A0    856 _P2_PUDSEL	=	0x00a0
                    00B0    857 G$P3_ALTSEL0$0$0 == 0x00b0
                    00B0    858 _P3_ALTSEL0	=	0x00b0
                    00B1    859 G$P3_ALTSEL1$0$0 == 0x00b1
                    00B1    860 _P3_ALTSEL1	=	0x00b1
                    00B0    861 G$P3_DATA$0$0 == 0x00b0
                    00B0    862 _P3_DATA	=	0x00b0
                    00B1    863 G$P3_DIR$0$0 == 0x00b1
                    00B1    864 _P3_DIR	=	0x00b1
                    00B0    865 G$P3_OD$0$0 == 0x00b0
                    00B0    866 _P3_OD	=	0x00b0
                    00B1    867 G$P3_PUDEN$0$0 == 0x00b1
                    00B1    868 _P3_PUDEN	=	0x00b1
                    00B0    869 G$P3_PUDSEL$0$0 == 0x00b0
                    00B0    870 _P3_PUDSEL	=	0x00b0
                    00C8    871 G$P4_ALTSEL0$0$0 == 0x00c8
                    00C8    872 _P4_ALTSEL0	=	0x00c8
                    00C9    873 G$P4_ALTSEL1$0$0 == 0x00c9
                    00C9    874 _P4_ALTSEL1	=	0x00c9
                    00C8    875 G$P4_DATA$0$0 == 0x00c8
                    00C8    876 _P4_DATA	=	0x00c8
                    00C9    877 G$P4_DIR$0$0 == 0x00c9
                    00C9    878 _P4_DIR	=	0x00c9
                    00C8    879 G$P4_OD$0$0 == 0x00c8
                    00C8    880 _P4_OD	=	0x00c8
                    00C9    881 G$P4_PUDEN$0$0 == 0x00c9
                    00C9    882 _P4_PUDEN	=	0x00c9
                    00C8    883 G$P4_PUDSEL$0$0 == 0x00c8
                    00C8    884 _P4_PUDSEL	=	0x00c8
                    0092    885 G$P5_ALTSEL0$0$0 == 0x0092
                    0092    886 _P5_ALTSEL0	=	0x0092
                    0093    887 G$P5_ALTSEL1$0$0 == 0x0093
                    0093    888 _P5_ALTSEL1	=	0x0093
                    0092    889 G$P5_DATA$0$0 == 0x0092
                    0092    890 _P5_DATA	=	0x0092
                    0093    891 G$P5_DIR$0$0 == 0x0093
                    0093    892 _P5_DIR	=	0x0093
                    0092    893 G$P5_OD$0$0 == 0x0092
                    0092    894 _P5_OD	=	0x0092
                    0093    895 G$P5_PUDEN$0$0 == 0x0093
                    0093    896 _P5_PUDEN	=	0x0093
                    0092    897 G$P5_PUDSEL$0$0 == 0x0092
                    0092    898 _P5_PUDSEL	=	0x0092
                    00BB    899 G$PASSWD$0$0 == 0x00bb
                    00BB    900 _PASSWD	=	0x00bb
                    0087    901 G$PCON$0$0 == 0x0087
                    0087    902 _PCON	=	0x0087
                    00B7    903 G$PLL_CON$0$0 == 0x00b7
                    00B7    904 _PLL_CON	=	0x00b7
                    00B4    905 G$PMCON0$0$0 == 0x00b4
                    00B4    906 _PMCON0	=	0x00b4
                    00B5    907 G$PMCON1$0$0 == 0x00b5
                    00B5    908 _PMCON1	=	0x00b5
                    00BB    909 G$PMCON2$0$0 == 0x00bb
                    00BB    910 _PMCON2	=	0x00bb
                    00B2    911 G$PORT_PAGE$0$0 == 0x00b2
                    00B2    912 _PORT_PAGE	=	0x00b2
                    00D0    913 G$PSW$0$0 == 0x00d0
                    00D0    914 _PSW	=	0x00d0
                    0099    915 G$SBUF$0$0 == 0x0099
                    0099    916 _SBUF	=	0x0099
                    0098    917 G$SCON$0$0 == 0x0098
                    0098    918 _SCON	=	0x0098
                    00BF    919 G$SCU_PAGE$0$0 == 0x00bf
                    00BF    920 _SCU_PAGE	=	0x00bf
                    0081    921 G$SP$0$0 == 0x0081
                    0081    922 _SP	=	0x0081
                    00AF    923 G$SSC_BRH$0$0 == 0x00af
                    00AF    924 _SSC_BRH	=	0x00af
                    00AE    925 G$SSC_BRL$0$0 == 0x00ae
                    00AE    926 _SSC_BRL	=	0x00ae
                    00AB    927 G$SSC_CONH_O$0$0 == 0x00ab
                    00AB    928 _SSC_CONH_O	=	0x00ab
                    00AB    929 G$SSC_CONH_P$0$0 == 0x00ab
                    00AB    930 _SSC_CONH_P	=	0x00ab
                    00AA    931 G$SSC_CONL_O$0$0 == 0x00aa
                    00AA    932 _SSC_CONL_O	=	0x00aa
                    00AA    933 G$SSC_CONL_P$0$0 == 0x00aa
                    00AA    934 _SSC_CONL_P	=	0x00aa
                    00A9    935 G$SSC_PISEL$0$0 == 0x00a9
                    00A9    936 _SSC_PISEL	=	0x00a9
                    00AD    937 G$SSC_RBL$0$0 == 0x00ad
                    00AD    938 _SSC_RBL	=	0x00ad
                    00AC    939 G$SSC_TBL$0$0 == 0x00ac
                    00AC    940 _SSC_TBL	=	0x00ac
                    008F    941 G$SYSCON0$0$0 == 0x008f
                    008F    942 _SYSCON0	=	0x008f
                    00C3    943 G$T21_RC2H$0$0 == 0x00c3
                    00C3    944 _T21_RC2H	=	0x00c3
                    00C2    945 G$T21_RC2L$0$0 == 0x00c2
                    00C2    946 _T21_RC2L	=	0x00c2
                    00C0    947 G$T21_T2CON$0$0 == 0x00c0
                    00C0    948 _T21_T2CON	=	0x00c0
                    00C5    949 G$T21_T2H$0$0 == 0x00c5
                    00C5    950 _T21_T2H	=	0x00c5
                    00C4    951 G$T21_T2L$0$0 == 0x00c4
                    00C4    952 _T21_T2L	=	0x00c4
                    00C1    953 G$T21_T2MOD$0$0 == 0x00c1
                    00C1    954 _T21_T2MOD	=	0x00c1
                    00C3    955 G$T2_RC2H$0$0 == 0x00c3
                    00C3    956 _T2_RC2H	=	0x00c3
                    00C2    957 G$T2_RC2L$0$0 == 0x00c2
                    00C2    958 _T2_RC2L	=	0x00c2
                    00C0    959 G$T2_T2CON$0$0 == 0x00c0
                    00C0    960 _T2_T2CON	=	0x00c0
                    00C5    961 G$T2_T2H$0$0 == 0x00c5
                    00C5    962 _T2_T2H	=	0x00c5
                    00C4    963 G$T2_T2L$0$0 == 0x00c4
                    00C4    964 _T2_T2L	=	0x00c4
                    00C1    965 G$T2_T2MOD$0$0 == 0x00c1
                    00C1    966 _T2_T2MOD	=	0x00c1
                    0088    967 G$TCON$0$0 == 0x0088
                    0088    968 _TCON	=	0x0088
                    008C    969 G$TH0$0$0 == 0x008c
                    008C    970 _TH0	=	0x008c
                    008D    971 G$TH1$0$0 == 0x008d
                    008D    972 _TH1	=	0x008d
                    008A    973 G$TL0$0$0 == 0x008a
                    008A    974 _TL0	=	0x008a
                    008B    975 G$TL1$0$0 == 0x008b
                    008B    976 _TL1	=	0x008b
                    0089    977 G$TMOD$0$0 == 0x0089
                    0089    978 _TMOD	=	0x0089
                    00CA    979 G$UART1_BCON$0$0 == 0x00ca
                    00CA    980 _UART1_BCON	=	0x00ca
                    00CB    981 G$UART1_BG$0$0 == 0x00cb
                    00CB    982 _UART1_BG	=	0x00cb
                    00CC    983 G$UART1_FDCON$0$0 == 0x00cc
                    00CC    984 _UART1_FDCON	=	0x00cc
                    00CE    985 G$UART1_FDRES$0$0 == 0x00ce
                    00CE    986 _UART1_FDRES	=	0x00ce
                    00CD    987 G$UART1_FDSTEP$0$0 == 0x00cd
                    00CD    988 _UART1_FDSTEP	=	0x00cd
                    00C9    989 G$UART1_SBUF$0$0 == 0x00c9
                    00C9    990 _UART1_SBUF	=	0x00c9
                    00C8    991 G$UART1_SCON$0$0 == 0x00c8
                    00C8    992 _UART1_SCON	=	0x00c8
                    00BB    993 G$WDTCON$0$0 == 0x00bb
                    00BB    994 _WDTCON	=	0x00bb
                    00BF    995 G$WDTH$0$0 == 0x00bf
                    00BF    996 _WDTH	=	0x00bf
                    00BE    997 G$WDTL$0$0 == 0x00be
                    00BE    998 _WDTL	=	0x00be
                    00BC    999 G$WDTREL$0$0 == 0x00bc
                    00BC   1000 _WDTREL	=	0x00bc
                    00BD   1001 G$WDTWINB$0$0 == 0x00bd
                    00BD   1002 _WDTWINB	=	0x00bd
                    00B3   1003 G$XADDRH$0$0 == 0x00b3
                    00B3   1004 _XADDRH	=	0x00b3
                    CBCA   1005 G$ADC_RESR0LH$0$0 == 0xcbca
                    CBCA   1006 _ADC_RESR0LH	=	0xcbca
                    CDCC   1007 G$ADC_RESR1LH$0$0 == 0xcdcc
                    CDCC   1008 _ADC_RESR1LH	=	0xcdcc
                    CFCE   1009 G$ADC_RESR2LH$0$0 == 0xcfce
                    CFCE   1010 _ADC_RESR2LH	=	0xcfce
                    D3D2   1011 G$ADC_RESR3LH$0$0 == 0xd3d2
                    D3D2   1012 _ADC_RESR3LH	=	0xd3d2
                    CBCA   1013 G$ADC_RESRA0LH$0$0 == 0xcbca
                    CBCA   1014 _ADC_RESRA0LH	=	0xcbca
                    CDCC   1015 G$ADC_RESRA1LH$0$0 == 0xcdcc
                    CDCC   1016 _ADC_RESRA1LH	=	0xcdcc
                    CFCE   1017 G$ADC_RESRA2LH$0$0 == 0xcfce
                    CFCE   1018 _ADC_RESRA2LH	=	0xcfce
                    D3D2   1019 G$ADC_RESRA3LH$0$0 == 0xd3d2
                    D3D2   1020 _ADC_RESRA3LH	=	0xd3d2
                    FBFA   1021 G$CCU6_CC60RLH$0$0 == 0xfbfa
                    FBFA   1022 _CCU6_CC60RLH	=	0xfbfa
                    FBFA   1023 G$CCU6_CC60SRLH$0$0 == 0xfbfa
                    FBFA   1024 _CCU6_CC60SRLH	=	0xfbfa
                    FDFC   1025 G$CCU6_CC61RLH$0$0 == 0xfdfc
                    FDFC   1026 _CCU6_CC61RLH	=	0xfdfc
                    FDFC   1027 G$CCU6_CC61SRLH$0$0 == 0xfdfc
                    FDFC   1028 _CCU6_CC61SRLH	=	0xfdfc
                    FFFE   1029 G$CCU6_CC62RLH$0$0 == 0xfffe
                    FFFE   1030 _CCU6_CC62RLH	=	0xfffe
                    FFFE   1031 G$CCU6_CC62SRLH$0$0 == 0xfffe
                    FFFE   1032 _CCU6_CC62SRLH	=	0xfffe
                    9B9A   1033 G$CCU6_CC63RLH$0$0 == 0x9b9a
                    9B9A   1034 _CCU6_CC63RLH	=	0x9b9a
                    9B9A   1035 G$CCU6_CC63SRLH$0$0 == 0x9b9a
                    9B9A   1036 _CCU6_CC63SRLH	=	0x9b9a
                    FBFA   1037 G$CCU6_T12LH$0$0 == 0xfbfa
                    FBFA   1038 _CCU6_T12LH	=	0xfbfa
                    9D9C   1039 G$CCU6_T12PRLH$0$0 == 0x9d9c
                    9D9C   1040 _CCU6_T12PRLH	=	0x9d9c
                    FDFC   1041 G$CCU6_T13LH$0$0 == 0xfdfc
                    FDFC   1042 _CCU6_T13LH	=	0xfdfc
                    9F9E   1043 G$CCU6_T13PRLH$0$0 == 0x9f9e
                    9F9E   1044 _CCU6_T13PRLH	=	0x9f9e
                    C3C2   1045 G$T2_RC2LH$0$0 == 0xc3c2
                    C3C2   1046 _T2_RC2LH	=	0xc3c2
                    C5C4   1047 G$T2_T2LH$0$0 == 0xc5c4
                    C5C4   1048 _T2_T2LH	=	0xc5c4
                           1049 ;--------------------------------------------------------
                           1050 ; special function bits
                           1051 ;--------------------------------------------------------
                           1052 	.area RSEG    (DATA)
                    00A0   1053 G$CD_BSY$0$0 == 0x00a0
                    00A0   1054 _CD_BSY	=	0x00a0
                    00A4   1055 G$DMAP$0$0 == 0x00a4
                    00A4   1056 _DMAP	=	0x00a4
                    00A2   1057 G$EOC$0$0 == 0x00a2
                    00A2   1058 _EOC	=	0x00a2
                    00A1   1059 G$ERROR$0$0 == 0x00a1
                    00A1   1060 _ERROR	=	0x00a1
                    00A3   1061 G$INT_EN$0$0 == 0x00a3
                    00A3   1062 _INT_EN	=	0x00a3
                    00A5   1063 G$KEEPX$0$0 == 0x00a5
                    00A5   1064 _KEEPX	=	0x00a5
                    00A6   1065 G$KEEPY$0$0 == 0x00a6
                    00A6   1066 _KEEPY	=	0x00a6
                    00A7   1067 G$KEEPZ$0$0 == 0x00a7
                    00A7   1068 _KEEPZ	=	0x00a7
                    00AF   1069 G$EA$0$0 == 0x00af
                    00AF   1070 _EA	=	0x00af
                    00AC   1071 G$ES$0$0 == 0x00ac
                    00AC   1072 _ES	=	0x00ac
                    00A9   1073 G$ET0$0$0 == 0x00a9
                    00A9   1074 _ET0	=	0x00a9
                    00AB   1075 G$ET1$0$0 == 0x00ab
                    00AB   1076 _ET1	=	0x00ab
                    00AD   1077 G$ET2$0$0 == 0x00ad
                    00AD   1078 _ET2	=	0x00ad
                    00A8   1079 G$EX0$0$0 == 0x00a8
                    00A8   1080 _EX0	=	0x00a8
                    00AA   1081 G$EX1$0$0 == 0x00aa
                    00AA   1082 _EX1	=	0x00aa
                    00E8   1083 G$EADC$0$0 == 0x00e8
                    00E8   1084 _EADC	=	0x00e8
                    00EC   1085 G$ECCIP0$0$0 == 0x00ec
                    00EC   1086 _ECCIP0	=	0x00ec
                    00ED   1087 G$ECCIP1$0$0 == 0x00ed
                    00ED   1088 _ECCIP1	=	0x00ed
                    00EE   1089 G$ECCIP2$0$0 == 0x00ee
                    00EE   1090 _ECCIP2	=	0x00ee
                    00EF   1091 G$ECCIP3$0$0 == 0x00ef
                    00EF   1092 _ECCIP3	=	0x00ef
                    00E9   1093 G$ESSC$0$0 == 0x00e9
                    00E9   1094 _ESSC	=	0x00e9
                    00EA   1095 G$EX2$0$0 == 0x00ea
                    00EA   1096 _EX2	=	0x00ea
                    00EB   1097 G$EXM$0$0 == 0x00eb
                    00EB   1098 _EXM	=	0x00eb
                    00F8   1099 G$PADC$0$0 == 0x00f8
                    00F8   1100 _PADC	=	0x00f8
                    00FC   1101 G$PCCIP0$0$0 == 0x00fc
                    00FC   1102 _PCCIP0	=	0x00fc
                    00FD   1103 G$PCCIP1$0$0 == 0x00fd
                    00FD   1104 _PCCIP1	=	0x00fd
                    00FE   1105 G$PCCIP2$0$0 == 0x00fe
                    00FE   1106 _PCCIP2	=	0x00fe
                    00FF   1107 G$PCCIP3$0$0 == 0x00ff
                    00FF   1108 _PCCIP3	=	0x00ff
                    00F9   1109 G$PSSC$0$0 == 0x00f9
                    00F9   1110 _PSSC	=	0x00f9
                    00FA   1111 G$PX2$0$0 == 0x00fa
                    00FA   1112 _PX2	=	0x00fa
                    00FB   1113 G$PXM$0$0 == 0x00fb
                    00FB   1114 _PXM	=	0x00fb
                    00BC   1115 G$PS$0$0 == 0x00bc
                    00BC   1116 _PS	=	0x00bc
                    00B9   1117 G$PT0$0$0 == 0x00b9
                    00B9   1118 _PT0	=	0x00b9
                    00BB   1119 G$PT1$0$0 == 0x00bb
                    00BB   1120 _PT1	=	0x00bb
                    00BD   1121 G$PT2$0$0 == 0x00bd
                    00BD   1122 _PT2	=	0x00bd
                    00B8   1123 G$PX0$0$0 == 0x00b8
                    00B8   1124 _PX0	=	0x00b8
                    00BA   1125 G$PX1$0$0 == 0x00ba
                    00BA   1126 _PX1	=	0x00ba
                    00B1   1127 G$IERR$0$0 == 0x00b1
                    00B1   1128 _IERR	=	0x00b1
                    00B0   1129 G$IRDY$0$0 == 0x00b0
                    00B0   1130 _IRDY	=	0x00b0
                    00B2   1131 G$MDU_BSY$0$0 == 0x00b2
                    00B2   1132 _MDU_BSY	=	0x00b2
                    00D6   1133 G$AC$0$0 == 0x00d6
                    00D6   1134 _AC	=	0x00d6
                    00D7   1135 G$CY$0$0 == 0x00d7
                    00D7   1136 _CY	=	0x00d7
                    00D5   1137 G$F0$0$0 == 0x00d5
                    00D5   1138 _F0	=	0x00d5
                    00D1   1139 G$F1$0$0 == 0x00d1
                    00D1   1140 _F1	=	0x00d1
                    00D2   1141 G$OV$0$0 == 0x00d2
                    00D2   1142 _OV	=	0x00d2
                    00D0   1143 G$P$0$0 == 0x00d0
                    00D0   1144 _P	=	0x00d0
                    00D3   1145 G$RS0$0$0 == 0x00d3
                    00D3   1146 _RS0	=	0x00d3
                    00D4   1147 G$RS1$0$0 == 0x00d4
                    00D4   1148 _RS1	=	0x00d4
                    009A   1149 G$RB8$0$0 == 0x009a
                    009A   1150 _RB8	=	0x009a
                    009C   1151 G$REN$0$0 == 0x009c
                    009C   1152 _REN	=	0x009c
                    0098   1153 G$RI$0$0 == 0x0098
                    0098   1154 _RI	=	0x0098
                    009F   1155 G$SM0$0$0 == 0x009f
                    009F   1156 _SM0	=	0x009f
                    009E   1157 G$SM1$0$0 == 0x009e
                    009E   1158 _SM1	=	0x009e
                    009D   1159 G$SM2$0$0 == 0x009d
                    009D   1160 _SM2	=	0x009d
                    009B   1161 G$TB8$0$0 == 0x009b
                    009B   1162 _TB8	=	0x009b
                    0099   1163 G$TI$0$0 == 0x0099
                    0099   1164 _TI	=	0x0099
                    00C1   1165 G$C_T2$0$0 == 0x00c1
                    00C1   1166 _C_T2	=	0x00c1
                    00C0   1167 G$CP_RL2$0$0 == 0x00c0
                    00C0   1168 _CP_RL2	=	0x00c0
                    00C3   1169 G$EXEN2$0$0 == 0x00c3
                    00C3   1170 _EXEN2	=	0x00c3
                    00C6   1171 G$EXF2$0$0 == 0x00c6
                    00C6   1172 _EXF2	=	0x00c6
                    00C7   1173 G$TF2$0$0 == 0x00c7
                    00C7   1174 _TF2	=	0x00c7
                    00C2   1175 G$TR2$0$0 == 0x00c2
                    00C2   1176 _TR2	=	0x00c2
                    0089   1177 G$IE0$0$0 == 0x0089
                    0089   1178 _IE0	=	0x0089
                    008B   1179 G$IE1$0$0 == 0x008b
                    008B   1180 _IE1	=	0x008b
                    0088   1181 G$IT0$0$0 == 0x0088
                    0088   1182 _IT0	=	0x0088
                    008A   1183 G$IT1$0$0 == 0x008a
                    008A   1184 _IT1	=	0x008a
                    008D   1185 G$TF0$0$0 == 0x008d
                    008D   1186 _TF0	=	0x008d
                    008F   1187 G$TF1$0$0 == 0x008f
                    008F   1188 _TF1	=	0x008f
                    008C   1189 G$TR0$0$0 == 0x008c
                    008C   1190 _TR0	=	0x008c
                    008E   1191 G$TR1$0$0 == 0x008e
                    008E   1192 _TR1	=	0x008e
                    00CA   1193 G$RB8_1$0$0 == 0x00ca
                    00CA   1194 _RB8_1	=	0x00ca
                    00CC   1195 G$REN_1$0$0 == 0x00cc
                    00CC   1196 _REN_1	=	0x00cc
                    00C8   1197 G$RI_1$0$0 == 0x00c8
                    00C8   1198 _RI_1	=	0x00c8
                    00CF   1199 G$SM0_1$0$0 == 0x00cf
                    00CF   1200 _SM0_1	=	0x00cf
                    00CE   1201 G$SM1_1$0$0 == 0x00ce
                    00CE   1202 _SM1_1	=	0x00ce
                    00CD   1203 G$SM2_1$0$0 == 0x00cd
                    00CD   1204 _SM2_1	=	0x00cd
                    00CB   1205 G$TB8_1$0$0 == 0x00cb
                    00CB   1206 _TB8_1	=	0x00cb
                    00C9   1207 G$TI_1$0$0 == 0x00c9
                    00C9   1208 _TI_1	=	0x00c9
                    0080   1209 G$P0_0$0$0 == 0x0080
                    0080   1210 _P0_0	=	0x0080
                    0081   1211 G$P0_1$0$0 == 0x0081
                    0081   1212 _P0_1	=	0x0081
                    0082   1213 G$P0_2$0$0 == 0x0082
                    0082   1214 _P0_2	=	0x0082
                    0083   1215 G$P0_3$0$0 == 0x0083
                    0083   1216 _P0_3	=	0x0083
                    0084   1217 G$P0_4$0$0 == 0x0084
                    0084   1218 _P0_4	=	0x0084
                    0085   1219 G$P0_5$0$0 == 0x0085
                    0085   1220 _P0_5	=	0x0085
                    0086   1221 G$P0_6$0$0 == 0x0086
                    0086   1222 _P0_6	=	0x0086
                    0087   1223 G$P0_7$0$0 == 0x0087
                    0087   1224 _P0_7	=	0x0087
                    0090   1225 G$P1_0$0$0 == 0x0090
                    0090   1226 _P1_0	=	0x0090
                    0091   1227 G$P1_1$0$0 == 0x0091
                    0091   1228 _P1_1	=	0x0091
                    0092   1229 G$P1_2$0$0 == 0x0092
                    0092   1230 _P1_2	=	0x0092
                    0093   1231 G$P1_3$0$0 == 0x0093
                    0093   1232 _P1_3	=	0x0093
                    0094   1233 G$P1_4$0$0 == 0x0094
                    0094   1234 _P1_4	=	0x0094
                    0095   1235 G$P1_5$0$0 == 0x0095
                    0095   1236 _P1_5	=	0x0095
                    0096   1237 G$P1_6$0$0 == 0x0096
                    0096   1238 _P1_6	=	0x0096
                    0097   1239 G$P1_7$0$0 == 0x0097
                    0097   1240 _P1_7	=	0x0097
                    00A0   1241 G$P2_0$0$0 == 0x00a0
                    00A0   1242 _P2_0	=	0x00a0
                    00A1   1243 G$P2_1$0$0 == 0x00a1
                    00A1   1244 _P2_1	=	0x00a1
                    00A2   1245 G$P2_2$0$0 == 0x00a2
                    00A2   1246 _P2_2	=	0x00a2
                    00A3   1247 G$P2_3$0$0 == 0x00a3
                    00A3   1248 _P2_3	=	0x00a3
                    00A4   1249 G$P2_4$0$0 == 0x00a4
                    00A4   1250 _P2_4	=	0x00a4
                    00A5   1251 G$P2_5$0$0 == 0x00a5
                    00A5   1252 _P2_5	=	0x00a5
                    00A6   1253 G$P2_6$0$0 == 0x00a6
                    00A6   1254 _P2_6	=	0x00a6
                    00A7   1255 G$P2_7$0$0 == 0x00a7
                    00A7   1256 _P2_7	=	0x00a7
                    00B0   1257 G$P3_0$0$0 == 0x00b0
                    00B0   1258 _P3_0	=	0x00b0
                    00B1   1259 G$P3_1$0$0 == 0x00b1
                    00B1   1260 _P3_1	=	0x00b1
                    00B2   1261 G$P3_2$0$0 == 0x00b2
                    00B2   1262 _P3_2	=	0x00b2
                    00B3   1263 G$P3_3$0$0 == 0x00b3
                    00B3   1264 _P3_3	=	0x00b3
                    00B4   1265 G$P3_4$0$0 == 0x00b4
                    00B4   1266 _P3_4	=	0x00b4
                    00B5   1267 G$P3_5$0$0 == 0x00b5
                    00B5   1268 _P3_5	=	0x00b5
                    00B6   1269 G$P3_6$0$0 == 0x00b6
                    00B6   1270 _P3_6	=	0x00b6
                    00B7   1271 G$P3_7$0$0 == 0x00b7
                    00B7   1272 _P3_7	=	0x00b7
                    00C8   1273 G$P4_0$0$0 == 0x00c8
                    00C8   1274 _P4_0	=	0x00c8
                    00C9   1275 G$P4_1$0$0 == 0x00c9
                    00C9   1276 _P4_1	=	0x00c9
                    00CA   1277 G$P4_2$0$0 == 0x00ca
                    00CA   1278 _P4_2	=	0x00ca
                    00CB   1279 G$P4_3$0$0 == 0x00cb
                    00CB   1280 _P4_3	=	0x00cb
                    00CC   1281 G$P4_4$0$0 == 0x00cc
                    00CC   1282 _P4_4	=	0x00cc
                    00CD   1283 G$P4_5$0$0 == 0x00cd
                    00CD   1284 _P4_5	=	0x00cd
                    00CE   1285 G$P4_6$0$0 == 0x00ce
                    00CE   1286 _P4_6	=	0x00ce
                    00CF   1287 G$P4_7$0$0 == 0x00cf
                    00CF   1288 _P4_7	=	0x00cf
                           1289 ;--------------------------------------------------------
                           1290 ; overlayable register banks
                           1291 ;--------------------------------------------------------
                           1292 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1293 	.ds 8
                           1294 ;--------------------------------------------------------
                           1295 ; internal ram data
                           1296 ;--------------------------------------------------------
                           1297 	.area DSEG    (DATA)
                    0000   1298 LADC_vStartSeqReqChNum$ubEnIntr$1$1==.
   0008                    1299 _ADC_vStartSeqReqChNum_PARM_2:
   0008                    1300 	.ds 1
                    0001   1301 LADC_vStartSeqReqChNum$ubRFill$1$1==.
   0009                    1302 _ADC_vStartSeqReqChNum_PARM_3:
   0009                    1303 	.ds 1
                    0002   1304 LADC_vStartSeqReqChNum$ubChannelNum$1$1==.
   000A                    1305 _ADC_vStartSeqReqChNum_PARM_4:
   000A                    1306 	.ds 1
                           1307 ;--------------------------------------------------------
                           1308 ; overlayable items in internal ram 
                           1309 ;--------------------------------------------------------
                           1310 	.area OSEG    (OVR,DATA)
                           1311 ;--------------------------------------------------------
                           1312 ; indirectly addressable internal ram data
                           1313 ;--------------------------------------------------------
                           1314 	.area ISEG    (DATA)
                           1315 ;--------------------------------------------------------
                           1316 ; absolute internal ram data
                           1317 ;--------------------------------------------------------
                           1318 	.area IABS    (ABS,DATA)
                           1319 	.area IABS    (ABS,DATA)
                           1320 ;--------------------------------------------------------
                           1321 ; bit data
                           1322 ;--------------------------------------------------------
                           1323 	.area BSEG    (BIT)
                           1324 ;--------------------------------------------------------
                           1325 ; paged external ram data
                           1326 ;--------------------------------------------------------
                           1327 	.area PSEG    (PAG,XDATA)
                           1328 ;--------------------------------------------------------
                           1329 ; external ram data
                           1330 ;--------------------------------------------------------
                           1331 	.area XSEG    (XDATA)
                           1332 ;--------------------------------------------------------
                           1333 ; absolute external ram data
                           1334 ;--------------------------------------------------------
                           1335 	.area XABS    (ABS,XDATA)
                           1336 ;--------------------------------------------------------
                           1337 ; external initialized ram data
                           1338 ;--------------------------------------------------------
                           1339 	.area XISEG   (XDATA)
                           1340 	.area HOME    (CODE)
                           1341 	.area GSINIT0 (CODE)
                           1342 	.area GSINIT1 (CODE)
                           1343 	.area GSINIT2 (CODE)
                           1344 	.area GSINIT3 (CODE)
                           1345 	.area GSINIT4 (CODE)
                           1346 	.area GSINIT5 (CODE)
                           1347 	.area GSINIT  (CODE)
                           1348 	.area GSFINAL (CODE)
                           1349 	.area CSEG    (CODE)
                           1350 ;--------------------------------------------------------
                           1351 ; global & static initialisations
                           1352 ;--------------------------------------------------------
                           1353 	.area HOME    (CODE)
                           1354 	.area GSINIT  (CODE)
                           1355 	.area GSFINAL (CODE)
                           1356 	.area GSINIT  (CODE)
                           1357 ;--------------------------------------------------------
                           1358 ; Home
                           1359 ;--------------------------------------------------------
                           1360 	.area HOME    (CODE)
                           1361 	.area HOME    (CODE)
                           1362 ;--------------------------------------------------------
                           1363 ; code
                           1364 ;--------------------------------------------------------
                           1365 	.area CSEG    (CODE)
                           1366 ;------------------------------------------------------------
                           1367 ;Allocation info for local variables in function 'ADC_vInit'
                           1368 ;------------------------------------------------------------
                           1369 ;------------------------------------------------------------
                    0000   1370 	G$ADC_vInit$0$0 ==.
                    0000   1371 	C$ADC.C$129$0$0 ==.
                           1372 ;	../ADC.C:129: void ADC_vInit(void)
                           1373 ;	-----------------------------------------
                           1374 ;	 function ADC_vInit
                           1375 ;	-----------------------------------------
   00DF                    1376 _ADC_vInit:
                    0002   1377 	ar2 = 0x02
                    0003   1378 	ar3 = 0x03
                    0004   1379 	ar4 = 0x04
                    0005   1380 	ar5 = 0x05
                    0006   1381 	ar6 = 0x06
                    0007   1382 	ar7 = 0x07
                    0000   1383 	ar0 = 0x00
                    0001   1384 	ar1 = 0x01
                    0000   1385 	C$ADC.C$147$1$1 ==.
                           1386 ;	../ADC.C:147: SFR_PAGE(_ad0, noSST);         // switch to page 0
   00DF 75 D1 00           1387 	mov	_ADC_PAGE,#0x00
                    0003   1388 	C$ADC.C$149$1$1 ==.
                           1389 ;	../ADC.C:149: ADC_GLOBCTR   =  0x70;         // load global control register
   00E2 75 CA 70           1390 	mov	_ADC_GLOBCTR,#0x70
                    0006   1391 	C$ADC.C$162$1$1 ==.
                           1392 ;	../ADC.C:162: ADC_PRAR      =  0x40;         // load Priority and Arbitration register
   00E5 75 CC 40           1393 	mov	_ADC_PRAR,#0x40
                    0009   1394 	C$ADC.C$164$1$1 ==.
                           1395 ;	../ADC.C:164: SFR_PAGE(_ad1, noSST);         // switch to page 1
   00E8 75 D1 01           1396 	mov	_ADC_PAGE,#0x01
                    000C   1397 	C$ADC.C$173$1$1 ==.
                           1398 ;	../ADC.C:173: ADC_CHCTR7    =  0x40;         // load channel control register
   00EB 75 D3 40           1399 	mov	_ADC_CHCTR7,#0x40
                    000F   1400 	C$ADC.C$175$1$1 ==.
                           1401 ;	../ADC.C:175: SFR_PAGE(_ad0, noSST);         // switch to page 0
   00EE 75 D1 00           1402 	mov	_ADC_PAGE,#0x00
                    0012   1403 	C$ADC.C$181$1$1 ==.
                           1404 ;	../ADC.C:181: ADC_INPCR0    =  0x00;         // load input class register
   00F1 75 CE 00           1405 	mov	_ADC_INPCR0,#0x00
                    0015   1406 	C$ADC.C$183$1$1 ==.
                           1407 ;	../ADC.C:183: SFR_PAGE(_ad4, noSST);         // switch to page 4
   00F4 75 D1 04           1408 	mov	_ADC_PAGE,#0x04
                    0018   1409 	C$ADC.C$194$1$1 ==.
                           1410 ;	../ADC.C:194: ADC_RCR0      =  0x00;         // load result control register 0
   00F7 75 CA 00           1411 	mov	_ADC_RCR0,#0x00
                    001B   1412 	C$ADC.C$202$1$1 ==.
                           1413 ;	../ADC.C:202: ADC_RCR1      =  0x00;         // load result control register 1
   00FA 75 CB 00           1414 	mov	_ADC_RCR1,#0x00
                    001E   1415 	C$ADC.C$210$1$1 ==.
                           1416 ;	../ADC.C:210: ADC_RCR2      =  0x00;         // load result control register 2
   00FD 75 CC 00           1417 	mov	_ADC_RCR2,#0x00
                    0021   1418 	C$ADC.C$218$1$1 ==.
                           1419 ;	../ADC.C:218: ADC_RCR3      =  0x00;         // load result control register 3
   0100 75 CD 00           1420 	mov	_ADC_RCR3,#0x00
                    0024   1421 	C$ADC.C$220$1$1 ==.
                           1422 ;	../ADC.C:220: SFR_PAGE(_ad5, noSST);         // switch to page 5
   0103 75 D1 05           1423 	mov	_ADC_PAGE,#0x05
                    0027   1424 	C$ADC.C$234$1$1 ==.
                           1425 ;	../ADC.C:234: ADC_CHINPR    =  0x00;         // load channel interrupt node pointer 
   0106 75 CD 00           1426 	mov	_ADC_CHINPR,#0x00
                    002A   1427 	C$ADC.C$247$1$1 ==.
                           1428 ;	../ADC.C:247: ADC_EVINPR    =  0x00;         // load event interrupt set flag register 
   0109 75 D3 00           1429 	mov	_ADC_EVINPR,#0x00
                    002D   1430 	C$ADC.C$249$1$1 ==.
                           1431 ;	../ADC.C:249: SFR_PAGE(_ad0, noSST);         // switch to page 0
   010C 75 D1 00           1432 	mov	_ADC_PAGE,#0x00
                    0030   1433 	C$ADC.C$255$1$1 ==.
                           1434 ;	../ADC.C:255: ADC_LCBR      =  0xB7;         // load limit check boundary register
   010F 75 CD B7           1435 	mov	_ADC_LCBR,#0xB7
                    0033   1436 	C$ADC.C$265$1$1 ==.
                           1437 ;	../ADC.C:265: ADC_ETRCR     =  0x00;         // load external trigger control register
   0112 75 CF 00           1438 	mov	_ADC_ETRCR,#0x00
                    0036   1439 	C$ADC.C$267$1$1 ==.
                           1440 ;	../ADC.C:267: SFR_PAGE(_ad6, noSST);         // switch to page 6
   0115 75 D1 06           1441 	mov	_ADC_PAGE,#0x06
                    0039   1442 	C$ADC.C$275$1$1 ==.
                           1443 ;	../ADC.C:275: ADC_QMR0      =  0x01;         // load queue mode register
   0118 75 CD 01           1444 	mov	_ADC_QMR0,#0x01
                    003C   1445 	C$ADC.C$285$1$1 ==.
                           1446 ;	../ADC.C:285: ADC_CRMR1     =  0x00;         // load conversion request mode register 1
   011B 75 CC 00           1447 	mov	_ADC_CRMR1,#0x00
                    003F   1448 	C$ADC.C$287$1$1 ==.
                           1449 ;	../ADC.C:287: SFR_PAGE(_ad0, noSST);         // switch to page 0
   011E 75 D1 00           1450 	mov	_ADC_PAGE,#0x00
                    0042   1451 	C$ADC.C$289$1$1 ==.
                           1452 ;	../ADC.C:289: ADC_GLOBCTR  |=  0x80;         // turn on Analog part
   0121 43 CA 80           1453 	orl	_ADC_GLOBCTR,#0x80
                    0045   1454 	C$ADC.C$297$1$1 ==.
                    0045   1455 	XG$ADC_vInit$0$0 ==.
   0124 22                 1456 	ret
                           1457 ;------------------------------------------------------------
                           1458 ;Allocation info for local variables in function 'ADC_vStartSeqReqChNum'
                           1459 ;------------------------------------------------------------
                           1460 ;ubEnIntr                  Allocated with name '_ADC_vStartSeqReqChNum_PARM_2'
                           1461 ;ubRFill                   Allocated with name '_ADC_vStartSeqReqChNum_PARM_3'
                           1462 ;ubChannelNum              Allocated with name '_ADC_vStartSeqReqChNum_PARM_4'
                           1463 ;ubExtTrg                  Allocated to registers r2 
                           1464 ;ubVal                     Allocated to registers r3 
                           1465 ;------------------------------------------------------------
                    0046   1466 	G$ADC_vStartSeqReqChNum$0$0 ==.
                    0046   1467 	C$ADC.C$327$1$1 ==.
                           1468 ;	../ADC.C:327: void ADC_vStartSeqReqChNum(ubyte ubExtTrg, ubyte ubEnIntr, ubyte ubRFill, ubyte ubChannelNum)
                           1469 ;	-----------------------------------------
                           1470 ;	 function ADC_vStartSeqReqChNum
                           1471 ;	-----------------------------------------
   0125                    1472 _ADC_vStartSeqReqChNum:
   0125 AA 82              1473 	mov	r2,dpl
                    0048   1474 	C$ADC.C$330$1$1 ==.
                           1475 ;	../ADC.C:330: ubyte ubVal = 0;
   0127 7B 00              1476 	mov	r3,#0x00
                    004A   1477 	C$ADC.C$331$1$1 ==.
                           1478 ;	../ADC.C:331: if (ubExtTrg == 1){ ubVal = 0x80;}
   0129 BA 01 02           1479 	cjne	r2,#0x01,00102$
   012C 7B 80              1480 	mov	r3,#0x80
   012E                    1481 00102$:
                    004F   1482 	C$ADC.C$332$1$1 ==.
                           1483 ;	../ADC.C:332: if (ubEnIntr == 1){ ubVal = ubVal + 0x40;}
   012E 74 01              1484 	mov	a,#0x01
   0130 B5 08 04           1485 	cjne	a,_ADC_vStartSeqReqChNum_PARM_2,00104$
   0133 74 40              1486 	mov	a,#0x40
   0135 2B                 1487 	add	a,r3
   0136 FB                 1488 	mov	r3,a
   0137                    1489 00104$:
                    0058   1490 	C$ADC.C$333$1$1 ==.
                           1491 ;	../ADC.C:333: if (ubRFill == 1){ ubVal = ubVal + 0x20;}
   0137 74 01              1492 	mov	a,#0x01
   0139 B5 09 04           1493 	cjne	a,_ADC_vStartSeqReqChNum_PARM_3,00106$
   013C 74 20              1494 	mov	a,#0x20
   013E 2B                 1495 	add	a,r3
   013F FB                 1496 	mov	r3,a
   0140                    1497 00106$:
                    0061   1498 	C$ADC.C$334$1$1 ==.
                           1499 ;	../ADC.C:334: ubVal = ubVal + (ubChannelNum & 0x07);
   0140 74 07              1500 	mov	a,#0x07
   0142 55 0A              1501 	anl	a,_ADC_vStartSeqReqChNum_PARM_4
   0144 2B                 1502 	add	a,r3
   0145 FB                 1503 	mov	r3,a
                    0067   1504 	C$ADC.C$336$1$1 ==.
                           1505 ;	../ADC.C:336: SFR_PAGE(_ad6, SST1);          // switch to page 6
   0146 75 D1 96           1506 	mov	_ADC_PAGE,#0x96
                    006A   1507 	C$ADC.C$338$1$1 ==.
                           1508 ;	../ADC.C:338: ADC_QINR0 = ubVal; // requested channel 
   0149 8B D2              1509 	mov	_ADC_QINR0,r3
                    006C   1510 	C$ADC.C$340$1$1 ==.
                           1511 ;	../ADC.C:340: SFR_PAGE(_ad0, RST1);          // restore the old ADC page
   014B 75 D1 D0           1512 	mov	_ADC_PAGE,#0xD0
                    006F   1513 	C$ADC.C$342$1$1 ==.
                    006F   1514 	XG$ADC_vStartSeqReqChNum$0$0 ==.
   014E 22                 1515 	ret
                           1516 ;------------------------------------------------------------
                           1517 ;Allocation info for local variables in function 'ADC_uwGetResultData0'
                           1518 ;------------------------------------------------------------
                           1519 ;uwResult                  Allocated to registers r2 r3 
                           1520 ;------------------------------------------------------------
                    0070   1521 	G$ADC_uwGetResultData0$0$0 ==.
                    0070   1522 	C$ADC.C$363$1$1 ==.
                           1523 ;	../ADC.C:363: uword ADC_uwGetResultData0(void)
                           1524 ;	-----------------------------------------
                           1525 ;	 function ADC_uwGetResultData0
                           1526 ;	-----------------------------------------
   014F                    1527 _ADC_uwGetResultData0:
                    0070   1528 	C$ADC.C$365$1$1 ==.
                           1529 ;	../ADC.C:365: uword uwResult = 0;
   014F 7A 00              1530 	mov	r2,#0x00
   0151 7B 00              1531 	mov	r3,#0x00
                    0074   1532 	C$ADC.C$367$1$1 ==.
                           1533 ;	../ADC.C:367: SFR_PAGE(_ad2, SST1);          // switch to page 2
   0153 75 D1 92           1534 	mov	_ADC_PAGE,#0x92
                    0077   1535 	C$ADC.C$369$1$1 ==.
                           1536 ;	../ADC.C:369: if ( ADC_RESR0L & 0x10 )       //  if Result Register0 contains valid data
   0156 E5 CA              1537 	mov	a,_ADC_RESR0L
   0158 30 E4 04           1538 	jnb	acc.4,00102$
                    007C   1539 	C$ADC.C$372$2$2 ==.
                           1540 ;	../ADC.C:372: uwResult = ADC_RESR0H;  // Result Register0 High
   015B AA CB              1541 	mov	r2,_ADC_RESR0H
   015D 7B 00              1542 	mov	r3,#0x00
   015F                    1543 00102$:
                    0080   1544 	C$ADC.C$375$1$1 ==.
                           1545 ;	../ADC.C:375: SFR_PAGE(_ad0, RST1);          // restore the old ADC page
   015F 75 D1 D0           1546 	mov	_ADC_PAGE,#0xD0
                    0083   1547 	C$ADC.C$377$1$1 ==.
                           1548 ;	../ADC.C:377: return(uwResult);
   0162 8A 82              1549 	mov	dpl,r2
   0164 8B 83              1550 	mov	dph,r3
                    0087   1551 	C$ADC.C$378$1$1 ==.
                    0087   1552 	XG$ADC_uwGetResultData0$0$0 ==.
   0166 22                 1553 	ret
                           1554 	.area CSEG    (CODE)
                           1555 	.area CONST   (CODE)
                           1556 	.area XINIT   (CODE)
                           1557 	.area CABS    (ABS,CODE)
