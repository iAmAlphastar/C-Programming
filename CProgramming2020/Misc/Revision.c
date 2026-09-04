//created by : Rohan  Satyamurthy
//date : 14 June 2021


#include <stdio.h>
#include "MYHEADER.h"

UINT main()
{
    //function prototype
    UINT Maths(UINT,UINT);
    void ARRAY(float *);
    
    //local variable
    UINT num1 ,num2;
    SINGLE_PRECISION arr[SIZE];
    
    //code
    WRITE("Enter the number\n");
    READ("%d%d",&num1,&num2);
    
    //function call
    UINT ret = Maths(num1,num2);
    
    WRITE("from maths function : %d\n",ret);
    
    //function call
    ARRAY(arr);
    
    WRITE("Addition by our own function ADDF\n");
    WRITE("%f\n",AddF(2.0,9.0));
    
    EXIT(0);
}


void ARRAY(SINGLE_PRECISION* arr)
{
    printf("Enter  elements int array\n\n");
    for(int i = 0 ; i < SIZE ;i++)
    {
        READ("%f",&arr[i]);
    }
    
    
    for(int i = 0 ; i < SIZE ;i++)
    {
        WRITE("%0.2f\n",arr[i]);
    }
}

