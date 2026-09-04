// Rohan Satyamurthy
// Date : 2 Dec 2020.
// Program : Display use of nested for Year.


#include<stdio.h>

int main()
{
    int i , j , k;
    int iMagic = 0;
    
    //code
    for(i = 1;i <= 12 ;i++) //1 - 12
    {
        switch(i)
        {
            case 1:
                printf("JANUARY\n"); //31
                iMagic = 3;
                break;
                
            case 2:
                printf("FEBRUARY\n"); //28
                iMagic = 2;
                break;
                
            case 3:
                printf("MARCH\n"); //31
                iMagic = 3;
                break;
                
            case 4:
                printf("APRIL\n"); //30
                iMagic = 1;
                break;
            
            case 5:
                printf("MAY\n"); //31
                iMagic = 3;
                break;
                
            case 6:
                printf("JUNE\n");//30
                iMagic = 1;
                break;
                
            case 7:
                printf("JULY\n");//31
                iMagic = 3;
                break;
                
            case 8:
                printf("AUGUST\n");//31
                iMagic = 3;
                break;
                
            case 9:
                printf("SEPTEMBER\n");//30
                iMagic = 1;
                break;
                
            case 10:
                printf("OCTOBER\n"); //31
                iMagic = 3;
                break;
                
            case 11:
                printf("NOVEMBER\n");//30
                iMagic = 1;
                break;
                
            case 12:
                printf("DECEMBER\n"); //31
                iMagic = 3;
                break;
                
        }
        
            //printf("\t%d week\n",j);
            if(iMagic == 1)
            {
                printf("30 days in a month\n");
            }
            else if(iMagic == 3)
            {
                printf("31 days in a month\n");
            }
            else if(iMagic == 2)
            {
                printf("You have just 28 days!!!!\n");
            }
                        
            
    }//1st for loop
    
    
    return(0);
}


















