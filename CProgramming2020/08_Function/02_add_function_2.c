//Rohan Satyamurthy
//Date : 29 Dec 2020
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
	void add(int,int);	

	int iNum1 , iNum2;
	
	printf("Enter the values \n");
	scanf("%d%d",&iNum1,&iNum2);

	
	//function call
	add(iNum1,iNum2);

	return(0);
}

//function definition
void add(int a,int b)
{

	int iSum  = a + b;	
	
	printf("Addition of %d + %d = %d\n\n",a,b,iSum);
}































