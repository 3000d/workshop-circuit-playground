#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  
}

void loop() {
  CircuitPlayground.clearPixels();
  
  int val_potar = analogRead(A10);
  int index_led = map(val_potar, 0, 1023, 0, 9);
  CircuitPlayground.setPixelColor(index_led, 0, 0, 255);
  delay(100);

}
