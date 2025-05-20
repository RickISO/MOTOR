#ifndef dependencies_h
#define dependencies_h
#include <Arduino.h>
#include <stdint.h> // For uint8_t


// motor_common.h
#ifndef MOTOR_COMMON_H
#define MOTOR_COMMON_H

// Tipos de datos estándar
#include <stdint.h>

// Arduino core
#include <Arduino.h>

// Control de pines (GPIO)(puse los mas comunes)
#define PHASE_A_HIGH 3
#define PHASE_A_LOW  4
#define PHASE_B_HIGH 5
#define PHASE_B_LOW  6
#define PHASE_C_HIGH 7
#define PHASE_C_LOW  8

// Sensor Hall pins
#define HALL_SENSOR_1 2
#define HALL_SENSOR_2 18
#define HALL_SENSOR_3 19

#endif 
