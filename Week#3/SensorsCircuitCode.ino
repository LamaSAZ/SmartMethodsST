// C++ code
//
const int led = 13;
const int tempSensor = A0;
const int ripSensor = 4;

int tempValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(tempSensor, INPUT);
  pinMode(ripSensor, INPUT);
  
}

void loop()
{
    tempValue = map(((analogRead(tempSensor) - 20) * 3.04), 0, 1023, -40, 125);
    
    if(tempValue > 50 && digitalRead(ripSensor) == HIGH){
      digitalWrite(led, HIGH);
    }else{
      digitalWrite(led, LOW);
    }
    delay(100);
}
