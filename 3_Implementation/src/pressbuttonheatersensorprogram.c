/**
 * @filename: pressbuttonheatersensorprogram.c
 * @author Sathish pandian
 * @brief A file where the functions for button and heater are implememted
 */

#include <avr/io.h>
#include <util/delay.h>
#include "pressbuttonheatersensorprogram.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init()
{
SET_LED_AS_OUTPUT; //set led as output port
SET_BUTTON_AS_INPUT; //clear bit 6 of DDR B
PULLUP_BUTTON; //Set bit 6 of Port B
SET_HEATER_AS_INPUT; //clear bit 7 of DDR B
PULLUP_HEATER;//Set bit 7 of DDR B

}