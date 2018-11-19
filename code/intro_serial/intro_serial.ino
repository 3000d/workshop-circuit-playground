int compteur = 0;
void setup() {
  Serial.begin(9600);

}

void loop() { 
  Serial.println(compteur);
  compteur = compteur + 5;
  delay(300);

}
