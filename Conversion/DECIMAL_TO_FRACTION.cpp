#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    double decimal;
    printf("Enter a decimal number: ");
    if (scanf("%lf", &decimal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int numerator = decimal * 10000;
    int denominator = 10000;
    int common = gcd(numerator, denominator);
    numerator /= common;
    denominator /= common;
    
    printf("The fraction is %d/%d\n", numerator, denominator);
    
    return 0;
}
