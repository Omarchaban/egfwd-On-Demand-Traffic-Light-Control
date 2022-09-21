#include "UTIL/STD_TYPES.h"
#include "HAL/LED/LED.h"
#include "MCAL/DIO/DIO.h"
#include "MCAL/TIMER/TIMER1.h"

#include "MCAL/EXTI/EXTI.h"
#include "HAL/PUSH_BUTTON/Push_Button.h"
#include "APP/App.h"





void main()
{
	SET_BIT(SREG,SREG_I);
	EXTI_Int0Init();
	TIMER1_init();
	BUTTON_Init();
	LED_Init();
	/*Clear the CTC flag manually before beginning */
	SET_BIT(TIFR,TIFR_OCF1A);

	while(1)
	{
		APP_Start();
	}

}
