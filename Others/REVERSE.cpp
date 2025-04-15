#include<stdio.h>
#include<string.h>
#include<conio.h>

void reverseUsingStrrev(char arr[]) {
    strrev(arr);
    printf("Reversed String using strrev(): %s\n", arr);
}

void reverseUsingPointerManipulation(char arr[]) {
    char str_array[10000], *ptr;
    int i, len;

    ptr = str_array;
    strcpy(str_array, arr);

    for (i = 0; i < 10000; i++) {
        if (*ptr == '\0')
            break;
        ptr++;
    }

    len = i;
    ptr--;

    printf("Reversed String using pointer manipulation: ");
    for (i = len; i > 0; i--) {
        printf("%c", *ptr--);
    }
    printf("\n");
}

void reverseUsingIteration(char arr[]) {
    int len = strlen(arr);
    printf("Reversed String using iteration: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main() {
    clrscr();
    char arr[100];
    int choice;

    printf("Enter a string : ");
    gets(arr);

    printf("Choose the method for reversing:\n");
    printf("1. Using strrev()\n");
    printf("2. Using pointer manipulation\n");
    printf("3. Using iteration\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            reverseUsingStrrev(arr);
            break;

        case 2:
            reverseUsingPointerManipulation(arr);
            break;

        case 3:
            reverseUsingIteration(arr);
            break;

        default:
            printf("Invalid choice\n");
    }

    getch();
    return 0;
}
