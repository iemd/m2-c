/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    /* Low-Level File I/O */

    // File-copy program which copies text, .com, and .exe files
    printf("*****A Low-level File-copy Program*****\n\n");

    char buffer[512], source[128], target[128];
    int in, out, bytes;

    printf("Enter source file name:");
    scanf("%s", source);
    //gets(source);

    in = open(source, O_RDONLY);
    if(in == -1)
    {
        puts("Cannot open file");
        exit(1);
    }

    printf("Enter target file name:");
    scanf("%s", target);
    //gets(target);

    out = open(target, O_CREAT | O_WRONLY, S_IWRITE | S_IREAD);
    if(out == -1)
    {
        puts("Cannot open file");
        close(in);
        exit(2);
    }

    while((bytes = read(in, buffer, 512)) > 0)
        write(out, buffer, bytes);
    
    close(in);
    close(out);

    return 0;
}
