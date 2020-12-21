#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// int generateRandomNumber(int n)
// {
//     srand(time(NULL)); //srand take seed as an input defined in stdlib.h
//     return rand() % n;
// }

char userName[30];
int userChoice;
int compChoice;
char compChoiceName[10];
static int userPoint = 0;
static int compPoint = 0;

void computerChoice()
{
    int choice = 0;
    srand(time(NULL)); //srand take seed as an input defined in stdlib.h
    choice = rand() % 18;
    if (choice == 0 || choice == 3 || choice == 4 || choice == 16 || choice == 12 || choice == 13)
    {
        compChoice = 2;
        strcpy(compChoiceName, "Paper");
    }
    else if (choice == 1 || choice == 8 || choice == 6 || choice == 17 || choice == 5 || choice == 15)
    {
        compChoice = 3;
        strcpy(compChoiceName, "Scissors");
    }
    else
    {
        compChoice = 1;
        strcpy(compChoiceName, "Rock");
    }
}

void roundWinner()
{
    if (userChoice == 1 && compChoice == 1)
    {
        printf("Its a Draw\n");
        userPoint = 0;
        compPoint = 0;
    }
    else if (userChoice == 2 && compChoice == 2)
    {
        printf("Its a Draw\n");
        userPoint = 0;
        compPoint = 0;
    }
    else if (userChoice == 3 && compChoice == 3)
    {
        printf("Its a Draw\n");
        userPoint = 0;
        compPoint = 0;
    }
    if (userChoice == 1 && compChoice == 2)
    {
        printf("Computer Wins\n");

        compPoint++;
    }
    else if (userChoice == 1 && compChoice == 3)
    {
        printf("%s Wins\n", userName);
        userPoint++;
    }
    else if (userChoice == 2 && compChoice == 1)
    {
        printf("%s Wins\n", userName);
        userPoint++;
    }
    if (userChoice == 2 && compChoice == 3)
    {
        printf("Computer Wins\n");

        compPoint++;
    }
    else if (userChoice == 3 && compChoice == 1)
    {
        printf("Computer Wins\n");

        compPoint++;
    }
    else if (userChoice == 3 && compChoice == 2)
    {
        printf("%s Wins\n", userName);
        userPoint++;
    }
}

void winnerSelector()
{
    if (userPoint > compPoint)
    {
        printf("%s\n", userName);
    }
    else if (userPoint < compPoint)
    {
        printf("Computer Wins\n");
    }
    else
    {
        printf("Its a Draw\n");
    }
}

int main()
{
    int x, noOfRounds;

    printf("Welcome To Rock, Paper, Scissors Game\n");
    printf("Developed By Bhagya Mudgal\n\n");

    while (1)
    {
        printf("\nMENU :\n");
        printf("\n1. Start New Game\n");
        printf("2. Exit\n");

        printf("\nSelect From (1-2) : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("\nEnter Your Name : ");
            scanf("%s", userName);

            printf("\nEnter Number Of Rounds You Want To Play For : ");
            scanf("%d", &noOfRounds);
            for (int round = 1; round <= noOfRounds; round++)
            {
                printf("\nRound %d\n", round);
                printf("Choose From Below Options : \n");
                printf("1-----Rock \n");
                printf("2-----Paper \n");
                printf("3-----Scissors \n");
                printf("Choose (1 or 2 or 3) : ");
                scanf("%d", &userChoice);
                computerChoice();
                printf("\nComputer Choose : %s \n", compChoiceName);

                printf("\n%d Round Winner : ", round);
                roundWinner();
            }
            printf("\nWinner Of The Game : ");
            winnerSelector();

            userPoint = 0;
            compPoint = 0;

            break;

        case 2:
            exit(0);

        default:
            printf("\nINVALID SELECTION\nPlease Select From (1-2)");
            break;
        }
    }

    return 0;
}