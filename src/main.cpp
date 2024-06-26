#include "main.h"
//variables referentes al laberinto
uint8_t maze[16][16][2]; // las 2 primeras dimensiones son referentes a la ubicación X e Y siendo la 0 0 la salida, la 0 1 la siguiente hacia el norte
                           // la tercera dimensión, el primer byte es para indicar el estado de las paredes siendo 8 booleanos WSENWSEN
                           // 00 = no visitada (por revisar).
                           // 01 = no visitada, pero no se necesita revisar (pared virtual).
                           // 10 = revisada, no hay pared.
                           // 11 = revisada, si hay pared.
                           // El segundo byte de la 3 dimensión es donde se guardarán los pesos del algoritmo del flood fill

//variables referentes a la posición del mouse
uint8_t currentPositionMazeX [] = {0, 0, 0}; // indica la posicion dentro del laberinto [X,Y, orientación] La orientación indica hacia donde miraba el robot cuando entra en la celda.
float currentPositionCell [] = {0, 0, 0}; // indica la posicion dentro de la casilla actual laberinto [X,Y,Angulo]

//variables referentes a velocidades y aceleraciones
float currentSpeedX = 0; //indica la velocidad lineal actual a la que vamos en m/s
float currentSpeedW = 0; // indica la velocidad angular a la que va el robot en rad/s
float targetSpeedX = 0; // velocidad deseada en m/s
float targetSpeedW = 0; // velocidad angular deseada en rad/s
float errorSpeedX = 0; // diferencia entre la deseada y la real  en m/s 
float errorSpeedW = 0; // diferencia entre la deseada y la real  en rad/s
float accMaxX = 600;//indica la aceleración maxima lineal en m/s^2
float accMaxW = 1; //indica la aceleración maxima angular en rad/s^2





void setup()
{
  Serial.begin(115200);
}

void loop()
{

}

boolean initSensors (){
  return 0;
}
void calibration (){

}
void testSensors (){

}
void generateMaze (uint8_t dimX, uint8_t dimY, uint8_t golalX, uint8_t golalY){

}
boolean scout (uint16_t timeLimit){
  return 0;  

}
void run(){

}
