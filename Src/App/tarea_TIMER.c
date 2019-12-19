/*
 * tarea_TIMER.c
 *
 *  Created on: Dec 9, 2019
 *      Author: Pedro
 */
#include "App/tarea_TIMER.h"
#include "App/variables_globales.h"

#define TICK 		150//32
#define DIGITO_ON	15

extern uint32_t uwTick;

volatile uint8_t FatFsCnt = 0;
volatile uint8_t Timer1, Timer2, Timer3;



void tarea_TIMER(void)
{
	//Timers para FATFS HAL
	if(Timer1 > 0)
		Timer1--;
	if(Timer2 > 0)
		Timer2--;

	//Timer dígito titilante
	if(Timer3 > 0)
	{
		Timer3--;
	}
	else
	{
		Timer3=DIGITO_ON;
	}
	digito_on=0;
	if(Timer3>DIGITO_ON/6)
		digito_on=1;

	if(user_interfaceIface_israised_rESET_TIM(&UIX)){
		hours=0;
		minutes=0;
		seconds=0;
		milliseconds=0;
		distancia=0;
	}

	if(user_interfaceIface_israised_tIM_UP(&UIX))
	{
		milliseconds+=TICK;
		if(milliseconds>=1000)
		{
			milliseconds-=1000;
			seconds++;
			if(seconds>=60)
			{
				seconds-=60;
				minutes++;
				if(minutes>=60)
				{
					minutes-=60;
					hours++;
					if(hours>=99)
					{
						hours-=99;
					}
				}
			}
		}
	}

	if(user_interfaceIface_israised_tIM_DOWN(&UIX))
	{
		milliseconds-=TICK;
		if(milliseconds<0)
		{
			milliseconds+=1000;
			seconds--;
			if(seconds<0)
			{
				seconds+=60;
				minutes--;
				if(minutes<0)
				{
					minutes+=60;
					hours--;
					if(hours<0)
					{
						hours=0;
						minutes=0;
						seconds=0;
						milliseconds=0;
						user_interfaceIface_raise_tIMEOUT(&UIX);
					}
				}
			}
		}
	}

	if(user_interfaceIface_israised_sEGUNDOS(&UIX))
	{
		seconds++;
		if(seconds>=60)
		{
			seconds-=60;
			minutes++;
			if(minutes>=60)
			{
				minutes-=60;
				hours++;
				if(hours>=99)
				{
					hours-=99;
				}
			}
		}
	}

	if(user_interfaceIface_israised_mINUTOS(&UIX))
	{
		minutes++;
		if(minutes>=60)
		{
			minutes-=60;
			hours++;
			if(hours>=99)
			{
				hours-=99;
			}
		}
	}

	if(user_interfaceIface_israised_hORAS(&UIX))
	{
		hours++;
		if(hours>=99)
		{
			hours-=99;
		}
	}
}

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
  /* Configure the SysTick to have interrupt in 1ms time basis*/
//  if (HAL_SYSTICK_Config(TICK*SystemCoreClock/1000) > 0U)
	if (HAL_SYSTICK_Config(SystemCoreClock/(1000/TICK)) > 0U)
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
