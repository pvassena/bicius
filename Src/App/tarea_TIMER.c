/*
 * tarea_TIMER.c
 *
 *  Created on: Dec 9, 2019
 *      Author: Pedro
 */
#include "App/tarea_TIMER.h"
#include "App/variables_globales.h"

#define TICK 	32//32

extern __IO uint32_t uwTick;

volatile uint8_t FatFsCnt = 0;
volatile uint8_t Timer1, Timer2;



void tarea_TIMER(void)
{

	if(Timer1 > 0)
		Timer1--;

	if(Timer2 > 0)
		Timer2--;

	milliseconds+=TICK;

	if(milliseconds>=1000)
	{
		milliseconds-=1000;
		seconds+=1;
	}
	if(seconds>=60)
	{
		seconds-=60;
		minutes++;
	}
	if(minutes>=60)
	{
		minutes-=60;
		hours++;
	}
	if(hours>=24)
	{
		hours-=24;
	}
}

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
  /* Configure the SysTick to have interrupt in 1ms time basis*/
  if (HAL_SYSTICK_Config(TICK*SystemCoreClock/1000) > 0U)
  {
    return HAL_ERROR;
  }

  /* Configure the SysTick IRQ priority */
  if (TickPriority < (1UL << __NVIC_PRIO_BITS))
  {
    HAL_NVIC_SetPriority(SysTick_IRQn, TickPriority, 0U);
    uwTickPrio = TickPriority;
  }
  else
  {
    return HAL_ERROR;
  }

  /* Return function status */
  return HAL_OK;
}

void HAL_IncTick(void)
{
  uwTick += uwTickFreq*TICK;
}
