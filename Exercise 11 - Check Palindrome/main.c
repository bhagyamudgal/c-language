#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char number[20])
{
    char *revNumber= (char*) malloc(20*sizeof(char));
    int length = strlen(number);

    for (int i = 0; i < length; i++)
    {
        revNumber[length-i-1]=number[i];
    }

    if (strcmp(number, revNumber) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char number[20];
    printf("Program To Check Palindrome\n");
    printf("By Bhagya Mudgal\n");

    printf("Enter Number : \n");
    scanf("%s", number);

    if (isPalindrome(number)==1)
    {
        printf("\nNumber is Palindrome\n");
    }
    else
    {
        printf("\nNumber is Not a Palindrome\n");
    }
    return 0;
}