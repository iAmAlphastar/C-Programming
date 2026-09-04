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
    
    printf("%s\n",argv[0]);
    printf("count of members stored in vector %d\n",argc);
    

    return(0);
}


/*
 
 Rohans-MacBook-Pro:13_Command_Line rohansatyamurthy$ ./a.out
 count of members stored in vector 1
 Rohans-MacBook-Pro:13_Command_Line rohansatyamurthy$ ./a.out 1 2 3 4
 count of members stored in vector 5
 Rohans-MacBook-Pro:13_Command_Line rohansatyamurthy$ ./a.out rohan satyamurthy
 count of members stored in vector 3
 Rohans-MacBook-Pro:13_Command_Line rohansatyamurthy$ ./a.out rohan satyamurthy 1 2 3 45 to hu
 count of members stored in vector 9
 Rohans-MacBook-Pro:13_Command_Line rohansatyamurthy$ ./a.out

 */
