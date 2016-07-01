#include "Arduino.h"


extern "C" void pinMode(u8 pin, u8 direction)
{
	MockPins_SetPinDirection(pin, direction);
}