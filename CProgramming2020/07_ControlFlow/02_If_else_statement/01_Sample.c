//Rohan Satyamurthy
//26 Oct 2020
//basic program of if..else

/*
        print age greater than 18 or less than  18.
 */


#include<stdio.h>


int main()
{
    
    int iAge = 0;
    
    printf("Enter the input...!!!!\n");
    scanf("%d",&iAge);
    
    if(iAge >= 18)
    {
        printf("%d Greater  than  18\n\n",iAge);
    }
    else
    {
        printf("%d  Less than 18\n\n",iAge);
    }
    
    
    return(0);
}

