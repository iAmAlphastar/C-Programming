//swap using call by reference



#include<stdio.h>

int main()
{
    //function prototype
    void function1(int*,int*);
    
    int a = 14;
    int b = 15;
    
    printf("values before function call :: a = %d b = %d\n",a,b);
    
    //function call
    function1(&a,&b);
    
    printf("values after function call :: a = %d b = %d\n",a,b);
    
    return(0);
}

//function for swap
void function1(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
        
}
