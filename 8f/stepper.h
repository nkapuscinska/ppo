#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "Keyboard.h"

class Stepper{
	
	
	
	private:
	unsigned char ucInversion;
	Led * pMyLed;	
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	public:
	void StepLeft(void);
	void StepRight(void);
	void SetLed(Led * pLed);
};
#endif

