/* 
Program: RGB
Author: Anton Liloi Moskalenko
*/

int pinRed = 9;
int pinGreen = 10;
int pinBlue = 11;

void setup() {
  randomSeed(analogRead(0));
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char buffer[20];
  int red = random(0, 255);
  int green = random(0, 255);
  int blue = random(0, 255);
atoi()
  sprintf(buffer, "RGB: %d / %d / %d", red, green, blue);
  Serial.println(buffer);

  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);

  delay(1000);
}
