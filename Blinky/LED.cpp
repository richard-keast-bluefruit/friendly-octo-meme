#include "LED.h"

LED::LED(u8 pin)
{
	m_ledPin = pin;
	pinMode(m_ledPin, OUTPUT);
}

void LED::TurnOn()
{
	digitalWrite(m_ledPin, HIGH);
}
