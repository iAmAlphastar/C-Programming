/* program to calculate the areas of circles, using a while loop; the results are stored i n an array; the number of circles is unspecified */

#include <stdio.h>
#define PI 3.14159

/* function prototype */
float process(float radius);

int main()
{
    int n, i = 0;
    float radius[100], area[100];
    
    printf("To Stop, enter 0 for the radius\n\n");
    printf("Radius = ? ");
    scanf("%f",&radius[i]);
    
    while(radius[i] != 0)
    {
        if(radius[i] < 0)
            area[i] = 0;
        else
            area[i] = process(radius[i]);
        
        printf("Radius = ? ");
        scanf("%f",&radius[++i]);
    }//end of while
    
    n = --i;
    
    /* display array elements */
    printf("\n Summary of Results\n\n");
    for(i = 0; i <= n ; ++i)
        printf("Radius = %f  Area %f\n",radius[i],area[i]);
    
}//end of main

float process(float radius)
{
    float a;
    
    a = PI * radius * radius;
    return(a);
}
