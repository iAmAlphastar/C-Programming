//Rohan Satyamurthy

/*
 basic implemetation of array
 */


#include<stdio.h>

#define ARRAY_SIZE  5

int main()
{
    
    
    float mark[ARRAY_SIZE] = {1.0f};
    
    printf("mark[0] = %f\n",mark[0]);
    printf("mark[1] = %f\n",mark[1]);
    printf("mark[2] = %f\n",mark[2]);
    printf("mark[3] = %f\n",mark[3]);
    printf("mark[4] = %f\n",mark[4]);
    
    printf("\n\n");
    
    //calculating the size of array and data type
    printf("*********** calculating the size of array and data type ***********\n");
    printf("sizeof(mark) = %lu bytes\n",sizeof(mark));
    
    printf("no of elements in mark %lu\n",sizeof(mark)/sizeof(mark[0]));
    
    printf("size of data type %lu\n",sizeof(mark)/(sizeof(mark)/sizeof(mark[0])));
        
    return(0);
}
