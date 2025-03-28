#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    clrscr();
    char first_str[100], second_str[100];
    int frequency[256] = {0}, i;
    
    printf("NOTE: The Program will terminate if the strings are not anagrams.\n");
    printf("Enter the first string: ");
    gets(first_str);

    printf("Enter the second string: ");
    gets(second_str);

    if(strlen(first_str) != strlen(second_str)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for(i = 0; first_str[i] != '\0'; i++) {
        frequency[first_str[i]]++;
    }

    for(i = 0; second_str[i] != '\0'; i++) {
        frequency[second_str[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(frequency[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    getch();
    return 0;
}
