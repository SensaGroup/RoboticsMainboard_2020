#include <Arduino.h>
#include "system.h"

void init_detection() {
    pinMode(TACTIC1_PIN, INPUT);
    pinMode(TACTIC2_PIN, OUTPUT);
    digitalWrite(TACTIC2_PIN, HIGH);
}
void set_direction(uint8_t dir) {
    digitalWrite(TACTIC1_PIN, dir);
}
byte get_detection() {  
    return(digitalRead(TACTIC2_PIN));
}