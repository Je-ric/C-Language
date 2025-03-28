#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int i,j,k,input;
	printf("Enter number of rows for pyramid: ");
	scanf("%d", &input);
	printf("\n");
	/*
		*             1
	       ***           111
	      *****         11111
	     *******       1111111
	*/
	for(i = 1; i <= input; i++)
	{
	for(j = 0; j < (input - i); j++)
	    printf(" ");
	for(j = 1; j <= i; j++)
	    printf("*");    //printf("%d",input);
	for(k = 1; k < i; k++)
	    printf("*");    //printf("%d",input);
		printf("\n");
	}
	printf("\n\n");
	getch();
	return 0;
}