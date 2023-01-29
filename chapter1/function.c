/* Includes */
#include <stdio.h>

/* Function Declarations*/
int f (int);

void main (void)
{
    int x, y, z;

    z = 4;
    y = f(z);
    printf("y is %d\n", y);

    x = y + f(3);
    printf("The value of x is %d\n", x);

    f(x);
    printf("The value of f(5) is %d\n", f(5));
}

int f (int x)
{
    return x + 3;
}