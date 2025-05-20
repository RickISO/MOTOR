#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

class MotorDriver {
public:
  void begin();
  void setPhase(int high, int low);
};

#endif
