#ifndef Motor_Driver_H
#define Motor_Driver_H

class MotorDriver {
public:
  void begin();
  void setPhase(int high, int low);
};

#endif
