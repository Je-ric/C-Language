#include<stdio.h>

int main() {
    int i, j, totPolynomials, maxSize = 0;

    printf("Enter Number of Polynomials to add\n");
    scanf("%d", &totPolynomials);

    int polynomials[totPolynomials][100], eachPolynomialSize[totPolynomials];

    for (i = 0; i < totPolynomials; i++) {
        printf("Enter Size of %d Polynomial\n", i + 1);
        scanf("%d", &eachPolynomialSize[i]);

        if (maxSize < eachPolynomialSize[i]) 
            maxSize = eachPolynomialSize[i];

        for (j = 0; j < eachPolynomialSize[i]; j++) {
            printf("Enter Coefficient of x^%d for %dth Polynomial\n", j, i);
            scanf("%d", &polynomials[i][j]);
        }
    }

    int sum[maxSize];
    for (i = 0; i < maxSize; i++) {
        sum[i] = 0;
    }

    for (i = 0; i < totPolynomials; i++) {
        for (j = 0; j < eachPolynomialSize[i]; j++) {
            sum[j] += polynomials[i][j];
        }
    }

    printf("The sum of the polynomials is: ");
    for (i = maxSize - 1; i >= 0; i--) {
        if (i != 0) {
            printf("%d x^%d + ", sum[i], i);
        } else {
            printf("%d\n", sum[i]);
        }
    }

    return 0;
}
