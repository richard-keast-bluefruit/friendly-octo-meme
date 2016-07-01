#include "LED.h"

LED::LED()
{

}

LED::LED(u8 pin)
{
	m_ledPin = pin;
	pinMode(m_ledPin, OUTPUT);
}

void LED::TurnOn()
{
	digitalWrite(m_ledPin, HIGH);
}

void LED::TurnOff()
{
	digitalWrite(m_ledPin, LOW);
}
