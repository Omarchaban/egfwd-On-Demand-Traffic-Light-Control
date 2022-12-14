

#ifndef EXTI_H_
#define EXTI_H_

#define  SREG    	*((volatile u8*)0x5f)
#define  GICR    	*((volatile u8*)0x5B)
#define  GIFR    	*((volatile u8*)0x5A)
#define  MCUCR    	*((volatile u8*)0x55)
#define  MCUCSR   	*((volatile u8*)0x54)

#define SREG_I			7

#define GICR_INT0		6
#define GICR_INT1   	7
#define GICR_INT2		5

#define MCUCR_ISC11		3
#define MCUCR_ISC10		2
#define MCUCR_ISC01		1
#define MCUCR_ISC00		0

#define MCUCSR_ISC0     6

void EXTI_Int0Init(void);

#endif /* EXTI_H_ */
