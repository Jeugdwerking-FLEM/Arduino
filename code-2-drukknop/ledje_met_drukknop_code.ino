/*
 * Drukknop
 * 
 * Een LEDje wordt bediend door middel van een drukknop.
 */

// constantes - de waardes hiervan veranderen niet
const int buttonPin = 2;     // pinnummer van de drukknop
const int ledPin =  13;      // pinnummer van de LED

// variabelen - deze kunnen veranderen
int buttonState = 0;         // variabele om de drukknop status te lezen

void setup() {
  // de pin van de LED als output initialiseren
  pinMode(ledPin, OUTPUT);
  // de pin van de drukknop als input initialiseren
  pinMode(buttonPin, INPUT);
}

void loop() {
  // lees de status van de drukknop waarde
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);   // LED aan
  } else {
    digitalWrite(ledPin, LOW);   // LED uit
  }
}
