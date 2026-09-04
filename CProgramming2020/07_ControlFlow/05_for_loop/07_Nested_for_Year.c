// Rohan Satyamurthy
// Date : 2 Dec 2020.
// Program : Display use of nested for Year.


#include<stdio.h>

int main()
{
    int i , j;
    
    //code
    for(i = 1;i <= 12 ;i++)
    {
        printf("%d month\n",i);
        
        for(j = 1;j <= 4; j++)
        {
            printf("  ->%d Week\n",j);
        }
            
    }
    
    
    return(0);
}
