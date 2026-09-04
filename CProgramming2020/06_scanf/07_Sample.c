//Rohan Satyamurthy
//07 Oct 2020
//Program to Accept string

//header files
#include<stdio.h>

//entry point function
int main()
{
	//local variable
	char ch[256];	
	
	printf("Enter the string..!!\n");
	scanf("%s",ch);		//if space occurs string wont print after space.	
	scanf("%[^'\n']s",ch);	//prints character till new line.
	
	printf("the string is %s\n",ch);

	return(0);
}

