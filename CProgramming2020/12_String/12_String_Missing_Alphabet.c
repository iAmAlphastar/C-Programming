//Rohan Satyamurthy
//Date : 23 June 2021
//Missing alphabet


#include<stdio.h>


int main()
{
    char a[] = "alphastar";
            //  b c d e f g i j k m n o q u v w x y z
    int arr[26] = {0};

    char* str = a;
    
    while(*str!='\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            arr[(*str)-'A']++;
            str++;
        }
        
        else if(*str >= 'a' && *str <= 'z')
        {
            //printf("@@\n");
            arr[(*str) - 'a']++;
            str++;
        }
    }
    
    for(int i = 0;i < 26;i++)
    {
        if(arr[i] == 0)
        {
            printf("%c ",(i + 97));
        }
    }
    
    
    return(0);
}


/*
 
 */

