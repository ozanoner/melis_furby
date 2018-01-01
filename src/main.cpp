#include <Arduino.h>
#include "Eyes.hpp"

Eyes eyes;
void setup() {
  eyes.init();
}

void loop() {
  eyes.update();
}
