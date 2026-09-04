//Rohan Satyamurthy
//Date : 28 Oct 2020
//Program : use of switch fall through of vowels

#include<stdio.h>


int main()
{
    //Local variables
    char ch;
        
    //accept value from user
    printf("Enter the vowel.\n");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("Vowel is  %c\n",ch);
        break;
        
        default:
            printf("Not a Vowel\n");
        break;
            
    }
    
    return(0);
}
