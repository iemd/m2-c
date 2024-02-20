/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>

void fun1();
void fun2();
//#pragma startup fun1  /* #pragma directive is used to turn certain features on or off. */
//#pragma exit fun2

void __attribute__((constructor)) fun1();
void __attribute__((destructor)) fun2();

int main()
{
    /* Preprocessor Directives */
    printf("*****Miscellaneous Directives*****\n\n");

    printf("Inside main\n");

    return 0;
}

void fun1()
{
    printf("Inside fun1\n");
}
void fun2()
{
    printf("Inside fun2\n");
}
