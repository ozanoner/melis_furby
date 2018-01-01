
#ifndef Eyes_h_
#define Eyes_h_

#include <Arduino.h>
#include "Pins.hpp"

class Eyes {
public:
  void init();
  void update();
  void setColor(uint8_t red, uint8_t green, uint8_t blue);
};

void Eyes::init() {
  pinMode(Eyes_RED_PIN, OUTPUT);
  pinMode(Eyes_GREEN_PIN, OUTPUT);
  pinMode(Eyes_BLUE_PIN, OUTPUT);
}

void Eyes::update() {

}

void setColor(uint8_t red, uint8_t green, uint8_t blue) {
  analogWrite(Eyes_RED_PIN, red);
  analogWrite(Eyes_GREEN_PIN, green);
  analogWrite(Eyes_BLUE_PIN, blue);
}

#endif
