#include "stepper.h"

extern Led MyLed;
extern LedInv MyLedInv;
extern Keyboard MyKeyboard;

enum Step{LEFT,RIGHT};

void Stepper::SetMode(void){
	if(MyKeyboard.eRead() == BUTTON_4){
		ucInversion = 1;
	}
	else{
		ucInversion =0;

	}

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
	if(ucInversion == 0 ){
	MyLed.On(ucLedIndexStep);
	}
	else{
	MyLedInv.On(ucLedIndexStep);
	
}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

