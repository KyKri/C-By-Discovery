/* Includes */
#include <stdio.h>

/* Constants */
#define LAST 7

/* Functions */
void main (void)
{
    int count, factorial;

    printf("Counting.\n");
    for (count = 1; count < LAST; count++)
    {
        printf("%d\n", count);
    }

    printf("Counting by two.\n");
    for (count = 0; count < (2 * LAST); printf("%d\n", count += 2))
    {

    }

    for (factorial = 1, count = 1; count <= LAST; factorial *= count++)
    {

    }

    printf("%d! is %d.\n", LAST, factorial);
}
