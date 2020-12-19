#include <stdio.h>

int main()
{
    int num, result;

    printf("Multipication Table Program : \n\n");

    printf("Enter a Number : ");
    scanf("%d", &num);

    printf("Multipication Table of %d :\n", num);

    for (int i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);
    }

    return 0;
    
}
