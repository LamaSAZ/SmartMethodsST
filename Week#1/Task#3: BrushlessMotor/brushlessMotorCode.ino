

#include <Servo.h> // because the ESC input signal similar to the servo we will use servo library

Servo ESC;  // create servo object to control a ESC

int potpin = A0;  // analog pin used to connect the potentiometer which will the motor speed
int Bspeed;    // variable to read the value from the analog pin

void setup() {
  ESC.attach(11);  // attaches the ESC on pin 9 to the servo object
}

void loop() {
  Bspeed = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  Bspeed = map(Bspeed, 0, 1023, 0, 180);     // scale it for use with the ESC (value between 0 and 180)
  ESC.write(Bspeed);                  // sets the brushless motor speed according to the scaled value of Bspeed variable
}
