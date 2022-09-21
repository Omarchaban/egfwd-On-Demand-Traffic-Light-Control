
#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_

#include "../../UTIL/STD_TYPES.h"
#include "../../UTIL/BIT_MATH.h"


#define CAR_RED_ON					0
#define CAR_YELLOW_ON				1
#define CAR_GREEN_ON				2




#define CAR_PORT				    DIO_PORTA

#define PEDESTRIAN_PORT				DIO_PORTB


#define CAR_RED_PIN					PIN0
#define CAR_YELLOW_PIN				PIN1
#define CAR_GREEN_PIN				PIN2

#define PEDESTRIAN_RED_PIN			PIN0
#define PEDESTRIAN_YELLOW_PIN		PIN1
#define PEDESTRIAN_GREEN_PIN		PIN2


u8 LED_Init(void);
u8 LED_on(u8 port,u8 pin);
u8 LED_off(u8 port,u8 pin);

u8 LED_YellowBlink_For_NormalMode(void);
u8 LED_YellowBlink_For_PedestrianMode(void);




#endif /* HAL_LED_LED_H_ */
