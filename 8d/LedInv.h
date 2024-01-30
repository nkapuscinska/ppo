#ifndef LEDINV
#define LEDINV
#include "led.h"

class LedInv : public Led{

public:
	void On(unsigned char ucLedIndex);
};

#endif
