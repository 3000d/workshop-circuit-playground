#include <Adafruit_CircuitPlayground.h>
int scoreA;
int scoreB;
uint32_t colorA, colorB;
bool left, right, prevLeft, prevRight;


void setup() {
  CircuitPlayground.begin();
  left=false; 
  right=false, 
  prevLeft=false, 
  prevRight=false;
  colorA = 0x00FFFF;
  colorB = 0xFF00FF;
  Serial.begin(9600);
}

void loop() {
   CircuitPlayground.clearPixels();
  left = CircuitPlayground.leftButton();
  right = CircuitPlayground.rightButton();

  if(left != prevLeft){
    prevLeft = left;
    if(left){
      scoreA++;  
    }
    
  }

  if(right != prevRight){
    prevRight = right;
    if(right){
      scoreB++;  
    }
    
  }
  if(scoreA < 5){
     for(int i = 0; i < scoreA; i++){
      CircuitPlayground.setPixelColor(i, colorA);
     }
  }else{
    delay(250);
    for(int i = 0; i < 10;i++){
       CircuitPlayground.setPixelColor(i, colorA);
       delay(100);
    }
    scoreA = 0; scoreB = 0;
  }
  if(scoreB < 5){
    for(int i = 0; i < scoreB;i++){
       CircuitPlayground.setPixelColor(9-i, colorB);
    }
  }else{
    delay(250);
    for(int i = 9; i >= 0;i--){
       CircuitPlayground.setPixelColor(9-i, colorB);
       delay(100);
    }
    scoreA = 0; scoreB = 0;
  }
  delay(50);
  Serial.print(scoreA);
  Serial.print(" - ");
  Serial.println(scoreB);
}
