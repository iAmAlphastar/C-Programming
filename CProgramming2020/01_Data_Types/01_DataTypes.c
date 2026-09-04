////////////////////////////////////////////////////////////
//
//  Name : Rohan Satyamurthy
//  Program : display use of Data Types
//  Date : 08 Aug 2020
//
//
///////////////////////////////////////////////////////////

//header file
#include<stdio.h>

// GCC GNU (Complier Collection) -> GNU (GNU Not UNIX)
//                         (Assembly)
// DataTypes.c -complier-> DataTypes.s -Assembler-> DataTypes.o -Linker-> DataTypes.exe(a.out)
// variable name always starts with char or underscore (_)


//Entry Point function
int main()
{
    
    //local variable declaration for int
    int a; //integer variable
    int b;

    //local variable declaration for float
    float c;
    float d;

    //local variable declaration for double
    double e;
    double f;

    //local variable declaration for char
    char ch1;
    char ch2;

    a = 14;
    b = 15;
    
    c = 14.6f;
    d = 15.876f;
    
    e = 908.86673;
    f = 987.27262;
    
    ch1 = 'A';
    ch2 = 'Z';
    
    printf("Display int a = %d\tint b = %d\n\n",a,b);
    printf("Display float c = %f\tint d = %f\n\n",c,d);
    printf("Display double e = %lf\tint b = %lf\n\n",e,f);
    printf("Display char ch1 = %c\tchar ch2 = %c\n\n",ch1,ch2);
    
    //sizeof();
    printf("Size of int = %lu byte\n",sizeof(int));
    printf("Size of int a = %lu byte\n",sizeof(a));
    printf("Size of int b = %lu byte\n",sizeof(b));
    
    return(0);
}




   
