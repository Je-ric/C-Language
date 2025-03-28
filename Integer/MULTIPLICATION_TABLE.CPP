#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int input,i,end;
	printf("Enter a number: ");
	scanf("%d",&input);
	printf("Enter end of the table: ");
	scanf("%d",&end);

	printf("\t\t\tThe multiplication table of %d: ",input);
	for (i=1; i<=end; i++){
		printf("\n\t\t\t%d * %d = %d" ,input, i,input*i);
		}
	getch();
}
