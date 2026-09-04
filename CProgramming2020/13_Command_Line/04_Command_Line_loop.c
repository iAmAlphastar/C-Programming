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
    
    
    for(int i = 1 ; i < argc;i++)
    {
        printf("%s\n",argv[i]);
    
    }
    

    return(0);
}

