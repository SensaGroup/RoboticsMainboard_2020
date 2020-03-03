#include "actuator.h"
#include "mechanism.h"






Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;

uint8_t servo_pins[6]   = {SERVO_PIN_1,SERVO_PIN_2,SERVO_PIN_3,SERVO_PIN_4,SERVO_PIN_5,SERVO_PIN_6};
Servo servo_objects[6]  = {servo_1,servo_2,servo_3,servo_4,servo_5,servo_6};
uint8_t servo_sup[6]    = {SERVO_SUP_1,SERVO_SUP_2,SERVO_SUP_3,SERVO_SUP_4,SERVO_SUP_5,SERVO_SUP_6};


void servo_move(uint8_t ID, uint8_t angle) {
    servo_objects[ID-1].write(angle);
}






uint8_t relay_pins[5]   = {RELAY_PIN_1,RELAY_PIN_2,RELAY_PIN_3,RELAY_PIN_4,RELAY_PIN_5};

void relay_click(uint8_t ID, uint8_t state) {
    digitalWrite(relay_pins[ID-1], state);
}

void relay_flip(uint8_t ID) {
    digitalWrite(relay_pins[ID-1], !digitalRead(relay_pins[ID-1]));
}



/*
 * Function:    bool init_actuator(void)
 * Description: init all actuators + can bus board
 */
bool init_actuator(void) {

    // SERVO 
    for(unsigned int i = 0; i<sizeof(servo_pins); i++) {
        servo_objects[i].attach(servo_pins[i]);
    }

    for(unsigned int i = 0; i<sizeof(servo_pins); i++) {
        servo_move(i+1, servo_sup[i]);
    }// END OF SERVO

    // RELAY
    for(unsigned int i = 0; i<sizeof(relay_pins); i++) {
        pinMode(relay_pins[i], OUTPUT);
        digitalWrite(relay_pins[i], LOW);
    } // END OF RELAY

    return true;
} // end of init_actuator(...)
