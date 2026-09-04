//Rohan Satyamurthy
//Date : 04 Jan 2021
//Program : types of function.

#include<stdio.h>

int main()
{
    //function prototype
    int add(void);
    
    //Local Variables
    int add_ret = 0;
    
    add_ret = add();
    printf("addition = %d\n",add_ret);
    
    return(0);
}

int add()
{
    //function prototype.
    int add_logic(int , int);
    int add_values(void);
    
    return(add_logic(add_values(),add_values()));
}

int add_logic(int a ,int b)
{
    int iSum = 0;
    
    iSum = a+b;

    return(iSum);
}

int add_values()
{
    //Local variable
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    return(iValue);
}
























