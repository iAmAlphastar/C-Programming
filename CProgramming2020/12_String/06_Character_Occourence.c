//Rohan  Satyamurthy.
//Date : 17 June 2021

/*
       str =  i am a boy ; char : a
       o/p =  2
 */

/*
#include <stdio.h>

int main()
{
    
    char ch;
    int cnt = 0;
    char str[] = "i am a boy , i live in Pune.";
    char * cptr = str;
    
    printf("Enter the character to be search\n");
    scanf(" %c",&ch);
    
    while(*cptr != '\0')
    {
            if(*cptr == ch)
            {
                cnt++;
            }
        cptr++;
    }
        
    printf("occurence of %c is %d\n",ch,cnt);
    
    return(0);
}
*/

//convert into array

//Find the Capital letter in the string , & print
//take  input from user and count the  capital letter present.

/*
 
    if(*cptr >= 'A' || *cptr <= 'Z')
 
 */




#include <stdio.h>

int main()
{
    
    char ch;
    int cnt = 0 , i = 0;
    char str[] = "i am a boy , i live in Pune.";
    //char * cptr = str;
    
    printf("Enter the character to be search\n");
    scanf(" %c",&ch);
    
    //loop to count characters in array.
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            cnt++;
        }
        i++;
    }
    
    printf("size of array :: %d\n\n",i);
    printf("occurence of %c is %d\n",ch,cnt);
    
    
    /*
    while(*cptr != '\0')
    {
            if(*cptr == ch)
            {
                cnt++;
            }
        cptr++;
    }
        
    printf("occurence of %c is %d\n",ch,cnt);
    */
    return(0);
}

