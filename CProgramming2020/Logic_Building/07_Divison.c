//Rohan Satyamurthy
//Date : 09 Nov 2020
//Program : to find Remainder , Quotient of number.

#include<stdio.h>


int main()
{
    
    //local variable
    int iValue1 , iValue2;
    
    printf("Enter  the values\n\n");
    scanf("%d%d",&iValue1,&iValue2);
    

    printf("The Quotient of two numbers %d / %d = %d\n",iValue1,iValue2,(iValue1/iValue2));
    printf("The Remainder of two numbers %d mod %d = %d\n",iValue1,iValue2,(iValue1%iValue2));
    
    
    return(0);
}
