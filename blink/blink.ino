void setup() {
 pinMode(7, INPUT);
 pinMode(6, OUTPUT);
 pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(, LOW);
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
  delay(2000);
}
