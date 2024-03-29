/*
 * variables_globales.h
 *
 *  Created on: Dec 8, 2019
 *      Author: Pedro
 */
#include "stm32f1xx_hal.h"
#include "fatfs.h"
#include "App/User_interface.h"

#ifndef VARIABLES_GLOBALES_H_
#define VARIABLES_GLOBALES_H_

extern FIL file;
extern FATFS fs;
extern User_interface UIX;

//Tamaño de buffer de UART
#define SIZE_UART_RX_BUFFER 			256

//Tamaños de buffers de pantalla
#define SIZE_OLED_UP_BUFFER				12
#define SIZE_OLED_DOWN_BUFFER			6
#define SIZE_OLED_LEFT_BUFFER			6
#define SIZE_OLED_RIGHT_BUFFER			6
#define SIZE_OLED_LEFT_UNITS_BUFFER		5
#define SIZE_OLED_RIGHT_UNITS_BUFFER	5

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
extern int milliseconds;
extern int seconds;
extern int minutes;
extern int hours;

//Variables reloj
extern int clk_hours;
extern int clk_minutes;

extern uint32_t digito_on;
extern uint32_t cnt;
extern float distancia;

#endif /* VARIABLES_GLOBALES_H_ */
