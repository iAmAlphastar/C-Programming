/* program to calculate the areas of circles, using a while loop; the results are stored in an array of structures; the number of circles is unspecified; a string is entered to identify each data set */

#include<stdio.h>

#define PI 3.14159

float process(float radius);

int main()
{
    
    int n, i = 0;
    
    struct
    {
        char text[20];
        float radius;
        float area;
    }circle[10];                    /*structure variable declaration , its array of structure */
    
    printf("To Stop enter END for the identifier\n");
    printf("\nIdentifier: ");
    scanf("%s", circle[i].text);
    
    while(circle[i].text[0] != 'E' || circle[i].text[1] != 'N' || circle[i].text[2] != 'D')
    {
        printf("Radius: ");
        scanf("%f",&circle[i].radius);
        
        if(circle[i].radius < 0)
            circle[i].area = 0;
        else
            circle[i].area = process(circle[i].radius);
        
        ++i;
        
        printf("\nIdentifier: ");       //next set of data
        scanf("%s", circle[i].text);
    }//end of while
    
    n = --i;    /* tag the highest value of i */
    
    /* display the array elements */
    
    for(i = 0; i <= n ; ++i)
    {
        printf("%s radius %f area %f\n", circle[i].text,circle[i].radius,circle[i].area);
    }
    
}//end of main

float process(float r)
{
    return(PI * r * r);
}
