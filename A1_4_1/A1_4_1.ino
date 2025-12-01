int odczytanaWartosc = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  odczytanaWartosc = analogRead(A5);
  Serial.println(odczytanaWartosc);
  delay(200);

}
