#ifndef LED_H
#define LED_H
#include <LPC21xx.H>

#define LED0_bm (1<<16)
#define LED1_bm (1<<17)
#define LED2_bm (1<<18)
#define LED3_bm (1<<19)


class Led{
		
	public:
		virtual void On(unsigned char ucLedIndex);
	  Led(void);
};

#endif
