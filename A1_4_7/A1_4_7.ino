int odczytanaWartosc = 0;
int prog = 0;
float napiecie = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {
  odczytanaWartosc = analogRead(A5);
  prog = analogRead(A4);

  if (odczytanaWartosc < prog) {
    digitalWrite(8, HIGH);
    napiecie = prog * (5.0/1024.0); 
    Serial.println(napiecie);

    while (analogRead(A5) < analogRead(A4)) {
      delay(25);
    }

  } else {
    digitalWrite(8, LOW);
  }
  delay(50);
  
}