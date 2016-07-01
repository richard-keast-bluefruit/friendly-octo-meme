#include "MockPins.h"

extern "C"
{
	u8 PinDirections[100];
	bool IsPinDirectionSet[100];

	void MockPins_ResetPinStates()
	{
		for (size_t i = 0; i < 100; i++)
		{
			PinDirections[i] = 0;
			IsPinDirectionSet[i] = false;
		}
	}

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
