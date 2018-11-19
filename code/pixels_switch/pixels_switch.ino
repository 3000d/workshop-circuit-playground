#include <Adafruit_CircuitPlayground.h>
long tempsPrec = 0;
bool allume = true;
int intervalle = 100;
bool slideSwitch;
uint32_t col;

void setup() {
  CircuitPlayground.begin();
  tempsPrec = millis();

}

void loop() {
  long tempsActuel = millis();
  slideSwitch = CircuitPlayground.slideSwitch();

  if (tempsActuel - tempsPrec >= intervalle) {
    tempsPrec = tempsActuel;
    allume = ! allume;
  }

  if (allume == true) {
    for (int i = 0; i < 10; i ++) {
      if (slideSwitch) {
        col = 0xF000F0;
      } else {
        col = CircuitPlayground.colorWheel(i*25);
      }
      CircuitPlayground.setPixelColor(i, col);


    }
  } else {
    CircuitPlayground.clearPixels();
  }



}
