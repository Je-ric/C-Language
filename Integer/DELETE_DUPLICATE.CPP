#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENT 20

void removeDuplicates(int a[], int *n);
void input(int a[], int n);
void output(int a[], int n);

void main() {
    int n, a[MAX_ELEMENT];
    do {
        clrscr();
        printf("How many elements: ");
        scanf("%d", &n);
    } while (n < 0 || n > MAX_ELEMENT);

    input(a, n);
    printf("\nBefore removing duplicates: ");
    output(a, n);
    removeDuplicates(a, &n);
    printf("\nAfter removing duplicates: ");
    output(a, n);
    getch();
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d]= ", i);
        scanf("%d", &a[i]);
    }
}

void output(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%5d", a[i]);
}

void removeDuplicates(int a[], int *n) {
    int found = 0;
    for (int i = 0; i < *n - 1; i++)
        for (int j = i + 1; j < *n; j++)
            if (a[i] == a[j]) {
                found++;
                (*n)--;
                for (int k = j; k < *n; k++) a[k] = a[k + 1];
                j--;
            }
    if (!found)
        printf("\nNo any duplicate...");
}
