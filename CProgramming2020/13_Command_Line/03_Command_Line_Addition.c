//Rohan Satyamurthy
//Date : 29 June 2021
//Program using command line



/*
    argc - argument count
    argv - argument vector
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    //int atoi(char s[]);
    int a,b,add = 0;

    printf("count of members stored in vector %d\n",argc);
    
    if(argc > 0)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        
        add = a + b;
        
        printf("Addition of number using command line = %d\n",add);
    }
    else
    {
        printf("Enter valid inputs\n\n");
    }
    

    return(0);
}

/*
int atoi(char s[])
{
    int i,n;
    
    n = 0;
    
    for(i = 0 ; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    
    return(n);
}
*/


/*
 
    Do this program :
                    print your name.
                
 
 
 */
