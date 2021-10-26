/*
 * Geheugenspelletje
 * 
 * Test je geheugen! Welke high score haal jij?
 */

int drukknopPin[] = {2, 3, 4, 5};     // pinnen voor drukknoppen
int ledPin[] = {8, 9, 10, 11};        // pinnen voor LEDs

const int MAX_LEVEL = 20;             // we stellen maximum level op 20
int volgorde[MAX_LEVEL];              // lijst met de correcte volgorde

int level = 1;                        // we starten met level 1


// setup - wordt eenmaal uitgevoerd wanneer je start of reset
void setup() {
  for (int x = 0; x < 4; x++) {
    pinMode(ledPin[x], OUTPUT);       // alle LEDs als OUTPUT instellen
    digitalWrite(ledPin[x], LOW);     // alle LEDs uit
  }
  for (int x = 0; x < 4; x++) {
    pinMode(drukknopPin[x], INPUT);   // alle drukknoppen als INPUT instellen
  }

}

// loop - blijft herhaald worden
void loop() {
  if (level == 1) {
    // een nieuw spel wordt gestart
    maak_volgorde();                  // nieuwe volgorde aanmaken
  }
  // spel is bezig
  toon_volgorde();                 	  // toon de juiste volgorde
  poging_invoeren();                  // poging om de volgorde correct na te doen
}

void toon_volgorde(){
  for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], LOW);     // eerst alle LEDs uit
  }
  for (int i = 0; i < level; i++) {
    digitalWrite(volgorde[i], HIGH);
    delay(1000);
    digitalWrite(volgorde[i], LOW);
    delay(200);
  }
}

void poging_invoeren() {
  for (int i = 0; i < level; i++) {
    int poging = 0;
    while (poging == 0) {  
      if (digitalRead(2) == LOW) {   // drukknop op pin 2 hoort bij led op pin 11
        poging = 11;
      }
      if (digitalRead(3) == LOW) {   // drukknop op pin 3 hoort bij led op pin 10
        poging = 10;
      }
      if (digitalRead(4) == LOW) {   // drukknop op pin 4 hoort bij led op pin 9
        poging = 9;
      }
      if (digitalRead(5) == LOW) {   // drukknop op pin 5 hoort bij led op pin 8
        poging = 8;
      }
    }
      
    digitalWrite(poging, HIGH);
    delay(200);
    digitalWrite(poging, LOW);
    if (poging != volgorde[i]) {
      poging_fout();
      delay(500);
      return;                        // ga uit poging_invoeren() en terug naar loop()
    }
  }
  poging_juist();
}


void maak_volgorde() {
  randomSeed(millis());              // zorgt ervoor dat de volgorde écht random is
  for (int i = 0; i < MAX_LEVEL; i++){
    volgorde[i] = random(8,12);      // random ledPin (8, 9, 10 of 11)
  }
}


void poging_fout(){
  
  // 3 keer alle LEDs knipperen (dit toont aan dat de poging fout was)
  for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], LOW);
  }
  delay(500);
  for (int i = 0; i < 3; i++){
    for (int x = 0; x < 4; x++) {
      digitalWrite(ledPin[x], HIGH);
    }
    delay(250);
    for (int x = 0; x < 4; x++) {
      digitalWrite(ledPin[x], LOW);
    }
    delay(250);
  }
  
  level = 1;                           // reset level
}

void poging_juist(){

  // 1 keer alle LEDs aan (dit toont aan dat de poging juist was)
  for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], LOW);
  }
  delay(500);
  for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(500);
  for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], LOW);
  }
  delay(250);
 
  if (level < MAX_LEVEL){
    level++;                           // naar volgende level (volgorde wordt langer)
  }
}
