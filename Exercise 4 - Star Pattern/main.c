#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rows;

    while (1)
    {
    printf("Star Patter Program\nEnter\n1 to print Triangular Star Pattern\n2 to print Reversed Triangular Pattern\n0 to Exit \n>> ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Enter No. Of Rows :");
        scanf("%d", &rows);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else if (num == 2)
    {
        printf("Enter No. Of Rows :");
        scanf("%d", &rows);
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= rows-i-1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else if (num==0)
    {
        exit(0);
    }
    
    else
    {
        printf("Enter Valid Option\nPlease Try Again\n");
    }
    }
    return 0;
}