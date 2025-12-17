// SCRIPT 3: POTENTIOMETER TEST
// Read both potentiometers and print (value1, value2)
// Paste this into main.cpp to test
#include <Arduino.h>

#define POT1 A0
#define POT2 A1

void setup()
{
  Serial.begin(9600);

  pinMode(POT1, INPUT);
  pinMode(POT2, INPUT);

  Serial.println("Potentiometer test starting...");
  Serial.println("Turn the potentiometers and watch the values change");
}

void loop()
{
  // Read both potentiometers (returns 0-1023)
  int pot1Value = analogRead(POT1);
  int pot2Value = analogRead(POT2);

  // Print as ordered pair
  Serial.print("(");
  Serial.print(pot1Value);
  Serial.print(", ");
  Serial.print(pot2Value);
  Serial.println(")");

  delay(500); // Update every 500ms so it's readable
}
