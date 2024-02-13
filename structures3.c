/* 
 * Structures: Special Data Type
 * "Address the heterogeneous world ..."
 * It lets us group a number of similar/dissimilar data types together.
*/
#include<stdio.h>

int main()
{
    // Storage of Structure Elements (Memory map of structure elements)

    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b1 = {'B', 130.00, 550};

    printf("Address of name = %p\n", &b1.name);
    printf("Address of price = %p\n", &b1.price);
    printf("Address of pages = %p\n", &b1.pages);

    return 0;    
}
