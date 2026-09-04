//Rohan Satyamurthy
//Date : 09 Nov 2020.
//Program :  Find the  Odd number eg : 1 ,3 , 5 ,7 ,9 ,11 , 13 .....nth.

#include<stdio.h>

int main()
{
    //local variables
    
    int iValue = 0;
        
    //code
    printf("Enter the number\n\n");
    scanf("%d",&iValue);
    

    if((iValue % 2) != 0)
    {
        printf("Odd Number\n\n");
    }
    else
    {
        printf("Even Number\n\n");
    }

    return(0);
}
