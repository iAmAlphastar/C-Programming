/*
 Area of a circle
 Here is an elementary C program that reads in the radius of a circle, calculates its area and then writes the calculated result.
*/

#include <stdio.h>

int main()
{
    float radius, area;
    printf("Radius = ? ");
    scanf("%f",&radius);
    area = 3.141519 * radius * radius;
    
    printf("Area of Circle = %f", area);
}
