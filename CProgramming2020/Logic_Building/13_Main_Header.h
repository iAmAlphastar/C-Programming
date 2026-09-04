//Rohan Satyamurthy

#include <stdio.h>

typedef int                 INTEGER;
typedef float               SINGLE_PRECISION;
typedef double              DOUBLE_PRECISION;
typedef SINGLE_PRECISION    SP;
typedef DOUBLE_PRECISION    DP;

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
