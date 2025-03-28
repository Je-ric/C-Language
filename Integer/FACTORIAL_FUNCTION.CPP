#include<stdio.h>
#include<conio.h>

int factorial(int);

void main() {
    int a, f;
    
    clrscr();
    printf("[Factorial of a Number using Function]\n");
    printf("Enter Number: ");
    scanf("%d", &a);
    f = factorial(a);
    printf("Factorial: %d", f);
    getch();
}

int factorial(int x) {
    int fac = 1, i;
    for (i = x; i >= 1; i--)
        fac = fac * i;
    return fac;
}
