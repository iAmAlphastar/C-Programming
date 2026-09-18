/* program to calculate the area of a circle */


#include <stdio.h>

#define PI 3.14159

float process(float radius);        //global function prototype

int main()
{

    float radius, area;
    
    printf("Radius = ? ");
    scanf("%f", &radius);
    area = process(radius);
    printf("Area of Circle = %f\n", area);

}

float process(float radius)
{
    float a;
    
    a= PI * radius * radius;
    return(a);
}
