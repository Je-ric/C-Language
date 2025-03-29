#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	clrscr();
	int a, b, c;
	char choice[5];
	printf("Enter your Choice\n");
	printf("& for AND\n");
	printf("| for OR\n");
	printf("^ for XOR\n");
	printf("~ for Compliment\n");
	printf("<< for Left Shift\n");
	printf(">> for Right Shift\n");
	scanf("%s", choice);
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter a: ");
	scanf("%d", &b);
	if (strcmp(choice, "&") == 0)
	{
		c = a & b;
		printf("%d & %d = %d\n", a, b, c);
	}
	else if (strcmp(choice, "|") == 0)
	{
		c = a | b;
		printf("%d | %d = %d\n", a, b, c);
	}
	else if (strcmp(choice, "^") == 0)
	{
		c = a ^ b;
		printf("%d ^ %d=%d\n", a, b, c);
	}
	else if (strcmp(choice, "~") == 0)
	{
		printf("~ %d = %d\n", a, ~a);
		printf("~ %d = %d\n", b, ~b);
	}
	else if (strcmp(choice, "<<") == 0)
	{
		c = a << b;
		printf("%d << %d = %d\n", a, b, c);
	}
	else if (strcmp(choice, ">>") == 0)
	{
		c = a >> b;
		printf("%d >> %d = %d\n", a, b, c);
	}
	else
	{
		printf("Invalid Choice\n");
	}
	getch();
	return 0;
}
