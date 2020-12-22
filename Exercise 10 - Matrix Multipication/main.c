#include <stdio.h>

int rows1, coloumns1, rows2, coloumns2, sum = 0;
int a[10][10];
int b[10][10];
int ab[10][10];

void aInput()
{
    for (int i = 1; i <= rows1; i++)
        for (int j = 1; j <= coloumns1; j++)
        {
            printf("\nEnter Value for row %d and coloumn %d  : ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void aOutput()
{
    for (int i = 1; i <= rows1; i++)
    {
        for (int j = 1; j <= coloumns1; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

void bInput()
{
    for (int i = 1; i <= rows2; i++)
        for (int j = 1; j <= coloumns2; j++)
        {
            printf("\nEnter Value for row %d and coloumn %d  : ", i, j);
            scanf("%d", &b[i][j]);
        }
}

void bOutput()
{
    for (int i = 1; i <= rows2; i++)
    {
        for (int j = 1; j <= coloumns2; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Matrix Multipication Program\n");
    printf("By Bhagya Mudgal\n");

    printf("\nEnter no. of rows for Matrix 1 : ");
    scanf("%d", &rows1);
    printf("\nEnter no. of coloumns for Matrix 1 : ");
    scanf("%d", &coloumns1);

    printf("\nEnter Data for Matrix 1 :\n");
    aInput();
    printf("\nMatrix 1 :\n");
    aOutput();

rerun:
    printf("\nEnter no. of rows for Matrix 2 : ");
    scanf("%d", &rows2);
    printf("\nEnter no. of coloumns for Matrix 2 : ");
    scanf("%d", &coloumns2);

    if (coloumns1 != rows2)
    {
        printf("\nMatrix Multipication Can Not Be Done \n<< No. of Coloumns of Matrix 1 not equal to No. of Rows of Matrix 2 >>\n<<Enter Correct Size>>\n");
        goto rerun;
    }
    else
    {
        printf("\nEnter Data for Matrix 2 :\n");
        bInput();
        printf("\nMatrix 2 :\n");
        bOutput();

        for (int i = 1; i <= rows1; i++)
        {
            for (int j = 1; j <= coloumns2; j++)
            {
                for (int k = 1; i <= rows2; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                ab[i][j] = sum;
                sum = 0;
            }
        }
    }

    printf("\nProduct Of Matrix 1 and 2 :\n");

    for (int i = 1; i <= rows1; i++)
    {
        for (int j = 1; j <= coloumns2; j++)
        {
            printf("%d  ", ab[i][j]);
        }
        printf("\n");
    }

    return 0;
}