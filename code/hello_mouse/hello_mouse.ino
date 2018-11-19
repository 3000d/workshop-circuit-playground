#include <Adafruit_CircuitPlayground.h>
#include <Mouse.h>
#include <Keyboard.h>

int mSpeed = 2;

void setup() {
  CircuitPlayground.begin();
  // initialisation du controle de la souris
  Mouse.begin();
  Keyboard.begin();

}

void loop() {
  if( CircuitPlayground.slideSwitch() == false){
    return;
  }
  int xDistance = CircuitPlayground.motionX() * mSpeed;
  int yDistance = CircuitPlayground.motionY() * mSpeed;
  
  if (xDistance != 0 || yDistance != 0) {
    Mouse.move(xDistance, yDistance, 0);
  }

  if(CircuitPlayground.leftButton()){
    if(! Mouse.isPressed(MOUSE_LEFT)){
      Mouse.press(MOUSE_LEFT);  
    }   
  }else{
    if(Mouse.isPressed(MOUSE_LEFT)){
      Mouse.release(MOUSE_LEFT);  
    }
  }
  

  delay(10);





}
