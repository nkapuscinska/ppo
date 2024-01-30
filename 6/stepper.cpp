#include "stepper.h"
#include "led.h"

extern Led MyLed;

enum Step{LEFT,RIGHT};

Stepper::Stepper(unsigned char ucLedIndexStep){
		ucLedIndexStep =0;
		On(ucLedIndexStep);
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedIndexStep--;
	}
	else if(eStep == RIGHT){
		ucLedIndexStep++;
	}
	else{
		
	}
	ucLedIndexStep = ucLedIndexStep % 4;
	On(ucLedIndexStep);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
