#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
    int secret_number;
    int guess;
    int attempts = 1;

    srand(time(0));
    secret_number = rand() % 100;

    printf("Guess a number between 1 to 100\n");

    while (1) {
        scanf("%d", &guess);

        if (guess > secret_number) {
            printf("Please enter a smaller number\n");
        } else if (guess < secret_number) {
            printf("Please enter a greater number\n");
        } else {
            printf("Congratulations!!! You guessed the number in %d attempts\n", attempts);
            break;
        }

        attempts++;
    }

    getch();
    return 0;
}
