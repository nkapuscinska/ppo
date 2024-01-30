#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper : public Led {
	private:
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	void StepRight(void);
	public:
	void StepLeft(void);
};
#endif

