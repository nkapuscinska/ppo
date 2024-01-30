#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetLed(Led * pLed){
	pMyLed = pLed;
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
	pMyLed->On(ucLedIndexStep);
}


void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

