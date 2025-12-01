#define diodaCzerwona 8
#define diodaZielona 9
#define czunikOkna 10
 
void setup() {
  Serial.begin(9600);

  pinMode(diodaCzerwona, OUTPUT);
  pinMode(diodaZielona, OUTPUT);
  pinMode(czunikOkna, INPUT_PULLUP);

  digitalWrite(diodaCzerwona, LOW);
  digitalWrite(diodaZielona, LOW);
}

void loop() {
  if(digitalRead(czunikOkna) == LOW) {
    digitalWrite(diodaZielona, HIGH);
    digitalWrite(diodaCzerwona, LOW);
  } else {
    digitalWrite(diodaZielona, LOW);
    digitalWrite(diodaCzerwona, HIGH);
    Serial.println("Uwaga! Alarm! Okno nie jest zamkniete!");

    while (digitalRead(czunikOkna) == HIGH) {
      delay(25);
    }   
  }
}
