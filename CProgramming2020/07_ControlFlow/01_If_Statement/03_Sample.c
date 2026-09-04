//Rohan Satyamurthy
//Date : 19 Oct 2020.
//Program : basic if statement.

//header file
#include<stdio.h>

/*
 Accept 2 input from user and find which number if greater than 18.
 */

//Entry point function
int main()
{

    //local variable.
    int iValue1;
    
    printf("Enter the values\n");
    scanf("%d",&iValue1);

    if(iValue1 > 18)
    {
        printf("The value is greater than 18\n");
    }
    
    if(iValue1 < 18)
    {
        printf("The value is less than 18\n");
    }
    
    return(0);
}


//dry run


