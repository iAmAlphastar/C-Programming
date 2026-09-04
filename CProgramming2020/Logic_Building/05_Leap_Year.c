////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Name : Rohan Satyamurthy
//Date : 03 Nov 2020
//Program : Accept number from user and find Leap Year
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  main()
{
    //Local Variable
    int iYear = 2000;
    
    printf("Enter the year..!!!!\n\n");
    scanf("%d",&iYear);
    
    //printf("%d\n\n",iYear);
    
    if((iYear % 4 == 0 && iYear % 100 != 0)|| iYear % 400 == 0)
    {
        printf("Leap Year\n\n");
    }
    else
    {
        printf("Not a Leap Year\n\n");
    }
    
    return(0);
}


