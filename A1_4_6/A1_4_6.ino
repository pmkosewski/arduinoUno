int odczytanaWartosc = 0;
int prog = 0;

void setup() {
  pinMode(8, OUTPUT);

}

void loop() {
  odczytanaWartosc = analogRead(A5);
  prog = analogRead(A4);

  if (odczytanaWartosc < prog) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(50);
}
