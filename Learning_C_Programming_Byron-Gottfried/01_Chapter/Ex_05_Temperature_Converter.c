/* Exercise 5 — Temperature Converter
 Celsius → Fahrenheit
 F = (C × 9 / 5) + 32
 
 Temperature in Celsius: 25
 Fahrenheit: 77.00
 
 */

#include <stdio.h>

//function prototype
float temp_conversion_c_f(float);

int main()
{
    float f,c;
    
    printf("Enter Temperature in Celsius:");
    scanf("%f",&c);
    
    f = temp_conversion_c_f(c);
    
    printf("Fahrenheit: %.2f",f);
    
    return(0);
}

float temp_conversion_c_f(float c)
{
    float f;
    
    f = (c * 9 / 5) + 32;
    
    return(f);
}
