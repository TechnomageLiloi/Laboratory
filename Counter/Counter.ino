/* 
Program: Counter
Author: Anton Liloi Moskalenko
*/

#include "SevenSeg.h"

#define FIRST_SEGMENT_PIN 2
#define SEGMENT_COUNT 8

SevenSeg Display;
byte number = 0;
bool dot = true;

void setup() {
  for (int i = 0; i < SEGMENT_COUNT; i++)
  {
    pinMode(i + FIRST_SEGMENT_PIN, OUTPUT);
  }
}

void loop() {
  Display.print(number, dot);
  number = number < 9 ? number + 1 : 0;
  dot = !dot;
  delay(1000);
}
