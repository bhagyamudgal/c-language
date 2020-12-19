#include <stdio.h>

void arrayrev(int array[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[(n - 1) - i];
        array[(n - 1) - i] = temp;
    }
}

int main()
{
    int n, array[50];

    printf("Array Reversal Program\n\nEnter Size Of Array: ");
    scanf("%d", &n);

    printf("\nInput Array: \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d Of Array : ", i);
        scanf("%d", &array[i]);
    }

    printf("\nArray Before Reversal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    arrayrev(array, n);

    printf("\n\nArray After Reversal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}