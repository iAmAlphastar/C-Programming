//Rohan Satyamurthy
//Date : 17 Nov 2020
//Program : Accept value from user and print its table.

#include<stdio.h>
//#define iNum 7


int main()
{
    int i=0;
    int iNum;
    
    printf("Enter the number of which you want to display table\n");
    scanf("%d",&iNum);
        
    for(i = 1;i <= 12 ;i++)
    {
        printf("%d x %d = %d\n",iNum,i,(iNum*i));
    }
    
    return(0);
}



