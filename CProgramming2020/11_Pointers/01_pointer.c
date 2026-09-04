//basic decalaration


#include<stdio.h>

int main()
{
    //function prototype
    void Demo(int*);
    
    //variable declaration
    int num = 10;

    //pointer
    int *ptr = NULL;
    ptr = &num;
    
    printf("Num in main %d\n",num);
    printf("Address of Num %p\n",&num);
    printf("Address of ptr %p\n",&ptr);
    printf("Address inside ptr %p\n",ptr);
    printf("printf data using ptr before function call %d\n",*ptr);
    
    //function call
    Demo(&num);
    
    printf("printf data using ptr after function call %d\n",*ptr);
    
    return(0);
}

//function definition
void Demo(int *iPtr)
{
    printf("****************** In Demo Function ************************\n\n");
    printf("address of iPtr %p\n",&iPtr);
    printf("address inside iPtr %p\n\n",iPtr);
    printf("(before) :: data access from demo function *iPtr %d\n\n",*iPtr);
    
    *iPtr = 14;
    
    printf("(after) :: data access from demo function *iPtr %d\n\n",*iPtr);
}


