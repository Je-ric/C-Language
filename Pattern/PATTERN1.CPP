#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i,input,j;
	printf("Enter a Number: ");
	scanf("%d", &input);
	printf("\nPattern 1\n");
	/*
		*            1
		**           11
		***          111
		****         1111
	*/
	for (i=1;i<=input;i++)
		{
		for (j=1;j<=i;j++)
		printf("*");
		//printf("%d",input);
		printf("\n");
		}
	getch();
}