#include<stdio.h>
#include<conio.h>

int main() {
    clrscr();
    int no;
    
    printf("[Factors of a Number]\n\n");
    printf("Enter a number to find its factors: ");
    scanf("%d", &no);
    
    for (int i = 1; i <= no; i++) {
        if (no % i == 0)
            printf("%d ", i);
    }
    
    getch();
    return 0;
}
