//Rohan Satyamurthy
//Date : 17 Nov 2020
//Program : double initialization increment decrement
// 0 - 100 and 100 - 0

#include<stdio.h>

int main()
{
    int  i ;

    //increment
    for(i = 0 ; i <= 100 ;i++ )
    {
        
        printf("increment -> %d\n",i);
        
    }
    
    //decrement
    for(i = 100 ; i >= 0 ;i-- )
    {
        
        printf("decrement -> %d\n",i);
        
    }

    
    return(0);
}
