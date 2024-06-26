#include <Servo.h>
Servo myServo;
int servopin=5;
void setup() {
  // put your setup code here, to run once:
myServo.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myServo.write(180);
  delay(1000);

}
