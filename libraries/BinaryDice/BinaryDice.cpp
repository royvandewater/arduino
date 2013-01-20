#include <Arduino.h>
#include "BinaryDice.h"

#define ON  204 // Maximum voltage the LED's can take (4V)
#define OFF 0

LedArray::LedArray() {}

LedArray::LedArray(int led1, int led2, int led3) {
  m_led1 = led1;
  m_led2 = led2;
  m_led3 = led3;
}

void LedArray::init() {
  randomSeed(analogRead(A0));
  pinMode(m_led1, OUTPUT);
  pinMode(m_led2, OUTPUT);
  pinMode(m_led3, OUTPUT);
}

void LedArray::roll() {
  long result = random(1,7);

  binary_display(result);
}

void LedArray::binary_display(const int number) {
  analogWrite(m_led1, led1_value(number));
  analogWrite(m_led2, led2_value(number));
  analogWrite(m_led3, led3_value(number));
}

int LedArray::led1_value(const int number) {
  return (number & B100) ? ON : OFF;
}

int LedArray::led2_value(const int number) {
  return (number & B010) ? ON : OFF;
}

int LedArray::led3_value(const int number) {
  return (number & B001) ? ON : OFF;
}
