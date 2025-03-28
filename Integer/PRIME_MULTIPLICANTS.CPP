#include<stdio.h>
#include<conio.h>

void main() {
    clrscr();
    int i = 1, N, C = 0;
    
    printf("Input a Number to check: ");
    scanf("%d", &N);
    
    // Prints Multiplicants
    printf("Multiplicants of %d are:", N);
    while (i <= N) {
        if (N % i == 0) {
            printf("\t %d", i);
            C++;
        }
        i++;
    }
    
    printf("\nTotal Number of Multiplicants are: %d", C);
    if (C == 2)
        printf("\n%d is a prime number", N);
    else
        printf("\n%d is not a prime number", N);
    
    getch();
}
