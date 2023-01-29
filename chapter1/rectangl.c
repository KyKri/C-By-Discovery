/* Includes */
#include <stdio.h>

/* Function Declarations*/
int area (int, int);

int perimeter (int, int);

void main (void)
{
    int length, width;

    printf("This program calculates the area and perimeter of a rectangle given its length and width.\n");

    printf("Enter the length and width separated by a space: ");
    scanf("%d %d", &length, &width);

    printf("The area is: %d.\n", area(length, width));
    
    printf("The perimeter is: %d.\n", perimeter(length, width));
}

int area (int length, int width)
{
    return (length * width);
}

int perimeter (int length, int width)
{
    return (length * 2 + width * 2);
}
