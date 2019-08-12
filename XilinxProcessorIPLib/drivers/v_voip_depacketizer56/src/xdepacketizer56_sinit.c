/******************************************************************************
*
* Copyright (C) 2016 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
* 
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xdepacketizer56_sinit.c
*
* This file contains static initialization method for Xilinx VoIP ST2022-6
* Depacketizer Core.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- ------ -------- --------------------------------------------------
* 1.00   mmo   02/12/16 Initial release.

* </pre>
*
******************************************************************************/

/***************************** Include Files *********************************/

#include "xdepacketizer56.h"
#include "xparameters.h"

/************************** Constant Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *********************/


/**************************** Type Definitions *******************************/


/************************** Function Prototypes ******************************/


/************************** Variable Definitions *****************************/


/************************** Function Definitions *****************************/

/*****************************************************************************/
/**
*
* This function returns a reference to an XDepacketizer56_Config structure
* based on the core id, <i>DeviceId</i>. The return value will refer to an
* entry in the device configuration table defined in the
* xdepacketizer56_g.c file.
*
* @param    DeviceId is the unique core ID of the VoIP Decapsulator core for
*       the lookup operation.
*
* @return   XDepacketizer56_LookupConfig returns a reference to a config record
*       in the configuration table (in xdepacketizer56_g.c) corresponding
*       to <i>DeviceId</i>, or NULL if no match is found.
*
* @note     None.
*
******************************************************************************/
XDepacketizer56_Config *XDepacketizer56_LookupConfig(u16 DeviceId)
{
    extern XDepacketizer56_Config
        XDepacketizer56_ConfigTable[XPAR_XDEPACKETIZER56_NUM_INSTANCES];
    XDepacketizer56_Config *CfgPtr = NULL;
    u32 Index;

    /* Checking for device id for which instance it is matching */
    for (Index = (u32)0x0; Index < (u32)(XPAR_XDEPACKETIZER56_NUM_INSTANCES);
                                Index++) {

        /* Assigning address of config table if both device ids
         * are matched
         */
        if (XDepacketizer56_ConfigTable[Index].DeviceId == DeviceId) {
            CfgPtr = &XDepacketizer56_ConfigTable[Index];
            break;
        }
    }

    return (XDepacketizer56_Config *)CfgPtr;
}
