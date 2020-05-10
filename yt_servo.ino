#include <Servo.h>
  
Servo servo1;
Servo servo2;
int joyX = 4;
int joyY = 5;
  
int servoVal;
int LED1 = 13;

void setup() 
{
  pinMode(LED1, OUTPUT);
  servo1.attach(10);
  servo2.attach(11);

  Serial.begin(6000);
}
  
void loop()
{
  digitalWrite(LED1, HIGH);
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);

  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
  delay(15);  
}
