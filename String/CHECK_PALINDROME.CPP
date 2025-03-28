#include<stdio.h>
#include<string.h>

int main() {
    char str[100], reversed[100];
    int length;
    int isPalindrome = 1; // Assume it's a palindrome by default

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length; i++) {
        reversed[length - i - 1] = str[i];
    }

    for (int i = 0; i < length; i++) {
        if (reversed[i] != str[i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome", str);
    } else {
        printf("%s is not a palindrome", str);
    }

    return 0;
}
