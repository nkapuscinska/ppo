#ifndef STEPPER_H
#define STEPPER_H

class Stepper {
	private:
	unsigned char ucLedIndexStep;
	void Step(enum Step eStep);
	
	void StepRight(void);
	public:
	void StepLeft(void);
};
#endif

