/* program to calculate the areas of circles, using a for loop; the number of circles i s unspecified */

#include <stdio.h>

#define PI 3.14159

float process(float);       /* function prototype */

int main()
{
    float radius,area;
    
    printf("To STOP, enter 0 for the radius\n");
    
    printf("Enter the radius for the circle");
    scanf("%f", &radius);
    
    while(radius != 0)
    {
        if(radius < 0)
            area = 0;
        else
            area = process(radius);
     
        printf("Area of Circle = %f\n", area);
        
        printf("Enter the radius for the circle");
        scanf("%f", &radius);
    }
}

float process(float r)
{
    return(PI * r * r);
}
