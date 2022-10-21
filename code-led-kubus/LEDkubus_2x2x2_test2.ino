// LED-kubus 2x2x2
// Testbestandje #2

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(A1, OUTPUT);
pinMode(A0, OUTPUT);
}

void loop() {
// onderste rij
digitalWrite(A0, HIGH);
digitalWrite(A1, LOW);

digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);

digitalWrite(2, LOW);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
delay(500);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
delay(500);

// bovenste rij
digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);

delay(500);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
delay(500);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
delay(500);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
delay(500);
}
