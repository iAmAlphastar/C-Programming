/*
 display variable modification
 this can be done in many ways manuall and progamatically
 
 int temperature = 25;
 
 */

#include <stdio.h>

int main()
{
    int temperature = 25;
    int i = 0;      //use as counter
    
    while(i <= 3)
    {
        printf("temperature = %d\n",temperature);
        temperature+=5;     //this is short hand operator equivalent to temp = temp + 5
        ++i;
    }
    
    return(0);
}
