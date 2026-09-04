//Rohan Satyamurthy
//Date : 29 Dec 2020
//Program : print table with explict condition


#include<stdio.h>

int main()
{
	
	int iNum1 , iNum2 , init  = 1;

	printf("Enter the table you want to print\n\n");
	scanf("%d",&iNum1);
	
	printf("Enter the range\n");
	scanf("%d",&iNum2);
	
/*	if(iNum2 > 12)
	{
		printf("Invaild number\n\n");
	}
	else
	{
*/		do
		{
			if(iNum2 <= 12)
			{
				printf("%d x %d = %d\n",iNum1,init,(iNum1 * init));
				init++;
			}
			else
			{
				printf("Invalid Number\n");
				break;
			}

		}while(init <= iNum2);
//	}

	return(0);
}
