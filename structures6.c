/* 
 * Structures: Special Data Type
 * "Address the heterogeneous world ..."
 * It lets us group a number of similar/dissimilar data types together.
*/
#include<stdio.h>

struct book
{
    char name[25];
    char author[25];
    int pages;
};

void display1(char *, char *, int);
void display2(struct book);
void display3(struct book *);

int main()
{
    // Passing Structure Elements / Structure Variables

    struct book b1 = {"Let Us C", "YPK", 464};

    display1(b1.name, b1.author, b1.pages);
    display2(b1);
    display3(&b1);

    return 0;
}

void display1(char *n, char *a, int pg)
{
    printf("%s\t%s\t%d\n", n, a, pg);
}

void display2(struct book b)
{
    printf("%s\t%s\t%d\n", b.name, b.author, b.pages);
}

void display3(struct book *pb)
{
    printf("%s\t%s\t%d\n", pb->name, pb->author, pb->pages);
}
