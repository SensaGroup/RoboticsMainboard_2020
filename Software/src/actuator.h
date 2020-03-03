#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <Arduino.h>
#include <Servo.h>

bool    init_actuator(void);
void servo_move(uint8_t ID, uint8_t angle);

void relay_click(uint8_t ID, uint8_t state);
void relay_flip(uint8_t ID);

void valve_click(uint8_t ID, uint8_t state);
void valve_flip(uint8_t ID);
#endif