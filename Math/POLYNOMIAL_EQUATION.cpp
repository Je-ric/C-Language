#include<stdio.h>
#include<math.h>

int main() {
    float x, sum = 0;
    int order, i;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);

    float coefficient[order + 1]; // Define array size with order + 1

    for(i = 0; i <= order; i++) {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%f", &coefficient[i]);
    }

    for(i = 0; i <= order; i++) {
        sum += coefficient[i] * pow(x, i);
    }

    // Print the polynomial expression
    printf("Polynomial expression: ");
    for(i = order; i >= 0; i--) {
        if(i > 0) {
            printf("%.2fx^%d + ", coefficient[i], i);
        } else {
            printf("%.2fx^%d = ", coefficient[i], i);
        }
    }
    printf("%.2f\n", sum);

    return 0;
}
