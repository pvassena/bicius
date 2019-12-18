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
	if(HAL_GPIO_ReadPin(GPIOA, GPIO0_Pin))
	{
		user_interfaceIface_raise_uP(&UIX);
	}
	if(HAL_GPIO_ReadPin(GPIOA, GPIO1_Pin))
	{
		user_interfaceIface_raise_dOWN(&UIX);
	}
	if(HAL_GPIO_ReadPin(GPIO2_GPIO_Port, GPIO2_Pin))
	{
		user_interfaceIface_raise_sET(&UIX);
	}
	if(HAL_GPIO_ReadPin(GPIO3_GPIO_Port, GPIO3_Pin))
	{
		user_interfaceIface_raise_rESET(&UIX);
	}
}

//#define CHECK_MSEC  5   // Read hardware every 5 msec
//#define PRESS_MSEC  10  // Stable time before registering pressed
//#define RELEASE_MSEC    100 // Stable time before registering released
//// This function reads the key state from the hardware.
//extern bool_t RawKeyPressed();
//
//// This holds the debounced state of the key.
//bool_t DebouncedKeyPress = false;
//
//// Service routine called every CHECK_MSEC to
//// debounce both edges
//void DebounceSwitch(void)
//{
//    static uint8_t Count = RELEASE_MSEC / CHECK_MSEC;
//    bool_t RawState;
//    *Key_changed = false;
//    *Key_pressed = DebouncedKeyPress;
//    RawState = RawKeyPressed();
//    if (RawState == DebouncedKeyPress) {
//        // Set the timer which will allow a change from the current state.
//        Count=3;
//    } else {
//        // Key has changed - wait for new state to become stable.
//        if (--Count == 0) {
//            // Timer expired - accept the change.
//            DebouncedKeyPress = RawState;
//            *Key_changed=true;
//            *Key_pressed=DebouncedKeyPress;
//            // And reset the timer.
//            Count=3;
//        }
//    }
//}
