//Rohan Satyamurthy
//06 Oct 2020
//program to printf all the format specifier.

#include<stdio.h>

int main()
{
	//local variable 
	char cValue;
	int iValue;
	float fValue;
	double dValue;
	
	unsigned int UINT;
	long int lValue;
	long double ldValue;
		
		
	printf("Enter value for int\n");
	scanf("%d",&iValue);
	
	printf("Enter the value for float\n");
	scanf("%f",&fValue);
	
	printf("Enter the value for double\n");
	scanf("%lf",&dValue);

	printf("Enter a Character\n");
	scanf(" %c",&cValue);

	//for rest of the format specifier
	
	printf("Enter the value for unsigned int\n");
	scanf("%u",&UINT);

	printf("Enter the value for long int\n");
	scanf("%ld",&lValue);
	
	printf("Enter the value for long double\n");
	scanf("%Lg",&ldValue);

	printf("int value is %d\nfloat value is %f\ndouble value is %lf\nchar value is %c\nunsigned int value is %u\nlong int value is %ld\nlong double is %Lg\n\n",iValue,fValue,dValue,cValue,UINT,lValue,ldValue);	


	return(0);
}

