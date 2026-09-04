//Rohan Satyamurthy
//Date : 21 Oct 2020.
//Program : basic if statement.

//header file
#include<stdio.h>

/*
 Accept a value from user and find which age group does he/she fit.
 
    infant = 0 - 2 years
    children = 2 - 12 years
    teens    = 13 - 19 years
    adults   = 20 - 30 years
    mid age  = 40 - 59 years
    senior   = 60 and above.
 
 */

//Entry point function
int main()
{

    //local variable.
    int iAge;
    
    printf("Enter the values\n");
    scanf("%d",&iAge);

    //filter condition
    if(iAge > 120)
    {
        printf("Wow your are immortal \n");
        printf("Invaild input\n");
    }
    
    //0-2
    if(iAge > 0 && iAge <= 2)
    {
        printf("Infant age between 0 - 2\n");
    }
    if(iAge > 2 && iAge <=12)
    {
        printf("Children age between 2 - 12\n");
    }
    if(iAge >= 13 && iAge <= 19)
    {
        printf("Teens age between 13 to 19\n");
    }
    if(iAge >= 20 && iAge <= 30)
    {
        printf("Adults age between 20 - 30\n");
    }
    if(iAge > 30 && iAge <= 59)
    {
        printf("Mid age group age between 31 to 59\n");
    }
    if(iAge >= 60 && iAge <= 120)
    {
        printf("Senior above 60\n");
    }
    
    
    
    return(0);
}


//dry run


