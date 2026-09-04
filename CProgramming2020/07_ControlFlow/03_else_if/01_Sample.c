//Rohan Satyamurthy
//Date : 27 Oct 2020
//Program : basic use of else if

/*
    0 -2
    3 - 12
    13 - 19
    20 -  40
    41 - 60
    60 and above
 
 
 */

#include<stdio.h>

int main()
{
    //local variable
    int iNumber;
    
    printf("Enter the value\n\n");
    scanf("%d",&iNumber);
    
  if(iNumber > 0 && iNumber <= 2)
  {
       printf("The number lies in between 0 - 2\n\n");
  }
  else if(iNumber >= 3 && iNumber <= 12)
  {
       printf("The number lies in between 3 - 12\n\n");
  }
   else if(iNumber >= 13 && iNumber <=19)
   {
       printf("The number lies in between 13 - 19\n\n");
   }
   else if(iNumber >= 20 && iNumber <=40)
   {
        printf("The number lies in between 20 - 40\n\n");
   }
   else if(iNumber >= 41 && iNumber <=60)
   {
       printf("The number lies in between 41 - 60\n\n");
   }
   else if(iNumber > 60 && iNumber <= 120)
   {
       printf("The number lies in between 60 to 120\n\n");
   }
   else
   {
       printf("Invalid input\n\n");
   }

    
    return(0);
}
