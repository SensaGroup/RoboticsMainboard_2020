#ifndef DETECTION_H
#define DETECTION_H

#include <Arduino.h>

void init_detection();
int read_detection(uint8_t ID);
int read_detection_front(void);
int read_detection_back(void);

#endif