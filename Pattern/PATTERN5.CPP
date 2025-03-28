#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int i,input,j;
	printf("Enter a number: ");
	scanf("%d" ,&input);
	/*
		****       1111
		****       1111
		****       1111
		****       1111
	*/
	for(i=1;i<=input;i++)
		{
		for(j=1;j<=input;j++)
		{
		printf("*");    //or printf("%d",input);
		}
		printf("\n");
		}
	getch();
	return 0;
}