/* Exercise 7 — Circle
 
    Area : Pi r * r
    circumference using radius : 2PI * r
 */

#include <stdio.h>

#define PI 3.14159      //constant

//function prototype
float area_circle(float);
float circumference_circle(float);

int main()
{

    float r;        //radius
    float area,circumference;
    
    printf("Enter the radius of circle : \n");
    scanf("%f",&r);
    
    printf("Area of Circle : %f\n", area_circle(r));
    printf("Circumference of Circle : %f\n", circumference_circle(r));
    
    return(0);
}

float area_circle(float r)
{
    return(PI * r * r);
}

float circumference_circle(float r)
{
    return((2*PI) * r);
}
