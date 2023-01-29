#include <stdio.h>

void main (void)
{
    int a = 3, b;

    /* Increment by one after the variable takes effect after expression evaluation*/
    b = a++;
    printf("b is %d, and a is %d.\n", b, a);

    /* Increment by one before the variable takes effect before expression evaluation*/
    b = ++a;
    printf("Now b is %d, and a is %d.\n", b, a);
    
    b = 5 % --a;
    printf("Now b is %d, and a is %d.\n", b, a);

    printf("Now b is %d, and a is %d.\n", ++b, a--);
    printf("Now b is %d, and a is %d.\n", b, a);
}