//Rohan Satyamurthy

#include <stdio.h>

int main()
{
    //function
    void recursive(int);
    
    recursive(5);
    
}

void recursive(int a)
{
    //printf("| %d |\n",a);
    static int cnt = 0;
    printf("outside while %d\n",++cnt);
    while (a > 0)
    {
        printf("a->%d , cnt->%d\n",a,cnt);
        
        recursive(--a);
    }
    
    a=0;
}
