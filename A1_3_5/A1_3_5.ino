int licznik = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(licznik);
  licznik = licznik + 1;
  delay(100);
}
