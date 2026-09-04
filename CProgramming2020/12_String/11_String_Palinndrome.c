//Rohan Satyamurthy
//Date 23 June 2021
//Program : Find Palindrome or not.

/*
 
 noon
 level
 rotor
 reviver
 refer
 
*/

#include<stdio.h>

int main()
{

    char str[] = "level";
    char* start = str;
    char* end = str;
    int flag = 0;
    
    
    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    
    //logic for palindrome
    while(start < end)
    {
        if(*start == *end)
        {
            start++;
            end--;
        }
        else
        {
            flag = -1;
            break;
        }
    }
    

    if(flag == 0)
    {
        printf("palindrome\n");
    }
    else
        printf("not palindrome\n");
    
          
    return(0);
}


/*

 start = 1 2 3 4  5
 end = 5 4 3 2 1
 
 12345
 SWAPZ 0
 ZWAPS 1
 ZPAWS 2
 ZWAPS 3
 SWAPZ 4
 
 
 MOOOM
 12345
 
 
 
 
 Matrix - 1,2,3
 Intersteller
 Inception
 
 */
