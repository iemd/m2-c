/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>
#define AREA(x) (3.14 * x * x)  /* Do not give a space between 'macro template' and its 'argument'. */

//#define ISDIGIT(n) (n >= 48 && n <= 57)
//#define ISCAPITAL(ch) (ch >= 'A' && ch <= 'Z')

int main()
{
    /* Preprocessor Directives */
    printf("*****Macro Expansion (Macros with Arguments)*****\n\n");

    float r1 = 6.25, r2 = 2.5, a;

    a = AREA(r1);
    printf("Area of circle = %f\n", a);

    a = AREA(r2);
    printf("Area of circle = %f\n", a);

    return 0;
}
