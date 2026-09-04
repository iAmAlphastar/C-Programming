// Rohan Satyamurthy
// Date : 2 Dec 2020.
// Program : Display use of nested for Year.


#include<stdio.h>

int main()
{
    int i , j , k;
    
    //code
    for(i = 1;i <= 12 ;i++) //1
    {
        printf("->%d month\n",i);
        
        for(j = 1;j <= 4; j++) //4
        {
            printf("\t->%d Week\n",j);
            
            for(k = 1 ;k <= 7;k++) //7
            {
                printf("\t\t->%d day\n",k);
            }
            
        }
            
    }
    
    
    return(0);
}
