int BUZ=A1;
int led5=A3;
void setup() {
  
  Serial.begin(9600);
  pinMode(BUZ,OUTPUT);
  pinMode(led5,OUTPUT);  
}

void loop()
{
  
  int potmeter = analogRead(A0);
  
  Serial.println(potmeter);
  delay(1000);
  if ((potmeter>10)&&(potmeter<1000))
  {
    
    analogWrite(led5,LOW);
    analogWrite(BUZ, LOW);
  }
  else if((potmeter<9)||(potmeter>999))
  {
    analogWrite(led5,HIGH);
    analogWrite(BUZ, HIGH);
    delay(5000);
    analogWrite(BUZ, LOW);
  }
}
