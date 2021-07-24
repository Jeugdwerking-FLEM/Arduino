/*
 * Verkeerslicht
 * 
 * Het groene LEDje brandt voor 5 seconden, dan het oranje voor 2 seconden,
 * waarna het rode LEDje brandt voor 5 seconden. Dit blijft zich herhalen.
 */

// variabelen aanmaken
int ROOD = 13;      // het rode ledje aan pin 13
int ORANJE = 12;    // het oranje of gele ledje aan pin 12
int GROEN = 11;     // het groene ledje aan pin 11

// wordt eenmaal uitgevoerd wanneer je start of reset
void setup() {
  pinMode(ROOD, OUTPUT);
  pinMode(ORANJE, OUTPUT);
  pinMode(GROEN, OUTPUT);
}

// blijft herhaald worden
void loop() {
  // het groene ledje (en alleen het groene) brandt voor 5 seconden
  digitalWrite(ROOD, LOW);
  digitalWrite(ORANJE, LOW);
  digitalWrite(GROEN, HIGH);
  delay(5000);

  // het oranje ledje (en alleen het oranje) brandt voor 2 seconden
  digitalWrite(ROOD, LOW);
  digitalWrite(ORANJE, HIGH);
  digitalWrite(GROEN, LOW);
  delay(2000);

  // het rode ledje (en alleen het rode) brandt voor 5 seconden
  digitalWrite(ROOD, HIGH);
  digitalWrite(ORANJE, LOW);
  digitalWrite(GROEN, LOW);
  delay(5000);
}
