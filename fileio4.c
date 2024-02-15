/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    /* String (Line) I/O in Files */

    // Receives strings from keyboard and writes them to file
    printf("*****String (Line) I/O in Files*****\n");

    FILE *fp; /* The FILE structure has been declared in the header file "stdio.h" */
    char str[80];

    fp = fopen("POEM.TXT", "w"); /* structure pointer fp */
    if(fp == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    printf("\nEnter a few lines of text:\n");
    while(strlen(fgets(str, 80, stdin)) > 1)
    {
        fputs(str, fp);
        //fputs("\n", fp);
    }
    fclose(fp);

    /* Read the file back */
    printf("File contents are being read now...\n");

    fp = fopen("POEM.TXT", "r"); /* structure pointer fp */
    if(fp == NULL)
    {
        puts("Cannot open file");
        exit(2);
    }

    while(fgets(str, 79, fp) != NULL)
        printf("%s", str);
    
    fclose(fp);    

    return 0;
}
