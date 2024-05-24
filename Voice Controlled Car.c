//MOVEMENT WITH MOTORS(Voice)

int M11=4,M12=5,M21=6,M22=7;
char val;
string str;
 
void setup(){
  pinMode(M11,OUTPUT);
  pinMode(M12,OUTPUT);
  pinMode(M21,OUTPUT);
  pinMode(M22,OUTPUT);
  Serial.begin();
  digitalWrite(M11,LOW);
  digitalWrite(M12,LOW);
  digitalWrite(M21,LOW);
  digitalWrite(M22,LOW);
}
void loop(){
  if(Serial.available()>0){
    while(Serial.read()!='#'){
      val=Serial.read();
      str+=val;
      if(str=="Forward"){
      digitalWrite(M11,HIGH);
      digitalWrite(M12,LOW);
      digitalWrite(M21,HIGH);
      digitalWrite(M22,LOW);
      }
      if(str=="Reverse"){
      digitalWrite(M11,LOW);
      digitalWrite(M12,HIGH);
      digitalWrite(M21,LOW);
      digitalWrite(M22,HIGH);
      }
      if(str=="Left"){
      digitalWrite(M11,HIGH);
      digitalWrite(M12,LOW);
      digitalWrite(M21,LOW);
      digitalWrite(M22,LOW);
      }
      if(str=="Right"){
      digitalWrite(M11,LOW);
      digitalWrite(M12,LOW);
      digitalWrite(M21,HIGH);
      digitalWrite(M22,LOW);
      }
      if(str=="Stop")
      digitalWrite(M11,LOW);
      digitalWrite(M12,LOW);
      digitalWrite(M21,LOW);
      digitalWrite(M22,LOW);
      }
    }
  }
}