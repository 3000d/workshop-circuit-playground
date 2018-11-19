#include <Adafruit_CircuitPlayground.h>
int light = 0;
int intervalle = 500;


void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  Serial.println("Hello world");
}

void loop() {
  light = CircuitPlayground.lightSensor();
  // intervalle directement lié à la luminosité ambiante
  //intervalle = light;
  intervalle = map(light, 0, 1023, 50, 2000);
  
  for(int nPixel = 0; nPixel < 10; nPixel = nPixel +1 ){
    CircuitPlayground.setPixelColor(nPixel, 255,0,0);
  }

  delay(intervalle);
  CircuitPlayground.clearPixels();
  
  delay(intervalle);

}








