/*Exercise 4 — Basic Calculator*/

#include <stdio.h>

//function prototype

int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int main()
{
    int a,b;
    
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    printf("Addition        :%d\n",addition(a,b));
    printf("subtraction     :%d\n",subtraction(a,b));
    printf("multiplication  :%d\n",multiplication(a,b));
    printf("division        :%d\n",division(a,b));
    
    return(0);
}

int addition(int a,int b)
{
    return(a+b);
}

int subtraction(int a,int b)
{
    return(a-b);
}

int multiplication(int a,int b)
{
    return(a*b);
}

int division(int a,int b)
{
    return(a/b);
}
