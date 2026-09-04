//Rohan Satyamurthy
//Date : 15 Dec 2020
//Program : continue.


#include<stdio.h>


int main()
{
	int i = 1;


	while(i <= 20)
	{
		
		if(i % 2==0)
		{
			i++;
			continue;
		}
		else
		{
			printf("\t%d",i);
			i++;
		}
		
	}

	return(0);
}
