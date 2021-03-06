/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: main.c $
 * $Revision: 1.0 $
 * $Author: Guillermo Ramirez $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Main file that calls the scheduler and its other functions.
    detailed
    multiline
    description of the file
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: main.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL\MPC5606B.h"
#include "stdtypedef.h"
#include "HAL\driver_channel_MPC5606B.h"
#include "HAL\IntcInterrupts.h"
#include "HAL\Global_Init.h"
#include "MAL\OS_Init.h"
#include "API\TASK_Init.h"

/* Constants and types  */
/*============================================================================*/
T_ULONG main(void) {
/* Variables */
/*============================================================================*/


/* Private functions prototypes */
/*============================================================================*/
	Global_Init();
	INTC_InstallINTCInterruptHandler(Tick_Flag,30,1); /* vector 30 for STM[0]*/
	
	kernel();

	
/* Inline functions */
/*============================================================================*/

/* Private functions */
/*============================================================================*/

/* Exported functions */
/*============================================================================*/
	
	
}
 /* Notice: the file ends with a blank new line to avoid compiler warnings */
