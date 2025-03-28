#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int input, i, sum = 0;
	printf("\nEnter a number: ");
	scanf("%d" ,&input);
	for (i=1; i <= input; i++){
		sum = sum + i;
		}
	printf("The sum of %d natural numbers is: %d" ,input ,sum);
	getch();
}