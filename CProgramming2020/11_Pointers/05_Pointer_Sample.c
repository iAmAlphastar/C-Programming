//Rohan Satyamurthy
//Date : 15 June 2021


#include  <stdio.h>

typedef int*   iPtr;
typedef char*  cPtr;


int main()
{

    int num =  11;          //4  byte &num = 100
    iPtr ptr = NULL;        //4  byte
    iPtr ptr2 = NULL;
    
    ptr = &num;             //ptr  = 100
        
    ptr2  = ptr;
    
    
    printf("num : %d\n",num);
    printf("num : %p\n",&num);
    printf("ptr : %p\n",ptr);
    printf("*ptr: %d\n",*ptr);
    printf("&ptr  : %p\n",&ptr);
    printf("ptr2 : %p\n",ptr2);
    printf("*ptr2  : %d\n",*ptr2);
    printf("&ptr2  : %p\n",&ptr2);

    
    return(0);
}

