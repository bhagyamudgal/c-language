#include <stdio.h>

struct student
{
    int id;
    char name[50];
    int marks;

} student[10];

int main()
{
    int size;

    printf("Enter No. Of Students: ");
    scanf("%d", &size);

    printf("\nInput Students Details: ");
    for (int i = 1; i <= size; i++)
    {
        printf("\n\nStudent %d: \n", i);
        printf("Enter ID : ");
        scanf("%d", &student[i].id);

        printf("Enter NAME : ");
        scanf("%s", &student[i].name);

        printf("Enter MARKS : ");
        scanf("%d", &student[i].marks);
    }

    printf("\nDetails Of Students: ");
    for (int i = 1; i <= size; i++)
    {
        printf("\n\nStudent ID: %d", student[i].id);

        printf("\nStudent Name: %s", student[i].name);

        printf("\nStudent Marks: %d\n", student[i].marks);
    }

    return 0;
}