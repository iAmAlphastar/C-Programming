//Rohan Satyamurthy
//06 Oct 2020
//Display use of scanf to accept int variables.

//header files
#include<stdio.h>
#include<stdlib.h>

//Entry Point function
int main()
{
	//local variable declaration
	int iNum1 = 0,iNum2 = 0;
	int iRet = 0;
	
	//code
	//Accepting two numbers from user
	printf("Enter two numbers..!!!\n");
	scanf("%d",&iNum1);			//we use &(refrence) operator for taking the variable location and scanf to accept values from the user.
	scanf("%d",&iNum2);

	//print the accepted output
	printf("The two numbers are %d and %d\n\n",iNum1,iNum2);

	return(0);
}

