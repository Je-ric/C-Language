#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	clrscr();
    char str[100];
    int i, len;
    int freq[256] = {0};  // Initialize frequency table with 0

    printf("Enter a string: ");
    gets(str);   // Read input string from user

    len = strlen(str);

    for (i = 0; i < len; i++) {
	freq[str[i]]++;  // Increment frequency of each character
    }

    printf("\nCharacter frequency in the string:\n");

    for (i = 0; i < 256; i++) {
	if (freq[i] != 0) {
	    printf("'%c': %d \t", i, freq[i]);
	}
    }
	getch();
    return 0;
}
