#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int upper = 0, lower = 0;
	char ch[80];
	int i;

	printf("Enter a string : ");
	gets(ch);

	i = 0;
	while (ch[i] != '\0'){

	if (ch[i] >= 'A' && ch[i] <= 'Z')
	    upper++;

	if (ch[i] >= 'a' && ch[i] <= 'z')
	    lower++;

	i++;
	}

	printf("\nUppercase Letters : %d", upper);
	printf("\nLowercase Letters : %d", lower);
	getch();
	return (0);
}

