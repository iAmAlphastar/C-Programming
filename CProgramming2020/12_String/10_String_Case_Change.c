//Rohan Satyamurthy



#include<stdio.h>

int main()
{
    
    char str[] = "A Boy is Standing Near";
    
    char* ptr = str;
    
    printf("Before :\n%s\n",str);
    
    while(*ptr != '\0')
    {
        
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = (*ptr + 32);
        }
       else if(*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = (*ptr -32);
        }
        ptr++;
 
    }
    
    printf("After  :\n%s\n",str);
    
    return(0);
}
