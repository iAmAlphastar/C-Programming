//Rohan Satyamurthy
//Date : 28 Oct 2020
//Program : use of switch

/*
    Day of the week using switch case
    
    1 - Monday
    2 - Tuesday
    3 - Wednesday
    4 - Thursday
    5 - Friday
    6 - Saturday
    7 - Sunday
 
    Steps:  Accept value from user, check the boundary condition , use switch case
 
 */


#include<stdio.h>


int main()
{
    //Local variables
    int iWeek = 0;
        
    //accept value from user
    printf("Enter the day of week.\n");
    scanf("%d",&iWeek);
    
    //filter
    if(iWeek <=0 || iWeek > 7)
    {
        printf("Invalid entry\n");
        return(0);
    }
    
    
    //switch case
    /*
    switch (expression) {
        case <#constant#>:
            <#statements#>
            break;
            
        default:
            break;
    }
    */
    
    
    switch(iWeek)
    {
            case 1:
                printf("Day is Monday.\n");
            break;

            case 2:
                printf("Day is Tuesday.\n");
            break;

            case 3:
                printf("Day is Wednesday.\n");
            break;

            case 4:
                printf("Day is Thursday.\n");
            break;

            case 5:
                printf("Day is Friday.\n");
            break;

            case 6:
                printf("Day is Saturday.\n");
            break;

            case 7:
                printf("Day is Sunday.\n");
            break;
        
        default :
            printf("Case not found!!!\n");
            break;
            
    }
    
    
    return(0);
}
