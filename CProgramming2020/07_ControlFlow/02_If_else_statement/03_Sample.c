//Rohan Satyamurthy
//26 Oct 2020
//if..else


#include<stdio.h>

int main()
{
    
    int iValue1 = 0,iValue2 = 0;
    //code
    
    printf("Enter the value1\n\n");
    scanf("%d",&iValue1);

    printf("Enter the value2\n\n");
    scanf("%d",&iValue2);

    
    if(iValue1 > iValue2)
        printf("iValue1 = %d is greater tha iValue2 = %d\n",iValue1,iValue2);
    else
        printf("iValue2 = %d is greater than iValue1 = %d\n",iValue2,iValue1);
        
    return(0);
}
