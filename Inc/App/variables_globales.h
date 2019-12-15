/*
 * variables_globales.h
 *
 *  Created on: Dec 8, 2019
 *      Author: Pedro
 */
#include "stm32f1xx_hal.h"
#include "fatfs.h"

#ifndef VARIABLES_GLOBALES_H_
#define VARIABLES_GLOBALES_H_

FIL fil;

//Tamaño de buffer de UART
#define SIZE_UART_RX_BUFFER 			200

//Tamaños de buffers de pantalla
#define SIZE_OLED_UP_BUFFER				11
#define SIZE_OLED_DOWN_BUFFER			5
#define SIZE_OLED_LEFT_BUFFER			5
#define SIZE_OLED_RIGHT_BUFFER			5
#define SIZE_OLED_LEFT_UNITS_BUFFER		4
#define SIZE_OLED_RIGHT_UNITS_BUFFER	4

//Buffer de uart y instancia de uart
extern uint8_t UART_RX_BUFFER[SIZE_UART_RX_BUFFER];
extern UART_HandleTypeDef huart1;

//Buffers de pantalla
extern char OLED_UP_BUFFER[SIZE_OLED_UP_BUFFER];
extern char OLED_DOWN_BUFFER[SIZE_OLED_DOWN_BUFFER];
extern char OLED_LEFT_BUFFER[SIZE_OLED_LEFT_BUFFER];
extern char OLED_RIGHT_BUFFER[SIZE_OLED_RIGHT_BUFFER];
extern char OLED_LEFT_UNITS_BUFFER[SIZE_OLED_LEFT_UNITS_BUFFER];
extern char OLED_RIGHT_UNITS_BUFFER[SIZE_OLED_RIGHT_UNITS_BUFFER];

//Variables de Timers
extern uint32_t milliseconds;
extern uint32_t seconds;
extern uint32_t minutes;
extern uint32_t hours;

extern uint32_t cnt;

#endif /* VARIABLES_GLOBALES_H_ */
