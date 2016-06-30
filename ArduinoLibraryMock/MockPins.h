#pragma once

#include "stdint_ex.h"

extern "C"
{

#define OUTPUT 0x1

	u8 PinDirections[100];
	bool IsPinDirectionSet[100];

	void MockPins_ResetPinStates();

	void MockPins_SetPinDirection(u8 pin, u8 direction)
	{
		PinDirections[pin] = direction;
		IsPinDirectionSet[pin] = true;
	}

	bool MockPins_IsPinDirectionSet(u8 pin)
	{
		return IsPinDirectionSet[pin];
	}

	u8 MockPins_GetPinDirection(u8 pin)
	{
		return PinDirections[pin];
	}
}