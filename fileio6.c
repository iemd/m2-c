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

    // Writes/Reads records to/from a file in binary mode
    printf("*****Record I/O in Files (Binary Mode)*****\n\n");

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

    fp = fopen("EMP.DAT", "wb"); /* structure pointer fp */
    while(ch == 'y')
    {
        printf("Enter name,age,salary:");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fwrite(&e, sizeof(e), 1, fp);
        printf("Another record(y/n):");
        while((dh = getchar()) != '\n')
            ;
        ch = getchar();
    }
    fclose(fp);

    fp = fopen("EMP.DAT", "rb"); /* structure pointer fp */
    while(fread(&e, sizeof(e), 1, fp) == 1)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);

    printf("\n*****Modify Records*****\n\n");

    int recsize;
    char empname[40];
    recsize = sizeof(struct emp);

    printf("Enter name of employee to modify:");
    scanf("%s", empname);

    fp = fopen("EMP.DAT", "rb+"); /* structure pointer fp */
    //rewind(fp);
    while(fread(&e, recsize, 1, fp) == 1)
    {
        if(strcmp(e.name, empname) == 0)
        {
            printf("Enter new name,age,salary:");
            scanf("%s %d %f", e.name, &e.age, &e.bs);
            fseek(fp, -recsize, SEEK_CUR);
            fwrite(&e, recsize, 1, fp);
            break;
        }
    }
    fclose(fp);

    fp = fopen("EMP.DAT", "rb"); /* structure pointer fp */
    while(fread(&e, sizeof(e), 1, fp) == 1)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);

    return 0;
}
