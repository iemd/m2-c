/*
 * Console Input/Output
 * "Input from keyboard, Output to screen"
 * The screen and keyboard together are called a console.
*/
#include<stdio.h>

int main()
{
    /* Unformatted Console I/O Functions */

    // gets() & puts() functions
    printf("*****gets() & puts() functions*****\n\n");

    char footballer[40];

    puts("Enter name:");
    //gets(footballer); /* sends base address of array */
    fgets(footballer, 40, stdin);
    puts("Happy footballing!");
    puts(footballer);

    return 0;
}
