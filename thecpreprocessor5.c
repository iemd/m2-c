/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>

int main()
{
    /* Preprocessor Directives */
    printf("*****#if and #elif Directives*****\n\n");

    /*
     * If the expression, TEST <= 5 evaluates to true, then statement 1 is compiled, otherwise
     * statement 2 is compiled.
    */

    /*
    #if TEST <= 5
        statement 1;
    #else
        statement 2;
    #endif
    */
    
    return 0;
}
