#include <Adafruit_Circuit_Playground.h>
#include <Adafruit_CircuitPlayground.h>

int pixel = 0;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();

}

void loop() {
  CircuitPlayground.clearPixels();
  delay(500);
  for(int i = 0; i < 10; i = i + 1){
    CircuitPlayground.setPixelColor(i, 200,0,255);
  }
 delay(500);
}




