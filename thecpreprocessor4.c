/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>

int main()
{
    /* Preprocessor Directives*/
    printf("*****Conditional Compilation*****\n\n");

    // If macroname is #defined, the block of code will be processed as usual; otherwise not.

    /*
    #ifdef macroname
        statement 1;
        statement 2;
        statement 3;
    #endif
    */

    /*
    #ifdef NOTNOW
        statement 1;
        statement 2;
    #endif
    statement 3;
    statement 4;
    */
    
    return 0;
}
