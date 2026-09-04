//Rohan Satyamurthy



#include<stdio.h>

int main()
{
    int  stringCountX(char []);
    
    //                  0123456789012345678901234567
    char str[100] = "i am a boy , i live in pune.";
           
    int ret =  stringCountX(str);
    
    printf("the  number of characters present is %d \n",ret);
        
    return(0);
}

//flour mill
int stringCountX(char str[])
{
    int i = 0,cnt = 0;
    
    while(str[i] !=  '\0')
    {
        cnt++;  //1 2 3 4       //counting characters.
        i++;    //1 2 3 4       //incrementing index of array.
    }
        
  return(cnt);  
}
