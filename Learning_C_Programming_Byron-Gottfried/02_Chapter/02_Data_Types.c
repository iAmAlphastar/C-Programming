#include <stdio.h>

int main()
{
    
    char c;
    int i;
    float f;
    double d;
    
    printf("char            = %zu bytes\n", sizeof(char));
    printf("int             = %zu bytes\n", sizeof(int));
    printf("float           = %zu bytes\n", sizeof(float));
    printf("double          = %zu bytes\n", sizeof(double));
    printf("short int       = %zu bytes\n", sizeof(short int));
    printf("long int        = %zu bytes\n", sizeof(long int));
    printf("unsigned int    = %zu bytes\n", sizeof(unsigned int));
    
    return(0);
}
