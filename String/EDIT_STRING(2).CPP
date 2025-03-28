#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // maximum size of the string array

int main() {
    char str[MAX_SIZE][50]; // array to store strings
    int n, i, j, k, pos;
    char search_str[50], new_str[50];
    int choice;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Input the strings
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    while (1) {
        // Display menu options
        printf("\n\nChoose an option:\n");
        printf("1. Delete a selected string\n");
        printf("2. Delete duplicate strings\n");
        printf("3. Search for a string\n");
        printf("4. Insert a new string\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Delete a selected string
                printf("Enter the position of the string to delete: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position.\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        strcpy(str[i], str[i + 1]);
                    }
                    n--;
                    printf("String deleted.\n");
                }
                break;
            case 2: // Delete duplicate strings
                for (i = 0; i < n; i++) {
                    for (j = i + 1; j < n;) {
                        if (strcmp(str[i], str[j]) == 0) {
                            for (k = j; k < n - 1; k++) {
                                strcpy(str[k], str[k + 1]);
                            }
                            n--;
                        } else {
                            j++;
                        }
                    }
                }
                printf("Duplicate strings deleted.\n");
                break;
            case 3: // Search for a string
                printf("Enter the string to search for: ");
                scanf("%s", search_str);
                for (i = 0; i < n; i++) {
                    if (strcmp(str[i], search_str) == 0) {
                        printf("String found at position %d.\n", i + 1);
                        break;
                    }
                }
                if (i == n) {
                    printf("String not found.\n");
                }
                break;
            case 4: // Insert a new string
                if (n == MAX_SIZE) {
                    printf("Array is full. Cannot insert.\n");
                    break;
                }
                printf("Enter the position to insert the new string: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position.\n");
                    break;
                }
                printf("Enter the new string: ");
                scanf("%s", new_str);
                for (i = n; i >= pos; i--) {
                    strcpy(str[i], str[i - 1]);
                }
                strcpy(str[pos - 1], new_str);
                n++;
                printf("String inserted.\n");
                break;
            case 5: // Exit
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
