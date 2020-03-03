#include <Arduino.h>

#ifndef CONFIG_H
#define CONFIG_H

#define RELAY_PIN_1             33 
#define RELAY_PIN_2             32
#define RELAY_PIN_3             31
#define RELAY_PIN_4             30
#define RELAY_PIN_5             29

#define STEPPER_PIN_STEP_1      26
#define STEPPER_PIN_DIR_1       25
#define STEPPER_PIN_STEP_2      28
#define STEPPER_PIN_DIR_2       27

#define SERVO_PIN_1             5
#define SERVO_PIN_2             6
#define SERVO_PIN_3             7
#define SERVO_PIN_4             8
#define SERVO_PIN_5             9
#define SERVO_PIN_6             10
// SERVO START UP POSITION - gets executed at init
#define SERVO_SUP_1             0 
#define SERVO_SUP_2             0 
#define SERVO_SUP_3             0 
#define SERVO_SUP_4             0 
#define SERVO_SUP_5             0 
#define SERVO_SUP_6             0 


#define VALVE_PIN_1             34 
#define VALVE_PIN_2             35
#define VALVE_PIN_3             36
#define VALVE_PIN_4             37
#define VALVE_PIN_5             38
#define VALVE_PIN_6             39

#define SENSOR_PIN_1            40 
#define SENSOR_PIN_2            41
#define SENSOR_PIN_3            42
#define SENSOR_PIN_4            43
#define SENSOR_PIN_5            44
#define SENSOR_PIN_6            45
#define SENSOR_FRONT_LEFT       SENSOR_PIN_1
#define SENSOR_FRONT_CENTER     SENSOR_PIN_2
#define SENSOR_FRONT_RIGHT      SENSOR_PIN_3
#define SENSOR_BACK_LEFT        SENSOR_PIN_4
#define SENSOR_BACK_CENTER      SENSOR_PIN_5
#define SENSOR_BACK_RIGHT       SENSOR_PIN_6
#define SENSOR_DETECTION_LEVEL  1 // the status read at detection

#define ENCODER1_PIN_A          2 
#define ENCODER1_PIN_B          3
#define ENCODER2_PIN_A          11
#define ENCODER2_PIN_B          12 

#define JUMPER_PIN              49
#define TACTIC1_PIN             23
#define TACTIC2_PIN             24
#define SIDE_PIN                46

#define AX_CONTROL_PIN          4

#define NRF_PIN_CS              48
#define NRF_PIN_CE              47

#define ADC_PIN_0               A0
#define ADC_PIN_1               A1
#define ADC_PIN_2               A2
#define ADC_PIN_3               A3
#define ADC_PIN_4               A4
#define ADC_PIN_5               A5
#define ADC_PIN_6               A6
#define ADC_PIN_7               A7
#define ADC_PIN_8               A8
#define ADC_PIN_9               A9
#define ADC_PIN_10              A10
#define ADC_PIN_11              A11
#define ADC_PIN_12              A12
#define ADC_PIN_13              A13
#define ADC_PIN_14              A14
#define ADC_PIN_15              A15


// DEBUG SERIAL -> Serial
// ODOMETRY SERIAL -> Serial1
// RPI SERIAL -> Serial2
// AX SERIAL -> Serial3

#endif