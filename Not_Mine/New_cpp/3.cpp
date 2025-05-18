#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user_choice, computer_choice;

    // Seed random number generator
    srand(time(0));

    printf("ROCK, PAPER, SCISSORS GAME\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user_choice);

    if (user_choice < 1 || user_choice > 3)
    {
        printf("Invalid choice!\n");
        return 1;
    }

    // Generate computer's choice (1-3)
    computer_choice = rand() % 3 + 1;

    printf("You chose: ");
    switch (user_choice)
    {
    case 1:
        printf("Rock\n");
        break;
    case 2:
        printf("Paper\n");
        break;
    case 3:
        printf("Scissors\n");
        break;
    }

    printf("Computer chose: ");
    switch (computer_choice)
    {
    case 1:
        printf("Rock\n");
        break;
    case 2:
        printf("Paper\n");
        break;
    case 3:
        printf("Scissors\n");
        break;
    }

    // Determine winner
    if (user_choice == computer_choice)
    {
        printf("It's a tie!\n");
    }
    else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }

    return 0;
}