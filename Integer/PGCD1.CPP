#include<stdio.h>
#include<conio.h>

int main(){
    clrscr();
    int num1, num2, original1, original2, gcd;

    do {
        clrscr();
        printf("\t\tFinding GCD of Two Numbers");
        printf("\n\nEnter first number (must be positive): ");
        scanf("%d", &num1);
        printf("Enter second number (must be positive): ");
        scanf("%d", &num2);
        original1 = num1;
        original2 = num2;
    } while (num1 <= 0 || num2 <= 0);

    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }

    gcd = num1;
    printf("\nGCD(%d,%d) = %d", original1, original2, gcd);

    getch();
    return 0;
}
