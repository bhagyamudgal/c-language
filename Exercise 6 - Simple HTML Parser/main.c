#include <stdio.h>
#include <string.h>

void parsestr(char str[])
{
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 0;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 1;
            continue;
        }
        if (in==1)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {

        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char str1[40], str2[40];

    printf("Enter String: ");
    gets(str1);

    printf("\nInputed String : %s", str1);

    parsestr(str1);
    printf("\n\nParsed String: -----%s----- ",str1);

    return 0;
}