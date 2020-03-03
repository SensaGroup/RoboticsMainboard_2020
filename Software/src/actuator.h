#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <Arduino.h>
#include <Servo.h>

#define ACTUATOR_CAN_ID 0xD4

#define RELAY1_PIN 8
#define RELAY2_PIN 9

bool    init_actuator(void);

#endif