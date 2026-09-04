//Rohan Satyamurthy
//Modified on 16 Sept 2020
//prefix postfix


//header files
#include<stdio.h>
#include<stdlib.h>



//Entry Point function
int main()
{
    //Local variable
    int b = 1;
//1
        printf("prefix\n");
        printf("before ++b b = %d\t",b);    //1
        printf(" ++b = %d\t",++b);          //2
        printf("after ++b b = %d\n\n\n",b);     //2

    
        printf("postfix\n");
        printf("before b++ b = %d\t",b);    //1
        printf(" b++ = %d\t",b++);          //1
        printf("after b++ b = %d\n",b);     //2

//2
        printf("prefix\n");
        printf("before --b b = %d\t",b);    //1
        printf(" --b = %d\t",--b);          //2
        printf("after --b b = %d\n\n\n",b);     //2

    
        printf("postfix\n");
        printf("before b-- b = %d\t",b);    //1
        printf(" b-- = %d\t",b--);          //1
        printf("after b-- b = %d\n",b);     //2


    
    
    
    return(0);
}

/*
 //3
    printf("a = %d\t",a);          //1
    printf("a = %d\t",a++);        //1
    printf("a = %d\t\n",++a);      //3

 //4
     printf("a = %d\t",a);          //1
     printf("a = %d\t",a--);        //1
     printf("a = %d\t\n",--a);      //3

 
 */

