#include "../UTIL/STD_TYPES.h"
#include "../HAL/LED/LED.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/TIMER/TIMER1.h"

#include "../MCAL/EXTI/EXTI.h"
#include "../HAL/PUSH_BUTTON/Push_Button.h"
#include "App.h"

u8 Car_State;

void APP_Start(void)
{
		LED_on(CAR_PORT,CAR_RED_PIN);
		Car_State = CAR_RED_ON;
		TIMER1_BusyWaiting(5000);

		Car_State =CAR_YELLOW_ON;
		/*Blink car led*/
		LED_YellowBlink_For_NormalMode();

		LED_off(CAR_PORT,CAR_RED_PIN);

		/*Turn cars yellow led off*/
		LED_off(CAR_PORT,CAR_YELLOW_PIN);

		/*Turn car green led on*/
		LED_on(CAR_PORT,CAR_GREEN_PIN);
		Car_State =CAR_GREEN_ON;
		TIMER1_BusyWaiting(5000);

		LED_YellowBlink_For_NormalMode();

		/*Turn cars greed len off*/
		LED_off(CAR_PORT,CAR_GREEN_PIN);

		/*Turn cars yellow led off*/
		LED_off(CAR_PORT,CAR_YELLOW_PIN);


}
//void __vector_1(void) __attribute__((signal));
//void __vector_1(void)
//{
//
//		/*Close all on leds*/
//		LED_off(CAR_PORT,CAR_RED_PIN);
//		LED_off(CAR_PORT,CAR_YELLOW_PIN);
//		LED_off(CAR_PORT,CAR_GREEN_PIN);
//
//		/************************************** Case 1***********************************************/
//		if(Car_State == CAR_RED_ON)
//		{
//
//			LED_on(PEDESTRIAN_PORT,PEDESTRIAN_GREEN_PIN);
//			LED_on(CAR_PORT,CAR_RED_PIN);
//			TIMER1_BusyWaiting(5000);
//		}
//		/************************************** Case 2/3***********************************************/
//		else if((Car_State == CAR_YELLOW_ON) || (Car_State == CAR_GREEN_ON))
//		{
//			SET_BIT(TIFR,TIFR_OCF1A);
//
//			LED_on(PEDESTRIAN_PORT,PEDESTRIAN_RED_PIN);
//			LED_YellowBlink_For_PedestrianMode();
//			LED_off(PEDESTRIAN_PORT,PEDESTRIAN_RED_PIN);
//			LED_off(PEDESTRIAN_PORT,PEDESTRIAN_YELLOW_PIN);
//			LED_off(CAR_PORT,CAR_YELLOW_PIN);
//			LED_on(CAR_PORT,CAR_RED_PIN);
//			LED_on(PEDESTRIAN_PORT,PEDESTRIAN_GREEN_PIN);
//			TIMER1_BusyWaiting(5000);
//
//		}
//		LED_off(CAR_PORT,CAR_RED_PIN);
//		LED_YellowBlink_For_PedestrianMode();
//		LED_off(PEDESTRIAN_PORT,PEDESTRIAN_YELLOW_PIN);
//		LED_off(CAR_PORT,CAR_YELLOW_PIN);
//		LED_off(PEDESTRIAN_PORT,PEDESTRIAN_GREEN_PIN);
//
//
//	__asm volatile("jmp 0x00");
//}
