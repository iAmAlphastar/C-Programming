//Local Static Variables

#include <stdio.h>



int main()
{
	//function prototype
	void add(void);

	int i = 0;
	
	add();
	add();
	add();
	add();
	add();
	

	return(0);
}

void add()
{

	static int iValue = 0;

	iValue++;

	printf("%d\n",iValue);

}
