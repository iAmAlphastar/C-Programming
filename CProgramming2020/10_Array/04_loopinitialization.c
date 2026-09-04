//Rohan Satyamurthy

//Loop initialization


#include<stdio.h>

#define SIZE 10

int main(void)
{
    //local variable
    int i , array[SIZE];
    
    //loop for filling the data in the array
    printf("Enter Elements in the array\n");
    for(i = 0;i < SIZE ; i++)
    {
        printf(">");
        scanf("%d",&array[i]);
    }
    
    //loop for printing data
    printf("The Entered Elements in the array\n\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    
    return(0);
}
