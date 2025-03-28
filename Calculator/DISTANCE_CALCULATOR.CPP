#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();
    float distance;
    int x1, y1, x2, y2;
    int dx, dy;
    
    printf("Program for distance between two points\n");
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    distance = sqrt(dx*dx + dy*dy);
    
    printf("Distance = %.4f", distance);
    getch();
}
