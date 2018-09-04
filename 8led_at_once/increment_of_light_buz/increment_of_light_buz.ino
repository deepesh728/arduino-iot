int led[]={2,3,4,5,6,7,8,9};
int buzzer=10;
void setup() {
    Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led,LOW);
  pinMode(buzzer, LOW);  
}
void loop() {
int count= analogRead(A0);
Serial.println(count);
delay(1000);
if ((count>=0)&&(count<=100))
{
  digitalWrite(led, LOW);
  digitalWrite(buzzer, HIGH);
  
}
else if ((count>100)&&(count<=200))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(led[0], HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
else if ((count>200)&&(count<=300))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
else if ((count>300)&&(count<=400))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
else if ((count>400)&&(count<=500))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
else if ((count>500)&&(count<=600))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
else if ((count>600)&&(count<=700))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
else if ((count>700)&&(count<=800))
{
  digitalWrite(buzzer, LOW);
  digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
}
else if ((count>800)&&(count<=1024))
{
  digitalWrite(buzzer, HIGH);
  digitalWrite(led, HIGH);
}
}
