#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i,input,j;
	printf("Enter a Number: ");
	scanf("%d", &input);
	printf("\nPattern 4\n");
	/*
		****       1111
		***        111
		**         11
		*          1
	*/
	for(i=input;i>=1;i--)
		{
		for(j=1;j<=i;j++)
		printf("*");   //or printf("%d",input);
		printf("\n");
		}
	getch();
}