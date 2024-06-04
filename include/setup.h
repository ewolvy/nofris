#ifndef setup_h

#define setup_h

// #include "i2cscan.h"

#include <VL6180X.h>
#include <ESP32Encoder.h>

// Definiciones del multiplexor I2C
#define TCAADDR 0x70

// Definiciones de IMU
#define MPU 3
#define MPUADDR 0x68

// Definiciones de sensores de distancia
#define VLDIAGDCHA 0
#define VLDIAGIZQ 4
#define VLFRONDCHA 1
#define VLFRONIZQ 2

// Definiciones de encoders
#define LEFT_ENCODER_A_PIN 37
#define LEFT_ENCODER_B_PIN 36
#define RIGHT_ENCODER_A_PIN 26 
#define RIGHT_ENCODER_B_PIN 25

// Definiciones para los motores
#define FRECUENCIA_PWM 31250      // Frecuencia de los PWM del arduino
#define RESOLUCION_N_BITS_PWM 8   // CAMBIAR A LA VEZ QUE MAX_PWM_SPEED
#define MAX_PWM_SPEED 255         // CAMBIAR A LA VEZ QUE RESOLUCION_N_BITS_PWM

#define LEFT_MOTOR_REV_PIN 33
#define LEFT_MOTOR_FWD_PIN 32
#define RIGHT_MOTOR_REV_PIN 27
#define RIGHT_MOTOR_FWD_PIN 13

#define LEFT_MOTOR_REV_CH 0
#define LEFT_MOTOR_FWD_CH 1
#define RIGHT_MOTOR_REV_CH 2
#define RIGHT_MOTOR_FWD_CH 3

// Definiciones para los estados de ejecución
#define ESTADO_INIT_SENSORS 0
#define ESTADO_CALIBRATION 1
#define ESTADO_TEST_SENSORS 2
#define ESTADO_WAIT 3
#define ESTADO_GENERATE_MAZE 4
#define ESTADO_SCOUT 5
#define ESTADO_READY_4_RUN 6
#define ESTADO_RUN 7

#endif