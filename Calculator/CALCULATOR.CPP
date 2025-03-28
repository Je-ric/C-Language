#include <stdio.h>

int main() {
    int a, b, n, sum, sub, mul, div;
    
    printf("[Calculator using switch]\n\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Enter 1 for sum\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    scanf("%d", &n);

    switch(n) {
        case 1:
            sum = a + b;
            printf("Sum = %d\n", sum);
            break;
        case 2:
            sub = a - b;
            printf("Subtraction = %d\n", sub);
            break;
        case 3:
            mul = a * b;
            printf("Multiplication = %d\n", mul);
            break;
        case 4:
            if (b != 0) {
                div = a / b;
                printf("Division = %d\n", div);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid Input\n");
    }
    
    return 0;
}
