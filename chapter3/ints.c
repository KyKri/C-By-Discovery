/* Includes */
#include <stdio.h>

/* Functions */
void main(void)
{
    short shortvar = 32767;
    int intvar = 32767;
    long int longvar = 32767;

    printf("shortvar is %hd in decimal, %ho in octal and %hx in hexadecimal.\n", shortvar, shortvar, shortvar);
    shortvar += 1;
    printf("After adding 1, shortvar is now %hd in decimal.\n", shortvar);

    printf("intvar is %d in decimal, %o in octal and %x in hexadecimal.\n", intvar, intvar, intvar);
    intvar += 1;
    printf("After adding 1, intvar is now %d in decimal.\n", intvar);

    printf("longvar is %ld in decimal, %lo in octal and %lx in hexadecimal.\n", longvar, longvar, longvar);
    longvar += 1;
    printf("After adding 1, longvar is now %ld in decimal.\n", longvar);
}
