/* Includes */
#include <stdio.h>

/* Function Declarations */
int odd (int);

void main (void)
{
    int input;

    printf("Enter a positive, even number less than 20: ");
    scanf("%d", &input);

    if (input < 20)
    {
        if (odd(input))
        {
            printf("Sorry, that number was not even.\n");
        }
        else if (input <= 0)
        {
            printf("Sorry, that number wasn't positive.\n");
        }
        else
        {
            printf("Excellent! %d satisfies the criteria.\n", input);
        }
    }
    else
    {
        printf("Sorry, that number was too large.\n");
    }
}

int odd (int number)
{
   return number % 2;
}