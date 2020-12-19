#include <stdio.h>
#include <stdlib.h>

void print()
{
        printf("\nEnter Number : ");
}
int scan()
{
        int n;
        scanf("%d", &n);
        return n;
}

int main()
{
        int x, number;
        float result;

        printf("....................Unit Converter....................");

        while (1)
        {
                printf("\n\nMENU :");
                printf("\n1. KILOMETERS >> MILES \n");
                printf("2. INCHES >> FOOT \n");
                printf("3. CENTIMETERS >> INCHES \n");
                printf("4. POUND >> KILOGRAMS \n");
                printf("5. INCHES >> METERS \n");
                printf("6. EXIT \n\n");

                printf("Select From (1 - 6) : ");
                scanf("%d", &x);

                switch (x)
                {
                case 1:
                        print();
                        number = scan();
                        result = (float)number / 1.609;
                        printf("\n%d KILOMETERS is Equal To %.3f MILES", number, result);
                        break;
                case 2:
                        print();
                        number = scan();
                        result = (float)number / 12;
                        printf("\n%d INCHES is Equal To %.3f FOOT", number, result);
                        break;
                case 3:
                        print();
                        number = scan();
                        result = (float)number / 2.54;
                        printf("\n%d CENTIMETERS is Equal To %.3f INCHES", number, result);
                        break;
                case 4:
                        print();
                        number = scan();
                        result = (float)number / 2.205;
                        printf("\n%d POUND is Equal To %.3f KILOGRAMS", number, result);
                        break;
                case 5:
                        print();
                        number = scan();
                        result = (float)number / 1.609;
                        printf("\n%d INCHES is Equal To %.3f METERS", number, result);
                        break;
                case 6:
                        exit(0);

                default:
                        printf("\nINVALID SELECTION\nPlease Select From (1 - 6)");
                }
        }

        return 0;
}
