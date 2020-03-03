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


    return true;
} // end of init_actuator(...)
