#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main()
{
    int num, m= 0;
    printf("Enter number of terms :");
    scanf("%d", &num);

    printf("Fibanocci Series : \n");

    for (int i = 0; i < num; i++)
    {
        printf("%d  ", fib_recursive(m));
        m++;
    }

    return 0;
    
}
