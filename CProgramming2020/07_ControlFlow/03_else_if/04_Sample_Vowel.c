//Rohan Satyamurthy
//Date : 27 Oct 2020
//Program : basic use of else if

#include<stdio.h>


int main()
{
    //local variables
    char ch;
    
    printf("Enter the vowel.\n");
    scanf("%c",&ch);
    
    //code
    
    //vowels (a,e,i,o,u)
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The character %c is a vowel \n\n",ch);
    }
    else
    {
        printf("Not a vowel\n\n");
    }
    
    return(0);
}

