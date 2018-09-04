int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
void setup() {
  Serial.begin(9600);

  int test[] = {2,3};

  pinMode(test, OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
  pinMode(led5 , OUTPUT);
  pinMode(led6 , OUTPUT); 
  pinMode(led7 , OUTPUT);
  pinMode(led8 , OUTPUT);
  pinMode(led9 , OUTPUT);
}

void loop() {
  int count = analogRead(A0);
 Serial.println(count);
 delay(1000);
  if((count>=800)&& (count<=899)){
   digitalWrite(led2,HIGH); 
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,HIGH);
  }
  
  else if((count>=700)&&(count<=799)){
    digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=600)&&(count<=699)){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=500)&&(count<=599)){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=400)&&(count<=499)){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=300)&&(count<=399)){
 digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=200)&&(count<=299)){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=100)&&(count<=199)){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  
  }
  else if( (count>=0)&&(count<=99)){
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  }
}
