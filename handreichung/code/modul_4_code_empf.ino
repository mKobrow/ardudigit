#include <Ardudigit.h>

int eingangspins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int takt = 1;
I2C_LCD lcd(0x27);

void setup() {
  for(int i = 0; i < 8; i++) {
    pinMode(eingangspins[i], INPUT_PULLUP);
  }
  lcd.init();
}

void loop() {
  char in;
  for(int i = 0; i < 8; i++) {
    bitWrite(in, i, digitalRead(eingangspins[i]));
  }

  if(in != 0) {
    lcd.print(in);
    delay(takt*1000);
  }
}
