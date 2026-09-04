//extern keyword

//#include <stdio.h>
#include<stdio.h>

void add()
{
	extern int iValue;

	iValue = 50;

	printf("%d\n",iValue);

	iValue = 40;
}

