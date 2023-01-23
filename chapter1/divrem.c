/* Makes use of abs() from the C library to make division and remainder operations portable */
#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int a, b;

    printf("Enter a positive and negative integer.");
    printf("\nSeparate with a space: ");
    scanf("%d %d", &a, &b);

    printf("The value of a / b is: %d\n", -(abs(a) / abs(b)));

    /* %% - conversion specification to show the char '%' in output string */
    printf("The value of a %% b is %d\n", -(abs(a)) % abs(b));
}