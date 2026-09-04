//Rohan Satyamurthy 
//Date: 15 Dec 2020
//Program : While using floating point.


#include<stdio.h>


int main()
{
	//initailization
	float i = 0.0f;

	while(i < 10.0f)
	{
		printf("%0.2f\n",i);
		i = i + 0.1;
	}	

	return(0);
}
