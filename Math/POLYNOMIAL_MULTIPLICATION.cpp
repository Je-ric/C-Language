#include<stdio.h>

int main() {
    int i, j, size_poly1, size_poly2;
    printf("Enter number of terms in Polynomial 1: ");
    scanf("%d", &size_poly1);
    printf("Enter number of terms in Polynomial 2: ");
    scanf("%d", &size_poly2);
    
    int coefficients_poly1[size_poly1], coefficients_poly2[size_poly2], product[size_poly1 + size_poly2];
    
    printf("Enter coefficients of Polynomial 1:\n");
    for(i = 0; i < size_poly1; i++) {
        printf("Enter coefficient of x^%d: ", i);
        scanf("%d", &coefficients_poly1[i]);
    }
    
    printf("Enter coefficients of Polynomial 2:\n");
    for(i = 0; i < size_poly2; i++) {
        printf("Enter coefficient of x^%d: ", i);
        scanf("%d", &coefficients_poly2[i]);
    }
    
    for(i = 0; i < size_poly1 + size_poly2; i++) {
        product[i] = 0;
    }
    
    for(i = 0; i < size_poly1; i++) {
        for(j = 0; j < size_poly2; j++) {
            if(coefficients_poly1[i] != 0 && coefficients_poly2[j] != 0) {
                product[i + j] += coefficients_poly1[i] * coefficients_poly2[j];
            }
        }
    }
    
    printf("Resultant Polynomial after multiplication:\n");
    for(i = size_poly1 + size_poly2 - 1; i >= 0; i--) {
        if(product[i] != 0) {
            if(i != 0) {
                printf("%dx^%d + ", product[i], i);
            } else {
                printf("%dx^%d\n", product[i], i);
            }
        }
    }
    
    return 0;
}
