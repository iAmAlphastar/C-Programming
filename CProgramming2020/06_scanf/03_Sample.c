//Rohan Satyamurthy
//Date 06 Oct 2020
//program : accept int float variable.

#include<stdio.h>


int main()
{
	//local variable
	int iNumber = 0;
	float fValue = 0.0f;
	
	printf("Enter the two number");
	scanf("%d%f",&iNumber,&fValue);

	//printing the two accepted values
	printf("the int variable is %d and float variable is %f\n",iNumber,fValue);

	return(0);
}

