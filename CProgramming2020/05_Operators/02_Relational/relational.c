//Rohan Satyamurthy 
//Date 28 Sept 2020
//Program : Relational operators.


/*
 note : if  answer is true it will return 1
        if  answer is false it will return 0
        
         <  - less than
         >  - greater than
         <= - less than equal to
         >= - greater than equal to
         == - equal to
         != - not equal to
    
 */


#include<stdio.h>

int main()
{
	int a,b,c;

	a = 5;
	b = 6;
    c = -1; //to store answer we have store -1 because 1 & 0 are already occupied.
    
    printf("\n\tIf Answer is TRUE , it will give output 1\n");
    printf("\tIf Answer is FALSE , it will give output 0\n\n\n");
    
    c = a < b;
    printf("a < b  i.e. %d < %d  = %d\n",a,b,c);

    c = a > b;
    printf("a > b  i.e. %d > %d  = %d\n",a,b,c);

    c = a <= b;
    printf("a <= b i.e. %d <= %d = %d\n",a,b,c);

    c = a >= b;
    printf("a >= b i.e. %d >= %d = %d\n",a,b,c);
    
    c = a == b;
    printf("a == b i.e. %d == %d = %d\n",a,b,c);
    
    c = a != b;
    printf("a != b i.e. %d != %d = %d\n",a,b,c);

    printf("\n\n");
    
	return(0);
}

