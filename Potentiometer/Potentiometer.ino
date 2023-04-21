/* 
Program: Potentiometer
Author: Anton Liloi Moskalenko
*/

int pinLed = 9;
int pinaPotentiometer = 0;
int stateOut = 0;

void setup()
{
  pinMode(pinaPotentiometer, INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  int divider = analogRead(pinaPotentiometer); // Period: 0-1023
  int out = divider / 4; // Period: 0-255

  Serial.print("Divider: ");
  Serial.print(divider);
  Serial.print(" Out: ");
  Serial.println(out);

  if(stateOut != out)
  {
    Serial.println("Write new out");
    analogWrite(pinLed, out);
    stateOut = out;
  }
  
  delay(1000);
}
