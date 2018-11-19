#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

int ledIndex = 0;
int dir = 1;

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  
}

void loop() {
  CircuitPlayground.clearPixels();
  // led : 0-9
  CircuitPlayground.setPixelColor(ledIndex, 255, 0, 0);
 
  ledIndex = ledIndex + dir;

  if(ledIndex >= 9 || ledIndex <= 0){
    dir = -dir;
  }
  delay(100);

}
