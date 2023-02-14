/* Includes */
#include <stdio.h>

/* Constants */
#define LOW 0
#define HIGH 100
#define TARGET 17
#define TRUE 1
#define FALSE 0 

/* Functions */
int guess (int);

void main (void)
{
    int user_guess, correct;

    correct = FALSE;

    while(correct != TRUE)
    {
        printf("Guess a number between %d and %d: ", LOW, HIGH);
        scanf("%d", &user_guess);
        correct = guess(user_guess);
    }
}

int guess (int user_guess)
{
    if (user_guess < TARGET)
    {
        printf("Too low!\n");
    }
    else if (user_guess > TARGET)
    {
        printf("Too high!\n");
    }
    else if (user_guess == TARGET)
    {
        printf("You got it!\n");
        return TRUE;
    }
    return FALSE;
}