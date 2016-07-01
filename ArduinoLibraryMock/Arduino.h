#pragma once

#include "stdint_ex.h"
#include "MockPins.h"

extern "C"
{
	void pinMode(u8 pin, u8 direction);
	void digitalWrite(u8 pin, u8 voltage);

}