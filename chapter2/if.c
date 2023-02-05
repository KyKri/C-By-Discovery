/* Includes */
#include <stdio.h>

/* Constants */
#define TARGET 17

/* Function Declarations*/
void test (int);

void main (void)
{
    int user_guess;

    printf("Try to guess the number!\n");
    printf("Enter your guess: ");
    scanf("%d", &user_guess);

    test (user_guess);
    printf("The number was %d\n", TARGET);
}

/* Makes use of the compound if-else */
void test (int guess)
{
    if (guess < TARGET)
    {
        printf("Too low!\n");
    }
    else if (guess > TARGET)
    {
        printf("Too high!\n");
    }
    else
    {
        printf("You got it!\n");
    }
}