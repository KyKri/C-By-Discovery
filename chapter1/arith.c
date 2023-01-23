/* This program covers the basics in C integer arithmetic */
#include <stdio.h>

void main (void) 
{
    int a, b, c, d;

    printf("Enter an integer: ");
    scanf("%d", &a);

    b = a + 4;
    c = a - 3;
    d = -a;

    printf("b is %d,\nc is %d,\nand d is %d.\n", b, c, d);

    b = a * 3;
    c = a / 3;
    d = a % 3;

    printf("Now, b is %d,\nc is %d,\nand d is %d.\n", b, c, d);
}