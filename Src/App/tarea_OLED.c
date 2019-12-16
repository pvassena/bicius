/*
 * tarea_OLED.c
 *
 *  Created on: Dec 8, 2019
 *      Author: Pedro
 */
#include "App/tarea_OLED.h"
#include "App/variables_globales.h"
#include "ssd1306.h"

//DEFINES para los bordes
#define X0	0
#define X1	34
#define X2	63
#define X3	92
#define X4	126
#define Y0	0
#define Y1	22
#define Y2	44
#define Y3	62
#define L0	6

void tarea_OLED(void)
{
	uint32_t i;

	ssd1306_SetCursor(36,46);
	for(i=0;i<SIZE_OLED_DOWN_BUFFER-1;i++) ssd1306_WriteChar(OLED_DOWN_BUFFER[i], Font_11x18, White);

	ssd1306_SetCursor(3, 4);
	for(i=0;i<SIZE_OLED_UP_BUFFER-1;i++) ssd1306_WriteChar(OLED_UP_BUFFER[i], Font_11x18, White);

	ssd1306_SetCursor(3, 25);
	for(i=0;i<SIZE_OLED_LEFT_BUFFER-1;i++) ssd1306_WriteChar(OLED_LEFT_BUFFER[i], Font_11x18, White);
	ssd1306_SetCursor(3, 48);
	for(i=0;i<SIZE_OLED_LEFT_UNITS_BUFFER-1;i++) ssd1306_WriteChar(OLED_LEFT_UNITS_BUFFER[i], Font_7x10, White);

	ssd1306_SetCursor(69, 25);
	for(i=0;i<SIZE_OLED_RIGHT_BUFFER-1;i++) ssd1306_WriteChar(OLED_RIGHT_BUFFER[i], Font_11x18, White);
	ssd1306_SetCursor(96,48);
	for(i=0;i<SIZE_OLED_RIGHT_UNITS_BUFFER-1;i++) ssd1306_WriteChar(OLED_RIGHT_UNITS_BUFFER[i], Font_7x10, White);

	ssd1306_UpdateScreen();
}

void dibujar_bordes(void)
{
	uint32_t x,y;

	//Lineas Horizontales
	for(x=X0,y=Y0;x<=X4;x++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X1,y=Y2;x<=X3;x++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X0,y=Y3;x<=X1;x++)
			ssd1306_DrawPixel(x,y, White);
	for(x=X3,y=Y3;x<=X4;x++)
		ssd1306_DrawPixel(x,y, White);

	//Lineas verticales
	for(x=X0,y=Y0;y<=Y3;y++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X1,y=Y2;y<=Y3;y++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X3,y=Y2;y<=Y3;y++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X4,y=Y0;y<=Y3;y++)
		ssd1306_DrawPixel(x,y, White);

	//Lineas Cortitas
	for(x=X0,y=Y1;x<=X0+L0;x++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X4-L0,y=Y1;x<=X4;x++)
		ssd1306_DrawPixel(x,y, White);
	for(x=X2,y=Y2-L0;y<=Y2;y++)
		ssd1306_DrawPixel(x,y, White);
}

void OLED_Init(void){ ssd1306_Init();}







