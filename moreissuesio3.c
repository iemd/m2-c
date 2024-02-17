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
    // Redirecting the Output ($./a.out > POEM.TXT)
    // Redirecting the Input ($./a.out < NEWPOEM.TXT)
    // Both Ways at Once ($./a.out < NEWPOEM.TXT > POETRY.TXT)

    char ch;

    while((ch = fgetc(stdin)) != EOF);
        fputc(ch, stdout);
        
    return 0;
}