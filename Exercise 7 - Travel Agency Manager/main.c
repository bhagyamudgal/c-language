#include <stdio.h>
#include <string.h>

struct driverdata
{
    char name[40];
    char dlno[20];
    char route[40];
    int kms;
} driverdata[3];

int main()
{
    printf("Travel Agency Manager\n\n");
    printf("Enter Driver Details\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("\nInput Details of Driver %d :\n", i);
        printf("Driver Name : ");
        scanf("%s", driverdata[i].name);
        printf("Driving License Number : ");
        scanf("%s", driverdata[i].dlno);
        printf("Driver Route : ");
        scanf("%s", driverdata[i].route);
        printf("Driving Distance (In KM) : ");
        scanf("%d", &driverdata[i].kms);
    }
    printf("\nOutput Details Of Drivers :\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("\n\nDetails of Driver %d :\n", i);
        printf("Driver Name : ");
        puts(driverdata[i].name);
        printf("Driving License Number: ");
        puts(driverdata[i].dlno);
        printf("Driver Route : ");
        puts(driverdata[i].route);
        printf("Driving Distance (In KM) : %d", driverdata[i].kms);
    }

    return 0;
}