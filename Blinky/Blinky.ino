#include "LED.h"

LED m_led;
void setup() 
{
  m_led = LED(13);
}

void loop() 
{
  m_led.TurnOn();   // turn the LED on (HIGH is the voltage level)
  delay(5000);              // wait for a second
  m_led.TurnOff();    // turn the LED off by making the voltage LOW
  delay(5000);              // wait for a second
}
