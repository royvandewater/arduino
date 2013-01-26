#include "BinaryDice.h"
#include "Button.h"

#define BUTTON     7  // the pin that's connected to the button
#define PINK_LED   9  // the pin that the pink LED is attached to
#define ORANGE_LED 10 // the pin that the orange LED is attached to
#define RED_LED    11 // the pin that the red LED is attached to


LedArray led_array(ORANGE_LED, PINK_LED, RED_LED);
Button button(BUTTON);
bool previouslyPressed = false;

// the setup routine runs once when you press reset:
void setup()  {
  led_array.init();
}

void loop() {
  if(!previouslyPressed && button.pressed()) {
    led_array.roll();
  }
  previouslyPressed = button.pressed();
}
