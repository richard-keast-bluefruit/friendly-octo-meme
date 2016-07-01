#pragma once

#include "stdint_ex.h"

extern "C"
{
#define HIGH 0x1
#define LOW  0x0
#define OUTPUT 0x1

	void MockPins_ResetPinStates();

	void MockPins_SetPinDirection(u8 pin, u8 direction);
	
	bool MockPins_IsPinDirectionSet(u8 pin);
	
	u8 MockPins_GetPinDirection(u8 pin);

	bool MockPins_IsPinHigh(u8 pin);

	void MockPins_SetPinVoltage(u8 pin, u8 voltage);
}