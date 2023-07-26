/* Includes */
#include <stdio.h>

/* Constants*/
#define TAB '\t'
#define ALTTAB 1
#define TABSTOP 5
#define SPACE ' '

/* Functions */
void processtabs (int tabstop, int character);

void main (void)
{
    int iochar;

    while ((iochar = getchar()) != EOF)
    {
        if (iochar == TAB || iochar == ALTTAB)
        {
            processtabs(TABSTOP, SPACE);
        } 
        else 
        {
            putchar(iochar);
        }
    }
}

void processtabs (int tabstop, int character)
{
    int colcount = 0;

    while (colcount++ < tabstop)
    {
        putchar(character);
    }
}
