//Rohan Satyamurthy
/* str1 :  rohan
   str2 :  satyamurthy
   concat : rohansatyamurthy
 
*/


#include<stdio.h>

int main()
{
    
    //string'
    char str1[] = "Tom";
    char str2[] = "Cat";
    char str3[20];
    
    char * cptr1 = NULL;
    char * cptr2 = NULL;
    char * cptr3 = NULL;
    
    cptr1 = &str1[0];   //storing address in cptr1
    cptr2 = &str2[0];   //storing address in cptr2
    cptr3 = &str3[0];
        
    //copy  string 1
    while(*cptr1 != '\0')
    {
        *cptr3 = *cptr1;
        
        cptr1++;
        cptr3++;
        
    }
    
    //copy string 2
    while(*cptr2 != '\0')
    {
        *cptr3 = *cptr2;
        
        cptr2++;
        cptr3++;
        
    }

    //cptr3
    *cptr3 = '\0';
    
    printf("string 1 : %s\n",str1);
    printf("string 2 : %s\n",str2);
    printf("string  after concat : %s\n",str3);
    
    return(0);
}

//change into array
