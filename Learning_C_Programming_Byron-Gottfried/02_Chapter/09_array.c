/*
 Sensor Data Array

 this can be done manually as well as user input
 manual :
 float temperature[5];

 temperature[0] = 25.5;
 temperature[1] = 26.2;
 temperature[2] = 27.1;
 temperature[3] = 28.4;
 temperature[4] = 29.0;
 
 and print it
 */

#include <stdio.h>

int main()
{
    float temperature[5];
    
    printf("Enter data for temperature\n");
    for(int i = 0 ;i < 5; ++i)
    {
        scanf("%f",&temperature[i]);
    }
    
    for(int i = 0 ;i < 5; ++i)
    {
        printf("temperature[%d] = %f\n",i,temperature[i]);
    }
    
    return(0);
}

