#include <stdio.h>

void main (void)
{
    int fahrenheit, celsius;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%d in fahrenheit is %d in celsius\n.", fahrenheit, celsius);
}