/* 
Program: Counter
Author: Anton Liloi Moskalenko
*/

#ifdef ARDUINO
#include "Arduino.h"
#endif

#include "SevenSeg.h"

SevenSeg::SevenSeg() {}

void SevenSeg::print(byte value, bool dot)
{
  byte segment = SevenSeg::segments[value];

  for (int i = 0; i < 8; ++i) {
    digitalWrite(i + 2, i != 3 ? bitRead(segment, i) : dot);
  }
}