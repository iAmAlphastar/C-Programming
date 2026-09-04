//Rohan Satyamurthy
//Date : 31 Dec 2020
//Program : function for addition , subtraction , multiplication , division.
// with return value & parameter list

#include<stdio.h>


int main()
{
    //function prototype/Signature
    int Addition(int,int);
    int Subtraction(int,int);
    int Multiplication(int,int);
    int Division(int,int);
    
    //Local variables
    int iRet_Add = 0;
    int iRet_Sub = 0;
    int iRet_Mul = 0;
    int iRet_Div = 0;
    int iValue1,iValue2;
    
    printf("Enter the values \n\n");
    scanf("%d%d",&iValue1,&iValue2);

    iRet_Add = Addition(iValue1,iValue2);
    printf("The addition = %d\n",iRet_Add);
    
    iRet_Sub = Subtraction(iValue1,iValue2);
    printf("The subtraction = %d\n",iRet_Sub);
    
    iRet_Mul = Multiplication(iValue1,iValue2);
    printf("the multiplcation = %d\n",iRet_Mul);
    
    iRet_Div = Division(iValue1,iValue2);
    printf("the division = %d\n",iRet_Div);

    return(0);
}


//function definition
int Addition(int a,int b)
{
    int iSum = a + b;
    
    return(iSum);
    
}

int Subtraction(int a , int b)
{
    
    int iSum = a - b;
    
    return(iSum);
    
}

int Multiplication(int a, int b)
{
    int iSum = a * b;
    
    return(iSum);
        
}

int Division(int a,int b)
{
    int iSum = a / b;
    
    return(iSum);
    
}

