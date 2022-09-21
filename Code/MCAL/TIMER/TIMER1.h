
#ifndef TIMER1_H_
#define TIMER1_H_


#define TCCR1A 				*((volatile u8 *)0x4F)
#define TCCR1A_COM1A1 		7   // for CTC mode
#define TCCR1A_COM1A0		6	//for CTC mode
#define TCCR1A_WGM11		1	//To Select the mode
#define TCCR1A_WGM10		0	//To select the mode
#define TCCR1A_FOC1A		3
#define TCCR1A_FOC1B		2



#define TCCR1B 				*((volatile u8 *)0x4e)
#define TCCR1B_WGM13		4   //To Select the mode
#define TCCR1B_WGM12		3	//To select the mode
#define TCCR1B_CS12			2	//for Prescaling
#define TCCR1B_CS11			1   //for Prescaling
#define TCCR1B_CS10			0	//for Prescaling


#define TIFR 				*((volatile u8 *)0x58)
#define TIFR_OCF1A			4

#define OCR1A				*((volatile u16 *)0x4a)

/*Interrupt enable register*/
#define TIMSK				*((volatile u8 *)0x59)
#define TIMSK_OCIE1A		4


#define TCNT1				*((volatile u16 *)0x4c)


void TIMER1_init();
u8 TIMER1_BusyWaiting(u16 Time);

#endif /* TIMER1_H_ */
