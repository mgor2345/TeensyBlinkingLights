void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(6000);

 
}

void loop() {
 
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
}
