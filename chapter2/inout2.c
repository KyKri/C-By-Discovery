/* Includes */
#include <stdio.h>

void main (void)
{
    int iochar;

    /* The assignment is an expression that evaluates to the int value from getchar
     * which can then be compared against EOF, returning 1 when not EOF, otherwise 0
     */
    while((iochar = getchar()) != EOF)
    {
        putchar(iochar);
    }
}
