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
#include "App/User_interface.h"

void tarea_MAIN(void)
{
	user_interface_runCycle(&UIX);

	switch(user_interfaceIface_get_oLED_ST(&UIX))
	{
	case 0:
		snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "  *Bicius  ");
		break;
	case 1:
		if(hours)
		{
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:%02d.%02d",hours,minutes,seconds,milliseconds/10);
		}
		else
		{
			if(minutes)
			{
				snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "T= %02d:%02d.%02d",minutes,seconds,milliseconds/10);
			}else{
				snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "T=    %2d.%02d",seconds,milliseconds/10);
			}
		}
		break;
	case 2:
		if(digito_on){
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:%02d.%02d",hours,minutes,seconds,milliseconds/10);
		}
		else
		{
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:  .%02d",hours,minutes,milliseconds/10);
		}
		break;
	case 3:
		if(digito_on){
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:%02d.%02d",hours,minutes,seconds,milliseconds/10);
		}
		else
		{
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:  :%02d.%02d",hours,seconds,milliseconds/10);
		}
			break;
	case 4:
		if(digito_on){
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:%02d.%02d",hours,minutes,seconds,milliseconds/10);
		}
		else
		{
			snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "  :%02d:%02d.%02d",minutes,seconds,milliseconds/10);
		}
			break;
	default:
		snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "Err YAKINDU");
	}

//	byte hour,minute;
//
//	//Up buffer
//	snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "T=%02d:%02d:%03d",minutes,seconds,milliseconds);
//
//	//Down buffer
//	gps_crack_datetime(NULL, NULL, NULL, &hour, &minute, NULL, NULL, NULL);
//	snprintf_(OLED_DOWN_BUFFER, SIZE_OLED_DOWN_BUFFER, "%02d:%02d", hour, minute);
//	//snprintf_(OLED_DOWN_BUFFER, SIZE_OLED_DOWN_BUFFER, "%d", OLED_DOWN_BUFFER[0]);
//
//	//Left buffer
//	snprintf_(OLED_LEFT_BUFFER, SIZE_OLED_LEFT_BUFFER, "%5f", gps_f_speed_kmph());
//	snprintf_(OLED_LEFT_UNITS_BUFFER, SIZE_OLED_LEFT_UNITS_BUFFER, "km/h");
//
//	//Right buffer
//	snprintf_(OLED_RIGHT_BUFFER, SIZE_OLED_RIGHT_BUFFER, "DEBUG");
//	snprintf_(OLED_RIGHT_UNITS_BUFFER, SIZE_OLED_RIGHT_UNITS_BUFFER, "PEPE");
}

void imprimir_timer(void)
{

}

void titilar_digito(void)
{
	snprintf_(OLED_UP_BUFFER, SIZE_OLED_UP_BUFFER, "%02d:%02d:%02d.%02d",minutes,seconds,milliseconds/10);
}
