#ifndef BUTTON_TEST_H
#define BUTTON_TEST_H

#include <Arduino.h>
#include "TestMode.h"

class ButtonTest : public TestMode
{
private:
  static const int NUM_BUTTONS = 5;
  int buttonPins[NUM_BUTTONS] = {4, 5, 6, 7, 8};
  int lastButtonState[NUM_BUTTONS] = {HIGH, HIGH, HIGH, HIGH, HIGH};

public:
  void setup() override;
  void loop() override;
};

#endif
