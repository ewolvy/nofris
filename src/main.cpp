#include "main.h"

//variables referentes a velocidades y aceleraciones
float currentSpeedX = 0; //indica la velocidad lineal actual a la que vamos en m/s
float currentSpeedW = 0; // indica la velocidad angular a la que va el robot en rad/s
float targetSpeedX = 0; // velocidad deseada en m/s
float targetSpeedW = 0; // velocidad angular deseada en rad/s
float errorSpeedX = 0; // diferencia entre la deseada y la real  en m/s 
float errorSpeedW = 0; // diferencia entre la deseada y la real  en rad/s
float accMaxX = 600;//indica la aceleración maxima lineal en m/s^2
float accMaxW = 1; //indica la aceleración maxima angular en rad/s^2

//variables referentes a los PID
// hay diferentes perfiles de PID de la velocidad angular para diferentes curvas
float kpX = 2, kdX = 4; // PD de la la velocidad lineal
float kpW = 1, kdW = 12; // PD de la velocidad angular en recta
float kpW1 = 1, kdW1 = 26;//usado en T1 y T3 en curva
float kpW2 = 1, kdW2 = 36;//usado en T2 en curva




void setup()
{
  Serial.begin(115200);
}

void loop()
{

}


