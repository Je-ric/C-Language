#include<stdio.h>
#include<conio.h>

void main(){
    clrscr();
    int i, n, val, min, max;
    
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    printf("\nEnter the numbers:\n");
    scanf("%d", &val);
    
    min = max = val; // Initialize min and max with the first input value
    
    for(i = 1; i < n; i++) {
        scanf("%d", &val);
        if(val > max)
            max = val;
        if(val < min)
            min = val;
    }
    
    printf("\nThe maximum of given %d numbers is: %d", n, max);
    printf("\nThe minimum of given %d numbers is: %d", n, min);

    getch();
}
