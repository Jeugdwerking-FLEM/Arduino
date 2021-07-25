/*
 * LDR
 * 
 * Een LDR (Light Dependent Resistor) wordt uitgelezen.
 * Hoe meer light er wordt opgemeten, hoe meer LEDjes er branden.
 */

int waardeSensor = 0;

// analoge pinnen
int sensor = A0;

// digitale pinnen
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop(){
  
  // lees de waarde uit van de sensor
  waardeSensor = analogRead(sensor);
  
  delay(100);

  // LED 1
  // als de waarde 110 is of hoger gaat het eerste lampje aan, anders niet
  if (waardeSensor >= 110) {
    digitalWrite(led1, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
  }

  // LED 2
  if (waardeSensor >= 125) {
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
  }

  // LED 3
  if (waardeSensor >= 140) {
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led3, LOW);
  }

  // LED 4
  if (waardeSensor >= 155) {
    digitalWrite(led4, HIGH);
  }
  else {
    digitalWrite(led4, LOW);
  }

  // LED 5
  if (waardeSensor >= 170) {
    digitalWrite(led5, HIGH);
  }
  else {
    digitalWrite(led5, LOW);
  }
}
