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

Led MyLed;
LedInv MyLedInv;

int main(void)
{
	if(MyKeyboard.eRead() == BUTTON_4){
		MyStep.SetLed(&MyLedInv);
	}
	else{
		MyStep.SetLed(&MyLed);
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
