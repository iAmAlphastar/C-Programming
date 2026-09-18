/* program to calculate the area of a circle, with error checking */

#include <stdio.h>

#define PI 3.14159

float process(float);   //fuction prototype

int main()
{
    float radius, area;
    
    printf("Radius = ? ");
    scanf("%f", &radius);
    
    if(radius < 0)
        area = 0;
    else
        area = process(radius);
    
    printf("Area of the Circle= %f",area);
}

float process(float r)
{
    float a;
    
    a = PI * r * r;
    return(a);
}

