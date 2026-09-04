//Rohan Satyamurthy
//Date : 19 Oct 2020
//Program : display use of arithmetic operator.


//header file
#include<stdio.h>

//Entry point function
int main()
{
    int a=13;
    int b=14;
    int c=0;
    
    //display use of addition
    c = a + b;
    printf("The Addition of two number are %d\n",c);

    //display use of Subtraction
    c = a - b;
    printf("The Subtraction of two number are %d\n",c);

    //display use of Multiplication
    c = a * b;
    printf("The Multiplication of two number are %d\n",c);

    //display use of Division
    c = a / b;
    printf("The Division of two number give Quotient %d\n",c);

    c = a % b;
    printf("The Division of two number give Remainder %d\n",c);
    
    printf("\n\n");
    
    return(0);
}

