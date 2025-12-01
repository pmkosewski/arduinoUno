int odczytanaWartosc = 0;

void setup() {
  pinMode(8, OUTPUT);

}

void loop() {
  odczytanaWartosc = analogRead(A5);

  if (odczytanaWartosc < 200) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(50);
}
