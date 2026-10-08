/*
 int device_id = 101;
 float temperature = 28.5;
 char status = 'A';
 */

#include <stdio.h>


int main()
{
    int device_id = 101;
    float temperature = 28.5;
    char status = 'A';
    
    printf("device_id = %d\ntemperature = %f\nstatus = %c\n",device_id,temperature,status);
    
    int a = 10;
    int b = 20;
    int c;
    
    c = a + b;
    
    printf("%d + %d = %d\n",a,b,c);
    
    return(0);
}
