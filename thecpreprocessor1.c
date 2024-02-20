/*
 * The C Preprocessor
 * "Add spick and span..."
 * C preprocessor is a program that processes our program before it is passed to the compiler.
 * Each preprocessor directive begins with a # symbol.
*/
#include<stdio.h>
#define PI 3.1428   /* PI is called 'macro template', whereas, 3.1428 is called 'macro expansion'. */

#define AND &&
#define ARANGE (a > 25 AND a < 50)
#define SLOGAN printf("In history you can see the future\n");

int main()
{
    /* Preprocessor Directives */
    printf("*****Macro Expansion (Simple Macros)*****\n\n");

    float r = 6.25, area;

    area = PI * r * r;
    printf("Area of circle = %f\n\n", area);    

    int a;

    printf("Enter the number(a):");
    scanf("%d", &a);

    if(ARANGE)
    {
        printf("The number is in range (a > 25 AND a < 50)\n\n");
        SLOGAN
    }
    else
    {
        printf("The number is not in range (a > 25 AND a < 50)\n\n");
        SLOGAN
    }

    return 0;
}
