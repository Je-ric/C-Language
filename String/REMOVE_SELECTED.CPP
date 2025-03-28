#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	clrscr();
    char str[100], new_str[100];
    int i, j, len;
    int remove_vowel, remove_consonant, remove_word, remove_number, remove_special, remove_space;

    // Prompt user for input string
    printf("Enter a string: ");
    gets(str);

    // Prompt user for which characters to remove
    printf("Do you want to remove the following?\n");
    printf("Enter 1 to remove or 0 to keep each type:\n");
    printf("1. Vowels: ");
    scanf("%d" ,&remove_vowel);
    printf("2. Consonants: ");
    scanf("%d" ,&remove_consonant);
    printf("3. Words: ");
    scanf("%d" ,&remove_word);
    printf("4. Numbers: ");
    scanf("%d" ,&remove_number);
    printf("5. Special Characters: ");
    scanf("%d" ,&remove_special);
    printf("6. Spaces: ");
    scanf("%d" ,&remove_space);

    len = strlen(str);
    j = 0;

    // Loop through each character of the input string
    for (i = 0; i < len; i++) {
	// Check if character should be removed
	if ((remove_vowel && (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
	    || (remove_consonant && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')))
	    || (remove_word && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
	    || (remove_number && (str[i] >= '0' && str[i] <= '9'))
	    || (remove_special && ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~')))
	    || (remove_space && (str[i] == ' '))) {
	    continue; // Skip character
	}
	new_str[j++] = str[i]; // Add character to new string
    }
    new_str[j] = '\0'; // Terminate new string with null character

    // Output the new string
    printf("\nNew string after removing selected characters: %s", new_str);
	getch();
    return 0;
}