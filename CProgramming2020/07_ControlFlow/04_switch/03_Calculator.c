////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name : Rohan Satyamurthy
//Date : 07 Oct 2020
//Program : Calculator
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int main()
{
    //Local Variable
    int iValue1 = 0;
    int iValue2 = 0;
    int iReturn = 0;
    char ch;
    
    //code
    printf("Enter the Operator\n\n");
    printf("\t");
    scanf("%c",&ch);

    switch(ch)
    {
            
        case '+':
            printf("**********************Enter the Two Number************************\n");
            scanf("%d%d",&iValue1,&iValue2);

            printf("The Addition of Two number %d + %d = %d\n",iValue1,iValue2,(iValue1+iValue2));
            break;

        case '-':
            printf("**********************Enter the Two Number************************\n");
            scanf("%d%d",&iValue1,&iValue2);

            printf("The Subtraction of Two number %d - %d = %d\n",iValue1,iValue2,(iValue1 - iValue2));
            break;
        
        case '*':
            printf("**********************Enter the Two Number************************\n");
            scanf("%d%d",&iValue1,&iValue2);

            printf("The Multiplication of Two number %d x %d = %d\n",iValue1,iValue2,(iValue1 * iValue2));
            break;
        
        case '/':
            printf("**********************Enter the Two Number************************\n");
            scanf("%d%d",&iValue1,&iValue2);

            if(iValue1 > iValue2)
            {
                if(iValue2 == 0)
                    printf("Please Learn Maths...!!!!\n");
                else
                    printf("The Division of Two number %d / %d = %d\n",iValue1,iValue2,(iValue1/iValue2));
            }
            else
            {
                if(iValue1 == 0)
                    printf("Please Learn Maths...!!!!\n");
                else
                    printf("The Division of Two number %d / %d = %d\n",iValue2,iValue1,(iValue2/iValue1));
            }
            
            
            break;
                    
        default:
            printf("Invaild selection\nPlease enter one of these(+ - * /).\n");
            break;
            
    };
    
}
