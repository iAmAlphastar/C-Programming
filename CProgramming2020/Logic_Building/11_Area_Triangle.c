//Name : Rohan Satyamurthy
//Date : 10 Nov 2020
//Program : Area of a Triangle.
//Input : height , base
//Output : Area of Triangle
//Formula: Area = h x b / 2;

#include<stdio.h>

#define PI 3.13156

int main()
{
    //function prototype
    void AreaOfTriangle(void);
    
    AreaOfTriangle();
    
    return(0);
}

void AreaOfTriangle()
{
    //local variable
    float  fHeight , fBase , AreaOfTriangle;
    
    
    //code
    printf("\nEnter the Height and Base\n");
    scanf("%f%f",&fHeight,&fBase);
    
    //formula
    AreaOfTriangle = (fHeight * fBase) / 2;
    
    printf("The area of triangle  is %0.4f\n",AreaOfTriangle);
    
}

