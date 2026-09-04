//Rohan Satyamurthy
//Date : 27 Oct 2020
//Program : display use of Format Specifier


#include<stdio.h>


int main()
{
	//local variable
	
	int iNum = 1234567890;
    float fNum = 3.141516f;
	double dNum = 6.1891829;
	unsigned  int UINT = 1234567890u;
	char ch = 'A';
	char str[6] = "Hello"; 	
    long double ldouble = 12.12345678901234567890123456789012345678901234567890123456789012345678901234567890;
	unsigned long int ULINT= 987653243489898;
    long int LINT=1234567890123456789;
    long  long int LLINT=1234567890123456789;
    unsigned  long long int ULLINT=1234567890123456789;

	//code
		
	//integer %d
	printf("The integer Decimal format specifier is %d\n",iNum);

	//octal %o
	printf("The integer Octal %o\n",iNum);
	
	//hexadecimal %x - prints small  %X - prints Capital
	printf("The hexadecimal %X\n",iNum);
	
	//float %f
	printf("The Float value is %f\n",fNum);
		
	//double %d
	printf("The double value is %lf\n",dNum);
	
	//unsigned integer %u
	printf("The unsigned int is %u\n",UINT);

	//character %c
	printf("The charcter is %c\n",ch);
	
	//string %s
	printf("The String %s\n\n",str);	

	//long double	%g
	printf("The long double %Lf\n",ldouble);
	
	//unsigned long int 		
	printf("Unsigned long int %lu\n",ULINT);
	
	//long int %ld
    printf("long int %lu\n",LINT);

	//long long int %lld
    printf("long long int %lld\n",LLINT);

	//unsigned long long int %llu
    printf("Unsigned long  long int %llu\n",ULLINT);

	return(0);

}
