
#include "../../UTIL/STD_TYPES.h"
#include "../../UTIL/BIT_MATH.h"
#include "TIMER1.h"


void TIMER1_init()
{
	/*Setting Prescaler to 1024 */
	SET_BIT(TCCR1B,TCCR1B_CS12);
	CLR_BIT(TCCR1B,TCCR1B_CS11);
	SET_BIT(TCCR1B,TCCR1B_CS10);

	/*Choosing CTC mode*/
	SET_BIT(TCCR1B,TCCR1B_WGM12);

	/*Enabling CTC interrupt*/
	SET_BIT(TIMSK,TIMSK_OCIE1A);

}
u8 TIMER1_BusyWaiting(u16 Time)
{
	u8 Local_Error =OK;
	/*Set the value of delay*/
	OCR1A =Time;
	/*Wait till the flag is risen */
	while(GET_BIT(TIFR,TIFR_OCF1A) == 0);
	/*Clear the interrupt flag manually*/
	SET_BIT(TIFR,TIFR_OCF1A);
	return Local_Error;

}

