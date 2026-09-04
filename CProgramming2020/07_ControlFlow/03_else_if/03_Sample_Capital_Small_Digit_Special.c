//Rohan Satyamurthy
//Date : 27 Oct 2020
//Program : Find Captial Small Digit & Special Character.

#include<stdio.h>

int main()
{
    //Local variables
    char ch;
    
    printf("Enter the Character\n");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The Value entered is %c ascii value is %d\nIt is Capital\n",ch,ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("The Value entered is %c ascii value is %d\nIt is Small \n",ch,ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("The Digit entered is %c\n",ch);
    }
    else
    {
        printf("Special character %c\n",ch);
    }
    
    
    
}
