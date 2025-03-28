#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return (sum == number);
}

// Function to print perfect numbers between given numbers
void printPerfectBetween(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

// Function to print perfect numbers up to a given number
void printPerfectUpTo(int n) {
    printf("Perfect numbers up to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int choice, num;

    printf("[1] Print perfect numbers between given numbers\n");
    printf("[2] Print perfect numbers up to (n)\n");
    printf("[3] Check the specific number if perfect or not\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                int start, end;
                printf("Enter starting number: ");
                scanf("%d", &start);
                printf("Enter ending number: ");
                scanf("%d", &end);
                printPerfectBetween(start, end);
                break;
            }
        case 2:
            {
                int n;
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printPerfectUpTo(n);
                break;
            }
        case 3:
            {
                printf("Enter a number to check if it's perfect: ");
                scanf("%d", &num);
                if (isPerfect(num)) {
                    printf("%d is a perfect number.\n", num);
                } else {
                    printf("%d is not a perfect number.\n", num);
                }
                break;
            }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
