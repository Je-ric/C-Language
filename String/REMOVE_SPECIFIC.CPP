#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch, num, choice;
    int i, j, len;

    printf("Enter a string: ");
    gets(str);

    printf("Enter 1 to remove a specific character\n");
    printf("Enter 2 to remove a specific number\n");
    printf("Enter 3 to remove a specific special character\n");
    printf("Select: ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            // Remove the specific character
            printf("Enter a character to remove: ");
            scanf(" %c", &ch);
            len = strlen(str);
            for (i = j = 0; i < len; i++) {
                if (str[i] != ch) {
                    str[j++] = str[i];
                }
            }
            str[j] = '\0';
            printf("\nModified string: %s", str);
            break;

        case '2':
            // Remove the specific number
            printf("Enter a number to remove: ");
            scanf(" %c", &num);
            len = strlen(str);
            for (i = j = 0; i < len; i++) {
                if (str[i] != num) {
                    str[j++] = str[i];
                }
            }
            str[j] = '\0';
            printf("\nModified string: %s", str);
            break;

        case '3':
            // Remove the specific special character
            printf("Enter a special character to remove: ");
            scanf(" %c", &num);
            len = strlen(str);
            for (i = j = 0; i < len; i++) {
                if (str[i] != num) {
                    str[j++] = str[i];
                }
            }
            str[j] = '\0';
            printf("\nModified string: %s", str);
            break;

        default:
            printf("None");
    }

    return 0;
}
