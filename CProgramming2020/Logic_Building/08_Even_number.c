//Rohan Satyamurthy
//Date : 09 Nov 2020.
//Program :  Find the  Even eg : 0 , 2 , 4 , 6, 8 , 10 ....100 ...nth.

#include<stdio.h>

int main()
{
    //local variables
    
    int iValue = 0;
        
    //code
    printf("Enter the number\n\n");
    scanf("%d",&iValue);
    

    if((iValue % 2) == 0)
    {
        printf("Even Number\n\n");
    }

    return(0);
}
