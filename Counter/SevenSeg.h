/* 
Program: Counter
Author: Anton Liloi Moskalenko
*/

#ifndef __SEVENSEG_H__
#define __SEVENSEG_H__

#ifdef ARDUINO
#include "Arduino.h"
#endif

class SevenSeg
{
  public:
    SevenSeg();
    void print(byte value, bool dot);
  private:
    byte segments[10] = {
      0b01110111, 
      0b00010100, 
      0b10110011, 
      0b10110110, 
      0b11010100, 
      0b11100110, 
      0b11100111, 
      0b00110100, 
      0b11110111,
      0b11110110
    };
};

#endif