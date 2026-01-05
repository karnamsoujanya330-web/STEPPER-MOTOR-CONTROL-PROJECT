// Stepper Motor Control using Arduino
// Author: Soujanya Karnam

int coil1 = 8;
int coil2 = 9;
int coil3 = 10;
int coil4 = 11;

int stepDelay = 5;   // Speed control (lower = faster)

void setup() {
  pinMode(coil1, OUTPUT);
  pinMode(coil2, OUTPUT);
  pinMode(coil3, OUTPUT);
  pinMode(coil4, OUTPUT);
}

void loop() {
  // Rotate clockwise
  step1();
  step2();
  step3();
  step4();
}

// Step sequence functions
void step1() {
  digitalWrite(coil1, HIGH);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, LOW);
  digitalWrite(coil4, LOW);
  delay(stepDelay);
}

void step2() {
  digitalWrite(coil1, LOW);
  digitalWrite(coil2, HIGH);
  digitalWrite(coil3, LOW);
  digitalWrite(coil4, LOW);
  delay(stepDelay);
}

void step3() {
  digitalWrite(coil1, LOW);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, HIGH);
  digitalWrite(coil4, LOW);
  delay(stepDelay);
}

void step4() {
  digitalWrite(coil1, LOW);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, LOW);
  digitalWrite(coil4, HIGH);
  delay(stepDelay);
}
