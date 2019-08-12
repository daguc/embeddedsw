/******************************************************************************
*
* Copyright (C) 2015 Xilinx, Inc.  All rights reserved.
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

/*********************************************************************
 * CONTENT
 * Timer interface, contains function to initialize timer and
 * global variable tick_count which stores total number of interrupts
 * generated by the timer.
 *********************************************************************/

#ifndef _TIMER_H_
#define _TIMER_H_

#ifdef __cplusplus
extern "C" {
#endif

#define TTC0_0_DEVICE_ID	XPAR_XTTCPS_0_DEVICE_ID
#define COUNT_PER_SEC		(XPAR_XTTCPS_0_CLOCK_HZ / 65535)
#define TTC_INT_ID0		XPAR_XTTCPS_0_INTR

#define TIMER_PERIOD		3

s32 TimerInit(u32 timeout);

s32 TimerConfigure(u32 timer_period);

extern volatile u32 TickCount;

#ifdef __cplusplus
}
#endif

#endif /* _TIMER_H_ */
