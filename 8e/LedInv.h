#ifndef LEDINV
#define LEDINV
#include "led.h"

class LedInv : public Led{

public:
virtual	void On(unsigned char ucLedIndex);
};

#endif
