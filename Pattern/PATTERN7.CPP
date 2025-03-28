#include <stdio.h>
#include <conio.h>
void main()
{
	// clrscr();
	int i, j, input;
	printf("Input number of rows (half of the diamond) :");
	scanf("%d", &input);

	for (i = 0; i <= input; i++)
	{
		for (j = 1; j <= input - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	for (i = input - 1; i >= 1; i--)
	{
		for (j = 1; j <= input - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	getch();
	return 0;
}