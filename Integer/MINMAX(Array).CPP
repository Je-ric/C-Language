#include<stdio.h>
#include<conio.h>

int main() {
    clrscr();
    int a[50], n, min, max;
    
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    min = max = a[0]; // Initialize min and max with the first element of the array
    
    for(int j = 1; j < n; j++) {
        if(min > a[j])
            min = a[j];
        if(max < a[j])
            max = a[j];
    }
    
    printf("Minimum value = %d\n", min);
    printf("Maximum value = %d", max);

    getch();
    return 0;
}
