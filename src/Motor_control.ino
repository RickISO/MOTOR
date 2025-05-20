#include "hall_sensor.h"
#include "Com_table.h"
#include "MotorDriver.h"

HallSensor hallSensor;
MotorDriver motor;

void setup() {
  Serial.begin(115200);
  hallSensor.begin();
  motor.begin();
}

void loop() {
  uint8_t state = hallSensor.readState();
  commutate(state, motor);
}
