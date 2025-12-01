void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  pinMode(7, INPUT_PULLUP);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);  
  digitalWrite(8, LOW);
}

void loop() {

  while (digitalRead(7) == LOW) {
    digitalWrite(10, LOW);
    delay(1000);
    digitalWrite(10, HIGH);
    delay(1000);
  }
}
