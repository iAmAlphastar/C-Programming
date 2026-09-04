////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Name : Rohan Satyamurthy
//Date : 03 Nov 2020
//Program : Accept 4 number from user and find the difference between the smallest & largest.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    //Local variables.
    int iValue1 , iValue2 , iValue3 , iValue4 , iLargest = 0, iSmallest = 0 , iDifference = 0;
    
    iValue1 = iValue2 = iValue3 = iValue4 = 0;
    
    //code
    
    //******************************************* For smallest number *******************************************
    printf("Enter the values..!!!\n\n");
    scanf("%d %d %d %d",&iValue1,&iValue2,&iValue3,&iValue4);
    
    
    //printf(" 1 = %d 2 = %d 3 = %d 4 = %d\n\n",iValue1,iValue2,iValue3,iValue4);
    
    if(iValue1 < iValue2 && iValue1 < iValue3 && iValue1 < iValue4)
    {
       iSmallest = iValue1;
    }
    else if(iValue2 < iValue1 && iValue2 < iValue3 && iValue2 < iValue4)
    {
        iSmallest = iValue2;
    }
    else if(iValue3 < iValue1 && iValue3 < iValue2 && iValue3 < iValue4)
    {
        iSmallest = iValue3;
    }
    else
    {
        iSmallest = iValue4;
    }
    
    
    //******************************************* For Largest number *******************************************
    if(iValue1 > iValue2 && iValue1 > iValue3 && iValue1 > iValue4)
    {
        iLargest = iValue1;
    }
    else if(iValue2 > iValue1 && iValue2 > iValue3 && iValue2 > iValue4)
    {
        iLargest = iValue2;
    }
    else if(iValue3 > iValue1 && iValue3 > iValue2 && iValue3 > iValue4)
    {
        iLargest = iValue3;
    }
    else
    {
        iLargest = iValue4;
    }

    
    //iDifference = iLargest - iSmallest;
    
    printf("largest %d\nsmallest %d\nThe difference of  %d - %d = %d\n\n",iLargest,iSmallest,iLargest,iSmallest,(iLargest - iSmallest));
    
    return(0);
    
}
