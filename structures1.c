/* 
 * Structures: Special Data Type
 * "Address the heterogeneous world ..."
 * It lets us group a number of similar/dissimilar data types together.
*/
#include<stdio.h>

void linkfloat();

int main()
{
    struct book
    {
        char name;
        float price;    // Structure elements (3)
        int pages;
    };

    struct book b[3];   // User-defined data type (struct book)
    int i; int dh;

    for(i=0;i<=2;i++)
    {
        printf("Enter name, price and pages:\n");
        scanf("%c%f%d", &b[i].name, &b[i].price, &b[i].pages);
        while((dh=getchar()) != '\n')
            ;
    }

    printf("And this is what you entered:\n");

    for(i=0;i<=2;i++)
        printf("%c\t%f\t%d\n", b[i].name, b[i].price, b[i].pages);

    return 0;
}

void linkfloat()
{
    float a=0, *b;
    b=&a;   /* cause emulator to be linked */
    a=*b;   /* suppress the warning - variable not used */
}
