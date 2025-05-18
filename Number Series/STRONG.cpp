#include <stdio.h>

int GetFactorial(int number);

int main() {
    int choice, num, i, j, temp1, temp2, sum;

    printf("[1] Print strong numbers between given numbers\n");
    printf("[2] Print strong numbers up to (n)\n");
    printf("[3] Check the specific number if strong or not\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number to find all strong numbers between given numbers: ");
            scanf("%d", &num);
            printf("Strong numbers are:\n");
            for (i = 1; i <= num; i++) {
                sum = 0;
                temp1 = i;
                temp2 = i;

                while (temp1 > 0) {
                    j = temp1 % 10;
                    sum += GetFactorial(j);
                    temp1 = temp1 / 10;
                }

                if (sum == temp2) {
                    printf("%d\n", sum);
                }
            }
            break;
        case 2:
            printf("Enter a number to find all strong numbers up to (n): ");
            scanf("%d", &num);
            printf("Strong numbers are:\n");
            for (i = 1; i <= num; i++) {
                sum = 0;
                temp1 = i;
                temp2 = i;

                while (temp1 > 0) {
                    j = temp1 % 10;
                    sum += GetFactorial(j);
                    temp1 = temp1 / 10;
                }

                if (sum == temp2) {
                    printf("%d\n", sum);
                }
            }
            break;
        case 3:
            printf("Enter a number to check if it's strong: ");
            scanf("%d", &num);
            sum = 0;
            temp1 = num;
            temp2 = num;

            while (temp1 > 0) {
                j = temp1 % 10;
                sum += GetFactorial(j);
                temp1 = temp1 / 10;
            }

            if (sum == temp2) {
                printf("%d is a strong number.\n", num);
            } else {
                printf("%d is not a strong number.\n", num);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int GetFactorial(int number) {
    int factorial = 1, i;
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}
