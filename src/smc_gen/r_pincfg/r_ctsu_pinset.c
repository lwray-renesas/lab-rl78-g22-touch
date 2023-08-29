/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2023 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : r_ctsu_pinset.c
* Version      : 1.0.0
* Device(s)    : R7F102GGExFB
* Tool-Chain   : Renesas CCRL78 Toolchain
* Description  : Setting of port registers
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_ctsu_pinset.h"
#include "platform.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/

/***********************************************************************************************************************
* Function Name: R_CTSU_PinSetPinSetInit
* Description  : This function initializes pins for r_ctsu module
* Arguments    : none
* Return Value : none
***********************************************************************************************************************/
void R_CTSU_PinSetInit(void)
{

    /* Set TS20 pin */
    PMCA2 &= 0xFBU;
    PMCT2 |= 0x04U;
    PM2 |= 0x04U;
    /* Set TS21 pin */
    PMCA2 &= 0xF7U;
    PMCT2 |= 0x08U;
    PM2 |= 0x08U;
    /* Set TS22 pin */
    PMCA2 &= 0xEFU;
    PMCT2 |= 0x10U;
    PM2 |= 0x10U;
    /* Set TS23 pin */
    PMCA2 &= 0xDFU;
    PMCT2 |= 0x20U;
    PM2 |= 0x20U;
    /* Set TS24 pin */
    PMCA2 &= 0xBFU;
    PMCT2 |= 0x40U;
    PM2 |= 0x40U;
}
