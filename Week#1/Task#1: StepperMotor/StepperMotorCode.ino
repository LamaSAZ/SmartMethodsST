void setup() {
  /* when MS1 = MS2 = MS3 = 0 the operation mode is : Full step (default), 
  where each step = 1.8 degree */
  pinMode(3, OUTPUT); // dir : yellow wire
  pinMode(4, OUTPUT); // step : pink wire

}

void loop() {
  digitalWrite(3, HIGH); //high == to spin in clockwise direction

  for(int i = 0; i<200;i++){ // 200 means a full cycle of a stepper
    digitalWrite(4, HIGH);
    delay(10);
    digitalWrite(4, LOW);
    delay(10);
  }
 //-----------------------------------
  digitalWrite(3, LOW); //low == counter clockwise direction

  for(int i = 200; i>0;i--){ 
    digitalWrite(4, HIGH);
    delay(10);
    digitalWrite(4, LOW);
    delay(10);
  }


}
