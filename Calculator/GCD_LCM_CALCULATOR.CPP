// File name: gcd_lcm_calculator.c
#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, divisor, gcd, lcm;
    
    clrscr();
    printf("[Greatest Common Divisor (GCD)]\n");
    printf("[Largest number that can divide both inputs without remainder\n");
    printf("\n[Lowest Common Multiple (LCM)]\n");
    printf("[Smallest integer that is perfectly divisible by both numbers]\n");
    printf("[Means remainder is equal to zero]\n\n");
    
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);
    
    // Finding GCD
    for (divisor = 1; divisor <= num1 && divisor <= num2; ++divisor) {
        if (num1 % divisor == 0 && num2 % divisor == 0)
            gcd = divisor;
    }
    
    // Finding LCM
    lcm = (num1 * num2) / gcd;

    printf("\nGCD of %d and %d is: %d", num1, num2, gcd);
    printf("\nLCM of %d and %d is: %d", num1, num2, lcm);
    
    getch();
    return 0;
}
