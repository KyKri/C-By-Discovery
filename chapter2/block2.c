/*
 * This program illustrates the effects of variable hiding.
 * In particular, this program will not compile due to i not being defined
 * in the main function block. 
*/

/* Inlcude File */
#include <stdio.h>

void main (void)
{
  {
    int i;
    scanf("%d", &i);
  }

  printf("i is %d", i);
}