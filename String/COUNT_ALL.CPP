#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	clrscr();
    char input[100];
    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, integers = 0, even = 0, odd = 0, spaces = 0, special = 0;
    int i;

    printf("Enter a string: ");
    gets(input);

    for(i = 0; i < strlen(input); i++)
    {
	if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' ||
	   input[i] == 'o' || input[i] == 'u' || input[i] == 'A' ||
	   input[i] == 'E' || input[i] == 'I' || input[i] == 'O' ||
	   input[i] == 'U')
	{
	    vowels++;
	}
	else if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
	{
	    consonants++;
	    if(input[i] >= 'a' && input[i] <= 'z')
	    {
		lowercase++;
	    }
	    else
	    {
		uppercase++;
	    }
	}
	else if(input[i] >= '0')// && input[i] <= '9')
	{
	    integers++;
	    if(input[i] % 2 == 0)
	    {
		even++;
	    }
	    else
	    {
		odd++;
	    }
	}
	else if(input[i] == ' ')
	{
	    spaces++;
	}
	else
	{
	    special++;
	}
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d", consonants);
    printf("\nNumber of uppercase letters: %d", uppercase);
    printf("\nNumber of lowercase letters: %d", lowercase);
    printf("\nNumber of integers: %d", integers);
    printf("\nNumber of even integers: %d", even);
    printf("\nNumber of odd integers: %d", odd);
    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of special characters: %d", special);
    getch();
    return 0;
}
