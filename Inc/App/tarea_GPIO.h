/*
 * tarea_GPIO.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Pedro
 */

#ifndef APP_TAREA_GPIO_H_
#define APP_TAREA_GPIO_H_

void tarea_GPIO(void);
uint32_t Debounce(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin,uint32_t index);


#endif /* APP_TAREA_GPIO_H_ */
