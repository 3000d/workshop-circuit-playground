#include <Adafruit_CircuitPlayground.h>

int pixelIndex = 0;
long tempsPrec;

uint32_t col;

void setup() {
  CircuitPlayground.begin();

}

void loop() {
  
  CircuitPlayground.clearPixels();
  col = 0;
  bool left = CircuitPlayground.leftButton();
  bool right = CircuitPlayground.rightButton();
  bool both = left && right;
  for(int i = 0; i < 10; i= i+1){
    if(both){
      col = CircuitPlayground.colorWheel(i*25);
    }else if(left){
      col = 0xFF0000;
    }else if(right){
      col = 0x0000FF;
    }else{
      col = 0;
    }

    CircuitPlayground.setPixelColor(i, col);
    
  }


  
  delay(200);
}





