#include "ch32v003fun.h"

//XXX TODO Make this so it can "run from main"
void Scratchpad( uint8_t * buffer )
{
	GPIOC->CFGLR = (GPIO_Speed_50MHz | GPIO_CNF_OUT_PP)<<(4*0);
	GPIOC->BSHR = 1<<0;
}

