#include "MockPins.h"

extern "C"
{
	u8 PinDirections[100];
	bool IsPinDirectionSet[100];
	u8 PinVoltages[100];

	void MockPins_ResetPinStates()
	{
		for (size_t i = 0; i < 100; i++)
		{
			PinDirections[i] = 0;
			IsPinDirectionSet[i] = false;
			PinVoltages[i] = 0;
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

	bool MockPins_IsPinHigh(u8 pin)
	{
		return PinVoltages[pin];
	}

	void MockPins_SetPinVoltage(u8 pin, u8 voltage)
	{
		PinVoltages[pin] = voltage;
	}

}