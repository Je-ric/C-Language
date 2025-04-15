#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int main() {
    int numerator, denominator, divisor;

    printf("Enter the numerator: ");
    scanf("%d", &numerator);

    printf("Enter the denominator: ");
    scanf("%d", &denominator);

    divisor = gcd(numerator, denominator);

    numerator /= divisor;
    denominator /= divisor;

    printf("Simplified fraction: %d/%d\n", numerator, denominator);

    return 0;
}
