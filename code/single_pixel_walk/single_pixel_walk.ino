#include <Adafruit_CircuitPlayground.h>

int pixel = 0;

void setup() {
  CircuitPlayground.begin();

}

void loop() {
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(pixel, 0xFF0000);
  if(pixel<10){
    pixel = pixel+ 1;  
  }else{
    pixel = 0;
  }

  delay(1000);

}
