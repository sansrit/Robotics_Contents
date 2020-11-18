#include <Servo.h>
Servo sans;

void setup() {
  sans.attach(8);
  sans.write(0);

}

void loop() {
  sans.write(90);
  delay(500);
  sans.write(120);
  delay(1000);
  

}
