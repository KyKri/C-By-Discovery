/* Includes */
#include <stdio.h>

/* Functions */
void main (void)
{
    short shortvar;
    long longvar;

    printf("An int has %d bytes.\n", sizeof(int));
    printf("A short has %d bytes.\n", sizeof(shortvar));
    printf("A long has %d bytes.\n", sizeof(longvar));
    printf("It takes %d bytes to store shortvar + 2.\n", sizeof(shortvar + 2));
}
