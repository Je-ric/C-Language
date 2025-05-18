#include<stdio.h>

int GetSumOfDigits(int num);
int GetReverseOfNumber(int sumOfDigits);

int main() {
    int choice, num, i, sumOfDigits, reverseOfNumber;

    printf("[1] Print magic numbers between given numbers\n");
    printf("[2] Print magic numbers up to (n)\n");
    printf("[3] Check the specific number if magic or not\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter number to find out all magic numbers between given numbers\n");
            scanf("%d", &num);
            for (i = 1; i <= num; i++) {
                sumOfDigits = GetSumOfDigits(i);
                reverseOfNumber = GetReverseOfNumber(sumOfDigits);
                if (sumOfDigits * reverseOfNumber == i) {
                    printf("%d\n", i);
                }
            }
            break;
        case 2:
            printf("Enter number to find out all magic numbers up to (n)\n");
            scanf("%d", &num);
            for (i = 1; i <= num; i++) {
                sumOfDigits = GetSumOfDigits(i);
                reverseOfNumber = GetReverseOfNumber(sumOfDigits);
                if (sumOfDigits * reverseOfNumber == i) {
                    printf("%d\n", i);
                }
            }
            break;
        case 3:
            printf("Enter a number to check if it's magic: ");
            scanf("%d", &num);
            sumOfDigits = GetSumOfDigits(num);
            reverseOfNumber = GetReverseOfNumber(sumOfDigits);
            if (sumOfDigits * reverseOfNumber == num) {
                printf("%d is a magic number.\n", num);
            } else {
                printf("%d is not a magic number.\n", num);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int GetSumOfDigits(int n) {
    int sum = 0, x;
    while (n > 0) {
        x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
}

int GetReverseOfNumber(int n) {
    int rev = 0, x;
    while (n > 0) {
        x = n % 10;
        rev = rev * 10 + x;
        n /= 10;
    }
    return rev;
}
