/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: TASK_Init.c $
 * $Revision: 2.0 $
 * $Author: Guillermo Ramirez $
 * $Date: 17/11/2015 $
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
/*                     |    FirstScheduler  |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: TASK_Init.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "API\TASK_Init.h"


/* Constants and types  */
/*============================================================================*/
#define taskPeriod50 50
#define taskPeriod100 100
#define taskPeriod200 200
#define taskPeriod300 300

#define taskOffset1 1
#define taskOffset3 3
#define taskOffset5 5
#define taskOffset7 7

const S_TASK cas_TaskList[E_TASK_NUM] = {
  /*{Pointer to the function, Period, Offset}*/
	{FUN_TASK_50, 	taskPeriod50, 	taskOffset1	},
	{FUN_TASK_100, 	taskPeriod100, 	taskOffset3	},
	{FUN_TASK_200, 	taskPeriod200, 	taskOffset5	},
	{FUN_TASK_300, 	taskPeriod300, 	taskOffset7	}
};

/* Variables */
/*============================================================================*/
extern ub_TickFlag;
T_ULONG rul_Count;
T_ULONG rul_Index;
T_ULONG raul_NTask[E_TASK_NUM];
/* Private functions prototypes */
/*============================================================================*/

/* ---------------------------- DO NOT MODIFIED ----------------------------- */
void kernel (void){
	for (rul_Index = 0; rul_Index < E_TASK_NUM; rul_Index ++){
		raul_NTask[rul_Index] = cas_TaskList[rul_Index].rul_Offset;
	}
		/* Loop Forever */
		while (1) {
			if (ub_TickFlag){
				ub_TickFlag = 0;
				for(rul_Count = 0; rul_Count < E_TASK_NUM; rul_Count++){
					if (raul_NTask[rul_Count] > 0){
						raul_NTask[rul_Count]--;
					}
					else{
						raul_NTask[rul_Count] = cas_TaskList[rul_Count].rul_Period;
						cas_TaskList[rul_Count].rp_Tasks();
					}
				}
			}
		}
	
/* ---------------------------- DO NOT MODIFIED ----------------------------- */
}


/* Inline functions */
/*============================================================================*/


/* Private functions */
/*============================================================================*/
/* The functions of the tasks must be defined here */
void FUN_TASK_50(void){
	LED_TOGGLE(LED1);
}
void FUN_TASK_100(void){
	LED_TOGGLE(LED2);
}
void FUN_TASK_200(void){
	LED_TOGGLE(LED3);
}
void FUN_TASK_300(void){
	LED_TOGGLE(LED4);
}

/* Exported functions */
/*============================================================================*/


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
