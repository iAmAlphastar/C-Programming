//Rohan Satyamurthy
//Date : 31 Dec 2020
//Program : function for addition , subtraction , multiplication , division.
// with return value & no parameter list

#include<stdio.h>


int main()
{
    //function prototype/Signature
    int Addition(void);
    int Subtraction(void);
    int Multiplication(void);
    int Division(void);
    
    //Local variables
    int iRet_Add = 0;
    int iRet_Sub = 0;
    int iRet_Mul = 0;
    int iRet_Div = 0;
    
    iRet_Mul = Multiplication();
    printf("the multiplcation = %d\n",iRet_Mul);
    
    iRet_Div = Division();
    printf("the Division %d\n",iRet_Div);
   
    iRet_Add = Addition();
    printf("The addition = %d\n",iRet_Add);
    
    iRet_Sub = Subtraction();
    printf("The subtraction = %d\n",iRet_Sub);
    
    
    
    return(0);
}


//function definition
int Addition()
{
    int a ,b;
    
    printf("Enter the values Add\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a + b;
    
    return(iSum);

}

int Subtraction()
{
    int a ,b;
    
    printf("Enter the values Sub\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a - b;
    
    return(iSum);
    
}

int Multiplication()
{
    int a ,b;
    
    printf("Enter the values Mul\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a * b;
    
    return(iSum);
    
    
}

int Division()
{
    int a ,b;
    
    printf("Enter the values Div\n");
    scanf("%d%d",&a,&b);
    
    int iSum = a / b;
    
    return(iSum);
    
}
