#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = atoi(argv[2]), y = atoi(argv[3]), z = 0;
    char *operation;
    operation = argv[1];

    if (argc == 2)
    {
        if (strcmp(operation, "help") == 0)
        {
            printf("HELP : \n");
            printf("USE add - for addition of 2 numbers  \n");
            printf("USE sub - for subtraction of 2 numbers \n");
            printf("USE mul - for multipication of 2 numbers \n");
            printf("USE div - for division of 2 numbers \n");
        }
    }
    else if(argc == 4)
    {

        if (strcmp(operation, "add") == 0)
        {
            z = x + y;
            printf("%d", z);
        }
        else if (strcmp(operation, "sub") == 0)
        {
            z = x - y;
            printf("%d", z);
        }
        else if (strcmp(operation, "mul") == 0)
        {

            z = x * y;
            printf("%d", z);
        }
        else if (strcmp(operation, "div") == 0)
        {

            z = x / y;
            printf("%d", z);
        }
        else
        {
            printf("Invalid Argument - use 'help'");
        }
    }
    else
    {
        printf("Invalid Number Of Arguments\n");
    }

    return 0;
}
