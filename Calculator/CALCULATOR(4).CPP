#include<stdio.h>

int main() {
    int a[50], b[50], c[50], i, n;
    
    printf("Enter how many numbers in each array: ");
    scanf("%d", &n);
    
    printf("Enter values for 1st Array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    printf("Enter values for 2nd Array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Addition: ");
    for(i = 0; i < n; i++)
        printf("%d, ", a[i] + b[i]);

    printf("\nSubtraction: ");
    for(i = 0; i < n; i++)
        printf("%d, ", a[i] - b[i]);

    printf("\nMultiplication: ");
    for(i = 0; i < n; i++)
        printf("%d, ", a[i] * b[i]);

    printf("\nDivision: ");
    for(i = 0; i < n; i++) {
        if(b[i] != 0)
            printf("%d, ", a[i] / b[i]);
        else
            printf("Error: Division by zero, ");
    }

    printf("\nModulo: ");
    for(i = 0; i < n; i++)
        printf("%d, ", a[i] % b[i]);

    printf("\nFloating-point Division: ");
    for(i = 0; i < n; i++) {
        if(b[i] != 0)
            printf("%.2f, ", (float)a[i] / b[i]);
        else
            printf("Error: Division by zero, ");
    }

    return 0;
}
