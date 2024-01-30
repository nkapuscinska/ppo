#include "stepper.h"
#include "led.h"
#include "keyboard.h"



void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}



Stepper MyStep;
Keyboard MyKeyboard;

unsigned char ucInversion;

int main(void)
{
	if(MyKeyboard.eRead()==BUTTON_4){
		ucInversion = 1;
	}

	else{
		ucInversion = 0;
	}
	
	while(1){
		Delay(100);
		if(MyKeyboard.eRead() == BUTTON_1){
			MyStep.StepLeft();
		}
		else if (MyKeyboard.eRead()== BUTTON_2){
			MyStep.StepRight();
		}
		else{}
	}
}
