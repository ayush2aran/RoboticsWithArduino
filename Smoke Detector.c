//SMOKE DETECTOR using Arduino

int led=4
int adc_in = A0
int adc_value;
 
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  adc_value = analog.Read();
  if(adc_value>60){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
}