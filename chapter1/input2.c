#include <stdio.h>

void main (void)
{
    int intvar;

    printf("Enter a decimal value: ");
    scanf("%d", &intvar);

    /* %x is the hexadecimal conversion specification for [0-9a-f] */
    printf("The hexadecimal representation of %d is %x.\n", intvar, intvar);

    printf("Enter a hexadecimal value: ");
    scanf("%x", &intvar);
    printf("The octal representation of %x is %o.\n", intvar, intvar);

    printf("Enter an octal value: ");
    scanf("%o", &intvar);
    printf("The decimal representation of %o is %d.\n", intvar, intvar);
}