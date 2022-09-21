#include "../../UTIL/STD_TYPES.h"
#include "../../UTIL/BIT_MATH.h"
#include "../../MCAL/DIO/DIO.h"
#include "Push_Button.h"



u8 BUTTON_Init()
{
	u8 Local_Error=OK;
	SetPinDirection(BUTTON_PORT,BUTTON_PIN,INPUT);
	return Local_Error;
}


