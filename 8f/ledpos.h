#ifndef H_LEDINV
#define H_LEDINV
#include "led.h"


class LedPos : public Led{

public:
virtual	void On(unsigned char ucLedIndex);
};

#endif
