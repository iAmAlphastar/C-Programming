//Rohan Satyamurthy
//change i = $


#include<stdio.h>

int main()
{
    
    //               0123456789012345678901234567
    char str[100] = "i am a boy , i live in pune.";     //str
    
    char * cptr = &str[0];      //pointer
    
    printf("original string : %s\n",str);
    
    while(*cptr != '\0')
    {
        if(*cptr == 'i' || *cptr == 'I')
        {
            *cptr = '$';
        }
        
        cptr++;         //pointer ++
    }
    
    printf("changed string : %s\n",str);
    
    return(0);
}

//change into array



