#include<stdio.h>
#include<conio.h>

int main() {
    clrscr();
    int input[100], n;
    
    printf("Enter how many values: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &input[i]);
    }

    int even[100], odd[100];

    printf("Even numbers are:\n");
    for (int i = 0; i < n; i++) {
        even[i] = input[i];
        if (input[i] % 2 == 0) {
            printf("%d ", even[i]);
        }
    }

    printf("\nOdd numbers are:\n");
    for (int i = 0; i < n; i++) {
        odd[i] = input[i];
        if (input[i] % 2 == 1) {
            printf("%d ", odd[i]);
        }
    }
    getch();
    return 0;
}
