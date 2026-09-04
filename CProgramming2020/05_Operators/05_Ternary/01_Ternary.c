//Rohan Satyamurthy

/*
    Ternary Operator
 
    (Condition) ? True : False ;
 
 */

#include <stdio.h>

#define Value1 10.0
#define Value2 20.2

/*typedef <#existing#> datatype  <#new#> datatype; */

typedef int BOOL;

int main()
{
    
    BOOL iNum1 , iNum2;
    
    printf("Enter The two number\n");
    scanf("%d %d",&iNum1,&iNum2);
    
    //ternary
    BOOL ret = (iNum1 > iNum2) ? 1 : 0;
    
    printf("->%d\n",ret);
    
    printf("Value1 = %f\nValue2 = %f\n",Value1,Value2);
    (Value1 < Value2) ? printf("Goes in if\n") : printf("Goes in else\n");
    
    return(0);
    
}
