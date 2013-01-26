#ifndef _BUTTON_H
#define _BUTTON_H

#include <Arduino.h>

class Button {
public:
  Button(int inputPin) {
    m_inputPin = inputPin;
  }

  bool pressed() {
    return (digitalRead(m_inputPin) == HIGH);
  }

private:
  int m_inputPin;

};

#endif
