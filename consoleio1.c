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

    // Format Specifications
    printf("*****Format Specifications*****\n\n");

    int weight = 63;
    printf("weight is %d kg\n", weight);
    printf("weight is %2d kg\n", weight);
    printf("weight is %4d kg\n", weight);
    printf("weight is %6d kg\n", weight);
    printf("weight is %-6d kg\n", weight);
    printf("weight is %1d kg\n\n", weight);

    printf("%10.1f%10.1f%10.1f\n", 5.0, 13.5, 133.9);
    printf("%10.1f%10.1f%10.1f\n\n", 305.0, 1200.9, 3005.3);

    char firstname1[] = "Sandy";
    char surname1[] = "Malya";
    char firstname2[] = "AjayKumar";
    char surname2[] = "Gurubaxani";
    printf("%20s%20s\n", firstname1, surname1);
    printf("%20s%20s\n", firstname2, surname2);

    // Escape Sequences
    printf("\n*****Escape Sequences*****\n\n");

    printf("Maths teaches reasoning,\nnot Algebra & geometry\n");
    printf("Future of learning \r is remote\n");
    printf("You\tmust\tbe\tcrazy\vto\thate\tthis\tbook\n\n");

    printf("He said, \"How\'s life\?\"\n\n");

    printf("%c\t%c\t%c\n", 65, '\101', '\x41');

    // Ignoring Characters
    printf("\n*****Ignoring Characters*****\n\n");

    int dd,mm,yy;
    printf("Enter date in dd/mm/yy or dd.mm.yy or dd-mm-yy format:\n");
    scanf("%d%*c%d%*c%d", &dd, &mm, &yy);
    printf("%d/%d/%d\n", dd, mm, yy);
    
    return 0;
}
