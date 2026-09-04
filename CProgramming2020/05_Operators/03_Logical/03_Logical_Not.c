//Rohan Satyamurthy
//21 Sept 2020

/*
    Logical not toggles the answer:
         -------
        |A | O/P|
         -------
         1 |  0
         0 |  1
    
 */

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 4;

	printf("%d\n",a);
	printf("Not a %d\n",!(a));

    printf("b %d\n",b);
	printf("Not b %d\n",!b);	

    //int c = (a<b)&&(a==b)||(a>b);
    
/*    int c =0,d=3;
    c = (6 ^ 8) & (4 ^ 5);
    
    printf("->> %d\n",c);
  */
	return(0);
}
