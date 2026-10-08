/*
 
 Practical 12 — Sensor Channel Array
 
 */

#include<stdio.h>

#define temperature 28.5
#define pressure    1012.4
#define voltage     3.30
#define current     0.42

int main()
{
    float sensor[4];
    
    sensor[0] = temperature;
    sensor[1] = pressure;
    sensor[2] = voltage;
    sensor[3] = current;
    
    printf("Temperature\t : %f\nPressure\t : %f\nVoltage\t\t : %f\ncurrent\t\t : %f\n",temperature,pressure,voltage,current);
    
    return(0);
}
