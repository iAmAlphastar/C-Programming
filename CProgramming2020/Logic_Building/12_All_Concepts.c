//Rohan Satyamurthy

#include <stdio.h>

typedef int                 INTEGER;
typedef float               SINGLE_PRECISION;
typedef double              DOUBLE_PRECISION;
typedef SINGLE_PRECISION    SP;
typedef DOUBLE_PRECISION    DP;


int main()
{
    //Function signature
    INTEGER Add(int , int);     //int Add(int ,int );
    SP F_Add(SP,SP);
    DP D_Add(DP,DP);
    
    printf("Integer addition -> %d\n",Add(5,8));
    printf("Float addition -> %f\n",F_Add(3.141516,8.1917));
    printf("Double Addition -> %lf\n",D_Add(6.161817,9.1891818));
    
    
    return(0);
}

INTEGER Add(int a, int b)
{
    return(a+b);
}

SP F_Add(SP a,SP b)
{
    return(a+b);
}

DP D_Add(DP a,DP b)
{
    return(a+b);
}
