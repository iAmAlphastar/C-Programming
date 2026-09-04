//Rohan Satyamurthy
//Date : 30 Dec 2020
//Program : function for addition , subtraction , multiplication , division.


#include<stdio.h>


int main()
{
    //function
    void Addition(void);
    void Subtraction(void);
    void Multiplication(void);
    void Division(void);
    
    Multiplication();
    Division();
    Addition();
    Subtraction();
    
    
    
    return(0);
}


//function definition
void Addition()
{
    int a ,b;
    
    printf("Enter the values Add\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a + b;
    
    printf("the addition of %d + %d = %d\n",a,b,iSum);
    
}

void Subtraction()
{
    int a ,b;
    
    printf("Enter the values Sub\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a - b;
    
    printf("the subtraction of %d - %d = %d\n",a,b,iSum);
    
    
}

void Multiplication()
{
    int a ,b;
    
    printf("Enter the values Mul\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a * b;
    
    printf("the multiplcation of %d * %d = %d\n",a,b,iSum);
    
    
}

void Division()
{
    int a ,b;
    
    printf("Enter the values Div\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a / b;
    
    printf("the Division of %d / %d = %d\n",a,b,iSum);
    
    
}


























