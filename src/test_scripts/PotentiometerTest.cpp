#include "PotentiometerTest.h"

void PotentiometerTest::testSetup()
{
  pinMode(POT1, INPUT);
  pinMode(POT2, INPUT);

  Serial.println("Potentiometer test starting...");
  Serial.println("Turn the potentiometers and watch the values change");
}

void PotentiometerTest::testLoop()
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
