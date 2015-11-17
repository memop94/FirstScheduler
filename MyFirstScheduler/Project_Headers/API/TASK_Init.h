/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: TASK_Init.h $
 * $Revision: 1.0 $
 * $Author: Guillermo Ramirez $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    short description in one sentence end with dot.
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
 * $Log: TASK_Init.h  $
  ============================================================================*/
#ifndef TASK_Init_H
#define TASK_Init_H

/* Includes */
/*============================================================================*/
#include "HAL\MPC5606B.h"
#include "stdtypedef.h"
#include "HAL\driver_channel_MPC5606B.h"
#include "HAL\IntcInterrupts.h"
#include "HAL\Global_Init.h"
#include "MAL\OS_Init.h"
#include "HAL\GPIO_APP.h"

/* Constants and types */
/*============================================================================*/

typedef struct {
	void(* rp_Tasks)(void); /*Pointer that'll call the task*/
	T_ULONG rul_Period; /*Period of task*/
	T_ULONG rul_Offset; /*Offset of task*/
}S_TASK;

/* The new tasks must be defined here */
typedef enum{
	E_TASK1, 
	E_TASK2,
	E_TASK3,
	E_TASK4,
	
	/*DO NOT MODIFIED OR ERASE*/
	E_TASK_NUM
	
}E_TASK;


/* Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
extern void kernel (void);

/* The prototype of the function must be declared here */
extern void FUN_TASK_50(void);
extern void FUN_TASK_100(void);
extern void FUN_TASK_200(void);
extern void FUN_TASK_300(void);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
