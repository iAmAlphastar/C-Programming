//Macro Function



#include <stdio.h>


#define MAX(a,b) ((a > b) ? 'a' : 'b')

typedef int UINT;
typedef float F;


int main()
{

    
    
    UINT iValue = 0;
    iValue = MAX(12,13);
    printf("%c\n",iValue);
    
    F fValue = 0.0f;
    fValue = MAX(2.14,2.0);
    //UINT(fValue);
    printf("%2.0f\n",fValue);


    
}


/*
void MAX(int a , int b)
{
    if(a > b)
        printf("a MAX\n");
    else
        printf("b MAX\n");
    
}
 */
