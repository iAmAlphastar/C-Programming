/*Exercise 6 — Rectangle
    input : length , width
    
    calculate : area , perimeter
    
 */

#include<stdio.h>

//function prototype

float perimeter_rect(float,float);
float area_rect(float,float);

int main()
{
    float length,width;
    
    printf("Enter the length and width : \n");
    scanf("%f%f", &length, &width);
    
    printf("Area : %f\n",area_rect(length,width));
    printf("Perimeter : %f\n",perimeter_rect(length,width));
    
    return(0);
}

float perimeter_rect(float length,float width)
{
    return(2 * (length + width));
}

float area_rect(float length,float width)
{
    return(length * width);
}
