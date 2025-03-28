#include<stdio.h>

int main() {
    int i, number, multiplicative_inverse;
    printf("Enter a number to get its multiplicative inverse: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++) {
        multiplicative_inverse = (i * 26) + 1;
        if(multiplicative_inverse % number == 0) {
            break;
        }
    }

    multiplicative_inverse = multiplicative_inverse / number;
    printf("Multiplicative inverse of %d is %d\n", number, multiplicative_inverse);

    return 0;
}
