/* 
 * Structures: Special Data Type
 * "Address the heterogeneous world ..."
 * It lets us group a number of similar/dissimilar data types together.
*/
#include<stdio.h>

int main()
{
    // Nested Structures

    struct address
    {
        char phone[15];
        char city[25];
        int pin;        
    };
    struct emp
    {
        char name[25];
        struct address a;
    };

    struct emp e = {"jeru", "2531046", "nagpur", 10};

    printf("name = %s\tphone = %s\n", e.name, e.a.phone);
    printf("city = %s\tpin = %d\n", e.a.city, e.a.pin);
    
    return 0;
}
