//Rohan Satyamurthy
//18 June  2021



#include<stdio.h>


int main()
{
    
    //function prototype
    int StringCountX(char []);
    
    char str1[] = "moon";
    char str2[] = "moon";
    char str3[] = "moon";
    int i = 0 ,cnt = 0;
    int flag = -1;
    
    
    char * ptr1,*ptr2;
    
    ptr1 = &str2[0];
    ptr2 = str3;
    
    
    int ret1 = StringCountX(str2);
    int ret2 = StringCountX(str3);
    
    //filter
    if(ret1 == ret2)
    {
     
        //data validate
        while(*ptr1 != '\0')
        {
            if(*ptr1 != *ptr2)
            {
                printf("1. String not equal..!!!\n");
                return(0);
            }
            
            ptr1++;
            ptr2++;
            
        }
        
        printf("2. string is equal..!!!\n");
    }
    else
    {
        printf("3. string not equal!!\n");
    }
    
    return(0);
}


int StringCountX(char str[])
{
    char * cptr = str;
    int cnt = 0;
    
    while(*cptr != '\0')
    {
        cptr++;
        cnt++;
    }
    
    return(cnt);
}



//do this program using pointers
