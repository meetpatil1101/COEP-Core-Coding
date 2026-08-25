#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#define WAIT_MS(ms) Sleep(ms)
#else
#include <unistd.h>
#define WAIT_MS(ms) usleep((ms) * 1000)
#endif
int main()
{
    char name[50];
    printf("============================================\n");
    printf("      Rock Paper Scissors Showdown\n");
    printf("============================================\n");
    printf("\a");
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("\nHello, %s! Welcome to the Rock Paper Scissors arena.\n", name);
    printf("Rules:\n");
    printf(" 1) Rock beats Scissors\n");
    printf(" 2) Scissors beats Paper\n");
    printf(" 3) Paper beats Rock\n");
    printf("--------------------------------------------\n");
    fflush(stdout);
    srand(time(NULL));
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    int playerScore = 0, computerScore = 0, rounds = 0;
    int playerChoice, computerChoice;
    printf("Enter the number of rounds you want to play: ");
    scanf("%d", &rounds);
    printf("\nGreat! The match is best of %d rounds.\n", rounds);
    printf("Let's begin the game!!\n");

    for (int round = 1; round <= rounds; round++)
    {
        printf("\n--------------------------------------------\n");
        printf(" Round %d of %d\n", round, rounds);
        printf("--------------------------------------------\n");
        printf("\a");
        printf("Choose your move:\n");
        printf(" 1) Rock   2) Paper   3) Scissors\n");
        do
        {
            printf("Your choice: ");
            scanf("%d", &playerChoice);
            getchar();
            if (playerChoice < 1 || playerChoice > 3)
            {
                printf("Invalid choice, please enter 1, 2, or 3.\n");
            }
        } while (playerChoice < 1 || playerChoice > 3);

        computerChoice = rand() % 3 + 1;
        printf("Computer chose %s.\n", choices[computerChoice - 1]);
        printf("You chose %s.\n", choices[playerChoice - 1]);

        if (playerChoice == computerChoice)
        {
            printf("Result: It's a tie!\n\a");
        }
        else if ((playerChoice == 1 && computerChoice == 3) || (playerChoice == 2 && computerChoice == 1) || (playerChoice == 3 && computerChoice == 2))
        {
            printf("Result: You win this round!\n\a");
            playerScore++;
        }
        else
        {
            printf("Result: Computer wins this round!\n\a");
            computerScore++;
        }

        printf("Current score - %s: %d, Computer: %d\n", name, playerScore, computerScore);
        WAIT_MS(500);
    }

    printf("\nCalculating final result");
    for (int dots = 0; dots < 3; dots++)
    {
        WAIT_MS(800);
        printf(".");
        fflush(stdout);
    }
    printf("\n\n");

    printf("============================================\n");
    printf(" Final score for %s: %d\n", name, playerScore);
    printf(" Final score for computer: %d\n", computerScore);
    printf("============================================\n");
    printf("\a");
    if (playerScore > computerScore)
    {
        printf("\nCongratulations %s! You are the champion!\n", name);
    }
    else if (computerScore > playerScore)
    {
        printf("\nTough match, %s. Computer wins this time.\n", name);
        printf("Better luck next time!\n");
    }
    else
    {
        printf("\nWhat a battle! The game is a tie!\n");
    }

    return 0;
}
