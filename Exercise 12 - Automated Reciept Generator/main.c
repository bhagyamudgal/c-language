#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
    char name[50];
    char item[50];
    char outlet[50];
} data;

char *replaceWordInString(const char *string, const char *oldWord, const char *newWord)
{
    int i = 0, count = 0;
    int len1 = strlen(newWord);
    int len2 = strlen(oldWord);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (strstr(&string[i], oldWord) == &string[i])
        {
            count++;
            i += len2 - 1;
        }
    }
    char *newString = (char *)malloc(i + count * (len1 - len2) + 1);
    i = 0;
    while (*string)
    {
        if (strstr(string, oldWord) == string)
        {
            strcpy(&newString[i], newWord);
            i += len1;
            string += len2;
        }
        else
            newString[i++] = *string++;
    }
    newString[i] = '\0';
    return newString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    int x;
    char oldReciept[200];

    printf("Automated Reciept Generator\n");
    printf("Developed By Bhagya Mudgal\n\n");

    while (1)
    {
    rerun:
        printf("\nMENU :\n");
        printf("\n1. Generate New Reciept \n");
        printf("2. Exit\n");

        printf("\nSelect From (1-2) : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("\nEnter Name : ");
            scanf("%s", data.name);
            printf("Enter Item : ");
            scanf("%s", data.item);
            printf("Enter Outlet : ");
            scanf("%s", data.outlet);

            ptr = fopen("oldreciept.txt", "r");
            ptr2 = fopen("newreciept.txt", "w");
            fgets(oldReciept, sizeof(oldReciept), ptr);
        
            char *newReciept;
            newReciept = replaceWordInString(oldReciept, "<OUTLET>", data.outlet);
            newReciept = replaceWordInString(newReciept, "<ITEM>", data.item);
            newReciept = replaceWordInString(newReciept, "<NAME>", data.name);

            fprintf(ptr2, "%s", newReciept);

            printf("\nNew Reciept Generated\n");

            fclose(ptr);
            fclose(ptr2);

            break;

        case 2:
            exit(0);

        default:
            printf("\nINVALID CHOICE\nPlease Select From (1-2)");
            goto rerun;
            break;
        }

        return 0;
    }
}