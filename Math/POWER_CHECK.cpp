#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, power, temp;
    
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Enter Power you want to check: ");
    scanf("%d", &power);

    temp = num;

    if (num == 0 || num == 1) {
        printf("Enter a number other than zero and one.\n");
        exit(0);
    }

    while (num > 1) {
        if (num % power != 0) {
            printf("Given Number %d is not a power of %d\n", temp, power);
            exit(0);
        }
        num = num / power;
    }

    printf("Given Number %d is a power of %d\n", temp, power);
    return 0;
}
