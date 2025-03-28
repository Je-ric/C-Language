#include<stdio.h>
#include<conio.h>

void main() {
    int i, sum = 0, div, begin, end;
    clrscr();
    
    printf("Divisible by: ");
    scanf("%d", &div);
    printf("Beginning number: ");
    scanf("%d", &begin);
    printf("Ending number: ");
    scanf("%d", &end);
    
    for (i = begin; i <= end; i++) {
        if (i % div == 0)
            sum = sum + i;
    }
    
    printf("Sum of all numbers between %d and %d divisible by %d is: %d", begin, end, div, sum);
    getch();
}
