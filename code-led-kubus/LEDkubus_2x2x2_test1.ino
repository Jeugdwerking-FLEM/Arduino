// LED-kubus 2x2x2
// Testbestandje #1

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

// LOW -> aan, HIGH -> uit
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(2000); // 2 seconden

// bovenste rij
digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);

// LOW -> aan, HIGH -> uit
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(2000); // 2 seconden wachten

// beide rijen uit
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);

// LOW -> aan, HIGH -> uit
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(2000); // 2 seconden wachten

// beide rijen aan
digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);

// LOW -> aan, HIGH -> uit
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(2000); // 2 seconden wachten
}
