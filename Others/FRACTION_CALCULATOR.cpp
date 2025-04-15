#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

void simplify(int *numerator, int *denominator) {
    int divisor = gcd(*numerator, *denominator);
    *numerator /= divisor;
    *denominator /= divisor;
}

void add(int num1, int den1, int num2, int den2) {
    int numerator = (num1 * den2) + (num2 * den1);
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);
    printf("Sum: %d/%d\n", numerator, denominator);
}

void subtract(int num1, int den1, int num2, int den2) {
    int numerator = (num1 * den2) - (num2 * den1);
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);
    printf("Difference: %d/%d\n", numerator, denominator);
}

void multiply(int num1, int den1, int num2, int den2) {
    int numerator = num1 * num2;
    int denominator = den1 * den2;
    simplify(&numerator, &denominator);
    printf("Product: %d/%d\n", numerator, denominator);
}

void divide(int num1, int den1, int num2, int den2) {
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        return;
    }
    int numerator = num1 * den2;
    int denominator = den1 * num2;
    simplify(&numerator, &denominator);
    printf("Quotient: %d/%d\n", numerator, denominator);
}

int main() {
    int num1, den1, num2, den2;
    printf("Enter the first fraction (numerator/denominator): ");
    scanf("%d/%d", &num1, &den1);
    printf("Enter the second fraction (numerator/denominator): ");
    scanf("%d/%d", &num2, &den2);
    add(num1, den1, num2, den2);
    subtract(num1, den1, num2, den2);
    multiply(num1, den1, num2, den2);
    divide(num1, den1, num2, den2);
    return 0;
}
