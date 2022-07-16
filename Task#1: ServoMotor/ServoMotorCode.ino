#include <Servo.h>

Servo servo;
int angle = 0;
void setup() {
  // put your setup code here, to run once:
  servo.attach(9); 
}

void loop() {
  // put your main code here, to run repeatedly:
 for(angle=0 ; angle<=180; angle++){
   servo.write(angle);
   delay(10);
 }

  for(angle=180 ; angle>=0; angle--){
   servo.write(angle);
   delay(10);
 }
}
