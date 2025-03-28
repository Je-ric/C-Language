#include<stdio.h>

long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);

int main() {
    int choice, n, r;
    float result;

    printf("[1] Calculate nCr directly\n");
    printf("[2] Calculate nPr directly\n");
    printf("[3] Calculate nCr through menu\n");
    printf("[4] Calculate nPr through menu\n");
    printf("[5] Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value of n: ");
            scanf("%d", &n);
            printf("Enter the value of r: ");
            scanf("%d", &r);
            if (n >= r && n >= 0 && r >= 0) {
                result = (float)find_ncr(n, r);
                printf("Value of %dC%d = %f\n", n, r, result);
            } else {
                printf("Invalid Entry\n");
            }
            break;
        case 2:
            printf("Enter the value of n: ");
            scanf("%d", &n);
            printf("Enter the value of r: ");
            scanf("%d", &r);
            if (n >= r && n >= 0 && r >= 0) {
                result = (float)find_npr(n, r);
                printf("Value of %dP%d = %f\n", n, r, result);
            } else {
                printf("Invalid Entry\n");
            }
            break;
        case 3:
            printf("Enter the value of n: ");
            scanf("%d", &n);
            printf("Enter the value of r: ");
            scanf("%d", &r);
            if (n >= r && n >= 0 && r >= 0) {
                result = (float)find_ncr(n, r);
                printf("Value of %dC%d = %f\n", n, r, result);
            } else {
                printf("Invalid Entry\n");
            }
            break;
        case 4:
            printf("Enter the value of n: ");
            scanf("%d", &n);
            printf("Enter the value of r: ");
            scanf("%d", &r);
            if (n >= r && n >= 0 && r >= 0) {
                result = (float)find_npr(n, r);
                printf("Value of %dP%d = %f\n", n, r, result);
            } else {
                printf("Invalid Entry\n");
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

long factorial(int n) {
    int c;
    long result = 1;
    for( c = 1; c <= n ; c++ )
        result = result * c;
    return ( result );
}

long find_ncr(int n, int r) {
    long result;
    result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

long find_npr(int n, int r) {
    long result;
    result = factorial(n)/factorial(n-r);
    return result;
}
