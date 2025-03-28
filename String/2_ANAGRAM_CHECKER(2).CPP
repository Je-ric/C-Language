#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	clrscr();
    char str1[100], str2[100];
    int len1, len2, i, j, found = 0, not_found = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2)
    {
	for (i = 0; i < len1; i++)
	{
	    found = 0;
	    for (j = 0; j < len2; j++)
	    {
		if (str1[i] == str2[j])
		{
		    found = 1;
		    break;
		}
	    }

	    if (found == 0)
	    {
		not_found = 1;
		break;
	    }
	}

	if (not_found == 1)
	{
	    printf("%s and %s are not anagrams.", str1, str2);
	}
	else
	{
	    printf("%s and %s are anagrams.", str1, str2);
	}
    }
    else
    {
	printf("%s and %s are not anagrams.", str1, str2);
    }

    getch();
    return 0;
}
