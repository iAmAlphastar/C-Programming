//Rohan Satyamurthy
//Date : 24 June 2021
//Panagram


#include<stdio.h>


int main()
{
    char a[] = "alphastar";
    char b[] = "the quick brown fox jumps over the lazy dog";
    int i;
            
    int arr[26] = {0};

    char* str = NULL;
    
    str = b;
    
    while(*str!='\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            arr[(*str)-'A']++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            //printf("@@\n");
            arr[(*str) - 'a']++;
        }
        
        str++;      //we wrote str++ here because we have to handle special case.
        
    }
    
    for(i = 0;i < 26;i++)
    {
        if(arr[i] == 0)
        {
            break;
        }
    }
    
    if(i == 26)
    {
        printf("Panagram !!\n");
    }
    else
    {
        printf("Not Panagram !!\n");
    }
    
    return(0);
}























/*
 //pangram it should contain all 26 alphabets in a sentence;
 #include<stdio.h>

 #define TRUE  0
 #define FALSE 1


 int pangram(char * str)
 {
     int arr[26]={0};
     int i=0;
     
     while(*str!='\0')
     {
         if((*str=='A')||(*str=='a'))
         {
             arr[0]++;
             
         }
         if((*str=='B')||(*str=='b'))
         {
             arr[1]++;
             
         }
         
         if((*str=='C')||(*str=='c'))
         {
             arr[2]++;
             
         }

         if((*str=='D')||(*str=='d'))
         {
             arr[3]++;
             
         }

         if((*str=='E')||(*str=='e'))
         {
             arr[4]++;
             
         }

         if((*str=='F')||(*str=='f'))
         {
             arr[5]++;
             
         }
         

         if((*str=='G')||(*str=='g'))
         {
             arr[6]++;
             
         }
         

         if((*str=='H')||(*str=='h'))
         {
             arr[7]++;
             
         }
         

         if((*str=='I')||(*str=='i'))
         {
             arr[8]++;
             
         }
         

         if((*str=='J')||(*str=='j'))
         {
             arr[9]++;
             
         }
         

         if((*str=='K')||(*str=='k'))
         {
             arr[10]++;
             
         }
         

         if((*str=='L')||(*str=='l'))
         {
             arr[11]++;
             
         }
         

         if((*str=='M')||(*str=='m'))
         {
             arr[12]++;
             
         }
         

         if((*str=='N')||(*str=='n'))
         {
             arr[13]++;
             
         }
         

         if((*str=='O')||(*str=='o'))
         {
             arr[14]++;
             
         }
         

         if((*str=='P')||(*str=='p'))
         {
             arr[15]++;
             
         }
         

         if((*str=='Q')||(*str=='q'))
         {
             arr[16]++;
             
         }
         

         if((*str=='R')||(*str=='r'))
         {
             arr[17]++;
             
         }
         

         if((*str=='S')||(*str=='s'))
         {
             arr[18]++;
             
         }
         

         if((*str=='T')||(*str=='t'))
         {
             arr[19]++;
             
         }
         

         if((*str=='U')||(*str=='u'))
         {
             arr[20]++;
             
         }
         

         if((*str=='V')||(*str=='v'))
         {
             arr[21]++;
             
         }
         

         if((*str=='W')||(*str=='w'))
         {
             arr[22]++;
             
         }
         

         if((*str=='X')||(*str=='x'))
         {
             arr[23]++;
             
         }
         

         if((*str=='Y')||(*str=='y'))
         {
             arr[24]++;
             
         }
         

         if((*str=='Z')||(*str=='z'))
         {
             arr[25]++;
             
         }
         
         str++;
         
     }
     
     
     for(i=0;i < 26;i++)
     {
         if(arr[i]==0)
         {
             break;
         }
     }
     
     if(i==26)
     {
         return TRUE;
     }
     else
     {
         return FALSE;
     }
     
     
 }

 int main()
 {
     
     char arr[]="The quick brown fox jumps over the lazy dog";
     
     int Ret=0;
     Ret=pangram(arr);
     
     if(Ret==0)
     {
         printf("It is panagram");
     }
     else
     {
         printf("It is not panagram");
     }
     
     
     return 0;
 }

 */
