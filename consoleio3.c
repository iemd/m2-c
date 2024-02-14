/*
 * Console Input/Output
 * "Input from keyboard, Output to screen"
 * The screen and keyboard together are called a console.
*/
#include<stdio.h>

int main()
{
    /* Formatted Console I/O Functions */

    // sprintf() function
    printf("*****sprintf() function*****\n\n");

    int i =10;
    char ch = 'A';
    float a = 3.14;
    char str[20];

    printf("%d %c %f\n", i, ch, a);
    sprintf(str, "%d %c %f", i, ch, a);
    printf("%s\n", str);

    // sscanf() function
    printf("\n*****sscanf() function*****\n\n");

    char str2[20] = "420A4.32";

    sscanf(str2, "%d %c %f", &i, &ch, &a);
    printf("%d %c %f\n", i, ch, a);

    return 0;
}
