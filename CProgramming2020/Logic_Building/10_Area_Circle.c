//Name : Rohan Satyamurthy
//Date : 10 Nov 2020
//Program : Area of a Circle.
//Input : radius in float
//Output : area of a circle in float
//Formula: Area = Pi * r x r

#include<stdio.h>

#define PI 3.13156

int main()
{
    //local variable
    float AreaOfCircle,fRadius = 0.0f;
    
    
    //code
    printf("\nEnter the radius\n");
    scanf("%f",&fRadius);
    
    //formula
    AreaOfCircle = PI * (fRadius * fRadius);
    
    printf("The area of circle  is %0.4f\n",AreaOfCircle);
    
    return(0);
}
