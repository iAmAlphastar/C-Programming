////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Name : Rohan Satyamurthy
//Date : 03 Nov 2020
//Program : Accept 4 number from user and find the largest.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    //Local variables.
    int iValue1 , iValue2 , iValue3 , iValue4;
    
    iValue1 = iValue2 = iValue3 = iValue4 = 0;
    
    //code
    
    printf("Enter the values..!!!\n\n");
    scanf("%d %d %d %d",&iValue1,&iValue2,&iValue3,&iValue4);
    
    
    //printf(" 1 = %d 2 = %d 3 = %d 4 = %d\n\n",iValue1,iValue2,iValue3,iValue4);
    
    if(iValue1 > iValue2 && iValue1 > iValue3 && iValue1 > iValue4)
    {
        printf("The largest number is %d\n",iValue1);
    }
    else if(iValue2 > iValue1 && iValue2 > iValue3 && iValue2 > iValue4)
    {
        printf("The largest number is %d\n",iValue2);
    }
    else if(iValue3 > iValue1 && iValue3 > iValue2 && iValue3 > iValue4)
    {
        printf("The largest number is %d\n",iValue3);
    }
    else
    {
        printf("The largest number is %d\n",iValue4);
    }
    
    return(0);
    
}
