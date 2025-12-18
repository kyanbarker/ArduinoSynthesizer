#ifndef TEST_MODE_H
#define TEST_MODE_H

#include <Arduino.h>

// Interface for test modes
class TestMode {
public:
  virtual void testSetup() = 0;   // Called once at start
  virtual void testLoop() = 0;    // Called repeatedly
  virtual ~TestMode() {}           // Virtual destructor
};

#endif
