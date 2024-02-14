/*
 * Console Input/Output
 * "Input from keyboard, Output to screen"
 * The screen and keyboard together are called a console.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* Formatted Console I/O Functions */

    // Mismatch
    printf("*****Mismatch*****\n\n");

    char ch = 'z';
    int i = 125;
    float a = 12.55;
    char s[] = "hello there!";

    printf("%c %d\n", ch, ch);
    printf("%s\n", s);
    printf("%c %d\n", i, i);
    printf("%f\n", a);

    // scanf() function
    printf("\n*****scanf() function*****\n\n");

    int c;
    printf("Enter values(c,a,ch):");
    scanf("%d %f %c", &c, &a, &ch);
    printf("You entered:%d %f %c\n", c, a, ch);

    return 0;
}
