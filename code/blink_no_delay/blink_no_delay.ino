#include <Adafruit_CircuitPlayground.h>
long tempsPrec = 0;
bool allume = true;
int intervalle = 100;

void setup() {
  CircuitPlayground.begin();
  tempsPrec = millis();

}

void loop() {
  long tempsActuel = millis();

  if(tempsActuel - tempsPrec >= intervalle){
    tempsPrec = tempsActuel;
    allume = ! allume;
  }
  
  if(allume == true){
    for(int i =0; i < 10; i ++){
      CircuitPlayground.setPixelColor(i,200,0,200);
      
    }
  }else{
    CircuitPlayground.clearPixels();
  }


  
}
