/*
 * Precedence of arithmetic operators in C, ranked high to low:
 * Unary: -, +
 * Multiplicative: *, /, %
 * Additive: +, -
 * Assignment: =
 */
#include <stdio.h>

void main (void)
{
    int a = 4, b = 2, c = 3, d, e;

    d = a * -b + c;
    e = a * -(b + c);

    printf("d is %d, and e is %d.\n", d, e);

    d = a + b * c;
    e = (a + b) * c;

    printf("d is %d, and e is %d.\n", d, e);

    d = b % c + a;
    e = b % (c + a);

    printf("d is %d, and e is %d.\n", d, e);

    d = c - b / a * a;
    e = (c - b) / (a * a);

    printf("d is %d, and e is %d.\n", d, e);
}