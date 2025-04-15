#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main() {
    clrscr();
    char string[100];
    int choice, count[128] = {0}, vowels = 0, consonants = 0, spaces = 0, words = 0, i;

    printf("Enter a string: ");
    gets(string);

    printf("\nChoose what to count:\n");
    printf("1. Lowercase letters\n");
    printf("2. Uppercase letters\n");
    printf("3. All letters\n");
    printf("4. Numbers\n");
    printf("5. Special characters\n");
    printf("6. Vowels\n");
    printf("7. Consonants\n");
    printf("8. Spaces\n");
    printf("9. Words\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (i = 0; string[i] != '\0'; i++) {
                if (islower(string[i]))
                    count[string[i]]++;
            }
            printf("Lowercase letters count:\n");
            break;
        case 2:
            for (i = 0; string[i] != '\0'; i++) {
                if (isupper(string[i]))
                    count[string[i]]++;
            }
            printf("Uppercase letters count:\n");
            break;
        case 3:
            for (i = 0; string[i] != '\0'; i++) {
                if (isalpha(string[i]))
                    count[string[i]]++;
            }
            printf("All letters count:\n");
            break;
        case 4:
            for (i = 0; string[i] != '\0'; i++) {
                if (isdigit(string[i]))
                    count[string[i]]++;
            }
            printf("Numbers count:\n");
            break;
        case 5:
            for (i = 0; string[i] != '\0'; i++) {
                if (!isalnum(string[i]) && !isspace(string[i]))
                    count[string[i]]++;
            }
            printf("Special characters count:\n");
            break;
        case 6:
            for (i = 0; string[i] != '\0'; i++) {
                if (tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u')
                    vowels++;
            }
            printf("Vowels count: %d\n", vowels);
            break;
        case 7:
            for (i = 0; string[i] != '\0'; i++) {
                if (isalpha(string[i]) && !isvowel(tolower(string[i])))
                    consonants++;
            }
            printf("Consonants count: %d\n", consonants);
            break;
        case 8:
            for (i = 0; string[i] != '\0'; i++) {
                if (isspace(string[i]))
                    spaces++;
            }
            printf("Spaces count: %d\n", spaces);
            break;
        case 9:
            words = 1;
            for (i = 0; string[i] != '\0'; i++) {
                if (isspace(string[i]) && !isspace(string[i + 1]))
                    words++;
            }
            printf("Words count: %d\n", words);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    for (i = 0; i < 128; i++) {
        if (count[i] > 0) {
            printf("%c occurs %d times\n", i, count[i]);
        }
    }

    getch();
    return 0;
}
