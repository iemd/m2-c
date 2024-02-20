/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>

//#pragma warn -rvl   /* return value */
//#pragma warn -par   /* parameter not used */
//#pragma warn -rch   /* unreachable code */

int f1()
{
    int a = 5;
}
void f2(int x)
{
    printf("Inside f2\n");
}
int f3()
{
    int x = 6;
    return x;
    x++;
}

int main()
{
    /* Preprocessor Directives */
    printf("*****Miscellaneous Directives*****\n\n");

    f1();
    f2(7);
    f3();

    return 0;
}
