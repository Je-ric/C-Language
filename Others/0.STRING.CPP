#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	clrscr();
	char str[100];
	int n;

	printf("Enter a string: ");
	gets(str);

	printf("Length of string: %d\n", strlen(str));

	printf("Lowercase string: %s\n", strlwr(str));

	printf("Uppercase string: %s\n", strupr(str));

	printf("Reverse of string: %s\n", strrev(str));

	printf("Enter another string to concatenate: ");
	char str2[100];
	gets(str2);
	strcat(str, str2);
	printf("Concatenated string: %s\n", str);

	printf("Enter the number of characters to copy: ");
	scanf("%d", &n);
	char copy[100];
	strncpy(copy, str, n);
	printf("Copied string: %s\n", copy);

	printf("Comparison of strings: %d\n", strcmp(str, str2));

	printf("Comparison of first 4 characters: %d\n", strncmp(str, str2, 4));

	printf("Duplicate string: %s\n", strdup(str));

	printf("First occurrence of 'e' in string: %s\n", strchr(str, 'e'));

	printf("Last occurrence of 'e' in string: %s\n", strrchr(str, 'e'));

	printf("Substring 'world' in string: %s\n", strstr(str, "world"));

	printf("Set all characters to 'x': %s\n", strset(str, 'x'));

	printf("Set first 3 characters to 'x': %s\n", strnset(str, 'x', 3));

	//printf("Case-insensitive comparison: %d\n", strcasecmp(str, str2));

	//printf("Case-insensitive comparison of first 4 characters: %d\n", strncasecmp(str, str2, 4));

	getch();
	return 0;
}
