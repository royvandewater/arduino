#include "LedArray.h"
#define ORANGE_LED 9  // the pin that the orange LED is attached to
#define PINK_LED   10 // the pin that the pink LED is attached to

LedArray led_array;

// the setup routine runs once when you press reset:
void setup()  {
  // declare led pins to be an output:
  pinMode(ORANGE_LED, OUTPUT);
  pinMode(PINK_LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  analogWrite(ORANGE_LED, led_array.getLed1Power());
  analogWrite(PINK_LED, led_array.getLed2Power());

  led_array.increment();

  delay(30);
}
