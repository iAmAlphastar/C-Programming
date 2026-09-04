//Rohan Satyamurthy
//Date : 29 Dec 2020
//Program : write a function for addition


/*
	
	return_type function_name(paramerter list);

	//1st 
		void add(void);
	
	//2nd 
		int add(void);

	//3rd
		void add(int,int);

	//4th
		int add(int , int); 

*/



#include<stdio.h>


int  main()
{
	
	//function prototype or signature
	void add(void);	
	
	//function call
	add();

	return(0);
}

//function definition
void add(void)
{
	int iNum1 , iNum2 , iSum;
	
	printf("Enter the values \n");
	scanf("%d%d",&iNum1,&iNum2);

	iSum  = iNum1 + iNum2;
	
	printf("Additon of %d + %d = %d\n\n",iNum1,iNum2,iSum);
}



