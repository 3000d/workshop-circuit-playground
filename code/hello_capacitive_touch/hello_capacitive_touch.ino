#include <Adafruit_CircuitPlayground.h>
#include <Keyboard.h>

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = CircuitPlayground.readCap(A4);
    if(value > 500){
      Keyboard.write(KEY_LEFT_ARROW);
    }
   Serial.println(value);

   delay(100);



  
  

}
