//Rohan Satyamurthy
//Date : 31 Dec 2020
//Program : function for addition , subtraction , multiplication , division.
// with no return value & parameter list

#include<stdio.h>


int main()
{
    //function prototype/Signature
    void Addition(int,int);
    void Subtraction(int,int);
    void Multiplication(int,int);
    void Division(int,int);
    
    //Local variables
    int iValue1,iValue2;
    
    printf("Enter the values \n\n");
    scanf("%d%d",&iValue1,&iValue2);

    Addition(iValue1,iValue2);
    
    Subtraction(iValue1,iValue2);
    
    Multiplication(iValue1,iValue2);
    
    Division(iValue1,iValue2);
    

    return(0);
}


//function definition
void Addition(int a,int b)
{
    int iSum = a + b;
    
    printf("The Add = %d\n",iSum);

}

void Subtraction(int a , int b)
{
    
    int iSum = a - b;
    
    printf("The Sub = %d\n",iSum);
    
}

void Multiplication(int a, int b)
{
    int iSum = a * b;
    
    printf("The Mult = %d\n",iSum);
        
}

void Division(int a,int b)
{
    int iSum = a / b;
    
    printf("The Div = %d\n",iSum);
    
}
