//Rohan Satyamurthy
//Date : 19 Oct 2020
//Program : display use of assignment operator.


//header file
#include<stdio.h>

//Entry point function
int main()
{
    int a=13;
    int b=14;
    int c=0;
    
    //display use of addition
    c = a;
    a += b;                    //a = a + b;
    printf("The Addition of two number are a = %d + b = %d = %d\n",c,b,a);

    //display use of Subtraction
    c = a;
    a -= b;                     //a = a - b;
    printf("The Subtraction of two number are a = %d - b = %d = %d\n",c,b,a);

    //display use of Multiplication
    c = a;
    a *= b;                     //a = a * b;
    printf("The Multiplication of two number are a = %d * b = %d = %d\n",c,b,a);

    //display use of Division
    c = a;
    a /= b; //a = a / b;
    printf("The Division of two number give Quotient a = %d \ b = %d = %d\n",c,b,a);

    //modulo
    c = a;
    a %= b;                 //a = a % b;
    printf("The Division of two number give Remainder a = %d % b = %d = %d\n",c,b,a);
    
    printf("\n\n");
    
    return(0);
}

