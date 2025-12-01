#define zielona 8
#define czerwona 9

String odebraneDane = "";
bool zielonaStan = false;
bool czerwonaStan = false;

void setup() {
  Serial.begin(9600);
  pinMode(zielona, OUTPUT);
  pinMode(czerwona, OUTPUT);

  digitalWrite(zielona, LOW);
  digitalWrite(czerwona, LOW);
}

void loop() {
  if(Serial.available() > 0) {
    odebraneDane = Serial.readStringUntil('\n');

    if(odebraneDane == "zielona") {
      
      if(zielonaStan) {
        digitalWrite(zielona, LOW);
        zielonaStan = false;
      } else {
        digitalWrite(zielona, HIGH);
        zielonaStan = true;
      }
    }

    if(odebraneDane == "czerwona") {
      
      if(czerwonaStan) {
        digitalWrite(czerwona, LOW);
        czerwonaStan = false;
      } else {
        digitalWrite(czerwona, HIGH);
        czerwonaStan = true;
      }
    }
  }
}