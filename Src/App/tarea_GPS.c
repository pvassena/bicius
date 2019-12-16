/*
 * tarea_GPS.c
 *
 *  Created on: Dec 8, 2019
 *      Author: Pedro
 */

#include <App/tarea_GPS.h>
#include <App/variables_globales.h>

#include "tinygps.h"

#define TRH 2

void tarea_GPS(void)
{
	static uint32_t pos_old=0;
	uint32_t pos_now, i;

	//posición en el buffer de DMA
	pos_now=SIZE_UART_RX_BUFFER - huart1.hdmarx->Instance->CNDTR;

	if(pos_now!=pos_old)
	{
		if(pos_now>pos_old)
		{
			for(i=pos_old;i<pos_now;i++)
			{
				cnt+=encode((char)UART_RX_BUFFER[i]);
			}
		}
		else
		{
			for(i=pos_old;i<SIZE_UART_RX_BUFFER;i++)
			{
				cnt+=encode((char)UART_RX_BUFFER[i]);
			}
			for(i=0;i<pos_now;i++)
			{
				cnt+=encode((char)UART_RX_BUFFER[i]);
			}
		}
		pos_old=pos_now;
	}
}

















