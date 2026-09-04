//Rohan Satyamurthy


#include<stdio.h>

#define SIZE 5


int main()
{
    //
    int arr[SIZE];
    int* ptr = NULL;
    
    //ptr =  arr + 1;     //ptr is pointing to arr +  1 position
    
    ptr =  &arr[SIZE - 1];
    
    for(int i = 0 ; i < SIZE ; i++)
    {
        arr[i] = i + 1;
    }
 
    printf("data printing using array\n\n");
    for(int i = 0 ; i < SIZE ; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    printf("data printing using ptr like array\n\n");
    for(int i = 0 ; i < SIZE-1 ; i++)
    {
        printf("%d\n",ptr[i]);
    }

    printf("data printing using ptr \n\n");
    for(int i = 0 ; i < SIZE ; i++)
    {
        printf("%d\n",*(ptr + i));
    }

    printf("data printing using array with pointer\n\n");
    for(int i = 0 ; i < SIZE ; i++)
    {
        printf("%d\n",*(arr + i));
    }

    
    
    return(0);
}
