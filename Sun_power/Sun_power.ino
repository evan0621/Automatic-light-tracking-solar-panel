#include <Servo.h>

Servo myservo;
 
void setup()
{
  Serial.begin(115200);
  myservo.attach(9);
}

void loop()
{
  myservo.write(70);
  delay(10);
  myservo.write(90);
  delay(100);
}
