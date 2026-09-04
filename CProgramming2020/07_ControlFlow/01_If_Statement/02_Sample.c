//Rohan Satyamurthy
//Date : 19 Oct 2020.
//Program : basic if statement.

//header file
#include<stdio.h>

/*
 Accept 2 input from user and find which number is greater.
 */

//Entry point function
int main()
{

    //local variable.
    int iValue1;
    int iValue2;
    
    printf("Enter the values\n");
    scanf("%d%d",&iValue1,&iValue2);
    
    if(iValue1 > iValue2)
    {
        printf("The iValue 1 %d is greater\n",iValue1);
    }
    
    if(iValue1 < iValue2)
    {
        printf("The iValue 2 %d is greater\n",iValue2);
    }
    
    return(0);
}


//dry run


