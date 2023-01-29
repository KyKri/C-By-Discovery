/* Includes */
#include <stdio.h>

void main (void)
{
    int numerator1, numerator2, denominator1, denominator2, numerator3, denominator3;

    printf("This program adds two fractions.\n");

    printf("Enter the first fraction in the form numerator/denominator: ");
    scanf("%d/%d", &numerator1, &denominator1);

    printf("Enter the second fraction in the form numerator/denominator: ");
    scanf("%d/%d", &numerator2, &denominator2);

    numerator3 = numerator1 * denominator2 + numerator2 * denominator1;
    denominator3 = denominator1 * denominator2; 

    printf("Those fractions added together equals: %d/%d.\n", numerator3, denominator3);
}
