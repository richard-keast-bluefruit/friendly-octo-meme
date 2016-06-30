#include "stdafx.h"
#include "CppUnitTest.h"
#include "LED.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StuffTests
{		
	TEST_CLASS(LEDtests)
	{
	private:
		const u8 Output = OUTPUT;

	public:
		
		TEST_METHOD(LED_Pin_Set_As_Output)
		{
			// Given a pin
			MockPins_ResetPinStates();
			u8 pin = 13;

			// When the LED is initialised
			LED led = LED(pin);

			// Then the pin is set to an output pin
			Assert::IsTrue(MockPins_IsPinDirectionSet(pin));
			
			Assert::AreEqual(Output, MockPins_GetPinDirection(pin));
		}

	};
}