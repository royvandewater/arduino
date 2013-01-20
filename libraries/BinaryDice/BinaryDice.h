#ifndef _LED_ARRAY_H
#define _LED_ARRAY_H

class LedArray {
public:
  LedArray(int led1, int led2, int led3);

  void init();
  void roll();

private:
  int m_led1;
  int m_led2;
  int m_led3;

  LedArray();
  void binary_display(const int number);
  int led1_value(int number);
  int led2_value(int number);
  int led3_value(int number);
};

#endif
