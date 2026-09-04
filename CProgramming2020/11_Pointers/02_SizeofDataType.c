//check the size of pointer of respective data type


#include<stdio.h>


int main()
{
    
    //variable declaration
    
    printf("********************************** Size of Pointer *******************************************\n\n");
    printf("sizeof of char  %lu bytes \n",sizeof(char));
    printf("sizeof of char* %lu bytes \n",sizeof(char*));

    printf("sizeof of int  %lu bytes \n",sizeof(int));
    printf("sizeof of int* %lu bytes \n",sizeof(int*));

    printf("sizeof of float  %lu bytes \n",sizeof(float));
    printf("sizeof of float* %lu bytes \n",sizeof(float*));

    printf("sizeof of double  %lu bytes \n",sizeof(double));
    printf("sizeof of double* %lu bytes \n",sizeof(double*));

    
    return(0);
}
