#ifndef POTENTIOMETER_TEST_H
#define POTENTIOMETER_TEST_H

#include <Arduino.h>
#include "TestMode.h"

class PotentiometerTest : public TestMode
{
private:
  static const int POT1 = A0;
  static const int POT2 = A1;

public:
  void setup() override;
  void loop() override;
};

#endif
