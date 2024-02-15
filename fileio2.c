/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<stdio.h>

int main()
{
    /* Counting chars, spaces, tabs and newlines in a file. */
    printf("*****Count Chars, Spaces, Tabs & Newlines in a File*****\n\n");
    
    FILE *fp; /* The FILE structure has been declared in the header file "stdio.h" */
    char ch;
    int nol=0, not=0, nob=0, noc=0;

    fp = fopen("PR1.C", "r"); /* structure pointer fp */

    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        noc++;
        if(ch == ' ')
            nob++;
        if(ch == '\n')
            nol++;
        if(ch == '\t')
            not++;
    }

    fclose(fp);

    printf("Number of characters = %d\n", noc);
    printf("Number of blanks = %d\n", nob);
    printf("Number of tabs = %d\n", not);
    printf("Number of lines = %d\n\n", nol);

    return 0;
}
