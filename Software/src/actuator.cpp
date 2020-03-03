#include "actuator.h"
#include "mechanism.h"

Servo servo_1;  uint8_t servo1_current;
Servo servo_2;  uint8_t servo2_current;
Servo servo_3;  uint8_t servo3_current;
Servo servo_4;  uint8_t servo4_current;

uint8_t valve_pins[6]   = {36, 35, 34, 33, 32, 31};
uint8_t bin_pins[2]     = { A4, A5};
/*
 servo_1.write(0);
    delay(1000);
    servo_1.write(180);
    */

void move_servo_1(int pos) {
    servo_1.write(pos);
}
void move_servo_2(int pos) {
    servo_2.write(pos);
}
void move_servo_3(int pos) {
    servo_3.write(pos);
}
void move_servo_4(int pos) {
    servo_4.write(pos);
}

/*
 * Function:    bool init_actuator(void)
 * Description: init all actuators + can bus board
 */
bool init_actuator(void) {

    // setup main board relays
    pinMode(RELAY1_PIN, OUTPUT); digitalWrite(RELAY1_PIN, LOW);
    pinMode(RELAY2_PIN, OUTPUT); digitalWrite(RELAY2_PIN, LOW);

    // attach all servos
    servo_1.attach(10); servo_2.attach(11); servo_3.attach(12); servo_4.attach(13);
    move_servo_1(0);
    delay(1000);
    move_servo_1(180);
    
    // setup inputs and valve connectors
    for(int i=0; i<6; i++) {
        pinMode(valve_pins[i], OUTPUT);
        digitalWrite(valve_pins[i], LOW);

        pinMode(bin_pins[i], INPUT);
    }

    pinMode(A0, OUTPUT);    // dir right
    pinMode(A1, OUTPUT);    // step right
    pinMode(A2, OUTPUT);    // dir left
    pinMode(A3, OUTPUT);    // step left

    // setup the actuator board
    byte ping_data[8] = {'P', 1, 0, 0, 0, 0, 0, 0};
    return true;
} // end of init_actuator(...)
