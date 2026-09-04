//Golbal Variables

#include <stdio.h>

//global varible
int iValue;	// = 0;

int main()
{
	//function prototype
	void add(void);
	void add1(void);

	int i = 0;
	
	add();
	add1();

	return(0);
}

void add()
{
	iValue = 10;
	printf("%d\n",iValue);
}

void add1()
{
	iValue = 20;
	printf("%d\n", iValue);

}
