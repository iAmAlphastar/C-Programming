//Rohan Satyamurthy
//Date : 15 Dec 2020
//Program : nested while loop


#include<stdio.h>

int main()
{
	int i,j;

	i = 0;
	while(i <= 10)
	{	
		printf("outer while %d\n",i);
		
		j = 0;		
		while(j <= 5)
		{
			printf("\tinner while %d\n",j);
			j++;
		}
		i++;
	}	


	return(0);
}
