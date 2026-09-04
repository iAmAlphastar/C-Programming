// Rohan Satyamurthy
// Date : 2 Dec 2020.
// Program : Display use of nested for.


#include<stdio.h>

int main()
{
    int i , j;
    
    //code (eg: building)
    //1 -10 floor
    for(i = 1;i <= 10 ;i++)
    {
        printf("%d floor\n",i);
        for(j = 1; j <= 4 ; j++)
        {
            printf("\t->%d Room\n",j);
        }
    }
    
    
    return(0);
}
