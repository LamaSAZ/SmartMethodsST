// C++ code
int bt = 2;
int led = 13;
int oldState = HIGH; // old status of pushButton
int newState;  // new status of pushButton
int ledState = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bt, INPUT_PULLUP);
}

void loop() {
  newState = digitalRead(bt);
  if(oldState == LOW && newState == HIGH){ // change the LED status only when the button is pressed
    if(ledState == HIGH){
      ledState = LOW;
    }else{
      ledState = HIGH;
    }
  }
  digitalWrite(led, ledState);
  oldState = newState;
}
  
