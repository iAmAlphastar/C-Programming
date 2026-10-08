/*
 
 display use of constants
 integer
 float
 character
 string
 
 */


#include <stdio.h>

int main()
{
    //integer constants
    int a = 10;
    int b = 100;
    int c = -25;
    
    //floating
    float f1 = 3.14;
    float f2 = 0.001;
    float f3 = 2.5e3;
    
    //character constants
    char c1 = 'A';      //char A
    char c2 = 'Z';      //char Z
    char c3 = '0';      //char zero
    char c4 = '\n';     //new line character
    char c5 = '\t';     //tab character
    
    //string constants
    char str1[] = "Hello";
    char str2[] = "Alphastar";
    char str3[] = "Temperature Sensors";
    
    //you canwrite everything in one printf also but just for understanding we have segerated it
    
    printf("int a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("float f1 = %f\nf2 = %f\nf3 = %f\n",f1,f2,f3);
    printf("char c1 = %c\nc2 = %c\nc3 = %c\nc4 = %c\nc5 = %c\n",c1,c2,c3,c4,c5);
    printf("string str1 = %s\nstr2 = %s\nstr3 = %s\n",str1,str2,str3);
    
    return(0);
}
