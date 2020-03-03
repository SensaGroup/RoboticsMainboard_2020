#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <Arduino.h>
#include <Servo.h>

#define ACTUATOR_CAN_ID 0xD4

bool    init_actuator(void);

#endif