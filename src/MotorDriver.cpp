#include "MotorDriver.h"
#include "dependencies.h"
const int PHASE_A = 5;
const int PHASE_B = 6;
const int PHASE_C = 7;

void MotorDriver::begin() {
  pinMode(PHASE_A, OUTPUT);
  pinMode(PHASE_B, OUTPUT);
  pinMode(PHASE_C, OUTPUT);
}

void MotorDriver::setPhase(int high, int low) {
  digitalWrite(PHASE_A, LOW);
  digitalWrite(PHASE_B, LOW);
  digitalWrite(PHASE_C, LOW);
  digitalWrite(high, HIGH);
  digitalWrite(low, LOW); // Opcional si quieres drenar
}
