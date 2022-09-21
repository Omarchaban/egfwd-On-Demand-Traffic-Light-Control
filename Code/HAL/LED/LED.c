#include "../../UTIL/STD_TYPES.h"
#include "../../UTIL/BIT_MATH.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/TIMER/TIMER1.h"
#include "LED.h"



u8 LED_Init(void)
{
	u8 Local_Error =OK;

	SetPinDirection(CAR_PORT,CAR_RED_PIN,OUTPUT);
	SetPinDirection(CAR_PORT,CAR_YELLOW_PIN,OUTPUT);
	SetPinDirection(CAR_PORT,CAR_GREEN_PIN,OUTPUT);

	SetPinDirection(PEDESTRIAN_PORT,PEDESTRIAN_RED_PIN,OUTPUT);
	SetPinDirection(PEDESTRIAN_PORT,PEDESTRIAN_YELLOW_PIN,OUTPUT);
	SetPinDirection(PEDESTRIAN_PORT,PEDESTRIAN_GREEN_PIN,OUTPUT);


	return Local_Error;

}

u8 LED_YellowBlink_For_NormalMode(void)
{
	u8 Local_Error =OK;


	for(u8 i=0;i<5;i++)
	{
		SetPinValue(CAR_PORT,CAR_YELLOW_PIN,HIGH);

		TIMER1_BusyWaiting(500);
		SetPinValue(CAR_PORT,CAR_YELLOW_PIN,LOW);

		TIMER1_BusyWaiting(500);
	}
	return Local_Error;

}
u8 LED_YellowBlink_For_PedestrianMode(void)
{

	u8 Local_Error =OK;

	for(u8 i=0;i<5;i++)
	{
		SetPinValue(CAR_PORT,CAR_YELLOW_PIN,HIGH);
		SetPinValue(PEDESTRIAN_PORT,PEDESTRIAN_YELLOW_PIN,HIGH);

		TIMER1_BusyWaiting(500);
		SetPinValue(CAR_PORT,CAR_YELLOW_PIN,LOW);
		SetPinValue(PEDESTRIAN_PORT,PEDESTRIAN_YELLOW_PIN,LOW);

		TIMER1_BusyWaiting(500);

	}
	return Local_Error;

}
u8 LED_on(u8 port,u8 pin)
{
	u8 Local_Error =OK;
	SetPinValue(port,pin,HIGH);
	return Local_Error;

}

u8 LED_off(u8 port,u8 pin)
{
	u8 Local_Error =OK;

	SetPinValue(port,pin,LOW);
	return Local_Error;

}
