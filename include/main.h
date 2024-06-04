#ifndef main_h
#define main_h

#include <Arduino.h>
#include <Wire.h>
#include "setup.h"

boole initSensors (); // devolverá 0 si se han inicializado todos corrrectamente
void calibration ();
void testSensors ();
void generateMaze (uint8_t dimX, uint8_t dimY, uint8_t golalX, uint8_t golalY); // el goal indica la primera de las casillas del goal, el goal ha de ser de 4 celdas, por lo que si indicamos la (4,4), el goal será definido por la (4,4) la (4,5) la (5,4) y la (5,5)
boole scout (uint16_t timeLimit); // si no consigue llegar al goal en el tiempo establecido, devolverá un 1 si llega al goal, error 0 todo ok.
void run();

#endif