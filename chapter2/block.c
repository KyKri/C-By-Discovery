/* Includes */
#include <stdio.h>

void main (void)
{
    int i = 3;

    {
        int i = 5;

        printf("I in the inner block is %d.\n", i);
    }
    
    printf("I in the function block is %d.\n", i);
}