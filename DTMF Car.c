//DTMF(Dual Tone Multi Frequency) Signaling Car

int IN1=4,IN2=5,IN3=6,IN4=7;
int Q1,Q2,Q3,Q4;
int led=13;
 
void setup(){
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  digitalWrite(led,LOW);
}
void loop(){
  Q1=digitalRead(IN1);
  Q2=digitalRead(IN2);
  Q3=digitalRead(IN3);
  Q4=digitalRead(IN4);
 
  if(Q4==LOW && Q3==LOW && Q2==HIGH && Q1==HIGH){
    digitalWrite(led,HIGH);
  }
  else if(Q1==LOW && Q3==LOW && Q2==HIGH && Q1==LOW){
    digitalWrite(led,LOW);
  }
}