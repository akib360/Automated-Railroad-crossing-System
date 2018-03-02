/*___________________________________________________________________________________
| Author : Akib Hosen Khan                                                           |                         
|          Dept of Information & Communication Engineering                           |
|          Islamic University, Bangladesh                                            |
|                                 Smart RailWay System                               |
| HardWare: Arduino Uno, DC motor, some LED as Light Signals, IR Obstacle Sensors,   |
|           L293D motor driver                                                       |
|                                                                                    |
|___________________________________________________________________________________*/




void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  digitalWrite(13,HIGH);
  }

void loop() {
  if(digitalRead(8)==LOW){
    //delay(1000);
    digitalWrite(7, HIGH);
    digitalWrite(13,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    delay(20);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    while(digitalRead(9)==HIGH){
    }
    digitalWrite(7, LOW);
    digitalWrite(13,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
    delay(20);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(200);
  }
  else if(digitalRead(9)==LOW){
    digitalWrite(7,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(150);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    while(digitalRead(8)==HIGH){
    }
    digitalWrite(7,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(200);
  }
}
