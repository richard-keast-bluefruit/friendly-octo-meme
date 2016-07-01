//#include "LED.h"

void setup()
{

  /* add setup code here */
	pinMode(13, OUTPUT);
}

void loop()
{

  /* add main program code here */
	digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(1000);              // wait for a second
	digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	delay(1000);              // wait for a second
}
