//Rohan Satyamurthy


#include<stdio.h>

int main()
{
    char str[20] = "himalaya";
    
    char* start = &str[0];
    char* end = NULL;
    
    //for traverse pointer to end
    char* temp = &str[0];
    
    while(*temp != '\0')
    {
        temp++;
    }
    
    //temp -- because we want last index value
    temp--;
    
    end = temp;
    
    printf("before reverse : %s\n",str);
    
    //logic for reverse;
    while(start < end)
    {
        char ch = *start;
        *start = *end;
        *end = ch;
        
        //pointer
        start++;
        end--;
        
    }
    
    printf("after reverse : %s\n",str);
    
    return(0);
}


//without using temp pointer
