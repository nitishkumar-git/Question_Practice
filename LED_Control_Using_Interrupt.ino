#define led1 12
#define led2 13
#define button 2
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(button), control_LED, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
void control_LED(){
  int button_state = digitalRead(button);
  if(button_state==LOW){
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led2, LOW);
  }
}
