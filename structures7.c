/* 
 * Structures: Special Data Type
 * "Address the heterogeneous world ..."
 * It lets us group a number of similar/dissimilar data types together.
*/
#include<stdio.h>

int main()
{
    // Packing Structure Elements

    #pragma pack(1)
    struct emp
    {
        int a;
        char ch;
        float s;        
    };
    #pragma pack()

    struct emp e;

    printf("%p\t%p\t%p\n", &e.a, &e.ch, &e.s);

    return 0;
}
