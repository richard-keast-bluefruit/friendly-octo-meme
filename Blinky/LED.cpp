#include "LED.h"

LED::LED(u8 pin)
{
	pinMode(pin, OUTPUT);
}
