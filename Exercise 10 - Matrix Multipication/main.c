#include <stdio.h>

// function to get matrix elements entered by the user
void getMatrixElements(int matrix[][10], int row, int column)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            printf("\nEnter Value for row %d and coloumn %d  : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to multiply two matrices
void multiplyMatrices(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2)
{

    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// function to display the matrix
void display(int matrix[][10], int row, int column)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;

    printf("Matrix Multipication Program\n");
    printf("By Bhagya Mudgal\n");

    printf("\nEnter no. of rows for Matrix 1 : ");
    scanf("%d", &r1);
    printf("\nEnter no. of coloumns for Matrix 1 : ");
    scanf("%d", &c1);

    printf("\nEnter Data for Matrix 1 :\n");
    // get elements of the first matrix
    getMatrixElements(first, r1, c1);
    printf("\nMatrix 1 :\n\n");
    display(first, r1, c1);

rerun:
    printf("\nEnter no. of rows for Matrix 2 : ");
    scanf("%d", &r2);
    printf("\nEnter no. of coloumns for Matrix 2 : ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("\nMatrix Multipication Can Not Be Done \n<< No. of Coloumns of Matrix 1 not equal to No. of Rows of Matrix 2 >>\n<< Enter Correct Size >>\n");
        goto rerun;
    }
    else
    {
        printf("\nEnter Data for Matrix 2 :\n");
        // get elements of the second matrix
        getMatrixElements(second, r2, c2);
        printf("\nMatrix 2 :\n\n");
        display(second, r2, c2);
    }
    printf("\nProduct Of Matrix 1 and 2 :\n\n");

    // multiply two matrices.
    multiplyMatrices(first, second, result, r1, c1, r2, c2);

    // display the result
    display(result, r1, c2);

    return 0;
}