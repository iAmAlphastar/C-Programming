//extern keyword
#include<stdio.h>

void add1()
{
	extern int iValue;

	iValue = 20;

	printf("%d\n", iValue);

}
