/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<stdio.h>

int main()
{
    /* Display contents of a file on screen. */
    printf("*****Display File Contents*****\n\n");
    
    FILE *fp; /* The FILE structure has been declared in the header file "stdio.h" */
    char ch;

    fp = fopen("PR1.C", "r"); /* structure pointer fp */

    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("\n");
    
    fclose(fp);

    return 0;
}
