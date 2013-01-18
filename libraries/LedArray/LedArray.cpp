#include <Arduino.h>
#include "LedArray.h"

#define MAX_BRIGHTNESS 200 // Must be a multiple of FADE_AMOUNT
#define MIN_BRIGHTNESS 0   // Must be a multiple of FADE_AMOUNT
#define FADE_AMOUNT 5

LedArray::LedArray() {
  brightness     = 0;
  fade_direction = 1;
}

void LedArray::increment() {
  brightness = brightness + (FADE_AMOUNT * fade_direction);

  if (brightness == MIN_BRIGHTNESS || brightness == MAX_BRIGHTNESS) {
    fade_direction = -fade_direction;
  }
}

int LedArray::getLed1Power() {
  return brightness;
}

int LedArray::getLed2Power() {
  return MAX_BRIGHTNESS - brightness;
}
