#include "BinaryDice.h"
#define PINK_LED   9  // the pin that the pink LED is attached to
#define ORANGE_LED 10 // the pin that the orange LED is attached to
#define RED_LED    11 // the pin that the red LED is attached to

LedArray led_array(ORANGE_LED, PINK_LED, RED_LED);

// the setup routine runs once when you press reset:
void setup()  {
  led_array.init();
}

void loop() {
  led_array.roll();
}
