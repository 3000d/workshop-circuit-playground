#include <Adafruit_CircuitPlayground.h>

int pixelIndex = 0;
long tempsPrec;
bool slideSwitch = false;
uint32_t col;
int colorOffset = 1;

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(255);

}

void loop() {
  if(pixelIndex > 10){
    pixelIndex = 0;
  }
  if(pixelIndex < 0){
    pixelIndex = 10;
  }
  // CircuitPlayground.clearPixels();
  col = CircuitPlayground.colorWheel(pixelIndex * colorOffset);
  CircuitPlayground.setPixelColor(pixelIndex, col);
  
  if(CircuitPlayground.slideSwitch() == true){
    pixelIndex = pixelIndex + 1;  
  }else{
    pixelIndex = pixelIndex -1;
  }
  

  if(colorOffset<25){
    colorOffset++;
  }else{
    colorOffset = 0;
  }
  delay(20);
}





