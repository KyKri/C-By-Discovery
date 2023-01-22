#include <stdio.h>

void main (void)
{
    int intvar;

    /* %p - Tells printf that the next param should be a memory address 
     * & - Address operator, gets the memory address of the succeeding variable
     */
    printf("The address of intvar is %p.\n", &intvar);

    printf("Enter an integer value: ");
    scanf("%d", &intvar);   /* scanf requires the memory address */
    printf("The value you entered was %d\n.", intvar);
}