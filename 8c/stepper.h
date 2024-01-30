#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "LedInv.h"

class Stepper{
	
	
	
	private:
	Led MyLed;	
	LedInv MyLedInv;
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	public:
	void StepLeft(void);
	void StepRight(void);
};
#endif

