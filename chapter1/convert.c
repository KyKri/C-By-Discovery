/* Includes */
#include <stdio.h>

/* Preprocessor Constants */
#define BASE 5

/* Function Declarations*/
int todecimal (int, int);

void main (void)
{
    int original;

    printf("Convert integers between a specified base to decimal base\n");
    printf("Current base is %d.\n", BASE);
    
    printf("Enter an integer in base %d: ", BASE);
    scanf("%d", &original);

    printf("The converted value is %d.\n", todecimal(original, BASE));
}

/* Rudimentary conversion function to base 10
 * Note it accepts a maximum of 5 digits and does not check user input
 */
int todecimal(int number, int base)
{
    int digit1, digit2, digit3, digit4, digit5, converted;

    digit1 = number % 10;
    number /= 10;
    digit2 = number % 10;
    number /= 10;
    digit3 = number % 10;
    number /= 10;
    digit4 = number % 10;
    number /= 10;
    digit5 = number % 10;

    converted = digit1 + digit2 * base + digit3 * base * base + digit4 * base * base * base + digit5 * base * base * base * base;

    return converted;
}