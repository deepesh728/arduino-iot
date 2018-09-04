int led=2;
int buzzer=5;
void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buzzer, OUTPUT);
}
  s
void loop() 
{
int count= analogRead(A0);
Serial.println(count);
delay(1000);

  if ((count<=750)&&(count>=1024))
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, LOW);
  }
  else if((count<=300)&&(count>=200))
  {
    digitalWrite(led, LOW);
      digitalWrite(buzzer, LOW);
  }
  else if ((count<=50)&&(count>=10))
  {
      digitalWrite(buzzer, HIGH);
        digitalWrite(led, HIGH);
  }
}
