//MOVEMENT WTIH MOTORS

int M11=4,M12=5,M21=6,M22=7;
 
void setup(){
  pinMode(M11,OUTPUT);
  pinMode(M12,OUTPUT);
  pinMode(M21,OUTPUT);
  pinMode(M22,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  while(Serial.available()>0){
    char val=Serial.read();
    if(val==1){               //Forward
      digitalWrite(M11,HIGH);
      digitalWrite(M12,LOW);
      digitalWrite(M21,HIGH);
      digitalWrite(M22,LOW);
    }
    if(val==2){               //Reverse
      digitalWrite(M11,LOW);
      digitalWrite(M12,HIGH);
      digitalWrite(M21,LOW);
      digitalWrite(M22,HIGH);
    }
    if(val==3){               //Left
      digitalWrite(M11,HIGH);
      digitalWrite(M12,LOW);
      digitalWrite(M21,LOW);
      digitalWrite(M22,LOW);
    }
    if(val==4){               //Right
      digitalWrite(M11,LOW);
      digitalWrite(M12,LOW);
      digitalWrite(M21,HIGH);
      digitalWrite(M22,LOW);
    }
    if(val==5){              //Stop
      digitalWrite(M11,LOW);
      digitalWrite(M12,LOW);
      digitalWrite(M21,LOW);
      digitalWrite(M22,LOW);
    }
  }
}