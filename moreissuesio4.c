/*
 * More Issues In Input/Output
 * "More the merrier..."
 * The arguments that we pass to main() at the command prompt are called command-line arguments.
*/
#include<stdio.h>

int main()
{
    /* I/O Redirection */
    printf("*****I/O Redirection*****\n\n");
    // Redirecting the Output ($./a.out > TABLE.TXT)

    int ch;

    for(ch=0;ch<=255;ch++)
        printf("%d %c\n", ch, ch);

    return 0;
}
