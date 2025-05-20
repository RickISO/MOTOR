#ifndef hall_sensor_h
#define hall_sensor_h
#include "dependencies.h"


class HallSensor {
public:
  void begin();
  uint8_t readState();
};

#endif
