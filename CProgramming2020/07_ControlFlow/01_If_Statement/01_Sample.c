//Rohan Satyamurthy
//Date : 19 Oct 2020.
//Program : basic if statement.

//header file
#include<stdio.h>

/*
 Accept input from user and find if that number is greater than 50.
 */

//Entry point function
int main()
{
    //Local variable
    int iValue = 0;
    
    printf("Enter the number to be tested..!!!\n");
    scanf("%d",&iValue);

    if(iValue > 50)
    {
        printf("iValue = %d is greater than 50\n",iValue);
    }
    
    if(iValue < 50)
    {
        printf("iValue = %d is less than 50\n",iValue);
    }
    
    return(0);
}


//dry run


