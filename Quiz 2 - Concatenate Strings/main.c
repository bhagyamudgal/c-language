#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50], str0[50];
    char str3[]=" is friend of ";
    printf("Enter str1 : ");
    scanf("%s",str1);
    printf("\nEnter str2 : ");
    scanf("%s",str2);

    printf("\nOutput : \n");
    
    strcpy(str0,strcat(str1,str3));
    puts(strcat(str0,str2));


    

    return 0;
}