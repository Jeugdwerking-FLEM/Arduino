/*
 * Blink
 * 
 * Een LEDje pinkt: het wordt 1 seconde aan gezet, dan 1 seconde uit, dan weer aan, enzovoort.
 */

// variabele aanmaken
int LED = 13;

// wordt eenmaal uitgevoerd wanneer je start of reset
void setup() {
  pinMode(LED, OUTPUT);
}

// blijft herhaald worden
void loop() {
  digitalWrite(LED, HIGH);   // ledje aan
  delay(1000);               // 1 seconde wachten
  digitalWrite(LED, LOW);    // ledje uit
  delay(1000);               // 1 seconde wachten
}
