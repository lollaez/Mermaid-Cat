#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;

int pos = 0;
int pos2 = 0;

void setup() {
  servo1.attach(10);
  servo2.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 30; pos <= 150; pos += 1) { 
    servo1.write(pos);
    // for (pos2 = 150; pos >= 30; pos2 -= 1){
    //   servo2.write(pos2);   
    // }
    servo2.write(pos);              //need to reverse direction bc flipped
    delay(15);                       
  }
  for (pos = 150; pos >= 30; pos -= 1) { 
    servo1.write(pos); 
    // for (pos2 = 30; pos <= 150; pos2 += 1){
    //   servo2.write(pos2);   
    // }   
    servo2.write(pos);                //need to reverse direction bc flipped
    delay(15);                       
  }
}
