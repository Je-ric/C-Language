#include <stdio.h>
#include <math.h>

int main() {
    float compoundInterest, principal, rate, time;
    int n;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter rate in percentage: ");
    scanf("%f", &rate);

    printf("Enter time in years (decimals): ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    compoundInterest = principal * pow(1 + (rate / (100 * n)), n * time);

    printf("Compound Interest is %f\n", compoundInterest);

    return 0;
}
