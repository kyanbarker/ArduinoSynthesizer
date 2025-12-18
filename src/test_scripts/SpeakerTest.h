#ifndef SPEAKER_TEST_H
#define SPEAKER_TEST_H

#include <Arduino.h>
#include "TestMode.h"

class SpeakerTest : public TestMode
{
private:
  static const int SPEAKER1 = 2;
  static const int SPEAKER2 = 3;

  // Note frequencies (Hz)
  static constexpr float NOTE_C3 = 130.81;
  static constexpr float NOTE_A4 = 440.00;
  static constexpr float NOTE_G5 = 783.99;

  bool testComplete = false;

public:
  void testSetup() override;
  void testLoop() override;
};

#endif
