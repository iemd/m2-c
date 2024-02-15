/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    /* A File-Copy program */
    printf("*****A File-Copy Program*****\n\n");
    
    FILE *fs, *ft; /* The FILE structure has been declared in the header file "stdio.h" */
    char ch;

    fs = fopen("PR1.C", "r"); /* structure pointer fs */    
    if(fs == NULL)
    {
        puts("Cannot open source file");
        exit(1);
    }

    ft = fopen("PR2.C", "w"); /* structure pointer ft */
    if(ft == NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(2);
    }

    while(1)
    {
        ch = fgetc(fs);
        if(ch == EOF)
            break;
        else
            putc(ch, ft);
    }

    fclose(fs);
    fclose(ft);
    
    return 0;
}
