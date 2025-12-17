// SCRIPT 2: BUTTON TEST
// Each button prints its index when pressed
// Paste this into main.cpp to test

#include <Arduino.h>

#define NUM_BUTTONS 5
#define BUTTON_PINS {2, 3, 4, 5, 6}

int buttonPins[NUM_BUTTONS] = BUTTON_PINS;
int lastButtonState[NUM_BUTTONS] = {HIGH, HIGH, HIGH, HIGH, HIGH};

void setup()
{
  Serial.begin(9600);

  // Setup all buttons with internal pull-up
  for (int i = 0; i < NUM_BUTTONS; i++)
  {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  Serial.println("Button test starting...");
  Serial.println("Press buttons 0-4 and watch for console output");
}

void loop()
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
