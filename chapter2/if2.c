/* Includes */
#include <stdio.h>

/* Constants */
#define CONST 5

/* Function Declarations */
int add_const (int);

void main (void)
{
    int sum, intvar;

    printf("Enter a decimal value: ");
    scanf("%d", &intvar);

    sum = add_const(intvar);

    printf("%d + %d is %d.\n", intvar, CONST, sum);

    /* If statements in c consider a non-zero value to be true, and a zero value to be false*/
    if (sum < 20)
    {
        printf("That's a small number!\n");
    }
    else
    {
        printf("That's a big number.\n");
    }
}

int add_const (int number)
{
    return number + CONST;
}