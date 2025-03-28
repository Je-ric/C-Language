#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i,input,j;
	printf("Enter a Number: ");
	scanf("%d", &input);
	printf("\nPattern 2\n");
	/*
	     *****      11111
	      ****       1111
	       ***        111
		**         11
		 *          1
	*/
	for (i=input;i>=1;i--)
		{
		for(j=0;j<input-i;j++)
		printf(" ");
		for (j=1;j<=i;j++)
		printf("*");   //or printf("%d",input);
		printf("\n");
		}
	getch();
}