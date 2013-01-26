#ifndef _LED_ARRAY_H
#define _LED_ARRAY_H

#include <Arduino.h>

#define MAX_BRIGHTNESS 200 // Must be a multiple of FADE_AMOUNT
#define MIN_BRIGHTNESS 0   // Must be a multiple of FADE_AMOUNT
#define FADE_AMOUNT 5

class LedArray {
public:
  LedArray(){
    brightness     = 0;
    fade_direction = 1;
  };

  void increment(){
    brightness = brightness + (FADE_AMOUNT * fade_direction);

    if (brightness == MIN_BRIGHTNESS || brightness == MAX_BRIGHTNESS) {
      fade_direction = -fade_direction;
    }
  };

  int getLed1Power(){
    return brightness;
  }

  int getLed2Power(){
    return MAX_BRIGHTNESS - brightness;
  }

private:
  int brightness;
  int fade_direction;
};

#endif
