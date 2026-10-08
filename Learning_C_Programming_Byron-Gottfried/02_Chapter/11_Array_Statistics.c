/*
 Array Statistics
 we need to calculate
 Minimum
 Maximum
 Average
 */

#include <stdio.h>

//function prototype
float Maxmimum(float[]);
float Minimum(float[]);
float Average(float[]);

int main()
{
    float temperature[10] = {28.5f, 29.1f, 27.8f, 30.2f,31.5f, 29.7f, 28.9f,32.1f,30.5f,29.8f};
    
    //float max = Maxmimum(temperature);
    //float min = Minimum(temperature);
    
    printf("Maxmimum = %f\n",Maxmimum(temperature));
    printf("Minimum = %f\n",Minimum(temperature));
    printf("Average = %f\n", Average(&temperature[0]));
    
    
    return(0);
}

float Maxmimum(float arr[])
{
    //printf("inside max temperature[0] %f\n", arr[0]);
    
    float max = arr[0];
    
    for(int i = 1; i < 10; ++i)
    {
            if(arr[i] > max)
                max = arr[i];
    }

    return(max);
}

float Minimum(float arr[])
{
    float min = arr[0];
    for(int i = 1; i < 10; ++i)
    {
            if(arr[i] < min)
                min = arr[i];
    }

    return(min);
}

float Average(float arr[])
{
    float sum = 0;
    for(int i = 0; i < 10; ++i)
    {
        sum = sum + arr[i];
    }
    
    return(sum/10);
}
