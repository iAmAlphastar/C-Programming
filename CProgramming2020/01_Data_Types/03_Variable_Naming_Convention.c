//Rohan Satyamurthy
// Date 23 Oct 2020
// Sample to display use of data type and variable naming convention


//header file
#include<stdio.h>


/*
 
    #variable naming convention should always start character i.e. A-Z a-z.
    #Always give meaningful name to the varible.
    #should be under 32 characters
 
    variable name should't start with number i.e. 0-9 or special character/symbol.
    
    Right :(Allowed)
        Variable , iNumber , fValue, dSum , _Value.
    
    Wrong :(Not Allowed)
        12Variable , #number , $Sum , @Number.
    
 
 */

//Entry point function
int main()
{
    
    //Local variables
    
    int iValue1;  //variable declaration
    int iValue2;
    int iResult;
    
    //float variable
    float fValue1;
    float fValue2;

    //double
    double dValue1;
    double dValue2;

    //char
    char cValue;

    iValue1 = 14;
    iValue2 = 15;

    fValue1 = 3.1415f;
    fValue2 = 6.2314f;

    dValue1 = 897.52626;
    dValue2 = 09893.23;

    cValue = 'A';


    //
    printf("Integer a = %d\nNumber in b = %d\n",iValue1,iValue2);
    //printf("Number in b = %d\n",iValue2);

    printf("Value of c = %f\n",fValue1);
    printf("Value of d = %f\n",fValue2);

    printf("Value of e = %lf\n",dValue1);
    printf("Value of f = %lf\n",dValue2);


    printf("Character = %c\n",cValue);


    //size of variables
    
    printf("\n*****************Size of primitive variable************************\n");
    printf("Size of int %lu\n",sizeof(int));
    printf("Size of float %lu\n",sizeof(float));
    printf("Size of double %lu\n",sizeof(double));
    printf("Size f char %lu\n",sizeof(char));


    return(0);
}

