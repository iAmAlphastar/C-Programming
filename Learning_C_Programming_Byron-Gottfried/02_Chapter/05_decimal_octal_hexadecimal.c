
/*
    Practical 5 — Decimal / Octal / Hexadecimal
 */

#include <stdio.h>

int main()
{
    int decimal = 10;       //decimal value
    int octal = 0144;       //octal start with 0(zero)
    int hexadecimal = 0x64; //hexadeciaml starts with 0x
    
    printf("Decimal = %d\n" ,decimal);
    printf("Octal = %#o\n" ,octal);
    printf("Hexadecimal = %#X\n" ,hexadecimal);
    
    return(0);
}
