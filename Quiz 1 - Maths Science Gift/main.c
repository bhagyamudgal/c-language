#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, gift;

    printf("Conditions: \n\n");
    printf("You Have Passed Maths (Enter Value 1) \n");
    printf("You Have Passed Science (Enter Value 2)  \n");
    printf("You Have Passed Both Maths And Science (Enter Value 3)  \n\n");


    printf("Enter a Value : ");
    scanf("%d", &x);

    if(x==1)
    {
        gift=15;
    }
    else if(x==2)
    {
        gift=15;
    }
    else if(x==3)
    {
        gift=45;
    }
    else
    {
        printf("Invalid Value, Please Enter a Valid Value");
        exit(0);
    }

    printf("You Will Get A Rs.%d Worth Gift From Us",gift);
    
    return 0;
}
