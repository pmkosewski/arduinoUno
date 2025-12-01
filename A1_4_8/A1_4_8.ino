#define zielona 8
#define zolta 9
#define czerwona 10
#define przycisk 11

int odczytanaWartosc = 0;
string odebranaWartosc = "";
int odebranaWartoscInt = 0;
int proba = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(zielona, OUTPUT);
  pinMode(zolta, OUTPUT);
  pinMode(czerwona, OUTPUT);  
  pinMode(przcisk, INPUT_PULLUP);

  digitalWrite(zielona, LOW);
  digitalWrite(zolta, LOW);
  digitalWrite(czerwona,LOW);
}

void loop() {
  odczytanaWartosc = analogRead(A0);
    
  if(digitalRead(przycisk) == LOW) {
    Serial.println("Podaj liczbe:");
    
    while(proba < 2) {
      if(Serial.avaliable() > 0) {
        odebranaWartosc = Serial.readStringUntil('\n');
        odebranaWartoscInt = odebranaWartosc.toInt();
      }
        
      if(odebranaWartoscInt <= odczytanaWartosc + 50 && odebranaWartoscInt >= odczytanaWartosc - 50) {
        digitalWrite(zielona, HIGH);
        delay(1000)
        digitalWrite(zielona, LOW);
        proba = 2;
      }

      if(proba = 2) {
        digitalWrite(czerwona, HIGH);
        delay(1000)
        digitalWrite(czerwona, LOW);
      }

      if(odebranaWartoscInt > odczytanaWartosc + 50 || odebranaWartoscInt < odczytanaWartosc - 50) {
        digitalWrite(zolta, HIGH);
        delay(1000)
        digitalWrite(zolta, LOW);


      }
    }
  }
}
