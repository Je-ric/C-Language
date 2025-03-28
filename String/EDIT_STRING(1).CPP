#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_LEN 100

void delete_char(char str[], char ch);
void search_char(char str[], char ch);
void insert_char(char str[], char ch, int pos);

int main() {
    char str[MAX_LEN];
    char ch, choice;
    int pos;

    printf("Enter a string: ");
    gets(str);

    do {
        printf("\nSelect an operation:\n");
        printf("1. Delete a character\n");
        printf("2. Search for a character\n");
        printf("3. Insert a character\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        choice = getch();

        switch (choice) {
            case '1':
                printf("\nEnter a character to delete: ");
                ch = getch();
                delete_char(str, ch);
                printf("\nString after deletion: %s", str);
                break;
            case '2':
                printf("\nEnter a character to search: ");
                ch = getch();
                search_char(str, ch);
                break;
            case '3':
                printf("\nEnter a character to insert: ");
                ch = getch();
                printf("\nEnter position to insert (1-%d): ", strlen(str));
                scanf("%d", &pos);
                insert_char(str, ch, pos);
                printf("\nString after insertion: %s", str);
                break;
            case '4':
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice.");
                break;
        }
    } while (choice != '4');

    return 0;
}

void delete_char(char str[], char ch) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void search_char(char str[], char ch) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("\nCharacter found at position %d", i+1);
            return;
        }
    }
    printf("\nCharacter not found.");
}

void insert_char(char str[], char ch, int pos) {
    int len = strlen(str);
    if (pos < 1 || pos > len+1) {
        printf("\nInvalid position.");
        return;
    }
    int i;
    for (i = len; i >= pos; i--) {
        str[i] = str[i-1];
    }
    str[pos-1] = ch;
}
