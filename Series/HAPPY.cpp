#include<stdio.h>

int isHappy(int num);

int main() {
    int choice, num, i;

    printf("[1] Print happy numbers between given numbers\n");
    printf("[2] Print happy numbers up to (n)\n");
    printf("[3] Check the specific number if happy or not\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the upper limit to find happy numbers: ");
            scanf("%d", &num);
            printf("Happy numbers are:\n");
            for (i = 1; i <= num; i++) {
                if (isHappy(i)) {
                    printf("%d\n", i);
                }
            }
            break;
        case 2:
            printf("Enter the value of n to print happy numbers up to: ");
            scanf("%d", &num);
            printf("Happy numbers are:\n");
            for (i = 1; i <= num; i++) {
                if (isHappy(i)) {
                    printf("%d\n", i);
                }
            }
            break;
        case 3:
            printf("Enter a number to check if it's happy: ");
            scanf("%d", &num);
            if (isHappy(num)) {
                printf("%d is a happy number.\n", num);
            } else {
                printf("%d is not a happy number.\n", num);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int isHappy(int num) {
    int sum, digit;

    while (num != 1 && num != 4) {
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += (digit * digit);
            num /= 10;
        }
        num = sum;
    }

    return num == 1;
}
