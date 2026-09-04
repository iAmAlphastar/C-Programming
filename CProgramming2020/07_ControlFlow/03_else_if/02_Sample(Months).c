//Rohan Satyamurthy
//Date : 27 Oct 2020
//Program : basic use of else if

/*
    1 -  January
    2 -  February
    3 -  March
    4 -  April
    5 -  May
    6 -  June
    7 -  July
    8 -  August
    9 -  September
   10 -  October
   11 -  November
   12 -  December
    
 */

#include<stdio.h>

int main()
{
    //local variable
    int iNumber;
    
    printf("Enter the value\n\n");
    scanf("%d",&iNumber);
    
  if(iNumber == 1)
  {
       printf("The Month is January\n\n");
  }
  else if(iNumber == 2)
  {
       printf("The Month is February\n\n");
  }
   else if(iNumber == 3)
   {
       printf("The Month is March\n\n");
   }
   else if(iNumber == 4)
   {
        printf("The Month is April\n\n");
   }
   else if(iNumber == 5)
   {
       printf("The Month is May\n\n");
   }
   else if(iNumber == 6)
   {
       printf("The Month is June\n\n");
   }
   else if(iNumber == 7)
   {
       printf("The Month is July\n\n");
   }
   else if(iNumber == 8)
   {
       printf("The Month is August\n\n");
   }
   else if(iNumber == 9)
   {
       printf("The Month is September\n\n");
   }
   else if(iNumber == 10)
   {
       printf("The Month is October\n\n");
   }
   else if(iNumber == 11)
   {
       printf("The Month is November\n\n");
   }
   else if(iNumber == 12)
   {
       printf("The Month is December\n\n");
   }
   else
   {
       printf("Invalid input\n\n");
   }

    
    return(0);
}
