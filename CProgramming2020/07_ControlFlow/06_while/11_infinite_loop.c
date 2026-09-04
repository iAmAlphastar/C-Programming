//Rohan Satyamurthy
//Date 15 Dec 2020
//Program : display of infinite loop in while.


#include<stdio.h>

int main()
{
	int i = 0;

	while(1)
	{	
		if(i < 10000)
		{
			printf("%d ",i);
			i++;
		}
		else
		{
			break;
		}
	}

	return(0);
}
