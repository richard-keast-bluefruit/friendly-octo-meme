#pragma once

#include "Arduino.h"

class LED
{
private:
	u8 m_ledPin;

public:
	LED(u8 pin);
	void TurnOn();
};