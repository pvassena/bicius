/*
 * tarea_GPIO.c
 *
 *  Created on: Dec 18, 2019
 *      Author: Pedro
 */
#include "main.h"
#include "App/tarea_GPIO.h"
#include "App/User_interface.h"
#include "App/variables_globales.h"

void tarea_GPIO(void)
{
	if(Debounce(GPIOA, GPIO0_Pin,0))
	{
		user_interfaceIface_raise_uP(&UIX);
	}
	if(Debounce(GPIOA, GPIO1_Pin,1))
	{
		user_interfaceIface_raise_dOWN(&UIX);
	}
	if(Debounce(GPIOB, GPIO2_Pin,2))
	{
		user_interfaceIface_raise_sET(&UIX);
	}
	if(Debounce(GPIOB, GPIO3_Pin,3))
	{
		user_interfaceIface_raise_rESET(&UIX);
	}
}


uint32_t Debounce(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin,uint32_t index)
{
	static GPIO_PinState DebouncedKeyPress[4]={0,0,0,0};
	static uint32_t count[4]={3,3,3,3};
	GPIO_PinState RawState;

	RawState = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
    if (RawState == DebouncedKeyPress[index]) {
        // Set the timer which will allow a change from the current state.
        if (DebouncedKeyPress[index]) count[index] = 6;
        else                 count[index] = 3;
    } else {

        // Key has changed - wait for new state to become stable.
        if (--count[index] == 0) {

            // Timer expired - accept the change.
            DebouncedKeyPress[index] = RawState;
            // And reset the timer.
                if (DebouncedKeyPress[index]) count[index] = 6;
                else                 count[index] = 3;
            //Show Edge
            if(!DebouncedKeyPress[index])
            {
            	return 1;
            }
        }
    }
    return 0;
}
