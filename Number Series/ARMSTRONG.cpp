#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

// Function to print Armstrong numbers between given numbers
void printArmstrongBetween(int start, int end) {
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

// Function to print Armstrong numbers up to a given number
void printArmstrongUpTo(int n) {
    printf("Armstrong numbers up to %d are:\n", n);
    for (int i = 0; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int choice, num;

    printf("[1] Print Armstrong numbers between given numbers\n");
    printf("[2] Print Armstrong numbers up to (n)\n");
    printf("[3] Check the specific number if Armstrong or not\n");

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
                printArmstrongBetween(start, end);
                break;
            }
        case 2:
            {
                int n;
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printArmstrongUpTo(n);
                break;
            }
        case 3:
            {
                printf("Enter a number to check if it's Armstrong: ");
                scanf("%d", &num);
                if (isArmstrong(num)) {
                    printf("%d is an Armstrong number.\n", num);
                } else {
                    printf("%d is not an Armstrong number.\n", num);
                }
                break;
            }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
