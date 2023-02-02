/* Includes */
#include <stdio.h>

/* Function Declarations */
int odd (int);

void main (void)
{
    int number;

    printf("Enter a decimal to tell if it is odd or even: ");
    scanf("%d", &number);

    if (odd(number))
    {
        printf("The number %d is odd.\n", number);
    }
    else
    {
        printf("The number %d is even.\n", number);
    }
}

int odd (int number)
{
    return number % 2;
}