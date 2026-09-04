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
	int add(void);
	
	//function call
    int ret = add();

    printf("Addition of the values are %d\n",ret);
    
	return(0);
}

//function definition
int add(void)
{

    //local variables
	int iSum , a  ,b;
	
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    
    iSum = a + b;
    
    return(iSum);
	
}































