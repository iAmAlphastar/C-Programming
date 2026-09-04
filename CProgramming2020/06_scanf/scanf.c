//Rohan Satyamurthy
//example of scanf
//date 5 Oct 2020



#include<stdio.h>


int main()
{

	int iNum1,iNum2,iSum;

	printf("Enter two number\n");
	scanf("%d",&iNum1);
	scanf("%d",&iNum2);

	//Addition
	iSum = iNum1 + iNum2;

	//printf("Address of iNum1 = %p\nAddress of iNum2 = %p\nAddress of iSum = %p\n",&iNum1,&iNum2,&iSum);

	printf("Addition of two number %d + %d = %d\n\n",iNum1,iNum2,iSum);
	

	iSum = iNum1 * iNum2;
	printf("Multiplication of two number %d x %d = %d\n",iNum1,iNum2,iSum);

	//Subtraction
	iSum = iNum1 - iNum2;
	printf("Subtraction of two number %d - %d = %d\n",iNum1,iNum2,iSum);

	//Division
	float fSum=0.0f;
	float fNum1,fNum2;

	fNum1 = iNum1;	//copy from iNum1 to fNum1
	fNum2 = iNum2;	//copy from iNum2 to fNum2

	fSum = iNum1/iNum2;
	printf("Division of two number %f / %f = %f",fNum1,fNum2,fSum);

	return(0);

}
