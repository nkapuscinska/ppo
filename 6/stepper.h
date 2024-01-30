#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper : public Led {
	private:
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	public:
	Stepper(unsigned char ucLedIndexStep);
	void StepLeft(void);
	void StepRight(void);
};
#endif

