#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper{
	
	Led MyLed;
	
	private:
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	public:
	void StepLeft(void);
	void StepRight(void);
};
#endif

