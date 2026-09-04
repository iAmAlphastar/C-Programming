//Rohan Satyamurthy
//26 Oct 2020
//program of basic  if..else



/*
	0 - 2
	3 - 19
	20 - 40
	41 - 60
	60 & above

*/

#include<stdio.h>


int main()
{
	//local vaiables
	int iValue = 0;
	
	//code
	printf("Enter the Value.\n");
	scanf("%d",&iValue);
	
    
    //filter condition
    if(iValue < 0 || iValue > 100)
    {
        printf("Enter value is inValid\n\n");
        
        return(0);
    }
    
	if(iValue > 0 && iValue <=2)
        printf("Age is between  0 - 2\n\n");
	if(iValue >=3 && iValue <= 19)
        printf("Age is between  3 to 19\n");
	if(iValue >= 20 && iValue <=40)
        printf("Age is between 20 to 40\n");
	if (iValue >= 41 && iValue <= 60)
        printf("Age is between 41 to 60\n\n");
    else
		printf("Age greater than 60\n\n");

	return(0);
}
