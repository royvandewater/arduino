#ifndef _LED_ARRAY_H
#define _LED_ARRAY_H

class LedArray {
public:
  LedArray();

  void increment();
  int getLed1Power();
  int getLed2Power();

private:
  int brightness;
  int fade_direction;
};

#endif
