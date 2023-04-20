/* Program: SimpleLed
 * Author: Anton Liloi Moskalenko
 * Timestamp: 2023-03-12 17:51:05
*/

int pinLed = 13;

void setup()
{  
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  digitalWrite(pinLed, HIGH);
  delay(500);

  digitalWrite(pinLed, LOW);
  delay(500);
}
