#include <stdio.h>
#include <conio.h>

int main() {
    clrscr();
    int num_terms;
    float i, sum = 0, term;
    
    printf("1 + 1/2 + 1/3 + ... + 1/n \n");
    printf("Enter the value of n: ");
    scanf("%d", &num_terms);
    
    sum = 0;
    for (i = 1; i <= num_terms; i++) {
        term = 1 / i;
        sum = sum + term;
    }
    
    printf("The sum of the harmonic series is = %f", sum);
    
    getch();
    return 0;
}
