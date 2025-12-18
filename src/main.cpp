#include <Arduino.h>
#include "test_scripts/SpeakerTest.h"
#include "test_scripts/ButtonTest.h"
#include "test_scripts/PotentiometerTest.h"

// ============================================
// SELECT WHICH TEST TO RUN BY UNCOMMENTING ONE
// ============================================

// SpeakerTest activeTest;
// ButtonTest activeTest;
PotentiometerTest activeTest;

// ============================================

void setup()
{
  Serial.begin(9600);
  delay(1000); // Give serial time to initialize

  activeTest.setup();
}

void loop()
{
  activeTest.loop();
}