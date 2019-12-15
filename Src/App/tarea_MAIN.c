/*
 * tarea_MAIN.c
 *
 *  Created on: Dec 14, 2019
 *      Author: Pedro
 */
#include "App/variables_globales.h"
#include "App/tarea_MAIN.h"
#include "tinygps.h"

void tarea_MAIN(void)
{
	byte hour,minute;
	//UINT br,bw;

	//Up buffer
	OLED_UP_BUFFER[0]='T';
	OLED_UP_BUFFER[1]='=';
	my_itoa_r(minutes,OLED_UP_BUFFER+2,2);
	OLED_UP_BUFFER[4]=':';
	my_itoa_r(seconds,OLED_UP_BUFFER+5,2);
	OLED_UP_BUFFER[7]=':';
	my_itoa_r(milliseconds,OLED_UP_BUFFER+8,3);

	//Down buffer
	gps_crack_datetime(NULL, NULL, NULL, &hour, &minute, NULL, NULL, NULL);
	my_itoa_r(hour,OLED_DOWN_BUFFER+0,2);
	OLED_DOWN_BUFFER[2]=':';
	my_itoa_r(minute,OLED_DOWN_BUFFER+3,2);

	//Left buffer
	my_itoa_r((uint32_t)gps_f_speed_kmph(),OLED_LEFT_BUFFER,5);

	//Right buffer
	my_itoa_r((uint32_t)gps_satellites(),OLED_RIGHT_BUFFER,5);


//	DWT->CYCCNT = 0;
//	if(f_open(&fil, "log.txt", FA_OPEN_ALWAYS | FA_READ | FA_WRITE))
//		while(1);
//	my_itoa_r(DWT->CYCCNT/72,OLED_DOWN_BUFFER,5);
//
//	DWT->CYCCNT = 0;
//	f_write(&fil, OLED_UP_BUFFER+5, 5, &bw);
//	my_itoa_r(DWT->CYCCNT/72,OLED_LEFT_BUFFER,5);
//
//	DWT->CYCCNT = 0;
//	if(f_close(&fil))
//		while(1);
//	my_itoa_r(DWT->CYCCNT/72,OLED_RIGHT_BUFFER,5);
//
//	if(f_open(&fil, "log.txt", FA_OPEN_ALWAYS | FA_READ | FA_WRITE))
//		while(1);
//	f_read(&fil, OLED_RIGHT_BUFFER, 5, &br);
//	if(f_close(&fil))
//		while(1);
//
//	  my_itoa_r(br,OLED_LEFT_UNITS_BUFFER,4);

}

void my_itoa_r(uint32_t num, char* str,uint32_t size)
{
	uint32_t i;
	for(i=1;i<=size;i++)
	{
		if(num>0)
		{
			str[size-i] = num %10 + '0';
			num = num/10;
		}
		else
		{
			str[size-i]='0';
		}
	}
}
