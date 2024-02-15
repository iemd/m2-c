/*
 * File Input/Output
 * "Save in file, what you will need in future"
 * Memory is volatile and its contents would be lost once the program is terminated.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    /* Record I/O in Files */

    // Writes/Reads records to/from a file in text mode
    printf("*****Record I/O in Files (Text Mode)*****\n\n");

    FILE *fp; /* The FILE structure has been declared in the header file "stdio.h" */

    struct emp
    {
        char name[40];
        int age;
        float bs;
    };

    struct emp e;
    char ch = 'y';
    int dh;

    fp = fopen("EMPLOYEE.DAT", "w"); /* structure pointer fp */    
    while(ch == 'y')
    {
        printf("Enter name,age,salary:");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);
        printf("Another record(y/n):");
        while((dh=getchar()) != '\n')
            ;
        ch = getchar();
    }
    fclose(fp);

    fp = fopen("EMPLOYEE.DAT", "r"); /* structure pointer fp */
    while(fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs) != EOF)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);
    
    return 0;
}
