//extern keyword

#include <stdio.h>

//global varible
int iValue;

int main()
{
	//function prototype
	void add(void);
	void add1(void);
	
	printf("Before function call -> iValue = %d\n", iValue);

	add();
	add1();

	iValue = 9999;

	printf("After function call -> iValue = %d\n",iValue);

	return(0);
}

