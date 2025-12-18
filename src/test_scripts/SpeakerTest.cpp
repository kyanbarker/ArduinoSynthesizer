#include "SpeakerTest.h"

void SpeakerTest::testSetup() {
  pinMode(SPEAKER1, OUTPUT);
  pinMode(SPEAKER2, OUTPUT);
  
  Serial.println("Speaker test starting...");
  delay(1000);
  
  // Test Speaker 1: Play A4 for 2 seconds
  Serial.println("Testing SPEAKER 1 (pin 8) - Playing A4 (440 Hz)");
  tone(SPEAKER1, NOTE_A4);
  delay(2000);
  noTone(SPEAKER1);
  
  delay(500);
  
  // Test Speaker 2: Play G5 for 2 seconds
  Serial.println("Testing SPEAKER 2 (pin 9) - Playing G5 (784 Hz)");
  tone(SPEAKER2, NOTE_G5);
  delay(2000);
  noTone(SPEAKER2);
  
  delay(500);
  
  // Play both together
  Serial.println("Playing both speakers together...");
  tone(SPEAKER1, NOTE_C3);
  tone(SPEAKER2, NOTE_A4);
  delay(2000);
  noTone(SPEAKER1);
  noTone(SPEAKER2);
  
  Serial.println("Test complete! If you heard all 3 tones, both speakers work.");
  testComplete = true;
}

void SpeakerTest::testLoop() {
  // Do nothing after test completes
  if (testComplete) {
    delay(1000);
  }
}
