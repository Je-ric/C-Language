#include <stdio.h>
#include <conio.h>
void main(){
	clrscr();
	int i,input,j;
	printf("Enter a Number: ");
	scanf("%d", &input);

	for(i=input;i>=1;i--)
		{
		printf("%d = " ,i);
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
		}
	getch();
}