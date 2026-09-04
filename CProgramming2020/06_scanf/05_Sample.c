//Rohan Satyamurthy
//Date 06 Oct 2020
//Program : char int float double

#include<stdio.h>

int main()
{
	//local variables
	char cValue;
	int iValue;
	float fValue;
	double dValue;

	printf("Enter the values for char , int , float , double\n");
	scanf("%c %d %f %lf",&cValue,&iValue,&fValue,&dValue);

	printf("The entered value for char is %c\nint value is%d\nfloat is %0.2f\ndouble is %0.4lf\n\n",cValue,iValue,fValue,dValue);

	return(0);
}

