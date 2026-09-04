//Rohan Satyamurthy
//Date : 30 Dec 2020
//Program : write a function for addition 


/*
	
	return_type function_name(paramerter list);

	//1st 
		void add(void);
	
	//2nd 
		void add(int,int);

	//3rd
		int add(void);

	//4th
		int add(int , int); 

*/



#include<stdio.h>


int  main()
{
	
	//function prototype or signature
	int add(int,int);

	int iNum1 , iNum2 , iRet;
	
	printf("Enter the values \n");
	scanf("%d%d",&iNum1,&iNum2);

	
	//function call
	iRet =  add(iNum1,iNum2);
    
    printf("addition is :: %d",iRet);

	return(0);
}

//function definition
int add(int iValue1,int iValue2)
{

	int iSum  = iValue1 + iValue2;
	
    return(iSum);
    
}































