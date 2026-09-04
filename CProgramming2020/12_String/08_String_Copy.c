//Rohan Satyamurthy
//Date : 21 June 2021
//implement strcpy (String Copy)

#include<stdio.h>


int main()
{
    
    void StrCpyX(char *,char *);
    char arr1[] = "Himalaya";
    char arr2[20];
    
    
 
    //before copy
    printf("Before :\nString1 = %s\nString2 = %s\n",arr1,arr2);
    
    //function call strcpy
    StrCpyX(arr1,arr2);
    
    printf("After :\nString1 = %s\nString2 = %s\n",arr1,arr2);
    
    
    return(0);
}

void StrCpyX(char* arr1,char* arr2)
{
    //decalaring char pointer
    char* str1 = NULL;
    char* str2 = NULL;
    
    //setting address to array.
    str1 = &arr1[0];
    str2 = &arr2[0];
    
   
    //copy logic
    while(*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    
    //set '\0' to end of str2;
    *str2 = '\0';
    
    
}


/*
 copy it using array index.
 */
