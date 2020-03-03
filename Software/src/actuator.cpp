#include "actuator.h"
#include "mechanism.h"
#include "AX12A.h"





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





uint8_t valve_pins[5]   = {VALVE_PIN_1,VALVE_PIN_2,VALVE_PIN_3,VALVE_PIN_4,VALVE_PIN_5};

void valve_click(uint8_t ID, uint8_t state) {
    digitalWrite(valve_pins[ID-1], state);
}

void valve_flip(uint8_t ID) {
    digitalWrite(valve_pins[ID-1], !digitalRead(valve_pins[ID-1]));
}





uint8_t ax_id[4] = {AX_ID_1,AX_ID_2,AX_ID_3,AX_ID_4};
uint8_t ax_sup[4] = {AX_SUP_1, AX_SUP_2, AX_SUP_3, AX_SUP_4};

void AX_init(void) {
    ax12a.begin(AX_BAUDRATE, AX_CONTROL_PIN, &Serial3);
}

void AX_move(uint8_t ID, int position) {
    ax12a.move(ax_id[ID - 1], position);
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

    // VALVE
    for(unsigned int i = 0; i<sizeof(valve_pins); i++) {
        pinMode(valve_pins[i], OUTPUT);
        digitalWrite(valve_pins[i], LOW);
    } // END OF VALVE

    // AX
    AX_init();
    for(unsigned int i=0; i<sizeof(ax_sup); i++) {
        AX_move(ax_id[i], ax_sup[i]);
    }
    // END OF AX

    return true;
} // end of init_actuator(...)
