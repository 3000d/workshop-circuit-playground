#include <Adafruit_Circuit_Playground.h>
#include <Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  CircuitPlayground.redLED(HIGH);
  delay(500);
  CircuitPlayground.redLED(LOW);
  delay(500);
  

}




