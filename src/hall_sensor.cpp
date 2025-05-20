#include "hall_sensor.h"
#include "dependencies.h"


const int HALL_A = 2;
const int HALL_B = 3;
const int HALL_C = 4;

void HallSensor::begin() {
  pinMode(HALL_A, INPUT);
  pinMode(HALL_B, INPUT);
  pinMode(HALL_C, INPUT);
}

uint8_t HallSensor::readState() {
  uint8_t a = digitalRead(HALL_A);
  uint8_t b = digitalRead(HALL_B);
  uint8_t c = digitalRead(HALL_C);
  return (a << 2) | (b << 1) | c;  //shiftea un calculo de bits  esto facilita el manejo de los estados
  // Devuelve un número de 3 bits que representa el estado de los sensores y al mentenerlos del mismo tamaño te permite 
}
