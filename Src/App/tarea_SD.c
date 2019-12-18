/*
 * tarea_SD.c
 *
 *  Created on: Dec 18, 2019
 *      Author: Pedro
 */
#include "App/tarea_SD.h"
#include "fatfs.h"
#include "App/tarea_OLED.h"
#include "App/variables_globales.h"
#include "printf.h"

void tarea_SD(void)
{
	f_sync(&file);
}

void fcheck(FRESULT res)
{
	if(res)
	{
		snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "ErrSD: %4d",res);
		tarea_OLED();
		while(1);
	}
}
