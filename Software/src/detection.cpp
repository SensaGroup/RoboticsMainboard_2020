#include <Arduino.h>
#include "system.h"

uint8_t detection_pins[6] = {SENSOR_PIN_1,SENSOR_PIN_2,SENSOR_PIN_3,SENSOR_PIN_4,SENSOR_PIN_5,SENSOR_PIN_6};

void init_detection() {
    for(unsigned int i = 0; i<sizeof(detection_pins); i++) {
        pinMode(detection_pins[i], INPUT);
    } // END OF RELAY
}

// the id is the replacement defines 
int read_detection(uint8_t ID) {
    if(digitalRead(detection_pins[ID]) == SENSOR_DETECTION_LEVEL) {
        return 1;
    } else {
        return 0;
    }
}

int read_detection_front(void) {
    if(read_detection(SENSOR_FRONT_LEFT) == 1 || read_detection(SENSOR_FRONT_LEFT) == 1 ||read_detection(SENSOR_FRONT_LEFT) == 1) {
        return 1;
    } else {
        return 0;
    }
}

int read_detection_back(void) {
    if(read_detection(SENSOR_BACK_LEFT) == 1 || read_detection(SENSOR_BACK_LEFT) == 1 ||read_detection(SENSOR_BACK_LEFT) == 1) {
        return 1;
    } else {
        return 0;
    }
}