/*
 * tarea_MAIN.c
 *
 *  Created on: Dec 14, 2019
 *      Author: Pedro
 */
#include "App/variables_globales.h"
#include "App/tarea_MAIN.h"
#include "tinygps.h"
#include "printf.h"

void tarea_MAIN(void)
{
	byte hour,minute;
	//UINT br,bw;

	//Up buffer
	snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "T=%02d:%02d:%03d",minutes,seconds,milliseconds);

	//Down buffer
	gps_crack_datetime(NULL, NULL, NULL, &hour, &minute, NULL, NULL, NULL);
	snprintf_(OLED_DOWN_BUFFER, SIZE_OLED_DOWN_BUFFER, "%02d:%02d", hour, minute);
	//snprintf_(OLED_DOWN_BUFFER, SIZE_OLED_DOWN_BUFFER, "%d", OLED_DOWN_BUFFER[0]);

	//Left buffer
	snprintf_(OLED_LEFT_BUFFER, SIZE_OLED_LEFT_BUFFER, "%5f", gps_f_speed_kmph());
	snprintf_(OLED_LEFT_UNITS_BUFFER, SIZE_OLED_LEFT_UNITS_BUFFER, "km/h");

	//Right buffer
	snprintf_(OLED_RIGHT_BUFFER, SIZE_OLED_RIGHT_BUFFER, "DEBUG");
	snprintf_(OLED_RIGHT_UNITS_BUFFER, SIZE_OLED_RIGHT_UNITS_BUFFER, "PEPE");

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
