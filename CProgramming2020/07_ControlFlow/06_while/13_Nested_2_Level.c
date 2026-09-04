//Rohan Satyamurthy
//Date : 15 Dec 2020
//Program : 2 level nesting.

#include<stdio.h>

int main()
{

	int i , j , k;

	i = 0;
	while(i < 5)		//outer while
	{
		printf("outer loop %d\n",i);
	
		j = 0;
		while(j < 3)	//1st inner while
		{
			printf("\t1st level inner loop %d\n",j);
			
			k = 0;
			while(k < 2)  //2nd inner while
			{
				printf("\t\t2nd level inner loop %d\n",k);
				k++;
			}

			j++;
		}

		i++;
	}		//end of outer while

	return(0);
}
