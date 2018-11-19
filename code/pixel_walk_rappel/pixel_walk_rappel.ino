#include <Adafruit_CircuitPlayground.h>

int pixelIndex = 0;
long tempsPrec;
bool slideSwitch = false;
uint32_t col;

void setup() {
  CircuitPlayground.begin();

}

void loop() {
  if(pixelIndex > 10){
    pixelIndex = 0;
  }
  if(pixelIndex < 0){
    pixelIndex = 10;
  }
  CircuitPlayground.clearPixels();
  col = CircuitPlayground.colorWheel(pixelIndex * 25);
  CircuitPlayground.setPixelColor(pixelIndex, col);
  
  if(CircuitPlayground.slideSwitch() == true){
    pixelIndex = pixelIndex + 1;  
  }else{
    pixelIndex = pixelIndex -1;
  }
  

  
  delay(200);
}





