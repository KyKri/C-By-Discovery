/* Includes */
#include <stdio.h>

void main (void)
{
    int x = 1, y, z;

    printf("Value of x: %d.\n", x);
    printf("Value of 2*x + 5: %d.\n", 2 * x + 5);

    printf("Value of assignment to x: %d.\n", x = 5);

    printf("Vlaue of assignment to y: %d.\n", y = 2 * x++ + 1);
    printf("x is %d, y is %d\n", x, y);

    z = y = 4 * x + 5;
    printf("y is %d and z is %d.\n", y, z);
}