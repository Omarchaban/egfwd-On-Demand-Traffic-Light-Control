
#include "../../UTIL/STD_TYPES.h"
#include "../../UTIL/BIT_MATH.h"

#include "EXTI.h"
void EXTI_Int0Init(void)
{
	/*initialize INT0 to operate at falling edge*/

   SET_BIT(MCUCR,MCUCR_ISC01);

   CLR_BIT(MCUCR,MCUCR_ISC00);

   /*Enabling peripheral interrupt enable*/
   SET_BIT(GICR,GICR_INT0);

}
