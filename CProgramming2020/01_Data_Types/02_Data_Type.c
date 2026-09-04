//Rohan Satyamurthy
// Date 21 Oct 2020
// Sample to display use of data type


//header file
#include<stdio.h>


//entry point function

/*
 
    #variable naming convention should always start character i.e. A-Z a-z.
    #Always give meaningful name to the varible.
 
    variable name should't start with number i.e. 0-9 or special character/symbol.
    
    Right :(Allowed)
        Variable , iNumber , fValue, dSum , _Value.
    
    Wrong :(Not Allowed)
        12Variable , #number , $Sum , @Number.
    
 
 */

//Entry point function
int main()
{
	
	//Local variables
	
	int a;  //variable declaration
	int b;
    int c;
    
	//float variable
	float c;
	float d;

	//double
	double e;
	double f;

	//char
	char ch;

	a = 14;
	b = 15;

	c = 3.1415f;
	d = 6.2314f;

	e = 897.52626;
	f = 09893.23;

	ch = 'A';


    //
	printf("Integer a = %d\n",a);
	printf("Number in b = %d\n",b);

	printf("Value of c = %f\n",c);
	printf("Value of d = %f\n",d);

	printf("Value of e = %lf\n",e);
	printf("Value of f = %lf\n",f);


	printf("Character = %c\n",ch);


	//size of variables
	
	printf("\n*****************Size of primitive variable************************\n");
	printf("Size of int %lu\n",sizeof(int));
	printf("Size of float %lu\n",sizeof(float));
	printf("Size of double %lu\n",sizeof(double));
	printf("Size f char %lu\n",sizeof(char));


	return(0);
}

