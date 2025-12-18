#include "ButtonTest.h"

void ButtonTest::testSetup()
{
  // Setup all buttons with internal pull-up
  for (int i = 0; i < NUM_BUTTONS; i++)
  {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  Serial.println("Button test starting...");
  Serial.println("Press buttons 0-4 and watch for console output");
}

void ButtonTest::testLoop()
{
  // Check each button
  for (int i = 0; i < NUM_BUTTONS; i++)
  {
    int currentState = digitalRead(buttonPins[i]);

    // Detect button press (transition from HIGH to LOW)
    if (currentState == LOW && lastButtonState[i] == HIGH)
    {
      Serial.print("Button ");
      Serial.print(i);
      Serial.println(" pressed!");
      delay(20); // Debounce
    }

    lastButtonState[i] = currentState;
  }

  delay(10); // Small delay to prevent overwhelming serial
}
