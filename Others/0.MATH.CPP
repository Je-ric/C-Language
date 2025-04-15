#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("The input number is: %lf\n", num);
    printf("The square root of the number is: %lf\n", sqrt(num));
    printf("The natural logarithm of the number is: %lf\n", log(num));
    printf("The base-10 logarithm of the number is: %lf\n", log10(num));
    printf("The exponential of the number is: %lf\n", exp(num));
    printf("The cosine of the number is: %lf\n", cos(num));
    printf("The sine of the number is: %lf\n", sin(num));
    printf("The tangent of the number is: %lf\n", tan(num));
    printf("The absolute value of the number is: %lf\n", fabs(num));
    printf("The rounded down value of the number is: %lf\n", floor(num));
    printf("The rounded up value of the number is: %lf\n", ceil(num));

    return 0;
}
