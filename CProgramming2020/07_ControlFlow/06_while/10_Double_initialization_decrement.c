//Rohan Satyamurthy
//Date : 15 Dec 2020
//Program : Double initialize using decrementing loop


#include<stdio.h>


int main()
{
	//initialization

	float i  = 10.0f, j = 20.0f;

	while(i > 0.0f, j > 10.0f)
	{
		printf("%f\t%f\n",i,j);
		i--;
		j--;
	}	

	return(0);
}
