/* Program: ButtonState
 * Author: Anton Liloi Moskalenko
*/

int pinLed = 13;
int switchPin = 8;
bool isButtonEnabled = false;

void setup()
{  
  pinMode(pinLed, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop()
{
  if(digitalRead(switchPin) == HIGH)
  {
    digitalWrite(pinLed, isButtonEnabled ? LOW : HIGH);
    isButtonEnabled = !isButtonEnabled;
    delay(500);
  }
}
