/*
 * Console Input/Output
 * "Input from keyboard, Output to screen"
 * The screen and keyboard together are called a console.
*/
#include<stdio.h>

int main()
{
    /* Unformatted Console I/O Functions */

    // getchar() & putchar() functions
    printf("*****getchar() & putchar() functions*****\n\n");

    char ch;

    printf("Type any alphabet:");
    ch = getchar(); /* must be followed by enter key */
    printf("You typed:");
    putchar(ch);
    printf("\n");
    
    return 0;
}
