#ifndef COMMUTATION_TABLE_H
#define COMMUTATION_TABLE_H
#include "dependencies.h"


#include "MotorDriver.h"

void commutate(uint8_t hallState, MotorDriver& motor);

#endif
