#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>


void setup() {
  
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
}

void loop() {
   CircuitPlayground.clearPixels();
  int val = analogRead(A10);
  int pixel = map(val, 0, 1023, 0, 10);
  
  CircuitPlayground.setPixelColor(pixel, 100, 80,255);
  delay(100);
}
