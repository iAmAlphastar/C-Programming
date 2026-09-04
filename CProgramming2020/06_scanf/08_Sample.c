//Rohan Satyamurthy
//13 Oct 2020
//Program : accept marks for 5 subjects

//header files
#include<stdio.h>

//entry point function
int main()
{

    //local variables
    int iMath,iEnglish,iScience,iHistory,iGeography,iAvg;
    
    printf("Enter the marks for the following subjects\n\n1]Maths\n2]English\n3]Science\n4]History\n5]Geography\n");
    
    scanf("%d%d%d%d%d",&iMath,&iEnglish,&iScience,&iHistory,&iGeography);
    
    printf("The marks entered for the follwoing subject\n\nMaths = %d\nEnglish = %d\nScience = %d\nHistory = %d\nGeography = %d\n\n",iMath,iEnglish,iScience,iHistory,iGeography);
    
    iAvg = (iMath + iEnglish + iScience + iHistory + iGeography) / 5 ;
    
    printf("The Average marks for the following subjects are : %d",iAvg);
    
	return(0);
}

