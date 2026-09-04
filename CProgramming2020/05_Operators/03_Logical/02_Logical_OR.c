//Rohan Satyamurthy
//21 Sept 2020

/*
    Logical OR i.e. ||
    
    truth table:
     A   B  O/P
     
     0   0   0
     0   1   1
     1   0   1
     1   1   1
    
    || will return TRUE or 1 only when both or either one input is 1 OR TRUE 1.
 
 note : if  answer is true it will return 1
        if  answer is false it will return 0
     
 */



#include<stdio.h>

int main()
{
	int a = 13;
	int b = 4;
    int c = 0;
    
    
    printf("\n\tIf Answer is TRUE , it will give output 1\n");
    printf("\tIf Answer is FALSE , it will give output 0\n\n\n");
    
    
    c = (a < b) || (a <= b);
    printf("The answer for the expression is %d\n",c);

    c = ((a == b) || (a >= b)) || (a < b);
    printf("The answer for the expression is %d\n",c);

    c = (a == b) || (a <= b);
    printf("The answer for the expression is %d\n",c);

    c = (a <= b) || (a >= b);
    printf("The answer for the expression is %d\n",c);

    c = ((a > b) || (b < a)) || ((a != b) || (a == b));
    printf("The answer for the expression is %d\n",c);

    c = ((a > b) || (a < b)) || (((a > b) || (b < a)) || ((a != b) || (a == b)));
    printf("The answer for the expression is %d\n",c);

    
    
    
    
	return(0);
}
