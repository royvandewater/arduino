#ifndef _LED_ARRAY_H
#define _LED_ARRAY_H

#include <Arduino.h>

#define ON  204 // Maximum voltage the LEDs can take (4V)
#define OFF 0

class LedArray {
public:
  LedArray(int led1, int led2, int led3) {
    m_led1 = led1;
    m_led2 = led2;
    m_led3 = led3;
  };

  void init() {
    randomSeed(analogRead(A0));
    pinMode(m_led1, OUTPUT);
    pinMode(m_led2, OUTPUT);
    pinMode(m_led3, OUTPUT);
  }

  void roll(){
    int result = random(1,7);

    binary_display(result);
  }

private:
  int m_led1;
  int m_led2;
  int m_led3;

  void binary_display(const int number){
    analogWrite(m_led1, led1_value(number));
    analogWrite(m_led2, led2_value(number));
    analogWrite(m_led3, led3_value(number));
  }

  int led1_value(int number){
    return (number & B100) ? ON : OFF;
  }

  int led2_value(int number){
    return (number & B010) ? ON : OFF;
  }

  int led3_value(int number){
    return (number & B001) ? ON : OFF;
  }
};

#endif
