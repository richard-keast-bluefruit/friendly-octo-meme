#include "MockPins.h"

extern "C" void MockPins_ResetPinStates()
{
	for (size_t i = 0; i < 100; i++)
	{
		PinDirections[i] = 0;
		IsPinDirectionSet[i] = false;
	}
}
