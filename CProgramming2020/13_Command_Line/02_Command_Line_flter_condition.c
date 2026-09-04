//Rohan Satyamurthy
//Date : 29 June 2021
//Program using command line



/*
    argc - argument count
    argv - argument vector
 */

#include<stdio.h>

int main(int argc, char* argv[])
{

    printf("count of members stored in vector %d\n",argc);
    
    if(argc > 2)
    {
        printf("%s\n",argv[0]);
        printf("%s\n",argv[1]);
        printf("%s\n",argv[2]);
    }
    else
    {
        printf("Enter valid inputs\n\n");
    }
    

    return(0);
}

