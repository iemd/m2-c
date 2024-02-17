/*
 * More Issues In Input/Output
 * "More the merrier..."
 * The arguments that we pass to main() at the command prompt are called command-line arguments.
*/
#include<stdio.h>

int main()
{
    /* Detecting Errors in Reading/Writing */
    printf("*****Detecting Errors in Reading/Writing*****\n\n");

    FILE *fp;
    char ch;

    fp = fopen("TRIAL", "w");
    while(!feof(fp))
    {
        ch = fgetc(fp);
        if(ferror(fp))
        {
            perror("TRIAL");
            break;
        }
        else
            printf("%c", ch);
    }
    printf("\n");

    fclose(fp);

    return 0;
}
