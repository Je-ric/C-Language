#include<stdio.h>
#include<string.h>

int main() {
    char input[100];
    int length;
    int isPangram = 1;

    printf("Enter a string: ");
    gets(input);

    length = strlen(input);

    for (char letter = 'a'; letter <= 'z'; letter++) {
        int count = 0;

        for (int i = 0; i < length; i++) {
            if (input[i] == letter || input[i] == letter - 'a' + 'A') {
                count = 1;
                break;
            }
        }

        if (!count) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram) {
        printf("The string is a pangram");
    } else {
        printf("The string is not a pangram");
    }
    return 0;
}
