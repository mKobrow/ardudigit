int ausgabepins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int takt = 1;
char nachricht[] = "Hallo Testnachricht";

void setup() {
  for(int i = 0; i < 8; i++) {
    pinMode(ausgabepins[i], OUTPUT);
  }

  for(int i = 0; i < sizeof(nachricht) - 1; i++) {
    for(int j = 0; j < 8; j++) {
      digitalWrite(ausgabepins[j], bitRead(nachricht[i], j));
    }
    delay(takt * 1000);
  }

  for(int j = 0; j < 8; j++) {
    digitalWrite(ausgabepins[j], LOW);
  }
}

void loop() {
}
