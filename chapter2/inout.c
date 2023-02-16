/* Includes */
#include <stdio.h>

/*
 * Program summary: Reads keyboard input and echoes it right back to output until EOF is detected.
 */
void main (void)
{
    int iochar;

    iochar = getchar(); // getchar() reads input from keyboard and returns corresponding integer value
    while (iochar != EOF)
    {
        putchar(iochar); // putchar() accepts an int and outputs the corresponding ASCII character
        iochar = getchar();
    }
}