#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i,input,j,o;
	printf("Enter a Number: ");
	scanf("%d", &input);
	printf("\nPattern 3\n");
	/*
		*
		**
		***
		****
		*****
		****
		***
		**
		*
	*/
	for(i=1;i<input;i++)
		{
		for(j=1;j<=i;j++)
		printf("*");  //or printf("%d",j);
		printf("\n");
		}
	for(o=input;o>=0;o--)
		{
		for(int j = 1;j<=o;j++)
		printf("*");  //or printf("%d",j);
		printf("\n");
		}
	getch();
}