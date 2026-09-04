//Sample for Escape sequence.

#include<stdio.h>


#define OCT '\013'

int main()
{
    
    int iValue = 14;
                                                                           
    /*printf("The boy is standing near the tree\t.\nHe is %d years old\n\n\t\t.\n",iValue);
                            
    printf("This is alert \a\n\n\n");
                            
    printf("This is a boy\b \n\n");
    
    printf("This is a \fboy\n");
    
    printf("This is a Roy\n\n");
    printf("This is a Roy\rA\n\n");
             
    printf("This is a \vBoy\n\n");
    */
    printf("This is \\Apple\\ .\n\n");
    
    printf("This is \?Apple .\n\n");
    printf("This is \'Apple\' .\n\n");
    
    printf("This  OCTAL for %O\n\n",iValue);
    printf("This  HEX for %X\n\n",iValue);
    
    
    return(0);
}
