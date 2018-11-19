#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  Serial.begin(9600);
}


void loop() {
  CircuitPlayground.clearPixels();
  float temp = CircuitPlayground.temperature();

  int nbr_led = map(temp, 27, 32, 0, 10);
  nbr_led = constrain(nbr_led, 0, 10);
  int led_idx = 0;
  while (led_idx < nbr_led) {
    // setPixelColor(pixel, R, G, B);
    CircuitPlayground.setPixelColor(led_idx, 25 * led_idx, 0, 255 - (25 * led_idx));
    led_idx = led_idx + 1;
  }
  
  CircuitPlayground.clearPixels();
  for(int i = 0; i < 10; i = i + 1){
    
    if(i < nbr_led){
      CircuitPlayground.setPixelColor(i, 255, 0, 0);
    }else{
      CircuitPlayground.setPixelColor(i,0,0,255);
    }
    
  }
  
 
  
}
