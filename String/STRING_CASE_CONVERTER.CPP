#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	clrscr();
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Original string: %s\n", str);

    for (i = 0; str[i]!='\0'; i++)
    {
	if(str[i] >= 'A' && str[i] <= 'Z')
	{
	    str[i] = str[i] + 32;
	}
	else if(str[i] >= 'a' && str[i] <= 'z')
	{
	    str[i] = str[i] - 32;
	}
    }
    printf("\nConverted string: %s\n", str);
    printf("UpperCase: %s\n",strupr(str));
    printf("LowerCase: %s\n",strlwr(str));
    getch();
    return 0;
}
