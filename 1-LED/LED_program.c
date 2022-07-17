/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HAL                       ************/
/************ Version : 1.00                      ************/
/************ SWC     : LED                       ************/
/*************************************************************/
/*************************************************************/


#include "STD_Types.h"

#include "DIO_Interface.h"
#include "LED_Interface.h"


void LED_State(LED Led, u8 State)
{
	DIO_u8SetPinValue(Led.PORT, Led.PIN, (State) ^ (Led.Connection_Type));
}