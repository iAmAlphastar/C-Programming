//Rohan Satyamurthy
//Date : 04 Jan 2021
//Program : function inside a function
#include<stdio.h>


int main()
{
    //function prototype/Signature
    void Addition(int,int);
    
    //Local variables
    int iValue1,iValue2;
    
    printf("Enter the values \n\n");
    scanf("%d%d",&iValue1,&iValue2);

    Addition(iValue1,iValue2);
    
    return(0);
}


//function definition
void Addition(int a,int b)
{
    void Subtraction(int,int);
    
    int iSum = a + b;
    
    printf("The Add = %d\n",iSum);
    
    Subtraction(a,b);

}

void Subtraction(int a , int b)
{
    
    void Multiplication(int,int);
    
    int iSum = a - b;
    
    printf("The Sub = %d\n",iSum);
    
    Multiplication(a,b);
    
}

void Multiplication(int a, int b)
{
    void Division(int,int);
    
    int iSum = a * b;
    
    printf("The Mult = %d\n",iSum);
    
    Division(a,b);
}

void Division(int a,int b)
{
    int iSum = a / b;
    
    printf("The Div = %d\n",iSum);
    
}
